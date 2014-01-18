//
// Generated file, do not edit! Created by opp_msgc 4.3 from tier2/p2pns/P2pnsMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "P2pnsMessage_m.h"

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




Register_Class(P2pnsTunnelMessage);

P2pnsTunnelMessage::P2pnsTunnelMessage(const char *name, int kind) : OverSimMessage(name,kind)
{
}

P2pnsTunnelMessage::P2pnsTunnelMessage(const P2pnsTunnelMessage& other) : OverSimMessage(other)
{
    copy(other);
}

P2pnsTunnelMessage::~P2pnsTunnelMessage()
{
}

P2pnsTunnelMessage& P2pnsTunnelMessage::operator=(const P2pnsTunnelMessage& other)
{
    if (this==&other) return *this;
    OverSimMessage::operator=(other);
    copy(other);
    return *this;
}

void P2pnsTunnelMessage::copy(const P2pnsTunnelMessage& other)
{
    this->srcId_var = other.srcId_var;
    this->payload_var = other.payload_var;
}

void P2pnsTunnelMessage::parsimPack(cCommBuffer *b)
{
    OverSimMessage::parsimPack(b);
    doPacking(b,this->srcId_var);
    doPacking(b,this->payload_var);
}

void P2pnsTunnelMessage::parsimUnpack(cCommBuffer *b)
{
    OverSimMessage::parsimUnpack(b);
    doUnpacking(b,this->srcId_var);
    doUnpacking(b,this->payload_var);
}

OverlayKey& P2pnsTunnelMessage::getSrcId()
{
    return srcId_var;
}

void P2pnsTunnelMessage::setSrcId(const OverlayKey& srcId)
{
    this->srcId_var = srcId;
}

BinaryValue& P2pnsTunnelMessage::getPayload()
{
    return payload_var;
}

void P2pnsTunnelMessage::setPayload(const BinaryValue& payload)
{
    this->payload_var = payload;
}

class P2pnsTunnelMessageDescriptor : public cClassDescriptor
{
  public:
    P2pnsTunnelMessageDescriptor();
    virtual ~P2pnsTunnelMessageDescriptor();

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

Register_ClassDescriptor(P2pnsTunnelMessageDescriptor);

P2pnsTunnelMessageDescriptor::P2pnsTunnelMessageDescriptor() : cClassDescriptor("P2pnsTunnelMessage", "OverSimMessage")
{
}

P2pnsTunnelMessageDescriptor::~P2pnsTunnelMessageDescriptor()
{
}

bool P2pnsTunnelMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<P2pnsTunnelMessage *>(obj)!=NULL;
}

const char *P2pnsTunnelMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int P2pnsTunnelMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int P2pnsTunnelMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *P2pnsTunnelMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcId",
        "payload",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int P2pnsTunnelMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcId")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "payload")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *P2pnsTunnelMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "BinaryValue",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *P2pnsTunnelMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int P2pnsTunnelMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsTunnelMessage *pp = (P2pnsTunnelMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string P2pnsTunnelMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsTunnelMessage *pp = (P2pnsTunnelMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcId(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPayload(); return out.str();}
        default: return "";
    }
}

bool P2pnsTunnelMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsTunnelMessage *pp = (P2pnsTunnelMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *P2pnsTunnelMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        "BinaryValue",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *P2pnsTunnelMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsTunnelMessage *pp = (P2pnsTunnelMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcId()); break;
        case 1: return (void *)(&pp->getPayload()); break;
        default: return NULL;
    }
}

Register_Class(P2pnsKeepaliveTimer);

P2pnsKeepaliveTimer::P2pnsKeepaliveTimer(const char *name, int kind) : cMessage(name,kind)
{
}

P2pnsKeepaliveTimer::P2pnsKeepaliveTimer(const P2pnsKeepaliveTimer& other) : cMessage(other)
{
    copy(other);
}

P2pnsKeepaliveTimer::~P2pnsKeepaliveTimer()
{
}

P2pnsKeepaliveTimer& P2pnsKeepaliveTimer::operator=(const P2pnsKeepaliveTimer& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void P2pnsKeepaliveTimer::copy(const P2pnsKeepaliveTimer& other)
{
    this->key_var = other.key_var;
}

void P2pnsKeepaliveTimer::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->key_var);
}

void P2pnsKeepaliveTimer::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
}

OverlayKey& P2pnsKeepaliveTimer::getKey()
{
    return key_var;
}

void P2pnsKeepaliveTimer::setKey(const OverlayKey& key)
{
    this->key_var = key;
}

class P2pnsKeepaliveTimerDescriptor : public cClassDescriptor
{
  public:
    P2pnsKeepaliveTimerDescriptor();
    virtual ~P2pnsKeepaliveTimerDescriptor();

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

Register_ClassDescriptor(P2pnsKeepaliveTimerDescriptor);

P2pnsKeepaliveTimerDescriptor::P2pnsKeepaliveTimerDescriptor() : cClassDescriptor("P2pnsKeepaliveTimer", "cMessage")
{
}

P2pnsKeepaliveTimerDescriptor::~P2pnsKeepaliveTimerDescriptor()
{
}

bool P2pnsKeepaliveTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<P2pnsKeepaliveTimer *>(obj)!=NULL;
}

const char *P2pnsKeepaliveTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int P2pnsKeepaliveTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int P2pnsKeepaliveTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *P2pnsKeepaliveTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "key",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int P2pnsKeepaliveTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "key")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *P2pnsKeepaliveTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *P2pnsKeepaliveTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int P2pnsKeepaliveTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsKeepaliveTimer *pp = (P2pnsKeepaliveTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string P2pnsKeepaliveTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsKeepaliveTimer *pp = (P2pnsKeepaliveTimer *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); return out.str();}
        default: return "";
    }
}

bool P2pnsKeepaliveTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsKeepaliveTimer *pp = (P2pnsKeepaliveTimer *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *P2pnsKeepaliveTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *P2pnsKeepaliveTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsKeepaliveTimer *pp = (P2pnsKeepaliveTimer *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}


