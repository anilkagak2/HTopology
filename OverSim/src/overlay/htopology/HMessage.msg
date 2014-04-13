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

//
// Author: Anil Kag
//

cplusplus {{
#include <TransportAddress.h>
#include <NodeHandle.h>
#include <OverlayKey.h>
#include <CommonMessages_m.h>
#include "HNode.h"
#include "HStructs.h"

#define JOINCALL_L(msg) 					BASECALL_L(msg)
#define HJOINRESPONSE_L(msg) 				(BASERESPONSE_L(msg) + 2* NODEHANDLE_L +\
                             					(msg->getAncestorsArraySize() * NODEHANDLE_L) + 2*TYPE_L)
                             					
#define HRESCUEJOINCALL_L(msg)				BASECALL_L(msg)
#define HRESCUEJOINRESPONSE_L(msg)			(BASERESPONSE_L(msg) + TYPE_L)
        
#define HREMOVERESCUELINKCALL_L(msg)		BASECALL_L(msg)
#define HCHILDADDEDCALL_L(msg)				( BASECALL_L(msg) + NODEHANDLE_L )
#define HCHILDREMOVEDCALL_L(msg)			( BASECALL_L(msg) + NODEHANDLE_L )
        
#define HGETCHILDRENCALL_L(msg)				( BASECALL_L(msg) + TYPE_L)
#define HGETCHILDRENRESPONSE_L(msg) 		( BASERESPONSE_L(msg) + (msg->getChildrenArraySize() * NODEHANDLE_L) + TYPE_L)

#define HCAPACITYCALL_L(msg) 				BASECALL_L(msg) + KEY_L
#define HCAPACITYRESPONSE_L(msg) 			(BASERESPONSE_L(msg) + (2*NODEHANDLE_L) + TYPE_L)
#define HSELECTPARENTCALL_L(msg) 			HCAPACITYCALL_L(msg)
#define HSELECTPARENTRESPONSE_L(msg) 		BASERESPONSE_L(msg) + NODEHANDLE_L

// should it be length() or capacity()
// isn't TYPE_L for string a bit more than required?
// 2*NOCE_L is for simtime_t (int64_t)
#define HVIDEOSEGMENT_L						((SEGMENT_SIZE) * TYPE_L + NONCE_L + 2*NONCE_L)
#define HVIDEOSEGMENTCALL_L(msg)			(BASECALL_L(msg) + HVIDEOSEGMENT_L)
#define HVIDEOSEGMENTRESPONSE_L(msg) 		BASERESPONSE_L(msg)

#define HDEATHACKNOWLEDGEMENTCALL_L(msg)	BASECALL_L(msg)
#define HLEAVEOVERLAYCALL_L(msg)			BASECALL_L(msg)
#define HLEAVEOVERLAYRESPONSE_L(msg) 		BASERESPONSE_L(msg) + TYPE_L

#define HNEWPARENTSELECTEDCALL_L(msg)		(BASECALL_L(msg) + NODEHANDLE_L)
#define HRESPONSIBILITYASPARENTCALL_L(msg)  (BASECALL_L(msg) + (msg->getChildrenArraySize()+1) * NODEHANDLE_L)
#define HNOREPLACEMENTFOUNDCALL_L(msg)		BASECALL_L(msg)

#define HCONVERTRESCUELINKCALL_L(msg)		BASECALL_L(msg)
#define HCONVERTRESCUELINKRESPONSE_L(msg)	HJOINRESPONSE_L(msg)

#define HREJOINCALL_L(msg)					BASECALL_L(msg)
#define HREJOINRESPONSE_L(msg)				HJOINRESPONSE_L(msg)
		
// SEGMENTS SHOULD BE OF FIXED SIZE
// No.of chars + 1
#define HSCHEDULESEGMENTSCALL_L(msg)		(BASECALL_L(msg) + 2*TYPE_L)
#define HSCHEDULESEGMENTSRESPONSE_L(msg)	(BASERESPONSE_L(msg) + (msg->getSegmentsArraySize()) * HVIDEOSEGMENT_L)

#define HSWITCHTORESCUEMODECALL_L(msg)		BASECALL_L(msg)

#define HGETPARAMETERSCALL_L(msg)			BASECALL_L(msg)
#define HGETPARAMETERSRESPONSE_L(msg)		(BASERESPONSE_L(msg) + 4*NONCE_L)

#define HREGISTERINBOOTSTRAPPINGCALL_L(msg)			BASECALL_L(msg)
#define HREGISTERINBOOTSTRAPPINGRESPONSE_L(msg)		BASERESPONSE_L(msg)
}}
class noncobject TransportAddress;
class noncobject NodeHandle;
class noncobject HNode;
class noncobject OverlayKey;
struct HVideoSegment;
class BaseCallMessage;
class BaseResponseMessage;

// Type of messages used in the communication in the overlay
enum MessageType {
    M_JOIN=1;				// Node going to join to overlay, Need ParentID
    M_LEAVE=2;			// Node going to leave the overlay, Need ParentID
    M_QUERY_NODE=3;		// Is node available in the overlay? Need NodeID
    M_QUERY_SEGMENT=4;	// Is segment available in the BufferMap? Need SegmentID, NodeID
    M_RESCUE=5;			// Be my recuer, NodeID & Rescuer's ID.
};

packet HCapacityCall extends BaseCallMessage {
    OverlayKey destinationKey;
};

packet HCapacityResponse extends BaseResponseMessage {
    NodeHandle parentNode;
    NodeHandle respondingNode;
    int capacity;						// can handle 'capacity' no. of children.
};

packet HGetParametersCall extends BaseCallMessage {
};

packet HGetParametersResponse extends BaseResponseMessage {
    int capacity;
    int rescueCapacity;
    double bandwidth;
};

packet HSelectParentCall extends BaseCallMessage {
    OverlayKey key;
};

packet HSelectParentResponse extends BaseResponseMessage {
    NodeHandle respondingNode;
    //Node newParent;				// New parent, selected by the procedure
};

//
// Message used to join the overlay
//
packet HJoinCall extends BaseCallMessage {
    NodeHandle child;
}

//
// Message used to answer to a JoinCall message
//
packet HJoinResponse extends BaseResponseMessage {
    // int sucNum;    			// number of entries in the successor list
    // NodeHandle sucNode[];  	// successor list of the message originator
    // NodeHandle preNode;    	// in aggressiveJoinMode: predecessor hint
    
    //HNode successorNode, predecessorNode;
    NodeHandle ancestors[];  	// list of ancestors
    NodeHandle successorNode;
    NodeHandle predecessorNode;
    int joined;
    int heightParent;			// height of the parent node
}

//
// Message used to join the node [source is switching to rescue mode]
//
packet HRescueJoinCall extends BaseCallMessage {
}

//
// Message used to answer to a RescueJoinCall message
//
packet HRescueJoinResponse extends BaseResponseMessage {
    int joined;
}

//
// Message used to remove the rescue link between rescueParent & ourself
//
packet HRemoveRescueLinkCall extends BaseCallMessage {
}

//
// Message used to convert rescueLink to parent-child link
//
packet HConvertRescueLinkCall extends BaseCallMessage {
}

//
// Response for the question ConvertRescueLinkCall?
//
packet HConvertRescueLinkResponse extends HJoinResponse {
}

//
// ReJoin the overlay
//
packet HReJoinCall extends BaseCallMessage {
}

//
// Response ReJoinCall
//
packet HReJoinResponse extends HJoinResponse {
}

//
// Message used to say that parent's replacement not found for the node
//
packet HNoReplacementFoundCall extends BaseCallMessage {
}

//
// Inform our parent that we've added a new node as our child
//
packet HChildAddedCall extends BaseCallMessage {
    NodeHandle child;
}

//
// Inform our parent that we've removed a child
//
packet HChildRemovedCall extends BaseCallMessage {
    NodeHandle child;
}

// used to send video segment (generated or received from a node)
packet HVideoSegmentCall extends BaseCallMessage {
    HVideoSegment segment;
}

// Using this for determining the timeout event [TODO not quite sure if this will give the trigger]
packet HVideoSegmentResponse extends BaseResponseMessage {
}

// Signal that the source node is going to leave the overlay
packet HLeaveOverlayCall extends BaseCallMessage {
}

// Signal that the source node is going to leave the overlay
packet HLeaveOverlayResponse extends BaseResponseMessage {
    int permissionGranted;
}

// gives the description of the newly selected parent
packet HNewParentSelectedCall extends BaseCallMessage {
    NodeHandle parent;
} 

// called node is selected as a parent for given set of children
packet HResponsibilityAsParentCall extends BaseCallMessage {
    NodeHandle parent;
    NodeHandle children[];
} 

// asking to send some of the segments within [SegmentID, SegmmentID + count]
packet HScheduleSegmentsCall extends BaseCallMessage {
   int startSegmentID;
   int count; 
}

// send the available segments
packet HScheduleSegmentsResponse extends BaseResponseMessage {
    HVideoSegment segments[];
}

// signal the failure of the node, to the node's children
packet HSwitchToRescueModeCall extends BaseCallMessage {
}

// signal the child that he's dead as per the (parent)node
packet HDeathAcknowledgementCall extends BaseCallMessage {
}

// call to get children from node
packet HGetChildrenCall extends BaseCallMessage {
    int forGrandChildrenAccumulation;
}

// response for children
packet HGetChildrenResponse extends BaseResponseMessage {
    int forGrandChildrenAccumulation;
    NodeHandle children[];
}

// signalling the child so that he/she registers as bootstrapNode
packet HRegisterInBootstrappingCall extends BaseCallMessage {
}

// signals the parent to remove himself from bootstrapping mechanism 
packet HRegisterInBootstrappingResponse extends BaseResponseMessage {
}

packet HMessage {
    int type enum(MessageType);			// Message type
    TransportAddress senderAddress;		// Sender's address
    int nodeID;							// Who sent this message?
    int parentID;						// To whom?
    int optionalParameter;				// used as segmentID in M_QUERY_SEGMENT
    string anyMessage;					// TODO TBD
};
