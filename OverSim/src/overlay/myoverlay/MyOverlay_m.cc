//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/myoverlay/MyOverlay.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "MyOverlay_m.h"

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




Register_Class(MyNeighborCall);

MyNeighborCall::MyNeighborCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

MyNeighborCall::MyNeighborCall(const MyNeighborCall& other) : BaseCallMessage(other)
{
    copy(other);
}

MyNeighborCall::~MyNeighborCall()
{
}

MyNeighborCall& MyNeighborCall::operator=(const MyNeighborCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void MyNeighborCall::copy(const MyNeighborCall& other)
{
    this->destinationKey_var = other.destinationKey_var;
}

void MyNeighborCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->destinationKey_var);
}

void MyNeighborCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->destinationKey_var);
}

OverlayKey& MyNeighborCall::getDestinationKey()
{
    return destinationKey_var;
}

void MyNeighborCall::setDestinationKey(const OverlayKey& destinationKey)
{
    this->destinationKey_var = destinationKey;
}

class MyNeighborCallDescriptor : public cClassDescriptor
{
  public:
    MyNeighborCallDescriptor();
    virtual ~MyNeighborCallDescriptor();

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

Register_ClassDescriptor(MyNeighborCallDescriptor);

MyNeighborCallDescriptor::MyNeighborCallDescriptor() : cClassDescriptor("MyNeighborCall", "BaseCallMessage")
{
}

MyNeighborCallDescriptor::~MyNeighborCallDescriptor()
{
}

bool MyNeighborCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MyNeighborCall *>(obj)!=NULL;
}

const char *MyNeighborCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MyNeighborCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int MyNeighborCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *MyNeighborCallDescriptor::getFieldName(void *object, int field) const
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

int MyNeighborCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationKey")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MyNeighborCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *MyNeighborCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MyNeighborCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborCall *pp = (MyNeighborCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MyNeighborCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborCall *pp = (MyNeighborCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestinationKey(); return out.str();}
        default: return "";
    }
}

bool MyNeighborCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborCall *pp = (MyNeighborCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MyNeighborCallDescriptor::getFieldStructName(void *object, int field) const
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

void *MyNeighborCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborCall *pp = (MyNeighborCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestinationKey()); break;
        default: return NULL;
    }
}

Register_Class(MyNeighborResponse);

MyNeighborResponse::MyNeighborResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

MyNeighborResponse::MyNeighborResponse(const MyNeighborResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

MyNeighborResponse::~MyNeighborResponse()
{
}

MyNeighborResponse& MyNeighborResponse::operator=(const MyNeighborResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void MyNeighborResponse::copy(const MyNeighborResponse& other)
{
    this->respondingNode_var = other.respondingNode_var;
    this->prevNeighbor_var = other.prevNeighbor_var;
    this->nextNeighbor_var = other.nextNeighbor_var;
}

void MyNeighborResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->respondingNode_var);
    doPacking(b,this->prevNeighbor_var);
    doPacking(b,this->nextNeighbor_var);
}

void MyNeighborResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->respondingNode_var);
    doUnpacking(b,this->prevNeighbor_var);
    doUnpacking(b,this->nextNeighbor_var);
}

NodeHandle& MyNeighborResponse::getRespondingNode()
{
    return respondingNode_var;
}

void MyNeighborResponse::setRespondingNode(const NodeHandle& respondingNode)
{
    this->respondingNode_var = respondingNode;
}

NodeHandle& MyNeighborResponse::getPrevNeighbor()
{
    return prevNeighbor_var;
}

void MyNeighborResponse::setPrevNeighbor(const NodeHandle& prevNeighbor)
{
    this->prevNeighbor_var = prevNeighbor;
}

NodeHandle& MyNeighborResponse::getNextNeighbor()
{
    return nextNeighbor_var;
}

void MyNeighborResponse::setNextNeighbor(const NodeHandle& nextNeighbor)
{
    this->nextNeighbor_var = nextNeighbor;
}

class MyNeighborResponseDescriptor : public cClassDescriptor
{
  public:
    MyNeighborResponseDescriptor();
    virtual ~MyNeighborResponseDescriptor();

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

Register_ClassDescriptor(MyNeighborResponseDescriptor);

MyNeighborResponseDescriptor::MyNeighborResponseDescriptor() : cClassDescriptor("MyNeighborResponse", "BaseResponseMessage")
{
}

MyNeighborResponseDescriptor::~MyNeighborResponseDescriptor()
{
}

bool MyNeighborResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MyNeighborResponse *>(obj)!=NULL;
}

const char *MyNeighborResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MyNeighborResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int MyNeighborResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *MyNeighborResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "respondingNode",
        "prevNeighbor",
        "nextNeighbor",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int MyNeighborResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "respondingNode")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "prevNeighbor")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextNeighbor")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MyNeighborResponseDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *MyNeighborResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MyNeighborResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborResponse *pp = (MyNeighborResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MyNeighborResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborResponse *pp = (MyNeighborResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRespondingNode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPrevNeighbor(); return out.str();}
        case 2: {std::stringstream out; out << pp->getNextNeighbor(); return out.str();}
        default: return "";
    }
}

bool MyNeighborResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborResponse *pp = (MyNeighborResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MyNeighborResponseDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *MyNeighborResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MyNeighborResponse *pp = (MyNeighborResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRespondingNode()); break;
        case 1: return (void *)(&pp->getPrevNeighbor()); break;
        case 2: return (void *)(&pp->getNextNeighbor()); break;
        default: return NULL;
    }
}


