//
// Generated file, do not edit! Created by opp_msgc 4.3 from ./HMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "HMessage_m.h"

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




EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("MessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("MessageType"));
    e->insert(M_JOIN, "M_JOIN");
    e->insert(M_LEAVE, "M_LEAVE");
    e->insert(M_QUERY_NODE, "M_QUERY_NODE");
    e->insert(M_QUERY_SEGMENT, "M_QUERY_SEGMENT");
    e->insert(M_RESCUE, "M_RESCUE");
);

Register_Class(HCapacityCall);

HCapacityCall::HCapacityCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HCapacityCall::HCapacityCall(const HCapacityCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HCapacityCall::~HCapacityCall()
{
}

HCapacityCall& HCapacityCall::operator=(const HCapacityCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HCapacityCall::copy(const HCapacityCall& other)
{
    this->destinationKey_var = other.destinationKey_var;
}

void HCapacityCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->destinationKey_var);
}

void HCapacityCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->destinationKey_var);
}

OverlayKey& HCapacityCall::getDestinationKey()
{
    return destinationKey_var;
}

void HCapacityCall::setDestinationKey(const OverlayKey& destinationKey)
{
    this->destinationKey_var = destinationKey;
}

class HCapacityCallDescriptor : public cClassDescriptor
{
  public:
    HCapacityCallDescriptor();
    virtual ~HCapacityCallDescriptor();

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

Register_ClassDescriptor(HCapacityCallDescriptor);

HCapacityCallDescriptor::HCapacityCallDescriptor() : cClassDescriptor("HCapacityCall", "BaseCallMessage")
{
}

HCapacityCallDescriptor::~HCapacityCallDescriptor()
{
}

bool HCapacityCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HCapacityCall *>(obj)!=NULL;
}

const char *HCapacityCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HCapacityCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HCapacityCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HCapacityCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destinationKey",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HCapacityCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationKey")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HCapacityCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *HCapacityCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HCapacityCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityCall *pp = (HCapacityCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HCapacityCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityCall *pp = (HCapacityCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestinationKey(); return out.str();}
        default: return "";
    }
}

bool HCapacityCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityCall *pp = (HCapacityCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HCapacityCallDescriptor::getFieldStructName(void *object, int field) const
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

void *HCapacityCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityCall *pp = (HCapacityCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestinationKey()); break;
        default: return NULL;
    }
}

Register_Class(HCapacityResponse);

HCapacityResponse::HCapacityResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->capacity_var = 0;
}

HCapacityResponse::HCapacityResponse(const HCapacityResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HCapacityResponse::~HCapacityResponse()
{
}

HCapacityResponse& HCapacityResponse::operator=(const HCapacityResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HCapacityResponse::copy(const HCapacityResponse& other)
{
    this->respondingNode_var = other.respondingNode_var;
    this->capacity_var = other.capacity_var;
}

void HCapacityResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->respondingNode_var);
    doPacking(b,this->capacity_var);
}

void HCapacityResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->respondingNode_var);
    doUnpacking(b,this->capacity_var);
}

NodeHandle& HCapacityResponse::getRespondingNode()
{
    return respondingNode_var;
}

void HCapacityResponse::setRespondingNode(const NodeHandle& respondingNode)
{
    this->respondingNode_var = respondingNode;
}

int HCapacityResponse::getCapacity() const
{
    return capacity_var;
}

void HCapacityResponse::setCapacity(int capacity)
{
    this->capacity_var = capacity;
}

class HCapacityResponseDescriptor : public cClassDescriptor
{
  public:
    HCapacityResponseDescriptor();
    virtual ~HCapacityResponseDescriptor();

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

Register_ClassDescriptor(HCapacityResponseDescriptor);

HCapacityResponseDescriptor::HCapacityResponseDescriptor() : cClassDescriptor("HCapacityResponse", "BaseResponseMessage")
{
}

HCapacityResponseDescriptor::~HCapacityResponseDescriptor()
{
}

bool HCapacityResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HCapacityResponse *>(obj)!=NULL;
}

const char *HCapacityResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HCapacityResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HCapacityResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *HCapacityResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "respondingNode",
        "capacity",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HCapacityResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "respondingNode")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "capacity")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HCapacityResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HCapacityResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HCapacityResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityResponse *pp = (HCapacityResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HCapacityResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityResponse *pp = (HCapacityResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRespondingNode(); return out.str();}
        case 1: return long2string(pp->getCapacity());
        default: return "";
    }
}

bool HCapacityResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityResponse *pp = (HCapacityResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setCapacity(string2long(value)); return true;
        default: return false;
    }
}

const char *HCapacityResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *HCapacityResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HCapacityResponse *pp = (HCapacityResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRespondingNode()); break;
        default: return NULL;
    }
}

Register_Class(HMessage);

HMessage::HMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
    this->nodeID_var = 0;
    this->parentID_var = 0;
    this->optionalParameter_var = 0;
    this->anyMessage_var = 0;
}

HMessage::HMessage(const HMessage& other) : cPacket(other)
{
    copy(other);
}

HMessage::~HMessage()
{
}

HMessage& HMessage::operator=(const HMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void HMessage::copy(const HMessage& other)
{
    this->type_var = other.type_var;
    this->senderAddress_var = other.senderAddress_var;
    this->nodeID_var = other.nodeID_var;
    this->parentID_var = other.parentID_var;
    this->optionalParameter_var = other.optionalParameter_var;
    this->anyMessage_var = other.anyMessage_var;
}

void HMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->senderAddress_var);
    doPacking(b,this->nodeID_var);
    doPacking(b,this->parentID_var);
    doPacking(b,this->optionalParameter_var);
    doPacking(b,this->anyMessage_var);
}

void HMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->senderAddress_var);
    doUnpacking(b,this->nodeID_var);
    doUnpacking(b,this->parentID_var);
    doUnpacking(b,this->optionalParameter_var);
    doUnpacking(b,this->anyMessage_var);
}

int HMessage::getType() const
{
    return type_var;
}

void HMessage::setType(int type)
{
    this->type_var = type;
}

TransportAddress& HMessage::getSenderAddress()
{
    return senderAddress_var;
}

void HMessage::setSenderAddress(const TransportAddress& senderAddress)
{
    this->senderAddress_var = senderAddress;
}

int HMessage::getNodeID() const
{
    return nodeID_var;
}

void HMessage::setNodeID(int nodeID)
{
    this->nodeID_var = nodeID;
}

int HMessage::getParentID() const
{
    return parentID_var;
}

void HMessage::setParentID(int parentID)
{
    this->parentID_var = parentID;
}

int HMessage::getOptionalParameter() const
{
    return optionalParameter_var;
}

void HMessage::setOptionalParameter(int optionalParameter)
{
    this->optionalParameter_var = optionalParameter;
}

const char * HMessage::getAnyMessage() const
{
    return anyMessage_var.c_str();
}

void HMessage::setAnyMessage(const char * anyMessage)
{
    this->anyMessage_var = anyMessage;
}

class HMessageDescriptor : public cClassDescriptor
{
  public:
    HMessageDescriptor();
    virtual ~HMessageDescriptor();

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

Register_ClassDescriptor(HMessageDescriptor);

HMessageDescriptor::HMessageDescriptor() : cClassDescriptor("HMessage", "cPacket")
{
}

HMessageDescriptor::~HMessageDescriptor()
{
}

bool HMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HMessage *>(obj)!=NULL;
}

const char *HMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int HMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *HMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "senderAddress",
        "nodeID",
        "parentID",
        "optionalParameter",
        "anyMessage",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int HMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderAddress")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodeID")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "parentID")==0) return base+3;
    if (fieldName[0]=='o' && strcmp(fieldName, "optionalParameter")==0) return base+4;
    if (fieldName[0]=='a' && strcmp(fieldName, "anyMessage")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "TransportAddress",
        "int",
        "int",
        "int",
        "string",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *HMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "MessageType";
            return NULL;
        default: return NULL;
    }
}

int HMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HMessage *pp = (HMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HMessage *pp = (HMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getSenderAddress(); return out.str();}
        case 2: return long2string(pp->getNodeID());
        case 3: return long2string(pp->getParentID());
        case 4: return long2string(pp->getOptionalParameter());
        case 5: return oppstring2string(pp->getAnyMessage());
        default: return "";
    }
}

bool HMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HMessage *pp = (HMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 2: pp->setNodeID(string2long(value)); return true;
        case 3: pp->setParentID(string2long(value)); return true;
        case 4: pp->setOptionalParameter(string2long(value)); return true;
        case 5: pp->setAnyMessage((value)); return true;
        default: return false;
    }
}

const char *HMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "TransportAddress",
        NULL,
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<6) ? fieldStructNames[field] : NULL;
}

void *HMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HMessage *pp = (HMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSenderAddress()); break;
        default: return NULL;
    }
}


