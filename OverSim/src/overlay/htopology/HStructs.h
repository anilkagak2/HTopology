
#ifndef __OVERSIM_HSTRUCTS_H_
#define __OVERSIM_HSTRUCTS_H_

#include <string>
#include <map>
#include <NodeHandle.h>
#include <cstring>
using std::string;

#define SEGMENT_SIZE 100

class HLeaveOverlayCall;

struct HVideoSegment {
    char videoSegment[SEGMENT_SIZE];
    int segmentID;
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

#endif
