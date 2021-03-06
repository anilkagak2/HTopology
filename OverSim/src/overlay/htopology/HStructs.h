
#ifndef __OVERSIM_HSTRUCTS_H_
#define __OVERSIM_HSTRUCTS_H_

#include <string>
#include <map>
#include <NodeHandle.h>
#include <cstring>
using std::string;

#define SEGMENT_SIZE 100100

// # of messages supported by HTopology
#define MESSAGE_TYPES 11

/*
 * Below given type are for Call messages
 * Response are of the following type
 *  HCapacity
 *  HGetParameters
 *  HSelectParent
 *  HVideoSegment
 *  HScheduleSegments
 *  HGetChildren
 *  HJoin
 * */
enum HMessageType {
    ECapacity,
    EGetParameters,
    ESelectParent,
    EVideoSegment,
    ELeaveOverlay,
    EResponsibilityAsParent,
    ENewParentSelected,
    EScheduleSegments,
    ESwitchToRescueMode,
    EGetChildren,
    EJoin
};

class HLeaveOverlayCall;

const char _video[SEGMENT_SIZE] = "NO-VIDEO";

struct HVideoSegment {
    char videoSegment[SEGMENT_SIZE];
    int segmentID;

    /* NOTE using this for estimating the delivery time required, but may not always be a true measure
     *      The nodes themselves might not be having synchronized clocks
     *      Here it should work, as the simulation environment has the same clock simTime()
     * */
    simtime_t issuanceTime;
};

struct HCacheElem {
    HVideoSegment segment;
    bool scheduled;

    HCacheElem () {
        strncpy(this->segment.videoSegment, _video, 20);
        this->scheduled=false;
    }

    HCacheElem (const HVideoSegment& segment) {
        this->segment = segment;
        this->scheduled = false;
    }

    HCacheElem (const HVideoSegment& segment, bool scheduled) {
        this->segment = segment;
        this->scheduled = scheduled;
    }
};

// Used to store the parameters required in selecting the node's replacement
struct HNodeReplacement {
    // used in selection algorithm, for sharing variable between RPC Call & Response
    // do think about asking Node instead of capacity
    std::map<OverlayKey, int> queryNodesSelectionAlgo;
    int responseRequired;   // How many of answers required?
    NodeHandle node;        // To be replaced node
    HLeaveOverlayCall *mrpc;
};

// Parameters used to determine the rank of a rescue node [wrt. thisNode]
struct RankingParameters {
    long long rtt;          // RoundTrip Time between thisNode & the given node
    int capacity;           // No. of children nodes the given node can support
    int rescueCapacity;     // No. of rescueChildren the given node can support
    double bandwidth;       // in terms of Kbps
};

// These are the factors, multiplied to the rankingParameters in order to calculate the metric defining the ranking
const RankingParameters RankingFactors = {1, 25, 25, 1};

// Zero ranking element for uninitialized rescue node
const RankingParameters ZeroRank = {0,0,0,0};

class RescueNode {
private:
    RankingParameters parameters;
    double rank;
    NodeHandle node;

    void calculateRank () {
        rank =    RankingFactors.bandwidth * parameters.bandwidth
                + RankingFactors.rtt * parameters.rtt
                + RankingFactors.rescueCapacity * parameters.rescueCapacity
                + RankingFactors.capacity * parameters.capacity;
        // std::cout << "Rank is " << rank << endl;
    }
public:
    RescueNode() { setRankingParameters(ZeroRank); }
    void setHandle(NodeHandle& node) { this->node = node; }
    NodeHandle& getHandle () { return this->node; }

    void setRankingParameters (RankingParameters params) {this->parameters = params; calculateRank();}
    RankingParameters& getRankingParameters () { return parameters; }

    double getRank () const { return rank; }

    //inline bool operator<(const RescueNode& rhs) {return rank > rhs.rank;}
};

#endif
