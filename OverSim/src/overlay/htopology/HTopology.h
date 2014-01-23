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

#ifndef __OVERSIM_HTOPOLOGY_H_
#define __OVERSIM_HTOPOLOGY_H_

#include <omnetpp.h>
#include <NodeHandle.h>
#include <string>
#include <BootstrapList.h>
#include "BaseOverlay.h"
#include "HMessage_m.h"
#include "HNode.h"
using std::endl;

#define GENERAL_MODE 0
#define RESCUE_MODE 1

typedef std::map<OverlayKey, HNode> KeyToNodeMap;

/**
 * TODO - Generated class
 */
class HTopology : public BaseOverlay {
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);


  private:
    // used in selection algorithm, for sharing variable between RPC Call & Response
    // do think about asking Node instead of capacity
    std::map<OverlayKey, int> queryNodesSelectionAlgo;
    int responseRequired;       // How many of answers required?
    OverlayKey keyParent;    // key of the parent node, which is to be replaced


    int noOfChildren;       // current count of the children;
    std::string buffer;     // buffer used
    int bufferMapSize;      // size of the local buffer
    int maxChildren;        // Maximum no. of children to be supported
    int joinRetry;          // Maximum no. of tries in joining the overlay

    bool isSource;          // true if its the source

    void updateTooltip ();              // shows the links in visual mode
    void changeState (int state);       // change the STATE of this node to state

    // timer messages
    cMessage* join_timer; /**< */
    double joinDelay;

  public:
    int nodeID;             // my ID in the overlay
    int modeOfOperation;    // GENERAL_MODE / RESCUE_MODE
    TransportAddress bootstrapNode; /**< node used to bootstrap */

    // Links to other nodes in the overlay
    KeyToNodeMap children;
    //KeyToNodeMap siblings;
    HNode successorNode, predecessorNode;
    KeyToNodeMap nodesOneUp;
    KeyToNodeMap ancestors;

    ~HTopology();

    // Basic functionalities
    void initializeOverlay(int stage);  // called when the overlay is being initialized
    void setOwnNodeID();                // (optional) called to set the key of this node (random otherwise)
    void joinOverlay();                 // called when the node is ready to join the overlay
    void finishOverlay();               // called when the module is about to be destroyed

    void handleJoinTimerExpired(cMessage* msg);
    void handleTimerEvent(cMessage*);

    // obligatory: called when we need the next hop to route a packet to the given key
    NodeVector* findNode(const OverlayKey& key,     // key to route to
                         int numRedundantNodes,     // next hop candidates to return if we're not responsible for "key"
                         int numSiblings,           // how many siblings to return if we're responsible for "key"
                         BaseOverlayMessage* msg);  // message being routed

    // obligatory: In general, called when we need to know whether "node" is amongst numSiblings closest nodes to "key".
    // But normally it is called with "node" set to "thisNode", and asking whether we are responsible for "key"
    bool isSiblingFor(const NodeHandle& node,       // which node (usually thisNode) we're referring to
                      const OverlayKey& key,        // key in question
                      int numSiblings,              // how many siblings we're querying about
                      bool* err);                   // set to false when we couldn't determine the range

    // obligatory: Set the maximum number of siblings that can be queried about in isSiblingFor(usually 1)
    int getMaxNumSiblings();

    // obligatory: Set the maximum number of redundant nodes that can be queried about in isSiblingFor (usually 1)
    int getMaxNumRedundantNodes();

    // RPC message handling procedures
    bool handleRpcCall(BaseCallMessage *msg);                       // called when we receive an RPC from another node
    void handleRpcResponse(BaseResponseMessage* msg,                // called when we receive an RPC response from another node
                           cPolymorphic* context,
                           int rpcId,
                           simtime_t rtt);
    void handleRpcTimeout(BaseCallMessage* msg,                     // called when an RPC times out
                          const TransportAddress& dest,
                          cPolymorphic* context, int rpcId,
                          const OverlayKey&);

    // Helpers for AddOns
    // selection of a new parent algorithm
    // Helpers
    void getParametersForSelectionAlgo (OverlayKey& key);
    void goAheadWithRestSelectionProcess (OverlayKey& key);

    // AddOns
    bool selectRescueParent ();                         // choose a rescue parent for yourself
    bool addAsRescueChild (const NodeHandle& node);     // add "node" as a rescue child
    bool removeRescueChild (const NodeHandle& node);    // remove this node from rescue children list
    void rankRescueNodes ();                            // generate transfer characteristics & rank them
    void scheduleDeadlineSegments ();                   // look for alternatives on deadline approaching segments

    // Advance Features
    void optimizeTree ();
    void calculateResourceAllocationPolicy ();
};

#endif
