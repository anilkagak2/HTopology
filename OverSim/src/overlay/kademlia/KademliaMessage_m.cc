//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/kademlia/KademliaMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "KademliaMessage_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(KademliaRoutingInfoMessage);

KademliaRoutingInfoMessage::KademliaRoutingInfoMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->destKey_var = OverlayKey::UNSPECIFIED_KEY;
    nextHops_arraysize = 0;
    this->nextHops_var = 0;
}

KademliaRoutingInfoMessage::KademliaRoutingInfoMessage(const KademliaRoutingInfoMessage& other) : BaseOverlayMessage(other)
{
    nextHops_arraysize = 0;
    this->nextHops_var = 0;
    copy(other);
}

KademliaRoutingInfoMessage::~KademliaRoutingInfoMessage()
{
    delete [] nextHops_var;
}

KademliaRoutingInfoMessage& KademliaRoutingInfoMessage::operator=(const KademliaRoutingInfoMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void KademliaRoutingInfoMessage::copy(const KademliaRoutingInfoMessage& other)
{
    this->srcNode_var = other.srcNode_var;
    this->destKey_var = other.destKey_var;
    delete [] this->nextHops_var;
    this->nextHops_var = (other.nextHops_arraysize==0) ? NULL : new MarkedNodeHandle[other.nextHops_arraysize];
    nextHops_arraysize = other.nextHops_arraysize;
    for (unsigned int i=0; i<nextHops_arraysize; i++)
        this->nextHops_var[i] = other.nextHops_var[i];
}

void KademliaRoutingInfoMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->destKey_var);
    b->pack(nextHops_arraysize);
    doPacking(b,this->nextHops_var,nextHops_arraysize);
}

void KademliaRoutingInfoMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->destKey_var);
    delete [] this->nextHops_var;
    b->unpack(nextHops_arraysize);
    if (nextHops_arraysize==0) {
        this->nextHops_var = 0;
    } else {
        this->nextHops_var = new MarkedNodeHandle[nextHops_arraysize];
        doUnpacking(b,this->nextHops_var,nextHops_arraysize);
    }
}

NodeHandle& KademliaRoutingInfoMessage::getSrcNode()
{
    return srcNode_var;
}

void KademliaRoutingInfoMessage::setSrcNode(const NodeHandle& srcNode)
{
    this->srcNode_var = srcNode;
}

OverlayKey& KademliaRoutingInfoMessage::getDestKey()
{
    return destKey_var;
}

void KademliaRoutingInfoMessage::setDestKey(const OverlayKey& destKey)
{
    this->destKey_var = destKey;
}

void KademliaRoutingInfoMessage::setNextHopsArraySize(unsigned int size)
{
    MarkedNodeHandle *nextHops_var2 = (size==0) ? NULL : new MarkedNodeHandle[size];
    unsigned int sz = nextHops_arraysize < size ? nextHops_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nextHops_var2[i] = this->nextHops_var[i];
    nextHops_arraysize = size;
    delete [] this->nextHops_var;
    this->nextHops_var = nextHops_var2;
}

unsigned int KademliaRoutingInfoMessage::getNextHopsArraySize() const
{
    return nextHops_arraysize;
}

MarkedNodeHandle& KademliaRoutingInfoMessage::getNextHops(unsigned int k)
{
    if (k>=nextHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nextHops_arraysize, k);
    return nextHops_var[k];
}

void KademliaRoutingInfoMessage::setNextHops(unsigned int k, const MarkedNodeHandle& nextHops)
{
    if (k>=nextHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nextHops_arraysize, k);
    this->nextHops_var[k] = nextHops;
}

class KademliaRoutingInfoMessageDescriptor : public cClassDescriptor
{
  public:
    KademliaRoutingInfoMessageDescriptor();
    virtual ~KademliaRoutingInfoMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(KademliaRoutingInfoMessageDescriptor);

KademliaRoutingInfoMessageDescriptor::KademliaRoutingInfoMessageDescriptor() : cClassDescriptor("KademliaRoutingInfoMessage", "BaseOverlayMessage")
{
}

KademliaRoutingInfoMessageDescriptor::~KademliaRoutingInfoMessageDescriptor()
{
}

bool KademliaRoutingInfoMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KademliaRoutingInfoMessage *>(obj)!=NULL;
}

const char *KademliaRoutingInfoMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KademliaRoutingInfoMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int KademliaRoutingInfoMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *KademliaRoutingInfoMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcNode",
        "destKey",
        "nextHops",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int KademliaRoutingInfoMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcNode")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destKey")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHops")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KademliaRoutingInfoMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "OverlayKey",
        "MarkedNodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *KademliaRoutingInfoMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int KademliaRoutingInfoMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KademliaRoutingInfoMessage *pp = (KademliaRoutingInfoMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getNextHopsArraySize();
        default: return 0;
    }
}

std::string KademliaRoutingInfoMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KademliaRoutingInfoMessage *pp = (KademliaRoutingInfoMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcNode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestKey(); return out.str();}
        case 2: {std::stringstream out; out << pp->getNextHops(i); return out.str();}
        default: return "";
    }
}

bool KademliaRoutingInfoMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KademliaRoutingInfoMessage *pp = (KademliaRoutingInfoMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KademliaRoutingInfoMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "OverlayKey",
        "MarkedNodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *KademliaRoutingInfoMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KademliaRoutingInfoMessage *pp = (KademliaRoutingInfoMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcNode()); break;
        case 1: return (void *)(&pp->getDestKey()); break;
        case 2: return (void *)(&pp->getNextHops(i)); break;
        default: return NULL;
    }
}


