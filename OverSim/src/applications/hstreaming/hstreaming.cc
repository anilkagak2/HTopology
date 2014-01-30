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

#include "UnderlayConfigurator.h"
#include "hstreaming.h"

Define_Module(HStreaming);

// initializeApp() is called when the module is being created.
// Use this function instead of the constructor for initializing variables.
void HStreaming::initializeApp(int stage) {
    // initializeApp will be called twice, each with a different stage.
    // stage can be either MIN_STAGE_APP (this module is being created),
    // or MAX_STAGE_APP (all modules were created).
    // We only care about MIN_STAGE_APP here.

    if (stage != MIN_STAGE_APP) return;

    // copy the module parameter values to our own variables
    sendPeriod = par("sendPeriod");

    // tell the GUI to display our variables
    //WATCH(numSent);

    // start our timer!
    timerMsg = new cMessage("MyApplication Timer");
    scheduleAt(simTime() + sendPeriod, timerMsg);

    // TODO really?
    bindToPort(2000);
}

// finish is called when the module is being destroyed
void HStreaming::finishApp() {
    //delete timerMsg;
}


// handleTimerEvent is called when a timer event triggers
void HStreaming::handleTimerEvent(cMessage* msg) {
    // is this our timer?
    if (msg == timerMsg) {
        // reschedule our message
        scheduleAt(simTime() + sendPeriod, timerMsg);

        EV << "got a timer event" << endl;
        // if the simulator is still busy creating the network,
        // let's wait a bit longer
        if (underlayConfigurator->isInInitPhase()) return;

        /*for (int i = 0; i < numToSend; i++) {

            // let's create a random key
            OverlayKey randomKey(intuniform(1, largestKey));

            MyMessage *myMessage; // the message we'll send
            myMessage = new MyMessage();
            myMessage->setType(MYMSG_PING); // set the message type to PING
            myMessage->setSenderAddress(thisNode); // set the sender address to our own
            myMessage->setByteLength(100); // set the message length to 100 bytes

            numSent++; // update statistics

            EV << thisNode.getIp() << ": Sending packet to "
               << randomKey << "!" << std::endl;

            callRoute(randomKey, myMessage); // send it to the overlay
        }*/
    } else {
        // unknown message types are discarded
        delete msg;
    }
}

std::string getComponentName (int id) {
    if (id == OVERLAY_COMP) return "OVERLAY";
    else if (id == TIER1_COMP) return "Tier1";
    else if (id == TIER2_COMP) return "Tier2";
    else if (id == TIER3_COMP) return "Tier3";
    else if (id == BOOTSTRAPLIST_COMP) return "Bootstraplist";
    else if (id == NEIGHBORCACHE_COMP) return "neighbourhood cache";
    else return "invalid component";
}

void HStreaming::handleReadyMessage(CompReadyMessage* msg) {
    EV << "Got a ready message from ";
    EV << "Layer:" <<  getComponentName(msg->getComp()) << endl;

    // If the flags ready==TRUE && overlay->state!=TRUE && readyComponent==OVERLAY
    // NOTE: overlay ready is not the signal we are looking for, instead we should be looking for
    // getting ready the component called just before OVERLAY so that we can set ready the overlay component via this call
    // and which in turn will register the overlay component(in turn this node) in bootstrap list
    // & that component is nothing but the bootstraplist.
    // if (msg->getReady() && !overlay->getState() && msg->getComp()==OVERLAY_COMP) {
    if (msg->getReady() && !overlay->getState() && msg->getComp()==BOOTSTRAPLIST_COMP) {
        // call join method
        EV << "Joining the overlay" << endl;
        overlay->join(thisNode.getKey());
    }
    delete msg;
}

/*// deliver() is called when we receive a message from the overlay.
// Unknown packets can be safely deleted here.
void HStreaming::deliver(OverlayKey& key, cMessage* msg) {
    // we are only expecting messages of type MyMessage, throw away any other
    MyMessage *myMsg = dynamic_cast<MyMessage*>(msg);
    if (myMsg == NULL) {
        delete msg; // type unknown!
        return;
    }

    // are we a PING? send a PONG!
    if (myMsg->getType() == MYMSG_PING) {
        myMsg->setType(MYMSG_PONG); // change type

        EV << thisNode.getIp() << ": Got packet from "
           << myMsg->getSenderAddress() << ", sending back!"
           << endl;

        // send it back to its owner
        sendMessageToUDP(myMsg->getSenderAddress(), myMsg);
    } else {
        // only handle PING messages
        delete msg;
    }
}

// handleUDPMessage() is called when we receive a message from UDP.
// Unknown packets can be safely deleted here.
void HStreaming::handleUDPMessage(cMessage* msg) {
    // we are only expecting messages of type MyMessage
    MyMessage *myMsg = dynamic_cast<MyMessage*>(msg);

    if (myMsg && myMsg->getType() == MYMSG_PONG) {
        EV << thisNode.getIp() << ": Got reply!" << endl;
    }

    // Message isn't needed any more -> delete it
    delete msg;
}*/
