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
                             					(msg->getAncestorsArraySize() * NODEHANDLE_L) + TYPE_L)
        
#define HGETCHILDRENCALL_L(msg)				BASECALL_L(msg)
#define HGETCHILDRENRESPONSE_L(msg) 		(BASERESPONSE_L(msg) + (msg->getChildrenArraySize() * NODEHANDLE_L))
#define HCAPACITYCALL_L(msg) 				BASECALL_L(msg) + KEY_L
#define HCAPACITYRESPONSE_L(msg) 			(BASERESPONSE_L(msg) + (2*NODEHANDLE_L) + TYPE_L)
#define HSELECTPARENTCALL_L(msg) 			HCAPACITYCALL_L(msg)
#define HSELECTPARENTRESPONSE_L(msg) 		BASERESPONSE_L(msg) + NODEHANDLE_L

// should it be length() or capacity()
// isn't TYPE_L for string a bit more than required?
#define HVIDEOSEGMENTCALL_L(msg)			(BASECALL_L(msg) + TYPE_L + SEGMENT_SIZE * TYPE_L)

#define HLEAVEOVERLAYCALL_L(msg)			BASECALL_L(msg)
#define HLEAVEOVERLAYRESPONSE_L(msg) 		BASERESPONSE_L(msg) + TYPE_L

#define HNEWPARENTSELECTEDCALL_L(msg)		(BASECALL_L(msg) + NODEHANDLE_L)
#define HRESPONSIBILITYASPARENTCALL_L(msg)  (BASECALL_L(msg) + (msg->getChildrenArraySize()+1) * NODEHANDLE_L)
		
// SEGMENTS SHOULD BE OF FIXED SIZE
// No.of chars + 1
#define HVIDEOSEGMENT_L						((SEGMENT_SIZE+1) * TYPE_L)
#define HSCHEDULESEGMENTSCALL_L(msg)		(BASECALL_L(msg) + 2*TYPE_L)
#define HSCHEDULESEGMENTSRESPONSE_L(msg)	(BASERESPONSE_L(msg) + (msg->getSegmentsArraySize()) * HVIDEOSEGMENT_L)		
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

packet HSelectParentCall extends BaseCallMessage {
    OverlayKey key;
};

packet HSelectParentResponse extends BaseResponseMessage {
    NodeHandle respondingNode;
    //Node newParent;				// New parent, selected by the procedure
};

//
// Message used to join a chord overlay
//
packet HJoinCall extends BaseCallMessage {
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
}

// call to get children from node
packet HVideoSegmentCall extends BaseCallMessage {
    HVideoSegment segment;
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

// call to get children from node
packet HGetChildrenCall extends BaseCallMessage {
}

// response for children
packet HGetChildrenResponse extends BaseResponseMessage {
    NodeHandle children[];
}

packet HMessage {
    int type enum(MessageType);			// Message type
    TransportAddress senderAddress;		// Sender's address
    int nodeID;							// Who sent this message?
    int parentID;						// To whom?
    int optionalParameter;				// used as segmentID in M_QUERY_SEGMENT
    string anyMessage;					// TODO TBD
};
