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

#include <GlobalStatistics.h>
#include <omnetpp.h>
#include <queue>
#include <sstream>
#include <NodeHandle.h>
#include <string>
#include <vector>
#include <algorithm>
#include <BootstrapList.h>
#include "BaseOverlay.h"
#include "HMessage_m.h"
#include "HNode.h"
#include "HStructs.h"

using std::endl;
using std::vector;
using std::string;

#define GENERAL_MODE 0
#define RESCUE_MODE 1

#define PARAMETERS_RESPONSE_BUFFER 4

typedef std::map<OverlayKey, HNode> KeyToNodeMap;
typedef KeyToNodeMap::iterator MapIterator;

typedef std::map<OverlayKey, RescueNode> KeyToRescueNodeMap;
typedef KeyToRescueNodeMap::iterator RescueMapIterator;

/*
 * HTopology -> description of the hybrid topology for Live P2P streaming
 *              Hybrid based on the tree & mesh concepts
 *
 * Project   -> SIMULATION TO BE SCHEDULED && FULL SCALE RESULTS ARE TO BE GATHERED
 * Status        && COMPARED WITH EXISTING TOPOLOGIES
 *
 * Simulation -> Cleaning up the code & completing the TODOs. Major work remains in testing node failures.
 * Status
 * */
class HTopology : public BaseOverlay {
  protected:
    virtual void initialize();
    //virtual void handleMessage(cMessage *msg);


  private:
    // Store pending leaveRequests
    std::map<OverlayKey, HNodeReplacement> leaveRequests;

    // used for ranking the rescue nodes
    int parametersResponseReceived;
    int parametersResponseRequired;
    bool initializedRescueRanks;

    int noOfChildren;           // current count of the children; TODO same as children.size()
    int maxChildren;            // Maximum no. of children to be supported
    int maxRescueChildren;      // Maximum no. of rescue children to be supported
    double bandwidth;           // Bandwidth present at this node

    // TODO Queue for storing the packets -> source need infinite queue, others need fixed size
    vector<HVideoSegment> cache;   // video cache
    int cachePointer;       // pointer to the cache
    int segmentID;          // segmentID to start with
    int bufferMapSize;      // size of the local buffer
    int joinRetry;          // Maximum no. of tries in joining the overlay

    bool isSource;          // true if its the source

    void updateTooltip ();              // shows the links in visual mode
    void changeState (int state);       // change the STATE of this node to state
    NodeHandle getNodeHandle(MapIterator iter, MapIterator end);

    HVideoSegment generateVideoSegment ();
    // store the segment in your cache & distribute
    void handleVideoSegment (BaseCallMessage *msg);
    void sendSegmentToChildren(HVideoSegment segment);
    void handlePacketGenerationTimer (cMessage *msg);
    void handleRescueParametersEstimationTimer (cMessage *msg);

    void handleJoinCall (BaseCallMessage *msg);
    void handleJoinResponse (BaseResponseMessage *msg);
    void handleLeaveCall (BaseCallMessage *msg);

    void handleNewParentSelectedCall (BaseCallMessage *msg);
    void handleResponsibilityAsParentCall (BaseCallMessage *msg);

    void addSegmentToCache (HVideoSegment& videoSegment);
    void handleScheduleSegmentsCall (BaseCallMessage *msg);
    void handleScheduleSegmentsResponse (BaseResponseMessage *msg);

    void handleCapacityCall (BaseCallMessage *msg);
    void handleCapacityResponse (BaseResponseMessage *msg);

    void selectReplacement (const NodeHandle& node, HLeaveOverlayCall *mrpc);
    void handleSwitchToRescueModeCall (BaseCallMessage *msg);

    void handleGetParametersCall (BaseCallMessage *msg);
    void handleGetParametersResponse (BaseResponseMessage *msg, simtime_t rtt);

    bool registeredInBootstrapping;
    void handleRegisterInBootstrappingCall (BaseCallMessage *msg);
    void handleRegisterInBootstrappingResponse (BaseResponseMessage *msg);

    /* NodesOneUP */
    void sendChildren (BaseCallMessage *msg);       // respond to the getChildren call
    void initializeNodesOneUp ();                   // use the ancestors array to figure out these nodes
    void setNodesOneUp (BaseResponseMessage* msg);  // Set these nodes from the response

    void saveStatistics ();                         // Save the stats recorded in the simulation

    // timer messages
    cMessage *packetGenTimer;
    cMessage *rescueParametersTimer;
    //cMessage *childrenParametersTimer;
    //cMessage *deadlineTimer;
    double joinDelay;
    double packetGenRate;
    double rescueParameterEstimationRate;

    // STATS
    long long numSentMessages[MESSAGE_TYPES];
    long long numRecvMessages[MESSAGE_TYPES];
    simtime_t joinRequestTime, joinAcceptanceTime;  // time taken in the joining process
    bool notReceivedPacket;
    simtime_t firstPacketRecvingTime;               // this - joinRequestTime should give you the startup time for a node
    simtime_t leaveRequestTime, leaveGrantedTime;   // time take in a graceful leave of a node
    long long numPackets;                           // If source => generated, else received
    long long parameterEstimationRounds;          // # of times parameter estimation was done by a node

    // Initialize the statistics, to be estimated during the simulation
    void initializeStats ();

  public:
    int nodeID;             // my ID in the overlay
    int modeOfOperation;    // GENERAL_MODE / RESCUE_MODE
    TransportAddress bootstrapNode; /**< node used to bootstrap */

    // Links to other nodes in the overlay
    HNode parent, grandParent;
    HNode successorNode, predecessorNode;
    KeyToNodeMap children, rescueChildren;
    //KeyToNodeMap siblings;
    KeyToRescueNodeMap nodesOneUp;
    KeyToRescueNodeMap ancestors;

    ~HTopology();

    bool IsSource () { return isSource; }

    // Basic functionalities
    void initializeOverlay(int stage);  // called when the overlay is being initialized
    void setOwnNodeID();                // (optional) called to set the key of this node (random otherwise)
    void joinOverlay();                 // called when the node is ready to join the overlay
    void finishOverlay();               // called when the module is about to be destroyed

    int capacity () {return maxChildren - noOfChildren; } //children.size(); }
    int rescueCapacity () { return maxRescueChildren - rescueChildren.size(); }

    void scheduleTimer (cMessage *timer, double rate);

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
    void getParametersForSelectionAlgo (const OverlayKey& key);
    void goAheadWithRestSelectionProcess (const OverlayKey& key);

    // AddOns
    bool selectRescueParent ();                         // choose a rescue parent for yourself
    bool addAsRescueChild (const NodeHandle& node);     // add "node" as a rescue child
    bool removeRescueChild (const NodeHandle& node);    // remove this node from rescue children list
    void rankRescueNodes ();                            // generate transfer characteristics & rank them
    void scheduleDeadlineSegments (int startSegmentID,
            int count, int perNode);                    // look for alternatives on deadline approaching segments

    vector<NodeHandle> getRankedRescueNodes ();         // returns the ranked nodes in their decreasing ranking order

    // Advance Features
    void optimizeTree ();
    void calculateResourceAllocationPolicy ();
};

#endif
