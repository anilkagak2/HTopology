//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "HTopology.h"
#include <rpcmacros.h>

Define_Module(HTopology);

// To convert between IP addresses (which have bit 24 active), and keys (which don't), we'll need to set or remove this bit.
#define BIGBIT (1 << 24)

void HTopology::initialize() {
    // TODO - Generated method body
}

void HTopology::handleMessage(cMessage *msg) {
    // TODO - Generated method body
}

// Called when the module is being initialized
void HTopology::initializeOverlay(int stage) {
    // see BaseApp.cc
   if (stage != MIN_STAGE_OVERLAY) return;

   // get our key from our IP address
   nodeID = thisNode.getIp().get4().getInt() & ~BIGBIT;
   //nodeID = thisNode.getIp();
   thisNode.setKey(OverlayKey(nodeID));     // set its key

   /* next = prev = thisNode;                  // Is this CORRECT? */

   // initialize the rest of variables
   bufferMapSize = par("bufferSizeInBytes");
   maxChildren = par("maxChildren");
   noOfChildren = 0;
   buffer.resize(bufferMapSize);            // Resize the buffer map to fit the given requirement

   EV << thisNode << ": initialized." << std::endl;

   /*rpcTimer = new cMessage("RPC timer: initialized the node");
   scheduleAt(simTime() + 5, rpcTimer);*/
}

// Called to set our own overlay key (optional)
void HTopology::setOwnNodeID() {
    thisNode.setKey(OverlayKey(nodeID));
}

// Called when the module is ready to join the overlay
void HTopology::joinOverlay() {
    // tell the simulator that we're ready
    setOverlayReady(true);
}

// Called when the module is about to be destroyed
void HTopology::finishOverlay() {
    // remove this node from the overlay
    setOverlayReady(false);

    // save the statistics (see BaseApp)
    // globalStatistics->addStdDev("MyOverlay: Dropped packets", numDropped);
    EV << thisNode << ": Leaving the overlay." << std::endl;
}

// Return whether we know if the given node is responsible for the key
bool HTopology::isSiblingFor(const NodeHandle& node,
                             const OverlayKey& key,
                             int numSiblings,
                             bool* err) {
    // is it our node and our key?
    if (node == thisNode && key == thisNode.getKey()) {
        return true;
    }
    // we don't know otherwise
    return false;
}

// Return the next step for the routing of the given message
NodeVector *HTopology::findNode(const OverlayKey& key,
                                int numRedundantNodes,
                                int numSiblings,
                                BaseOverlayMessage* msg) {
    NodeVector* nextHops;

   nextHops = new NodeVector(1);

   // are we responsible? next step is this node
   if (key == thisNode.getKey()) {
       nextHops->add(thisNode);
   }
   // is the key behind us? next step is the previous node
   else if (key < thisNode.getKey()) {
       //nextHops->add(prevNode);
       EV << "prevNode" << std::endl;
   }
   // otherwise, the next step is the next node
   else {
    //   nextHops->add(nextNode);
       EV << "nextNode" << std::endl;
   }
   return nextHops;
}

// Return the max amount of siblings that can be queried about
int HTopology::getMaxNumSiblings() { return 1; }

// Return the max amount of redundant that can be queried about
int HTopology::getMaxNumRedundantNodes() { return 1; }

// RPC
bool HTopology::handleRpcCall(BaseCallMessage *msg) {
    // There are many macros to simplify the handling of RPCs. The full list is in <OverSim>/src/common/RpcMacros.h.
    // start a switch
    RPC_SWITCH_START(msg);

    // enters the following block if the message is of type HCapacityCall (note the shortened parameter!)
    RPC_ON_CALL(HCapacity) {
        HCapacityCall *mrpc = (HCapacityCall*)msg;          // get Call message
        HCapacityResponse *rrpc = new HCapacityResponse();  // create response
        rrpc->setRespondingNode(thisNode);

        // TODO the capacity can be decided dynamically, but for now lets use the static version
        rrpc->setCapacity(maxChildren - noOfChildren);      // set the capacity left at this node

        // now send the response. sendRpcResponse can automatically tell where to send it to.
        // note that sendRpcResponse will delete mrpc (aka msg)!
        sendRpcResponse(mrpc, rrpc);

        RPC_HANDLED = true;  // set to true, since we did handle this RPC (default is false)
        break;
    }

    RPC_ON_CALL(HSelectParent) {
        //HSelectParentCall *mrpc = (HSelectParentCall)msg;

        // TODO Do check if the request is not a fake/malicious one
    }

    // end the switch
    RPC_SWITCH_END();

    // return whether we handled the message or not.
    // don't delete unhandled messages!
    return RPC_HANDLED;
}

// Called when an RPC we sent has timed out.
// Don't delete msg here!
// TODO
void HTopology::handleRpcTimeout(BaseCallMessage* msg,
                                 const TransportAddress& dest,
                                 cPolymorphic* context, int rpcId,
                                 const OverlayKey&) {
    // Same macros as in handleRpc
/*
    // start a switch
    RPC_SWITCH_START(msg);
        // enters the following block if the message is of type MyNeighborCall (note the shortened parameter!)
        RPC_ON_CALL(MyNeighbor) {
            MyNeighborCall *mrpc = (MyNeighborCall*)msg;          // get Call message
            callbackTimeout(mrpc->getDestinationKey());           // call our interface function
        }
    // end the switch
    RPC_SWITCH_END(); */
}

// Called when we receive an RPC response from another node.
// Don't delete msg here!
void HTopology::handleRpcResponse(BaseResponseMessage* msg,
                                  cPolymorphic* context,
                                  int rpcId,
                                  simtime_t rtt) {
    // The macros are here similar. Just use RPC_ON_RESPONSE instead of RPC_ON_CALL.

    // start a switch
    RPC_SWITCH_START(msg);
        // enters the following block if the message is of type MyNeighborResponse (note the shortened parameter!)
        RPC_ON_RESPONSE(HCapacity) {
            HCapacityResponse *mrpc = (HCapacityResponse*)msg;          // get Response message
            //if (queryNodesSelectionAlgo.find(mrpc->getSrcNode().getKey()) != queryNodesSelectionAlgo.end())
            // set the capacity for the key
            queryNodesSelectionAlgo[mrpc->getSrcNode().getKey()] = mrpc->getCapacity();
            if (queryNodesSelectionAlgo.size() == responseRequired) {
                goAheadWithRestSelectionProcess (keyParent);
            }
        }

        RPC_ON_RESPONSE(HSelectParent) {
            // TODO, will there really be any response message of this sort?
        }

    // end the switch
    RPC_SWITCH_END();
}

// AddOns

// select replacement for node
// 1) Setting Up the required Parameters for the procedure
void HTopology::getParametersForSelectionAlgo (OverlayKey& key) {
    if (children.find(key) == children.end()) {
        // replacement of the given node is not a responsibility of this node
        return;
    }

    NodeVector nodeChildren = children[key].children;

    queryNodesSelectionAlgo.clear();        // clear this variable for storing the recent values
    responseRequired=nodeChildren.size();   // Response required
    for (NodeVector::iterator it=nodeChildren.begin(); it!=nodeChildren.end(); ++it) {
        // Prepare the capacity message
        HCapacityCall *msg = new HCapacityCall();
        NodeHandle node = *it;
        msg->setDestinationKey(node.getKey());

        // send it to the destination
        // TODO Not sure if this is the correct way to do it
        sendRouteRpcCall (OVERLAY_COMP, node.getKey(), msg);
    }
}

// 2) Main procedure for deciding the replacement for keyParent
void HTopology::goAheadWithRestSelectionProcess(OverlayKey& key) {
    if (children.find(key) == children.end()) {
        // replacement of the given node is not a responsibility of this node
        return;
    }

    int noOfChildrenToAdd = children[key].children.size();
    bool replacementDone = false;
    std::map<OverlayKey, int>::iterator it=queryNodesSelectionAlgo.begin();

    for (; it!=queryNodesSelectionAlgo.end(); ++it) {
        // What else is to be done?
        // Modify the existing next & prev pointers for the replacement's sibling
        // Modify the pointers for the siblings in the current overlay
        // And add nodeChildren as parent to the replacement node
        int capacity = (*it).second;
        if (capacity >= noOfChildrenToAdd) {
            replacementDone = true;
            break;
        }
    }

    // Reset the variables used in the process
    queryNodesSelectionAlgo.clear();
    responseRequired=0;
    if (replacementDone) {
        // Inform children about the new parent
        // replace the child with this newly selected parent (children list)
    } else {
        // Couldn't select a parent for the children,
        // WHAT's THE FALL BACK OPTION?
    }

    // 1) Get the node's children from the handle
    // 2) Job is to pick a node from this list & make it the new parent & let this propagate till the last level
    //  or Let's pick a node at last level & make it the new parent
    //   We can also look at some of the characteristics
    //          It should be having enough capacity to support all the children in the list
    //              (probably second approach will always work).
    //          Any other transfer characteristics?

    // Once done with "deciding the new parent", inform the children about their new parent
    // Also inform the new parent for the same
}

// generate transfer characteristics & rank them
void HTopology::rankRescueNodes () {
    // TODO
    // Need to decide on some transfer characteristics in order to rank the nodes
    // same can be used for selection of parent in this kind of scenario
    // TODO
}

// choose a rescue parent for yourself
bool HTopology::selectRescueParent () {
    // This should be quite an easy job once we are done with "Ranking the rescue nodes"
    // Just go one by one to all the nodes in the rescue list in descending order of their
    // ranks & ask if they can serve as rescuers, if yes go ahead and change the mode to RESCUE
    // ultimately we should be allotted a rescue position (at SOURCE NODE)

    // send the node a rescue signal

    // during the rescue situation we should be using our network nodes for transferring the
    // deadline segments, may be use the transfer algorithm from Anysee.
}

// add "node" as a rescue child
bool HTopology::addAsRescueChild (const NodeHandle& node) {
    // send the rescue signal to the node
    // don't duplicate the work of being in RESCUE situation,
    // we can save the bandwidth via using just one call to a rescuer
}

// remove this node from rescue children list
bool HTopology::removeRescueChild (const NodeHandle& node) {
    // just signal the node to remove myself from being a rescue to it
}

// look for alternatives on deadline approaching segments
void HTopology::scheduleDeadlineSegments () {
    // TODO
}

// Advance Features
void HTopology::optimizeTree () {
    // TODO
}

void HTopology::calculateResourceAllocationPolicy () {
    // TODO
}
