/*
 * HNode.cpp
 *
 *  Created on: Jan 21, 2014
 *      Author: Anil Kag
 */

#include "HNode.h"
#include <cassert>

// predefined node handle
const HNode HNode::unspecifiedNode;

std::ostream& operator<<(std::ostream& os, const HNode& node) {
    os << "thisNode:" << node.handle;

    for (int i=0; i<node.children.size(); ++i) {
        os << "child-" << i << ":" << node.children[i];
    }

    return os;
};

//default-constructor
HNode::HNode() {
    handle = NodeHandle();
    //children = NodeVector();
}

//copy constructor
HNode::HNode ( const HNode& node) {
    handle = node.handle;
    children = node.children;
}

HNode::HNode ( const TransportAddress& ta ) {
    handle = NodeHandle (ta);
    //children = NodeVector();
}

//complete constructor
HNode::HNode ( const OverlayKey& key,
              const IPvXAddress& ip, int port ) {
    children = NodeVector();
    handle = NodeHandle (key, ip, port);
}

HNode::HNode( const OverlayKey& key, const TransportAddress& ta ) {
    children = NodeVector();
    handle = NodeHandle (key, ta);
}

//public
bool HNode::isUnspecified() const {
    return handle.isUnspecified();
}

//public
HNode& HNode::operator=(const HNode& rhs) {
    this->handle = rhs.handle;
    this->children = rhs.children;

    return *this;
}

//public
bool HNode::operator==(const HNode& rhs) const {
    assertUnspecified(rhs);
    return (this->handle==rhs.handle && this->children==rhs.children);
}

//public
bool HNode::operator!=(const HNode& rhs) const {
    assertUnspecified( rhs );
    return !operator==(rhs);
}

//public
bool HNode::operator<(const HNode& rhs) const {
    assertUnspecified(rhs);
    return handle < rhs.handle;
    // TODO do we need to take into account children?
}

//public
bool HNode::operator>(const HNode& rhs) const {
    assertUnspecified(rhs);
    return handle > rhs.handle;
    // TODO do we need to take into account children?
}

//public
bool HNode::operator<=(const HNode& rhs) const {
    return !operator>(rhs);
}

//public
bool HNode::operator>=(const HNode& rhs) const {
    return !operator<(rhs);
}

//public
const OverlayKey HNode::getKey() const {
    return handle.getKey();
}

const NodeHandle HNode::getHandle() const {
    return handle;
}

const NodeVector HNode::getNodeVector () const {
    return children;
}

void HNode::setHandle(NodeHandle handle) {
    this->handle = handle;
}

void HNode::setNodeVector (NodeVector nvector) {
    this->children = nvector;
}

//private
inline void HNode::assertUnspecified( const HNode& node) const {
    if ( this->isUnspecified() || node.isUnspecified() )
        opp_error("NodeHandle: Trying to compare unspecified NodeHandle!");
}


void HNode::netPack(cCommBuffer *b) {
    //cMessage::netPack(b);
    doPacking(b,this->handle);
    doPacking(b,this->children);
}

void HNode::netUnpack(cCommBuffer *b) {
    //cMessage::netUnpack(b);
    doUnpacking(b,this->handle);
    doUnpacking(b,this->children);
}

void HNode::addChild(NodeHandle child) {
    // TODO we don't check for redundancy right now
    // children should have been maintained in a set or map
    children.add(child);
}

TransportAddress* HNode::dup() const {
    return new NodeHandle(handle);
}

