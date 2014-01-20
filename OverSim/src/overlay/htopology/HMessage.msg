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
#include "HTopology.h"

#define JOINCALL_L(msg) BASECALL_L(msg)

}}
class noncobject TransportAddress;
class noncobject NodeHandle;
class noncobject Node;
class noncobject OverlayKey;
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
packet HJoinCall extends BaseCallMessage
{
}

//
// Message used to answer to a JoinCall message
//
packet HJoinResponse extends BaseResponseMessage
{
    int sucNum;    // number of entries in the successor list
    NodeHandle sucNode[];    // successor list of the message originator
    NodeHandle preNode;    // in aggressiveJoinMode: predecessor hint
}

packet HMessage {
    int type enum(MessageType);			// Message type
    TransportAddress senderAddress;		// Sender's address
    int nodeID;							// Who sent this message?
    int parentID;						// To whom?
    int optionalParameter;				// used as segmentID in M_QUERY_SEGMENT
    string anyMessage;					// TODO TBD
};
