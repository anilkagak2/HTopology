//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/htopology/HMessage.msg.
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

Register_Class(HGetParametersCall);

HGetParametersCall::HGetParametersCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HGetParametersCall::HGetParametersCall(const HGetParametersCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HGetParametersCall::~HGetParametersCall()
{
}

HGetParametersCall& HGetParametersCall::operator=(const HGetParametersCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HGetParametersCall::copy(const HGetParametersCall& other)
{
}

void HGetParametersCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HGetParametersCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HGetParametersCallDescriptor : public cClassDescriptor
{
  public:
    HGetParametersCallDescriptor();
    virtual ~HGetParametersCallDescriptor();

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

Register_ClassDescriptor(HGetParametersCallDescriptor);

HGetParametersCallDescriptor::HGetParametersCallDescriptor() : cClassDescriptor("HGetParametersCall", "BaseCallMessage")
{
}

HGetParametersCallDescriptor::~HGetParametersCallDescriptor()
{
}

bool HGetParametersCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HGetParametersCall *>(obj)!=NULL;
}

const char *HGetParametersCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HGetParametersCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HGetParametersCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HGetParametersCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HGetParametersCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HGetParametersCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HGetParametersCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HGetParametersCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersCall *pp = (HGetParametersCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HGetParametersCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersCall *pp = (HGetParametersCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HGetParametersCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersCall *pp = (HGetParametersCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HGetParametersCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HGetParametersCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersCall *pp = (HGetParametersCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HGetParametersResponse);

HGetParametersResponse::HGetParametersResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->capacity_var = 0;
    this->rescueCapacity_var = 0;
    this->bandwidth_var = 0;
}

HGetParametersResponse::HGetParametersResponse(const HGetParametersResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HGetParametersResponse::~HGetParametersResponse()
{
}

HGetParametersResponse& HGetParametersResponse::operator=(const HGetParametersResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HGetParametersResponse::copy(const HGetParametersResponse& other)
{
    this->capacity_var = other.capacity_var;
    this->rescueCapacity_var = other.rescueCapacity_var;
    this->bandwidth_var = other.bandwidth_var;
}

void HGetParametersResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->capacity_var);
    doPacking(b,this->rescueCapacity_var);
    doPacking(b,this->bandwidth_var);
}

void HGetParametersResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->capacity_var);
    doUnpacking(b,this->rescueCapacity_var);
    doUnpacking(b,this->bandwidth_var);
}

int HGetParametersResponse::getCapacity() const
{
    return capacity_var;
}

void HGetParametersResponse::setCapacity(int capacity)
{
    this->capacity_var = capacity;
}

int HGetParametersResponse::getRescueCapacity() const
{
    return rescueCapacity_var;
}

void HGetParametersResponse::setRescueCapacity(int rescueCapacity)
{
    this->rescueCapacity_var = rescueCapacity;
}

double HGetParametersResponse::getBandwidth() const
{
    return bandwidth_var;
}

void HGetParametersResponse::setBandwidth(double bandwidth)
{
    this->bandwidth_var = bandwidth;
}

class HGetParametersResponseDescriptor : public cClassDescriptor
{
  public:
    HGetParametersResponseDescriptor();
    virtual ~HGetParametersResponseDescriptor();

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

Register_ClassDescriptor(HGetParametersResponseDescriptor);

HGetParametersResponseDescriptor::HGetParametersResponseDescriptor() : cClassDescriptor("HGetParametersResponse", "BaseResponseMessage")
{
}

HGetParametersResponseDescriptor::~HGetParametersResponseDescriptor()
{
}

bool HGetParametersResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HGetParametersResponse *>(obj)!=NULL;
}

const char *HGetParametersResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HGetParametersResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int HGetParametersResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *HGetParametersResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "capacity",
        "rescueCapacity",
        "bandwidth",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int HGetParametersResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "capacity")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rescueCapacity")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bandwidth")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HGetParametersResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "double",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *HGetParametersResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HGetParametersResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersResponse *pp = (HGetParametersResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HGetParametersResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersResponse *pp = (HGetParametersResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCapacity());
        case 1: return long2string(pp->getRescueCapacity());
        case 2: return double2string(pp->getBandwidth());
        default: return "";
    }
}

bool HGetParametersResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersResponse *pp = (HGetParametersResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setCapacity(string2long(value)); return true;
        case 1: pp->setRescueCapacity(string2long(value)); return true;
        case 2: pp->setBandwidth(string2double(value)); return true;
        default: return false;
    }
}

const char *HGetParametersResponseDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *HGetParametersResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HGetParametersResponse *pp = (HGetParametersResponse *)object; (void)pp;
    switch (field) {
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
    this->child_var = other.child_var;
}

void HJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->child_var);
}

void HJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->child_var);
}

NodeHandle& HJoinCall::getChild()
{
    return child_var;
}

void HJoinCall::setChild(const NodeHandle& child)
{
    this->child_var = child;
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
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "child",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+0;
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
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
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
        case 0: {std::stringstream out; out << pp->getChild(); return out.str();}
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
    static const char *fieldStructNames[] = {
        "NodeHandle",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
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
        case 0: return (void *)(&pp->getChild()); break;
        default: return NULL;
    }
}

Register_Class(HJoinResponse);

HJoinResponse::HJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    ancestors_arraysize = 0;
    this->ancestors_var = 0;
    this->joined_var = 0;
    this->heightParent_var = 0;
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
    this->heightParent_var = other.heightParent_var;
}

void HJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(ancestors_arraysize);
    doPacking(b,this->ancestors_var,ancestors_arraysize);
    doPacking(b,this->successorNode_var);
    doPacking(b,this->predecessorNode_var);
    doPacking(b,this->joined_var);
    doPacking(b,this->heightParent_var);
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
    doUnpacking(b,this->heightParent_var);
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

int HJoinResponse::getHeightParent() const
{
    return heightParent_var;
}

void HJoinResponse::setHeightParent(int heightParent)
{
    this->heightParent_var = heightParent;
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
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
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
        "heightParent",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int HJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "ancestors")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "successorNode")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "predecessorNode")==0) return base+2;
    if (fieldName[0]=='j' && strcmp(fieldName, "joined")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "heightParent")==0) return base+4;
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
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
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
        case 4: return long2string(pp->getHeightParent());
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
        case 4: pp->setHeightParent(string2long(value)); return true;
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
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
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

Register_Class(HRescueJoinCall);

HRescueJoinCall::HRescueJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HRescueJoinCall::HRescueJoinCall(const HRescueJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HRescueJoinCall::~HRescueJoinCall()
{
}

HRescueJoinCall& HRescueJoinCall::operator=(const HRescueJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HRescueJoinCall::copy(const HRescueJoinCall& other)
{
}

void HRescueJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HRescueJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HRescueJoinCallDescriptor : public cClassDescriptor
{
  public:
    HRescueJoinCallDescriptor();
    virtual ~HRescueJoinCallDescriptor();

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

Register_ClassDescriptor(HRescueJoinCallDescriptor);

HRescueJoinCallDescriptor::HRescueJoinCallDescriptor() : cClassDescriptor("HRescueJoinCall", "BaseCallMessage")
{
}

HRescueJoinCallDescriptor::~HRescueJoinCallDescriptor()
{
}

bool HRescueJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HRescueJoinCall *>(obj)!=NULL;
}

const char *HRescueJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HRescueJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HRescueJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HRescueJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HRescueJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HRescueJoinCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HRescueJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HRescueJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinCall *pp = (HRescueJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HRescueJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinCall *pp = (HRescueJoinCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HRescueJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinCall *pp = (HRescueJoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HRescueJoinCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HRescueJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinCall *pp = (HRescueJoinCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HRescueJoinResponse);

HRescueJoinResponse::HRescueJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->joined_var = 0;
}

HRescueJoinResponse::HRescueJoinResponse(const HRescueJoinResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HRescueJoinResponse::~HRescueJoinResponse()
{
}

HRescueJoinResponse& HRescueJoinResponse::operator=(const HRescueJoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HRescueJoinResponse::copy(const HRescueJoinResponse& other)
{
    this->joined_var = other.joined_var;
}

void HRescueJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->joined_var);
}

void HRescueJoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->joined_var);
}

int HRescueJoinResponse::getJoined() const
{
    return joined_var;
}

void HRescueJoinResponse::setJoined(int joined)
{
    this->joined_var = joined;
}

class HRescueJoinResponseDescriptor : public cClassDescriptor
{
  public:
    HRescueJoinResponseDescriptor();
    virtual ~HRescueJoinResponseDescriptor();

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

Register_ClassDescriptor(HRescueJoinResponseDescriptor);

HRescueJoinResponseDescriptor::HRescueJoinResponseDescriptor() : cClassDescriptor("HRescueJoinResponse", "BaseResponseMessage")
{
}

HRescueJoinResponseDescriptor::~HRescueJoinResponseDescriptor()
{
}

bool HRescueJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HRescueJoinResponse *>(obj)!=NULL;
}

const char *HRescueJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HRescueJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HRescueJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HRescueJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "joined",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HRescueJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joined")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HRescueJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *HRescueJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HRescueJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinResponse *pp = (HRescueJoinResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HRescueJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinResponse *pp = (HRescueJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getJoined());
        default: return "";
    }
}

bool HRescueJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinResponse *pp = (HRescueJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setJoined(string2long(value)); return true;
        default: return false;
    }
}

const char *HRescueJoinResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *HRescueJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HRescueJoinResponse *pp = (HRescueJoinResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HRemoveRescueLinkCall);

HRemoveRescueLinkCall::HRemoveRescueLinkCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HRemoveRescueLinkCall::HRemoveRescueLinkCall(const HRemoveRescueLinkCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HRemoveRescueLinkCall::~HRemoveRescueLinkCall()
{
}

HRemoveRescueLinkCall& HRemoveRescueLinkCall::operator=(const HRemoveRescueLinkCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HRemoveRescueLinkCall::copy(const HRemoveRescueLinkCall& other)
{
}

void HRemoveRescueLinkCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HRemoveRescueLinkCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HRemoveRescueLinkCallDescriptor : public cClassDescriptor
{
  public:
    HRemoveRescueLinkCallDescriptor();
    virtual ~HRemoveRescueLinkCallDescriptor();

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

Register_ClassDescriptor(HRemoveRescueLinkCallDescriptor);

HRemoveRescueLinkCallDescriptor::HRemoveRescueLinkCallDescriptor() : cClassDescriptor("HRemoveRescueLinkCall", "BaseCallMessage")
{
}

HRemoveRescueLinkCallDescriptor::~HRemoveRescueLinkCallDescriptor()
{
}

bool HRemoveRescueLinkCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HRemoveRescueLinkCall *>(obj)!=NULL;
}

const char *HRemoveRescueLinkCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HRemoveRescueLinkCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HRemoveRescueLinkCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HRemoveRescueLinkCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HRemoveRescueLinkCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HRemoveRescueLinkCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HRemoveRescueLinkCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HRemoveRescueLinkCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HRemoveRescueLinkCall *pp = (HRemoveRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HRemoveRescueLinkCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HRemoveRescueLinkCall *pp = (HRemoveRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HRemoveRescueLinkCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HRemoveRescueLinkCall *pp = (HRemoveRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HRemoveRescueLinkCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HRemoveRescueLinkCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HRemoveRescueLinkCall *pp = (HRemoveRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HConvertRescueLinkCall);

HConvertRescueLinkCall::HConvertRescueLinkCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HConvertRescueLinkCall::HConvertRescueLinkCall(const HConvertRescueLinkCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HConvertRescueLinkCall::~HConvertRescueLinkCall()
{
}

HConvertRescueLinkCall& HConvertRescueLinkCall::operator=(const HConvertRescueLinkCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HConvertRescueLinkCall::copy(const HConvertRescueLinkCall& other)
{
}

void HConvertRescueLinkCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HConvertRescueLinkCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HConvertRescueLinkCallDescriptor : public cClassDescriptor
{
  public:
    HConvertRescueLinkCallDescriptor();
    virtual ~HConvertRescueLinkCallDescriptor();

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

Register_ClassDescriptor(HConvertRescueLinkCallDescriptor);

HConvertRescueLinkCallDescriptor::HConvertRescueLinkCallDescriptor() : cClassDescriptor("HConvertRescueLinkCall", "BaseCallMessage")
{
}

HConvertRescueLinkCallDescriptor::~HConvertRescueLinkCallDescriptor()
{
}

bool HConvertRescueLinkCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HConvertRescueLinkCall *>(obj)!=NULL;
}

const char *HConvertRescueLinkCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HConvertRescueLinkCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HConvertRescueLinkCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HConvertRescueLinkCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HConvertRescueLinkCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HConvertRescueLinkCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HConvertRescueLinkCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HConvertRescueLinkCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkCall *pp = (HConvertRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HConvertRescueLinkCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkCall *pp = (HConvertRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HConvertRescueLinkCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkCall *pp = (HConvertRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HConvertRescueLinkCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HConvertRescueLinkCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkCall *pp = (HConvertRescueLinkCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HConvertRescueLinkResponse);

HConvertRescueLinkResponse::HConvertRescueLinkResponse(const char *name, int kind) : HJoinResponse(name,kind)
{
}

HConvertRescueLinkResponse::HConvertRescueLinkResponse(const HConvertRescueLinkResponse& other) : HJoinResponse(other)
{
    copy(other);
}

HConvertRescueLinkResponse::~HConvertRescueLinkResponse()
{
}

HConvertRescueLinkResponse& HConvertRescueLinkResponse::operator=(const HConvertRescueLinkResponse& other)
{
    if (this==&other) return *this;
    HJoinResponse::operator=(other);
    copy(other);
    return *this;
}

void HConvertRescueLinkResponse::copy(const HConvertRescueLinkResponse& other)
{
}

void HConvertRescueLinkResponse::parsimPack(cCommBuffer *b)
{
    HJoinResponse::parsimPack(b);
}

void HConvertRescueLinkResponse::parsimUnpack(cCommBuffer *b)
{
    HJoinResponse::parsimUnpack(b);
}

class HConvertRescueLinkResponseDescriptor : public cClassDescriptor
{
  public:
    HConvertRescueLinkResponseDescriptor();
    virtual ~HConvertRescueLinkResponseDescriptor();

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

Register_ClassDescriptor(HConvertRescueLinkResponseDescriptor);

HConvertRescueLinkResponseDescriptor::HConvertRescueLinkResponseDescriptor() : cClassDescriptor("HConvertRescueLinkResponse", "HJoinResponse")
{
}

HConvertRescueLinkResponseDescriptor::~HConvertRescueLinkResponseDescriptor()
{
}

bool HConvertRescueLinkResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HConvertRescueLinkResponse *>(obj)!=NULL;
}

const char *HConvertRescueLinkResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HConvertRescueLinkResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HConvertRescueLinkResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HConvertRescueLinkResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HConvertRescueLinkResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HConvertRescueLinkResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HConvertRescueLinkResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HConvertRescueLinkResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkResponse *pp = (HConvertRescueLinkResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HConvertRescueLinkResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkResponse *pp = (HConvertRescueLinkResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HConvertRescueLinkResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkResponse *pp = (HConvertRescueLinkResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HConvertRescueLinkResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HConvertRescueLinkResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HConvertRescueLinkResponse *pp = (HConvertRescueLinkResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HReJoinCall);

HReJoinCall::HReJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HReJoinCall::HReJoinCall(const HReJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HReJoinCall::~HReJoinCall()
{
}

HReJoinCall& HReJoinCall::operator=(const HReJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HReJoinCall::copy(const HReJoinCall& other)
{
}

void HReJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HReJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HReJoinCallDescriptor : public cClassDescriptor
{
  public:
    HReJoinCallDescriptor();
    virtual ~HReJoinCallDescriptor();

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

Register_ClassDescriptor(HReJoinCallDescriptor);

HReJoinCallDescriptor::HReJoinCallDescriptor() : cClassDescriptor("HReJoinCall", "BaseCallMessage")
{
}

HReJoinCallDescriptor::~HReJoinCallDescriptor()
{
}

bool HReJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HReJoinCall *>(obj)!=NULL;
}

const char *HReJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HReJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HReJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HReJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HReJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HReJoinCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HReJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HReJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinCall *pp = (HReJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HReJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinCall *pp = (HReJoinCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HReJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinCall *pp = (HReJoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HReJoinCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HReJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinCall *pp = (HReJoinCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HReJoinResponse);

HReJoinResponse::HReJoinResponse(const char *name, int kind) : HJoinResponse(name,kind)
{
}

HReJoinResponse::HReJoinResponse(const HReJoinResponse& other) : HJoinResponse(other)
{
    copy(other);
}

HReJoinResponse::~HReJoinResponse()
{
}

HReJoinResponse& HReJoinResponse::operator=(const HReJoinResponse& other)
{
    if (this==&other) return *this;
    HJoinResponse::operator=(other);
    copy(other);
    return *this;
}

void HReJoinResponse::copy(const HReJoinResponse& other)
{
}

void HReJoinResponse::parsimPack(cCommBuffer *b)
{
    HJoinResponse::parsimPack(b);
}

void HReJoinResponse::parsimUnpack(cCommBuffer *b)
{
    HJoinResponse::parsimUnpack(b);
}

class HReJoinResponseDescriptor : public cClassDescriptor
{
  public:
    HReJoinResponseDescriptor();
    virtual ~HReJoinResponseDescriptor();

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

Register_ClassDescriptor(HReJoinResponseDescriptor);

HReJoinResponseDescriptor::HReJoinResponseDescriptor() : cClassDescriptor("HReJoinResponse", "HJoinResponse")
{
}

HReJoinResponseDescriptor::~HReJoinResponseDescriptor()
{
}

bool HReJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HReJoinResponse *>(obj)!=NULL;
}

const char *HReJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HReJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HReJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HReJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HReJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HReJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HReJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HReJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinResponse *pp = (HReJoinResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HReJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinResponse *pp = (HReJoinResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HReJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinResponse *pp = (HReJoinResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HReJoinResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HReJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HReJoinResponse *pp = (HReJoinResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HNoReplacementFoundCall);

HNoReplacementFoundCall::HNoReplacementFoundCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HNoReplacementFoundCall::HNoReplacementFoundCall(const HNoReplacementFoundCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HNoReplacementFoundCall::~HNoReplacementFoundCall()
{
}

HNoReplacementFoundCall& HNoReplacementFoundCall::operator=(const HNoReplacementFoundCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HNoReplacementFoundCall::copy(const HNoReplacementFoundCall& other)
{
}

void HNoReplacementFoundCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HNoReplacementFoundCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HNoReplacementFoundCallDescriptor : public cClassDescriptor
{
  public:
    HNoReplacementFoundCallDescriptor();
    virtual ~HNoReplacementFoundCallDescriptor();

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

Register_ClassDescriptor(HNoReplacementFoundCallDescriptor);

HNoReplacementFoundCallDescriptor::HNoReplacementFoundCallDescriptor() : cClassDescriptor("HNoReplacementFoundCall", "BaseCallMessage")
{
}

HNoReplacementFoundCallDescriptor::~HNoReplacementFoundCallDescriptor()
{
}

bool HNoReplacementFoundCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HNoReplacementFoundCall *>(obj)!=NULL;
}

const char *HNoReplacementFoundCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HNoReplacementFoundCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HNoReplacementFoundCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HNoReplacementFoundCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HNoReplacementFoundCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HNoReplacementFoundCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HNoReplacementFoundCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HNoReplacementFoundCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HNoReplacementFoundCall *pp = (HNoReplacementFoundCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HNoReplacementFoundCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HNoReplacementFoundCall *pp = (HNoReplacementFoundCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HNoReplacementFoundCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HNoReplacementFoundCall *pp = (HNoReplacementFoundCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HNoReplacementFoundCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HNoReplacementFoundCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HNoReplacementFoundCall *pp = (HNoReplacementFoundCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HChildAddedCall);

HChildAddedCall::HChildAddedCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HChildAddedCall::HChildAddedCall(const HChildAddedCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HChildAddedCall::~HChildAddedCall()
{
}

HChildAddedCall& HChildAddedCall::operator=(const HChildAddedCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HChildAddedCall::copy(const HChildAddedCall& other)
{
    this->child_var = other.child_var;
}

void HChildAddedCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->child_var);
}

void HChildAddedCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->child_var);
}

NodeHandle& HChildAddedCall::getChild()
{
    return child_var;
}

void HChildAddedCall::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

class HChildAddedCallDescriptor : public cClassDescriptor
{
  public:
    HChildAddedCallDescriptor();
    virtual ~HChildAddedCallDescriptor();

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

Register_ClassDescriptor(HChildAddedCallDescriptor);

HChildAddedCallDescriptor::HChildAddedCallDescriptor() : cClassDescriptor("HChildAddedCall", "BaseCallMessage")
{
}

HChildAddedCallDescriptor::~HChildAddedCallDescriptor()
{
}

bool HChildAddedCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HChildAddedCall *>(obj)!=NULL;
}

const char *HChildAddedCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HChildAddedCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HChildAddedCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HChildAddedCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "child",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HChildAddedCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HChildAddedCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *HChildAddedCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HChildAddedCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HChildAddedCall *pp = (HChildAddedCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HChildAddedCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HChildAddedCall *pp = (HChildAddedCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getChild(); return out.str();}
        default: return "";
    }
}

bool HChildAddedCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HChildAddedCall *pp = (HChildAddedCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HChildAddedCallDescriptor::getFieldStructName(void *object, int field) const
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

void *HChildAddedCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HChildAddedCall *pp = (HChildAddedCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getChild()); break;
        default: return NULL;
    }
}

Register_Class(HChildRemovedCall);

HChildRemovedCall::HChildRemovedCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HChildRemovedCall::HChildRemovedCall(const HChildRemovedCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HChildRemovedCall::~HChildRemovedCall()
{
}

HChildRemovedCall& HChildRemovedCall::operator=(const HChildRemovedCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HChildRemovedCall::copy(const HChildRemovedCall& other)
{
    this->child_var = other.child_var;
}

void HChildRemovedCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->child_var);
}

void HChildRemovedCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->child_var);
}

NodeHandle& HChildRemovedCall::getChild()
{
    return child_var;
}

void HChildRemovedCall::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

class HChildRemovedCallDescriptor : public cClassDescriptor
{
  public:
    HChildRemovedCallDescriptor();
    virtual ~HChildRemovedCallDescriptor();

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

Register_ClassDescriptor(HChildRemovedCallDescriptor);

HChildRemovedCallDescriptor::HChildRemovedCallDescriptor() : cClassDescriptor("HChildRemovedCall", "BaseCallMessage")
{
}

HChildRemovedCallDescriptor::~HChildRemovedCallDescriptor()
{
}

bool HChildRemovedCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HChildRemovedCall *>(obj)!=NULL;
}

const char *HChildRemovedCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HChildRemovedCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HChildRemovedCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HChildRemovedCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "child",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HChildRemovedCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HChildRemovedCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *HChildRemovedCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HChildRemovedCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HChildRemovedCall *pp = (HChildRemovedCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HChildRemovedCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HChildRemovedCall *pp = (HChildRemovedCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getChild(); return out.str();}
        default: return "";
    }
}

bool HChildRemovedCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HChildRemovedCall *pp = (HChildRemovedCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HChildRemovedCallDescriptor::getFieldStructName(void *object, int field) const
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

void *HChildRemovedCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HChildRemovedCall *pp = (HChildRemovedCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getChild()); break;
        default: return NULL;
    }
}

Register_Class(HVideoSegmentCall);

HVideoSegmentCall::HVideoSegmentCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
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
}

void HVideoSegmentCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->segment_var);
}

void HVideoSegmentCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->segment_var);
}

HVideoSegment& HVideoSegmentCall::getSegment()
{
    return segment_var;
}

void HVideoSegmentCall::setSegment(const HVideoSegment& segment)
{
    this->segment_var = segment;
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
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
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
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HVideoSegmentCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "segment")==0) return base+0;
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
        "HVideoSegment",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
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
        case 0: {std::stringstream out; out << pp->getSegment(); return out.str();}
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
        "HVideoSegment",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
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
        case 0: return (void *)(&pp->getSegment()); break;
        default: return NULL;
    }
}

Register_Class(HVideoSegmentResponse);

HVideoSegmentResponse::HVideoSegmentResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

HVideoSegmentResponse::HVideoSegmentResponse(const HVideoSegmentResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HVideoSegmentResponse::~HVideoSegmentResponse()
{
}

HVideoSegmentResponse& HVideoSegmentResponse::operator=(const HVideoSegmentResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HVideoSegmentResponse::copy(const HVideoSegmentResponse& other)
{
}

void HVideoSegmentResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void HVideoSegmentResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class HVideoSegmentResponseDescriptor : public cClassDescriptor
{
  public:
    HVideoSegmentResponseDescriptor();
    virtual ~HVideoSegmentResponseDescriptor();

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

Register_ClassDescriptor(HVideoSegmentResponseDescriptor);

HVideoSegmentResponseDescriptor::HVideoSegmentResponseDescriptor() : cClassDescriptor("HVideoSegmentResponse", "BaseResponseMessage")
{
}

HVideoSegmentResponseDescriptor::~HVideoSegmentResponseDescriptor()
{
}

bool HVideoSegmentResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HVideoSegmentResponse *>(obj)!=NULL;
}

const char *HVideoSegmentResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HVideoSegmentResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HVideoSegmentResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HVideoSegmentResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HVideoSegmentResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HVideoSegmentResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HVideoSegmentResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HVideoSegmentResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentResponse *pp = (HVideoSegmentResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HVideoSegmentResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentResponse *pp = (HVideoSegmentResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HVideoSegmentResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentResponse *pp = (HVideoSegmentResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HVideoSegmentResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HVideoSegmentResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HVideoSegmentResponse *pp = (HVideoSegmentResponse *)object; (void)pp;
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

Register_Class(HScheduleSegmentsCall);

HScheduleSegmentsCall::HScheduleSegmentsCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->startSegmentID_var = 0;
    this->count_var = 0;
}

HScheduleSegmentsCall::HScheduleSegmentsCall(const HScheduleSegmentsCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HScheduleSegmentsCall::~HScheduleSegmentsCall()
{
}

HScheduleSegmentsCall& HScheduleSegmentsCall::operator=(const HScheduleSegmentsCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HScheduleSegmentsCall::copy(const HScheduleSegmentsCall& other)
{
    this->startSegmentID_var = other.startSegmentID_var;
    this->count_var = other.count_var;
}

void HScheduleSegmentsCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->startSegmentID_var);
    doPacking(b,this->count_var);
}

void HScheduleSegmentsCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->startSegmentID_var);
    doUnpacking(b,this->count_var);
}

int HScheduleSegmentsCall::getStartSegmentID() const
{
    return startSegmentID_var;
}

void HScheduleSegmentsCall::setStartSegmentID(int startSegmentID)
{
    this->startSegmentID_var = startSegmentID;
}

int HScheduleSegmentsCall::getCount() const
{
    return count_var;
}

void HScheduleSegmentsCall::setCount(int count)
{
    this->count_var = count;
}

class HScheduleSegmentsCallDescriptor : public cClassDescriptor
{
  public:
    HScheduleSegmentsCallDescriptor();
    virtual ~HScheduleSegmentsCallDescriptor();

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

Register_ClassDescriptor(HScheduleSegmentsCallDescriptor);

HScheduleSegmentsCallDescriptor::HScheduleSegmentsCallDescriptor() : cClassDescriptor("HScheduleSegmentsCall", "BaseCallMessage")
{
}

HScheduleSegmentsCallDescriptor::~HScheduleSegmentsCallDescriptor()
{
}

bool HScheduleSegmentsCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HScheduleSegmentsCall *>(obj)!=NULL;
}

const char *HScheduleSegmentsCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HScheduleSegmentsCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HScheduleSegmentsCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HScheduleSegmentsCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "startSegmentID",
        "count",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HScheduleSegmentsCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "startSegmentID")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "count")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HScheduleSegmentsCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HScheduleSegmentsCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HScheduleSegmentsCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsCall *pp = (HScheduleSegmentsCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HScheduleSegmentsCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsCall *pp = (HScheduleSegmentsCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStartSegmentID());
        case 1: return long2string(pp->getCount());
        default: return "";
    }
}

bool HScheduleSegmentsCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsCall *pp = (HScheduleSegmentsCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setStartSegmentID(string2long(value)); return true;
        case 1: pp->setCount(string2long(value)); return true;
        default: return false;
    }
}

const char *HScheduleSegmentsCallDescriptor::getFieldStructName(void *object, int field) const
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

void *HScheduleSegmentsCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsCall *pp = (HScheduleSegmentsCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HScheduleSegmentsResponse);

HScheduleSegmentsResponse::HScheduleSegmentsResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    segments_arraysize = 0;
    this->segments_var = 0;
}

HScheduleSegmentsResponse::HScheduleSegmentsResponse(const HScheduleSegmentsResponse& other) : BaseResponseMessage(other)
{
    segments_arraysize = 0;
    this->segments_var = 0;
    copy(other);
}

HScheduleSegmentsResponse::~HScheduleSegmentsResponse()
{
    delete [] segments_var;
}

HScheduleSegmentsResponse& HScheduleSegmentsResponse::operator=(const HScheduleSegmentsResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HScheduleSegmentsResponse::copy(const HScheduleSegmentsResponse& other)
{
    delete [] this->segments_var;
    this->segments_var = (other.segments_arraysize==0) ? NULL : new HVideoSegment[other.segments_arraysize];
    segments_arraysize = other.segments_arraysize;
    for (unsigned int i=0; i<segments_arraysize; i++)
        this->segments_var[i] = other.segments_var[i];
}

void HScheduleSegmentsResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(segments_arraysize);
    doPacking(b,this->segments_var,segments_arraysize);
}

void HScheduleSegmentsResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->segments_var;
    b->unpack(segments_arraysize);
    if (segments_arraysize==0) {
        this->segments_var = 0;
    } else {
        this->segments_var = new HVideoSegment[segments_arraysize];
        doUnpacking(b,this->segments_var,segments_arraysize);
    }
}

void HScheduleSegmentsResponse::setSegmentsArraySize(unsigned int size)
{
    HVideoSegment *segments_var2 = (size==0) ? NULL : new HVideoSegment[size];
    unsigned int sz = segments_arraysize < size ? segments_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        segments_var2[i] = this->segments_var[i];
    segments_arraysize = size;
    delete [] this->segments_var;
    this->segments_var = segments_var2;
}

unsigned int HScheduleSegmentsResponse::getSegmentsArraySize() const
{
    return segments_arraysize;
}

HVideoSegment& HScheduleSegmentsResponse::getSegments(unsigned int k)
{
    if (k>=segments_arraysize) throw cRuntimeError("Array of size %d indexed by %d", segments_arraysize, k);
    return segments_var[k];
}

void HScheduleSegmentsResponse::setSegments(unsigned int k, const HVideoSegment& segments)
{
    if (k>=segments_arraysize) throw cRuntimeError("Array of size %d indexed by %d", segments_arraysize, k);
    this->segments_var[k] = segments;
}

class HScheduleSegmentsResponseDescriptor : public cClassDescriptor
{
  public:
    HScheduleSegmentsResponseDescriptor();
    virtual ~HScheduleSegmentsResponseDescriptor();

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

Register_ClassDescriptor(HScheduleSegmentsResponseDescriptor);

HScheduleSegmentsResponseDescriptor::HScheduleSegmentsResponseDescriptor() : cClassDescriptor("HScheduleSegmentsResponse", "BaseResponseMessage")
{
}

HScheduleSegmentsResponseDescriptor::~HScheduleSegmentsResponseDescriptor()
{
}

bool HScheduleSegmentsResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HScheduleSegmentsResponse *>(obj)!=NULL;
}

const char *HScheduleSegmentsResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HScheduleSegmentsResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HScheduleSegmentsResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HScheduleSegmentsResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "segments",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HScheduleSegmentsResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "segments")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HScheduleSegmentsResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "HVideoSegment",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HScheduleSegmentsResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HScheduleSegmentsResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsResponse *pp = (HScheduleSegmentsResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getSegmentsArraySize();
        default: return 0;
    }
}

std::string HScheduleSegmentsResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsResponse *pp = (HScheduleSegmentsResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSegments(i); return out.str();}
        default: return "";
    }
}

bool HScheduleSegmentsResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsResponse *pp = (HScheduleSegmentsResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HScheduleSegmentsResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "HVideoSegment",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *HScheduleSegmentsResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HScheduleSegmentsResponse *pp = (HScheduleSegmentsResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSegments(i)); break;
        default: return NULL;
    }
}

Register_Class(HSwitchToRescueModeCall);

HSwitchToRescueModeCall::HSwitchToRescueModeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HSwitchToRescueModeCall::HSwitchToRescueModeCall(const HSwitchToRescueModeCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HSwitchToRescueModeCall::~HSwitchToRescueModeCall()
{
}

HSwitchToRescueModeCall& HSwitchToRescueModeCall::operator=(const HSwitchToRescueModeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HSwitchToRescueModeCall::copy(const HSwitchToRescueModeCall& other)
{
}

void HSwitchToRescueModeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HSwitchToRescueModeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HSwitchToRescueModeCallDescriptor : public cClassDescriptor
{
  public:
    HSwitchToRescueModeCallDescriptor();
    virtual ~HSwitchToRescueModeCallDescriptor();

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

Register_ClassDescriptor(HSwitchToRescueModeCallDescriptor);

HSwitchToRescueModeCallDescriptor::HSwitchToRescueModeCallDescriptor() : cClassDescriptor("HSwitchToRescueModeCall", "BaseCallMessage")
{
}

HSwitchToRescueModeCallDescriptor::~HSwitchToRescueModeCallDescriptor()
{
}

bool HSwitchToRescueModeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HSwitchToRescueModeCall *>(obj)!=NULL;
}

const char *HSwitchToRescueModeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HSwitchToRescueModeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HSwitchToRescueModeCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HSwitchToRescueModeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HSwitchToRescueModeCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HSwitchToRescueModeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HSwitchToRescueModeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HSwitchToRescueModeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HSwitchToRescueModeCall *pp = (HSwitchToRescueModeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HSwitchToRescueModeCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HSwitchToRescueModeCall *pp = (HSwitchToRescueModeCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HSwitchToRescueModeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HSwitchToRescueModeCall *pp = (HSwitchToRescueModeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HSwitchToRescueModeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HSwitchToRescueModeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HSwitchToRescueModeCall *pp = (HSwitchToRescueModeCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HDeathAcknowledgementCall);

HDeathAcknowledgementCall::HDeathAcknowledgementCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HDeathAcknowledgementCall::HDeathAcknowledgementCall(const HDeathAcknowledgementCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HDeathAcknowledgementCall::~HDeathAcknowledgementCall()
{
}

HDeathAcknowledgementCall& HDeathAcknowledgementCall::operator=(const HDeathAcknowledgementCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HDeathAcknowledgementCall::copy(const HDeathAcknowledgementCall& other)
{
}

void HDeathAcknowledgementCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HDeathAcknowledgementCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HDeathAcknowledgementCallDescriptor : public cClassDescriptor
{
  public:
    HDeathAcknowledgementCallDescriptor();
    virtual ~HDeathAcknowledgementCallDescriptor();

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

Register_ClassDescriptor(HDeathAcknowledgementCallDescriptor);

HDeathAcknowledgementCallDescriptor::HDeathAcknowledgementCallDescriptor() : cClassDescriptor("HDeathAcknowledgementCall", "BaseCallMessage")
{
}

HDeathAcknowledgementCallDescriptor::~HDeathAcknowledgementCallDescriptor()
{
}

bool HDeathAcknowledgementCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HDeathAcknowledgementCall *>(obj)!=NULL;
}

const char *HDeathAcknowledgementCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HDeathAcknowledgementCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HDeathAcknowledgementCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HDeathAcknowledgementCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HDeathAcknowledgementCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HDeathAcknowledgementCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HDeathAcknowledgementCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HDeathAcknowledgementCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HDeathAcknowledgementCall *pp = (HDeathAcknowledgementCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HDeathAcknowledgementCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HDeathAcknowledgementCall *pp = (HDeathAcknowledgementCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HDeathAcknowledgementCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HDeathAcknowledgementCall *pp = (HDeathAcknowledgementCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HDeathAcknowledgementCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HDeathAcknowledgementCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HDeathAcknowledgementCall *pp = (HDeathAcknowledgementCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HGetChildrenCall);

HGetChildrenCall::HGetChildrenCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->forGrandChildrenAccumulation_var = 0;
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
    this->forGrandChildrenAccumulation_var = other.forGrandChildrenAccumulation_var;
}

void HGetChildrenCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->forGrandChildrenAccumulation_var);
}

void HGetChildrenCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->forGrandChildrenAccumulation_var);
}

int HGetChildrenCall::getForGrandChildrenAccumulation() const
{
    return forGrandChildrenAccumulation_var;
}

void HGetChildrenCall::setForGrandChildrenAccumulation(int forGrandChildrenAccumulation)
{
    this->forGrandChildrenAccumulation_var = forGrandChildrenAccumulation;
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
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HGetChildrenCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HGetChildrenCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "forGrandChildrenAccumulation",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HGetChildrenCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "forGrandChildrenAccumulation")==0) return base+0;
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
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
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
        case 0: return long2string(pp->getForGrandChildrenAccumulation());
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
        case 0: pp->setForGrandChildrenAccumulation(string2long(value)); return true;
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
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
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
    this->forGrandChildrenAccumulation_var = 0;
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
    this->forGrandChildrenAccumulation_var = other.forGrandChildrenAccumulation_var;
    delete [] this->children_var;
    this->children_var = (other.children_arraysize==0) ? NULL : new NodeHandle[other.children_arraysize];
    children_arraysize = other.children_arraysize;
    for (unsigned int i=0; i<children_arraysize; i++)
        this->children_var[i] = other.children_var[i];
}

void HGetChildrenResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->forGrandChildrenAccumulation_var);
    b->pack(children_arraysize);
    doPacking(b,this->children_var,children_arraysize);
}

void HGetChildrenResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->forGrandChildrenAccumulation_var);
    delete [] this->children_var;
    b->unpack(children_arraysize);
    if (children_arraysize==0) {
        this->children_var = 0;
    } else {
        this->children_var = new NodeHandle[children_arraysize];
        doUnpacking(b,this->children_var,children_arraysize);
    }
}

int HGetChildrenResponse::getForGrandChildrenAccumulation() const
{
    return forGrandChildrenAccumulation_var;
}

void HGetChildrenResponse::setForGrandChildrenAccumulation(int forGrandChildrenAccumulation)
{
    this->forGrandChildrenAccumulation_var = forGrandChildrenAccumulation;
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
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
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
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
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
        "forGrandChildrenAccumulation",
        "children",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HGetChildrenResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "forGrandChildrenAccumulation")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "children")==0) return base+1;
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
        "int",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
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
        case 1: return pp->getChildrenArraySize();
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
        case 0: return long2string(pp->getForGrandChildrenAccumulation());
        case 1: {std::stringstream out; out << pp->getChildren(i); return out.str();}
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
        case 0: pp->setForGrandChildrenAccumulation(string2long(value)); return true;
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
        NULL,
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
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
        case 1: return (void *)(&pp->getChildren(i)); break;
        default: return NULL;
    }
}

Register_Class(HRegisterInBootstrappingCall);

HRegisterInBootstrappingCall::HRegisterInBootstrappingCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

HRegisterInBootstrappingCall::HRegisterInBootstrappingCall(const HRegisterInBootstrappingCall& other) : BaseCallMessage(other)
{
    copy(other);
}

HRegisterInBootstrappingCall::~HRegisterInBootstrappingCall()
{
}

HRegisterInBootstrappingCall& HRegisterInBootstrappingCall::operator=(const HRegisterInBootstrappingCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void HRegisterInBootstrappingCall::copy(const HRegisterInBootstrappingCall& other)
{
}

void HRegisterInBootstrappingCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void HRegisterInBootstrappingCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class HRegisterInBootstrappingCallDescriptor : public cClassDescriptor
{
  public:
    HRegisterInBootstrappingCallDescriptor();
    virtual ~HRegisterInBootstrappingCallDescriptor();

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

Register_ClassDescriptor(HRegisterInBootstrappingCallDescriptor);

HRegisterInBootstrappingCallDescriptor::HRegisterInBootstrappingCallDescriptor() : cClassDescriptor("HRegisterInBootstrappingCall", "BaseCallMessage")
{
}

HRegisterInBootstrappingCallDescriptor::~HRegisterInBootstrappingCallDescriptor()
{
}

bool HRegisterInBootstrappingCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HRegisterInBootstrappingCall *>(obj)!=NULL;
}

const char *HRegisterInBootstrappingCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HRegisterInBootstrappingCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HRegisterInBootstrappingCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HRegisterInBootstrappingCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HRegisterInBootstrappingCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HRegisterInBootstrappingCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HRegisterInBootstrappingCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HRegisterInBootstrappingCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingCall *pp = (HRegisterInBootstrappingCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HRegisterInBootstrappingCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingCall *pp = (HRegisterInBootstrappingCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HRegisterInBootstrappingCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingCall *pp = (HRegisterInBootstrappingCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HRegisterInBootstrappingCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HRegisterInBootstrappingCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingCall *pp = (HRegisterInBootstrappingCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HRegisterInBootstrappingResponse);

HRegisterInBootstrappingResponse::HRegisterInBootstrappingResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

HRegisterInBootstrappingResponse::HRegisterInBootstrappingResponse(const HRegisterInBootstrappingResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

HRegisterInBootstrappingResponse::~HRegisterInBootstrappingResponse()
{
}

HRegisterInBootstrappingResponse& HRegisterInBootstrappingResponse::operator=(const HRegisterInBootstrappingResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void HRegisterInBootstrappingResponse::copy(const HRegisterInBootstrappingResponse& other)
{
}

void HRegisterInBootstrappingResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void HRegisterInBootstrappingResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class HRegisterInBootstrappingResponseDescriptor : public cClassDescriptor
{
  public:
    HRegisterInBootstrappingResponseDescriptor();
    virtual ~HRegisterInBootstrappingResponseDescriptor();

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

Register_ClassDescriptor(HRegisterInBootstrappingResponseDescriptor);

HRegisterInBootstrappingResponseDescriptor::HRegisterInBootstrappingResponseDescriptor() : cClassDescriptor("HRegisterInBootstrappingResponse", "BaseResponseMessage")
{
}

HRegisterInBootstrappingResponseDescriptor::~HRegisterInBootstrappingResponseDescriptor()
{
}

bool HRegisterInBootstrappingResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HRegisterInBootstrappingResponse *>(obj)!=NULL;
}

const char *HRegisterInBootstrappingResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HRegisterInBootstrappingResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int HRegisterInBootstrappingResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *HRegisterInBootstrappingResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int HRegisterInBootstrappingResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HRegisterInBootstrappingResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *HRegisterInBootstrappingResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HRegisterInBootstrappingResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingResponse *pp = (HRegisterInBootstrappingResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HRegisterInBootstrappingResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingResponse *pp = (HRegisterInBootstrappingResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool HRegisterInBootstrappingResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingResponse *pp = (HRegisterInBootstrappingResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HRegisterInBootstrappingResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *HRegisterInBootstrappingResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HRegisterInBootstrappingResponse *pp = (HRegisterInBootstrappingResponse *)object; (void)pp;
    switch (field) {
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


