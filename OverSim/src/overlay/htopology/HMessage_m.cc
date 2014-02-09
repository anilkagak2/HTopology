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
    this->parentNode_var = other.parentNode_var;
    this->respondingNode_var = other.respondingNode_var;
    this->capacity_var = other.capacity_var;
}

void HCapacityResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->parentNode_var);
    doPacking(b,this->respondingNode_var);
    doPacking(b,this->capacity_var);
}

void HCapacityResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->parentNode_var);
    doUnpacking(b,this->respondingNode_var);
    doUnpacking(b,this->capacity_var);
}

NodeHandle& HCapacityResponse::getParentNode()
{
    return parentNode_var;
}

void HCapacityResponse::setParentNode(const NodeHandle& parentNode)
{
    this->parentNode_var = parentNode;
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
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
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
        "parentNode",
        "respondingNode",
        "capacity",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int HCapacityResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parentNode")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "respondingNode")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "capacity")==0) return base+2;
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
        "NodeHandle",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
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
        case 0: {std::stringstream out; out << pp->getParentNode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getRespondingNode(); return out.str();}
        case 2: return long2string(pp->getCapacity());
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
        case 2: pp->setCapacity(string2long(value)); return true;
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
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
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
        case 0: return (void *)(&pp->getParentNode()); break;
        case 1: return (void *)(&pp->getRespondingNode()); break;
        default: return NULL;
    }
}

Register_Class(HSelectParentCall);

HSelectParentCall::HSelectParentCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HSelectParentCall::HSelectParentCall(const HSelectParentCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HSelectParentCall::~HSelectParentCall()
{
}

HSelectParentCall& HSelectParentCall::operator=(const HSelectParentCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HSelectParentCall::copy(const HSelectParentCall& other)
{
    this->key_var = other.key_var;
}

void HSelectParentCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->key_var);
}

void HSelectParentCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
}

OverlayKey& HSelectParentCall::getKey()
{
    return key_var;
}

void HSelectParentCall::setKey(const OverlayKey& key)
{
    this->key_var = key;
}

class HSelectParentCallDescriptor : public cClassDescriptor
{
  public:
    HSelectParentCallDescriptor();
    virtual ~HSelectParentCallDescriptor();

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

Register_ClassDescriptor(HSelectParentCallDescriptor);

HSelectParentCallDescriptor::HSelectParentCallDescriptor() : cClassDescriptor("HSelectParentCall", "BaseCallMessage")
{
}

HSelectParentCallDescriptor::~HSelectParentCallDescriptor()
{
}

bool HSelectParentCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HSelectParentCall *>(obj)!=NULL;
}

const char *HSelectParentCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HSelectParentCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HSelectParentCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HSelectParentCallDescriptor::getFieldName(void *object, int field) const
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

int HSelectParentCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "key")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HSelectParentCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *HSelectParentCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HSelectParentCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentCall *pp = (HSelectParentCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HSelectParentCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentCall *pp = (HSelectParentCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); return out.str();}
        default: return "";
    }
}

bool HSelectParentCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentCall *pp = (HSelectParentCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HSelectParentCallDescriptor::getFieldStructName(void *object, int field) const
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

void *HSelectParentCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentCall *pp = (HSelectParentCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}

Register_Class(HSelectParentResponse);

HSelectParentResponse::HSelectParentResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

HSelectParentResponse::HSelectParentResponse(const HSelectParentResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HSelectParentResponse::~HSelectParentResponse()
{
}

HSelectParentResponse& HSelectParentResponse::operator=(const HSelectParentResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HSelectParentResponse::copy(const HSelectParentResponse& other)
{
    this->respondingNode_var = other.respondingNode_var;
}

void HSelectParentResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->respondingNode_var);
}

void HSelectParentResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->respondingNode_var);
}

NodeHandle& HSelectParentResponse::getRespondingNode()
{
    return respondingNode_var;
}

void HSelectParentResponse::setRespondingNode(const NodeHandle& respondingNode)
{
    this->respondingNode_var = respondingNode;
}

class HSelectParentResponseDescriptor : public cClassDescriptor
{
  public:
    HSelectParentResponseDescriptor();
    virtual ~HSelectParentResponseDescriptor();

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

Register_ClassDescriptor(HSelectParentResponseDescriptor);

HSelectParentResponseDescriptor::HSelectParentResponseDescriptor() : cClassDescriptor("HSelectParentResponse", "BaseResponseMessage")
{
}

HSelectParentResponseDescriptor::~HSelectParentResponseDescriptor()
{
}

bool HSelectParentResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HSelectParentResponse *>(obj)!=NULL;
}

const char *HSelectParentResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HSelectParentResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HSelectParentResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HSelectParentResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "respondingNode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HSelectParentResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "respondingNode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HSelectParentResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HSelectParentResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HSelectParentResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentResponse *pp = (HSelectParentResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HSelectParentResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentResponse *pp = (HSelectParentResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRespondingNode(); return out.str();}
        default: return "";
    }
}

bool HSelectParentResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentResponse *pp = (HSelectParentResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HSelectParentResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *HSelectParentResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HSelectParentResponse *pp = (HSelectParentResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRespondingNode()); break;
        default: return NULL;
    }
}

Register_Class(HJoinCall);

HJoinCall::HJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HJoinCall::HJoinCall(const HJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HJoinCall::~HJoinCall()
{
}

HJoinCall& HJoinCall::operator=(const HJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HJoinCall::copy(const HJoinCall& other)
{
}

void HJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HJoinCallDescriptor : public cClassDescriptor
{
  public:
    HJoinCallDescriptor();
    virtual ~HJoinCallDescriptor();

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

Register_ClassDescriptor(HJoinCallDescriptor);

HJoinCallDescriptor::HJoinCallDescriptor() : cClassDescriptor("HJoinCall", "BaseCallMessage")
{
}

HJoinCallDescriptor::~HJoinCallDescriptor()
{
}

bool HJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HJoinCall *>(obj)!=NULL;
}

const char *HJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HJoinCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HJoinCall *pp = (HJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HJoinCall *pp = (HJoinCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HJoinCall *pp = (HJoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HJoinCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HJoinCall *pp = (HJoinCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HJoinResponse);

HJoinResponse::HJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    ancestors_arraysize = 0;
    this->ancestors_var = 0;
    this->joined_var = 0;
}

HJoinResponse::HJoinResponse(const HJoinResponse& other) : BaseResponseMessage(other)
{
    ancestors_arraysize = 0;
    this->ancestors_var = 0;
    copy(other);
}

HJoinResponse::~HJoinResponse()
{
    delete [] ancestors_var;
}

HJoinResponse& HJoinResponse::operator=(const HJoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HJoinResponse::copy(const HJoinResponse& other)
{
    delete [] this->ancestors_var;
    this->ancestors_var = (other.ancestors_arraysize==0) ? NULL : new NodeHandle[other.ancestors_arraysize];
    ancestors_arraysize = other.ancestors_arraysize;
    for (unsigned int i=0; i<ancestors_arraysize; i++)
        this->ancestors_var[i] = other.ancestors_var[i];
    this->successorNode_var = other.successorNode_var;
    this->predecessorNode_var = other.predecessorNode_var;
    this->joined_var = other.joined_var;
}

void HJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(ancestors_arraysize);
    doPacking(b,this->ancestors_var,ancestors_arraysize);
    doPacking(b,this->successorNode_var);
    doPacking(b,this->predecessorNode_var);
    doPacking(b,this->joined_var);
}

void HJoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->ancestors_var;
    b->unpack(ancestors_arraysize);
    if (ancestors_arraysize==0) {
        this->ancestors_var = 0;
    } else {
        this->ancestors_var = new NodeHandle[ancestors_arraysize];
        doUnpacking(b,this->ancestors_var,ancestors_arraysize);
    }
    doUnpacking(b,this->successorNode_var);
    doUnpacking(b,this->predecessorNode_var);
    doUnpacking(b,this->joined_var);
}

void HJoinResponse::setAncestorsArraySize(unsigned int size)
{
    NodeHandle *ancestors_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = ancestors_arraysize < size ? ancestors_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        ancestors_var2[i] = this->ancestors_var[i];
    ancestors_arraysize = size;
    delete [] this->ancestors_var;
    this->ancestors_var = ancestors_var2;
}

unsigned int HJoinResponse::getAncestorsArraySize() const
{
    return ancestors_arraysize;
}

NodeHandle& HJoinResponse::getAncestors(unsigned int k)
{
    if (k>=ancestors_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ancestors_arraysize, k);
    return ancestors_var[k];
}

void HJoinResponse::setAncestors(unsigned int k, const NodeHandle& ancestors)
{
    if (k>=ancestors_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ancestors_arraysize, k);
    this->ancestors_var[k] = ancestors;
}

NodeHandle& HJoinResponse::getSuccessorNode()
{
    return successorNode_var;
}

void HJoinResponse::setSuccessorNode(const NodeHandle& successorNode)
{
    this->successorNode_var = successorNode;
}

NodeHandle& HJoinResponse::getPredecessorNode()
{
    return predecessorNode_var;
}

void HJoinResponse::setPredecessorNode(const NodeHandle& predecessorNode)
{
    this->predecessorNode_var = predecessorNode;
}

int HJoinResponse::getJoined() const
{
    return joined_var;
}

void HJoinResponse::setJoined(int joined)
{
    this->joined_var = joined;
}

class HJoinResponseDescriptor : public cClassDescriptor
{
  public:
    HJoinResponseDescriptor();
    virtual ~HJoinResponseDescriptor();

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

Register_ClassDescriptor(HJoinResponseDescriptor);

HJoinResponseDescriptor::HJoinResponseDescriptor() : cClassDescriptor("HJoinResponse", "BaseResponseMessage")
{
}

HJoinResponseDescriptor::~HJoinResponseDescriptor()
{
}

bool HJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HJoinResponse *>(obj)!=NULL;
}

const char *HJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int HJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *HJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ancestors",
        "successorNode",
        "predecessorNode",
        "joined",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int HJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "ancestors")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "successorNode")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "predecessorNode")==0) return base+2;
    if (fieldName[0]=='j' && strcmp(fieldName, "joined")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "NodeHandle",
        "NodeHandle",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *HJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HJoinResponse *pp = (HJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getAncestorsArraySize();
        default: return 0;
    }
}

std::string HJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HJoinResponse *pp = (HJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAncestors(i); return out.str();}
        case 1: {std::stringstream out; out << pp->getSuccessorNode(); return out.str();}
        case 2: {std::stringstream out; out << pp->getPredecessorNode(); return out.str();}
        case 3: return long2string(pp->getJoined());
        default: return "";
    }
}

bool HJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HJoinResponse *pp = (HJoinResponse *)object; (void)pp;
    switch (field) {
        case 3: pp->setJoined(string2long(value)); return true;
        default: return false;
    }
}

const char *HJoinResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "NodeHandle",
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *HJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HJoinResponse *pp = (HJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAncestors(i)); break;
        case 1: return (void *)(&pp->getSuccessorNode()); break;
        case 2: return (void *)(&pp->getPredecessorNode()); break;
        default: return NULL;
    }
}

Register_Class(HVideoSegmentCall);

HVideoSegmentCall::HVideoSegmentCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->segment_var = 0;
    this->segmentID_var = 0;
}

HVideoSegmentCall::HVideoSegmentCall(const HVideoSegmentCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HVideoSegmentCall::~HVideoSegmentCall()
{
}

HVideoSegmentCall& HVideoSegmentCall::operator=(const HVideoSegmentCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HVideoSegmentCall::copy(const HVideoSegmentCall& other)
{
    this->segment_var = other.segment_var;
    this->segmentID_var = other.segmentID_var;
}

void HVideoSegmentCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->segment_var);
    doPacking(b,this->segmentID_var);
}

void HVideoSegmentCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->segment_var);
    doUnpacking(b,this->segmentID_var);
}

const char * HVideoSegmentCall::getSegment() const
{
    return segment_var.c_str();
}

void HVideoSegmentCall::setSegment(const char * segment)
{
    this->segment_var = segment;
}

int HVideoSegmentCall::getSegmentID() const
{
    return segmentID_var;
}

void HVideoSegmentCall::setSegmentID(int segmentID)
{
    this->segmentID_var = segmentID;
}

class HVideoSegmentCallDescriptor : public cClassDescriptor
{
  public:
    HVideoSegmentCallDescriptor();
    virtual ~HVideoSegmentCallDescriptor();

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

Register_ClassDescriptor(HVideoSegmentCallDescriptor);

HVideoSegmentCallDescriptor::HVideoSegmentCallDescriptor() : cClassDescriptor("HVideoSegmentCall", "BaseCallMessage")
{
}

HVideoSegmentCallDescriptor::~HVideoSegmentCallDescriptor()
{
}

bool HVideoSegmentCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HVideoSegmentCall *>(obj)!=NULL;
}

const char *HVideoSegmentCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HVideoSegmentCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HVideoSegmentCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *HVideoSegmentCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "segment",
        "segmentID",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HVideoSegmentCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "segment")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "segmentID")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HVideoSegmentCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HVideoSegmentCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HVideoSegmentCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentCall *pp = (HVideoSegmentCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HVideoSegmentCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentCall *pp = (HVideoSegmentCall *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSegment());
        case 1: return long2string(pp->getSegmentID());
        default: return "";
    }
}

bool HVideoSegmentCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentCall *pp = (HVideoSegmentCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSegment((value)); return true;
        case 1: pp->setSegmentID(string2long(value)); return true;
        default: return false;
    }
}

const char *HVideoSegmentCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *HVideoSegmentCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentCall *pp = (HVideoSegmentCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HLeaveOverlayCall);

HLeaveOverlayCall::HLeaveOverlayCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HLeaveOverlayCall::HLeaveOverlayCall(const HLeaveOverlayCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HLeaveOverlayCall::~HLeaveOverlayCall()
{
}

HLeaveOverlayCall& HLeaveOverlayCall::operator=(const HLeaveOverlayCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HLeaveOverlayCall::copy(const HLeaveOverlayCall& other)
{
}

void HLeaveOverlayCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HLeaveOverlayCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HLeaveOverlayCallDescriptor : public cClassDescriptor
{
  public:
    HLeaveOverlayCallDescriptor();
    virtual ~HLeaveOverlayCallDescriptor();

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

Register_ClassDescriptor(HLeaveOverlayCallDescriptor);

HLeaveOverlayCallDescriptor::HLeaveOverlayCallDescriptor() : cClassDescriptor("HLeaveOverlayCall", "BaseCallMessage")
{
}

HLeaveOverlayCallDescriptor::~HLeaveOverlayCallDescriptor()
{
}

bool HLeaveOverlayCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HLeaveOverlayCall *>(obj)!=NULL;
}

const char *HLeaveOverlayCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HLeaveOverlayCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HLeaveOverlayCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HLeaveOverlayCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HLeaveOverlayCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HLeaveOverlayCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HLeaveOverlayCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HLeaveOverlayCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayCall *pp = (HLeaveOverlayCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HLeaveOverlayCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayCall *pp = (HLeaveOverlayCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HLeaveOverlayCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayCall *pp = (HLeaveOverlayCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HLeaveOverlayCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HLeaveOverlayCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayCall *pp = (HLeaveOverlayCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HLeaveOverlayResponse);

HLeaveOverlayResponse::HLeaveOverlayResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->permissionGranted_var = 0;
}

HLeaveOverlayResponse::HLeaveOverlayResponse(const HLeaveOverlayResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HLeaveOverlayResponse::~HLeaveOverlayResponse()
{
}

HLeaveOverlayResponse& HLeaveOverlayResponse::operator=(const HLeaveOverlayResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HLeaveOverlayResponse::copy(const HLeaveOverlayResponse& other)
{
    this->permissionGranted_var = other.permissionGranted_var;
}

void HLeaveOverlayResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->permissionGranted_var);
}

void HLeaveOverlayResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->permissionGranted_var);
}

int HLeaveOverlayResponse::getPermissionGranted() const
{
    return permissionGranted_var;
}

void HLeaveOverlayResponse::setPermissionGranted(int permissionGranted)
{
    this->permissionGranted_var = permissionGranted;
}

class HLeaveOverlayResponseDescriptor : public cClassDescriptor
{
  public:
    HLeaveOverlayResponseDescriptor();
    virtual ~HLeaveOverlayResponseDescriptor();

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

Register_ClassDescriptor(HLeaveOverlayResponseDescriptor);

HLeaveOverlayResponseDescriptor::HLeaveOverlayResponseDescriptor() : cClassDescriptor("HLeaveOverlayResponse", "BaseResponseMessage")
{
}

HLeaveOverlayResponseDescriptor::~HLeaveOverlayResponseDescriptor()
{
}

bool HLeaveOverlayResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HLeaveOverlayResponse *>(obj)!=NULL;
}

const char *HLeaveOverlayResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HLeaveOverlayResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HLeaveOverlayResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *HLeaveOverlayResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "permissionGranted",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HLeaveOverlayResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "permissionGranted")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HLeaveOverlayResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HLeaveOverlayResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HLeaveOverlayResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayResponse *pp = (HLeaveOverlayResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HLeaveOverlayResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayResponse *pp = (HLeaveOverlayResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPermissionGranted());
        default: return "";
    }
}

bool HLeaveOverlayResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayResponse *pp = (HLeaveOverlayResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setPermissionGranted(string2long(value)); return true;
        default: return false;
    }
}

const char *HLeaveOverlayResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *HLeaveOverlayResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HLeaveOverlayResponse *pp = (HLeaveOverlayResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HNewParentSelectedCall);

HNewParentSelectedCall::HNewParentSelectedCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HNewParentSelectedCall::HNewParentSelectedCall(const HNewParentSelectedCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HNewParentSelectedCall::~HNewParentSelectedCall()
{
}

HNewParentSelectedCall& HNewParentSelectedCall::operator=(const HNewParentSelectedCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HNewParentSelectedCall::copy(const HNewParentSelectedCall& other)
{
    this->parent_var = other.parent_var;
}

void HNewParentSelectedCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->parent_var);
}

void HNewParentSelectedCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->parent_var);
}

NodeHandle& HNewParentSelectedCall::getParent()
{
    return parent_var;
}

void HNewParentSelectedCall::setParent(const NodeHandle& parent)
{
    this->parent_var = parent;
}

class HNewParentSelectedCallDescriptor : public cClassDescriptor
{
  public:
    HNewParentSelectedCallDescriptor();
    virtual ~HNewParentSelectedCallDescriptor();

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

Register_ClassDescriptor(HNewParentSelectedCallDescriptor);

HNewParentSelectedCallDescriptor::HNewParentSelectedCallDescriptor() : cClassDescriptor("HNewParentSelectedCall", "BaseCallMessage")
{
}

HNewParentSelectedCallDescriptor::~HNewParentSelectedCallDescriptor()
{
}

bool HNewParentSelectedCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HNewParentSelectedCall *>(obj)!=NULL;
}

const char *HNewParentSelectedCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HNewParentSelectedCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HNewParentSelectedCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HNewParentSelectedCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "parent",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HNewParentSelectedCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parent")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HNewParentSelectedCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HNewParentSelectedCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HNewParentSelectedCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HNewParentSelectedCall *pp = (HNewParentSelectedCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HNewParentSelectedCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HNewParentSelectedCall *pp = (HNewParentSelectedCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getParent(); return out.str();}
        default: return "";
    }
}

bool HNewParentSelectedCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HNewParentSelectedCall *pp = (HNewParentSelectedCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HNewParentSelectedCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *HNewParentSelectedCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HNewParentSelectedCall *pp = (HNewParentSelectedCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getParent()); break;
        default: return NULL;
    }
}

Register_Class(HResponsibilityAsParentCall);

HResponsibilityAsParentCall::HResponsibilityAsParentCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    children_arraysize = 0;
    this->children_var = 0;
}

HResponsibilityAsParentCall::HResponsibilityAsParentCall(const HResponsibilityAsParentCall& other) : BaseCallMessage(other)
{
    children_arraysize = 0;
    this->children_var = 0;
    copy(other);
}

HResponsibilityAsParentCall::~HResponsibilityAsParentCall()
{
    delete [] children_var;
}

HResponsibilityAsParentCall& HResponsibilityAsParentCall::operator=(const HResponsibilityAsParentCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HResponsibilityAsParentCall::copy(const HResponsibilityAsParentCall& other)
{
    this->parent_var = other.parent_var;
    delete [] this->children_var;
    this->children_var = (other.children_arraysize==0) ? NULL : new NodeHandle[other.children_arraysize];
    children_arraysize = other.children_arraysize;
    for (unsigned int i=0; i<children_arraysize; i++)
        this->children_var[i] = other.children_var[i];
}

void HResponsibilityAsParentCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->parent_var);
    b->pack(children_arraysize);
    doPacking(b,this->children_var,children_arraysize);
}

void HResponsibilityAsParentCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->parent_var);
    delete [] this->children_var;
    b->unpack(children_arraysize);
    if (children_arraysize==0) {
        this->children_var = 0;
    } else {
        this->children_var = new NodeHandle[children_arraysize];
        doUnpacking(b,this->children_var,children_arraysize);
    }
}

NodeHandle& HResponsibilityAsParentCall::getParent()
{
    return parent_var;
}

void HResponsibilityAsParentCall::setParent(const NodeHandle& parent)
{
    this->parent_var = parent;
}

void HResponsibilityAsParentCall::setChildrenArraySize(unsigned int size)
{
    NodeHandle *children_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = children_arraysize < size ? children_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        children_var2[i] = this->children_var[i];
    children_arraysize = size;
    delete [] this->children_var;
    this->children_var = children_var2;
}

unsigned int HResponsibilityAsParentCall::getChildrenArraySize() const
{
    return children_arraysize;
}

NodeHandle& HResponsibilityAsParentCall::getChildren(unsigned int k)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    return children_var[k];
}

void HResponsibilityAsParentCall::setChildren(unsigned int k, const NodeHandle& children)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    this->children_var[k] = children;
}

class HResponsibilityAsParentCallDescriptor : public cClassDescriptor
{
  public:
    HResponsibilityAsParentCallDescriptor();
    virtual ~HResponsibilityAsParentCallDescriptor();

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

Register_ClassDescriptor(HResponsibilityAsParentCallDescriptor);

HResponsibilityAsParentCallDescriptor::HResponsibilityAsParentCallDescriptor() : cClassDescriptor("HResponsibilityAsParentCall", "BaseCallMessage")
{
}

HResponsibilityAsParentCallDescriptor::~HResponsibilityAsParentCallDescriptor()
{
}

bool HResponsibilityAsParentCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HResponsibilityAsParentCall *>(obj)!=NULL;
}

const char *HResponsibilityAsParentCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HResponsibilityAsParentCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HResponsibilityAsParentCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *HResponsibilityAsParentCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "parent",
        "children",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HResponsibilityAsParentCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parent")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "children")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HResponsibilityAsParentCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HResponsibilityAsParentCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HResponsibilityAsParentCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HResponsibilityAsParentCall *pp = (HResponsibilityAsParentCall *)object; (void)pp;
    switch (field) {
        case 1: return pp->getChildrenArraySize();
        default: return 0;
    }
}

std::string HResponsibilityAsParentCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HResponsibilityAsParentCall *pp = (HResponsibilityAsParentCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getParent(); return out.str();}
        case 1: {std::stringstream out; out << pp->getChildren(i); return out.str();}
        default: return "";
    }
}

bool HResponsibilityAsParentCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HResponsibilityAsParentCall *pp = (HResponsibilityAsParentCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HResponsibilityAsParentCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *HResponsibilityAsParentCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HResponsibilityAsParentCall *pp = (HResponsibilityAsParentCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getParent()); break;
        case 1: return (void *)(&pp->getChildren(i)); break;
        default: return NULL;
    }
}

Register_Class(HGetChildrenCall);

HGetChildrenCall::HGetChildrenCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HGetChildrenCall::HGetChildrenCall(const HGetChildrenCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HGetChildrenCall::~HGetChildrenCall()
{
}

HGetChildrenCall& HGetChildrenCall::operator=(const HGetChildrenCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HGetChildrenCall::copy(const HGetChildrenCall& other)
{
}

void HGetChildrenCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HGetChildrenCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HGetChildrenCallDescriptor : public cClassDescriptor
{
  public:
    HGetChildrenCallDescriptor();
    virtual ~HGetChildrenCallDescriptor();

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

Register_ClassDescriptor(HGetChildrenCallDescriptor);

HGetChildrenCallDescriptor::HGetChildrenCallDescriptor() : cClassDescriptor("HGetChildrenCall", "BaseCallMessage")
{
}

HGetChildrenCallDescriptor::~HGetChildrenCallDescriptor()
{
}

bool HGetChildrenCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HGetChildrenCall *>(obj)!=NULL;
}

const char *HGetChildrenCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HGetChildrenCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HGetChildrenCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HGetChildrenCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HGetChildrenCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HGetChildrenCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HGetChildrenCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HGetChildrenCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenCall *pp = (HGetChildrenCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HGetChildrenCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenCall *pp = (HGetChildrenCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HGetChildrenCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenCall *pp = (HGetChildrenCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HGetChildrenCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HGetChildrenCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenCall *pp = (HGetChildrenCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HGetChildrenResponse);

HGetChildrenResponse::HGetChildrenResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    children_arraysize = 0;
    this->children_var = 0;
}

HGetChildrenResponse::HGetChildrenResponse(const HGetChildrenResponse& other) : BaseResponseMessage(other)
{
    children_arraysize = 0;
    this->children_var = 0;
    copy(other);
}

HGetChildrenResponse::~HGetChildrenResponse()
{
    delete [] children_var;
}

HGetChildrenResponse& HGetChildrenResponse::operator=(const HGetChildrenResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HGetChildrenResponse::copy(const HGetChildrenResponse& other)
{
    delete [] this->children_var;
    this->children_var = (other.children_arraysize==0) ? NULL : new NodeHandle[other.children_arraysize];
    children_arraysize = other.children_arraysize;
    for (unsigned int i=0; i<children_arraysize; i++)
        this->children_var[i] = other.children_var[i];
}

void HGetChildrenResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(children_arraysize);
    doPacking(b,this->children_var,children_arraysize);
}

void HGetChildrenResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->children_var;
    b->unpack(children_arraysize);
    if (children_arraysize==0) {
        this->children_var = 0;
    } else {
        this->children_var = new NodeHandle[children_arraysize];
        doUnpacking(b,this->children_var,children_arraysize);
    }
}

void HGetChildrenResponse::setChildrenArraySize(unsigned int size)
{
    NodeHandle *children_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = children_arraysize < size ? children_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        children_var2[i] = this->children_var[i];
    children_arraysize = size;
    delete [] this->children_var;
    this->children_var = children_var2;
}

unsigned int HGetChildrenResponse::getChildrenArraySize() const
{
    return children_arraysize;
}

NodeHandle& HGetChildrenResponse::getChildren(unsigned int k)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    return children_var[k];
}

void HGetChildrenResponse::setChildren(unsigned int k, const NodeHandle& children)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    this->children_var[k] = children;
}

class HGetChildrenResponseDescriptor : public cClassDescriptor
{
  public:
    HGetChildrenResponseDescriptor();
    virtual ~HGetChildrenResponseDescriptor();

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

Register_ClassDescriptor(HGetChildrenResponseDescriptor);

HGetChildrenResponseDescriptor::HGetChildrenResponseDescriptor() : cClassDescriptor("HGetChildrenResponse", "BaseResponseMessage")
{
}

HGetChildrenResponseDescriptor::~HGetChildrenResponseDescriptor()
{
}

bool HGetChildrenResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HGetChildrenResponse *>(obj)!=NULL;
}

const char *HGetChildrenResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HGetChildrenResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HGetChildrenResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *HGetChildrenResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "children",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HGetChildrenResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "children")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HGetChildrenResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HGetChildrenResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HGetChildrenResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenResponse *pp = (HGetChildrenResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getChildrenArraySize();
        default: return 0;
    }
}

std::string HGetChildrenResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenResponse *pp = (HGetChildrenResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getChildren(i); return out.str();}
        default: return "";
    }
}

bool HGetChildrenResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenResponse *pp = (HGetChildrenResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HGetChildrenResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *HGetChildrenResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HGetChildrenResponse *pp = (HGetChildrenResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getChildren(i)); break;
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


