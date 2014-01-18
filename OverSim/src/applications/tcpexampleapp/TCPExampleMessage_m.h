//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/tcpexampleapp/TCPExampleMessage.msg.
//

#ifndef _TCPEXAMPLEMESSAGE_M_H_
#define _TCPEXAMPLEMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include <TransportAddress.h>
// }}



/**
 * Enum generated from <tt>applications/tcpexampleapp/TCPExampleMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum MessageType 
 * {
 *     TCPEXMSG_PING = 1;           
 *     TCPEXMSG_PONG = 2;           
 * }
 * </pre>
 */
enum MessageType {
    TCPEXMSG_PING = 1,
    TCPEXMSG_PONG = 2
};

/**
 * Class generated from <tt>applications/tcpexampleapp/TCPExampleMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet TCPExampleMessage 
 * {
 *     int type enum(MessageType);      
 *     TransportAddress senderAddress;  
 * }
 * </pre>
 */
class TCPExampleMessage : public ::cPacket
{
  protected:
    int type_var;
    TransportAddress senderAddress_var;

  private:
    void copy(const TCPExampleMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPExampleMessage&);

  public:
    TCPExampleMessage(const char *name=NULL, int kind=0);
    TCPExampleMessage(const TCPExampleMessage& other);
    virtual ~TCPExampleMessage();
    TCPExampleMessage& operator=(const TCPExampleMessage& other);
    virtual TCPExampleMessage *dup() const {return new TCPExampleMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type);
    virtual TransportAddress& getSenderAddress();
    virtual const TransportAddress& getSenderAddress() const {return const_cast<TCPExampleMessage*>(this)->getSenderAddress();}
    virtual void setSenderAddress(const TransportAddress& senderAddress);
};

inline void doPacking(cCommBuffer *b, TCPExampleMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TCPExampleMessage& obj) {obj.parsimUnpack(b);}


#endif // _TCPEXAMPLEMESSAGE_M_H_
