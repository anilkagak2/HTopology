/*
 * HNode.h
 *
 *  Created on: Jan 21, 2014
 *      Author: Anil Kag
 */

#ifndef HNODE_H_
#define HNODE_H_

#include <NodeHandle.h>
#include <NodeVector.h>

// specify Node class on the lines of NodeHandle
class HNode {
  protected://fields
      NodeHandle handle;

      // Why do we want to keep track of children of some node?
      // We can always go and ask them about their children, right?
      // In case the children fails, it won't be easy to find out all its children [right?]
      NodeVector children;
      // some more properties of a node should be kept here

  public://construction

      /**
       * Constructs an unspecified NodeHandle
       */
      HNode( );

      /**
       * Standard destructor
       */
      virtual ~HNode( ) {};

      /**
       * Copy constructor.
       *
       * @param handle The NodeHandle to copy
       */
      HNode( const HNode& node );

      /**
       * Complete constructor.
       *
       * @param key The OverlayKey
       * @param ip The IPvXAddress
       * @param port The UDP-Port
       */
      HNode( const OverlayKey& key,
             const IPvXAddress& ip,
             int port);

      /**
       * Constructor to generate a NodeHandle from a TransportAddress.
       * The key will be unspecified.
       *
       * @param ta transport address
       */
      HNode( const TransportAddress& ta );

      /**
       * Constructor to generate a NodeHandle from an existing
       * OverlayKey and TransportAddress.
       *
       * @param key the overlay key
       * @param ta transport address
       */
      HNode( const OverlayKey& key, const TransportAddress& ta );

  public://static fields
      static const HNode unspecifiedNode; /**< the unspecified NodeHandle */

  public://methods: delegates to OverlayKey and IPvXAddress

      /**
       * compares this NodeHandle to another given NodeHandle
       *
       * @param rhs the NodeHandle this is compared to
       * @return true if OverlayKey, IPvXAddress and port is equal, false otherwise
       */
      bool operator==(const HNode& rhs) const;

      /**
       * compares this NodeHandle to another given NodeHandle
       *
       * @param rhs the NodeHandle this is compared to
       * @return true if OverlayKey, IPvXAddress and port is not equal, false otherwise
       */
      bool operator!=(const HNode& rhs) const;

       /**
       * compares this to a given NodeHandle
       *
       * @param rhs the NodeHandle this is compared to
       * @return true if this->key is smaller than rhs->key, false otherwise
       */
      bool operator< (const HNode& rhs) const;

      /**
       * compares this to a given NodeHandle
       *
       * @param rhs the NodeHandle this is compared to
       * @return true if this->key is greater than rhs->key, false otherwise
       */
      bool operator> (const HNode& rhs) const;

      /**
       * compares this to a given NodeHandle
       *
       * @param rhs the NodeHandle this is compared to
       * @return true if this->key is smaller than or equal to rhs->key, false otherwise
       */
      bool operator<=(const HNode& rhs) const;

      /**
       * compares this to a given NodeHandle
       *
       * @param rhs the NodeHandle this is compared to
       * @return true if this->key is greater than or equal to rhs->key, false otherwise
       */
      bool operator>=(const HNode& rhs) const;

  public://methods: operators

      /**
       * assigns key, ip and port of rhs to this->key, this->ip and this->port
       *
       * @param rhs the NodeHandle with the defined key, ip and port
       * @return this NodeHandle object
       */
      HNode& operator=(const HNode& rhs);

  public://methods: setters and getters

      /**
       * returns key of this NodeHandle
       *
       * @return the key of this NodeHandle
       */
      const OverlayKey getKey() const;
      const NodeHandle getHandle() const;
      const NodeVector getNodeVector () const;

      void setHandle (NodeHandle handle);
      void setNodeVector (NodeVector nvector);

      /**
       * indicates if this NodeHandle is specified
       *
       * @return true, if NodeHandle has no ip or key specified, false otherwise
       */
      bool isUnspecified() const;

  public://methods: c++ streaming

      /**
       * standard output stream for NodeHandle,
       * gives out ip, port and key
       *
       * @param os the ostream
       * @param n the NodeHandle
       * @return the output stream
       */
      friend std::ostream& operator<<(std::ostream& os, const HNode& n);

  private://methods:

      /**
       * throws an opp_error if this or handle is unspecified
       *
       * @param handle the NodeHandle to check
       */
      void assertUnspecified( const HNode& node ) const;

  public:

      /**
       * serializes the object into a buffer
       *
       * @param b the buffer
       */
      virtual void netPack(cCommBuffer *b);

      /**
       * deserializes the object from a buffer
       *
       * @param b the buffer
       */
      virtual void netUnpack(cCommBuffer *b);

      /**
       * returns a copy of the NodeHandle
       *
       * @return a copy of the NodeHandle
       */
      virtual TransportAddress* dup() const;

};

#endif /* HNODE_H_ */
