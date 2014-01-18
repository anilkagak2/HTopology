//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/broose/BrooseMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BrooseMessage_m.h"

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
    cEnum *e = cEnum::find("BucketType");
    if (!e) enums.getInstance()->add(e = new cEnum("BucketType"));
    e->insert(RIGHT, "RIGHT");
    e->insert(LEFT, "LEFT");
    e->insert(BROTHER, "BROTHER");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("ProState");
    if (!e) enums.getInstance()->add(e = new cEnum("ProState"));
    e->insert(PINIT, "PINIT");
    e->insert(PRSET, "PRSET");
    e->insert(PBSET, "PBSET");
    e->insert(PREADY, "PREADY");
);

Register_Class(BucketCall);

BucketCall::BucketCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->bucketType_var = 0;
    this->bucketIndex_var = 0;
    this->proState_var = 0;
}

BucketCall::BucketCall(const BucketCall& other) : BaseCallMessage(other)
{
    copy(other);
}

BucketCall::~BucketCall()
{
}

BucketCall& BucketCall::operator=(const BucketCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void BucketCall::copy(const BucketCall& other)
{
    this->bucketType_var = other.bucketType_var;
    this->bucketIndex_var = other.bucketIndex_var;
    this->proState_var = other.proState_var;
}

void BucketCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->bucketType_var);
    doPacking(b,this->bucketIndex_var);
    doPacking(b,this->proState_var);
}

void BucketCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->bucketType_var);
    doUnpacking(b,this->bucketIndex_var);
    doUnpacking(b,this->proState_var);
}

int BucketCall::getBucketType() const
{
    return bucketType_var;
}

void BucketCall::setBucketType(int bucketType)
{
    this->bucketType_var = bucketType;
}

int BucketCall::getBucketIndex() const
{
    return bucketIndex_var;
}

void BucketCall::setBucketIndex(int bucketIndex)
{
    this->bucketIndex_var = bucketIndex;
}

int BucketCall::getProState() const
{
    return proState_var;
}

void BucketCall::setProState(int proState)
{
    this->proState_var = proState;
}

class BucketCallDescriptor : public cClassDescriptor
{
  public:
    BucketCallDescriptor();
    virtual ~BucketCallDescriptor();

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

Register_ClassDescriptor(BucketCallDescriptor);

BucketCallDescriptor::BucketCallDescriptor() : cClassDescriptor("BucketCall", "BaseCallMessage")
{
}

BucketCallDescriptor::~BucketCallDescriptor()
{
}

bool BucketCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BucketCall *>(obj)!=NULL;
}

const char *BucketCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BucketCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int BucketCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BucketCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bucketType",
        "bucketIndex",
        "proState",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int BucketCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bucketType")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bucketIndex")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "proState")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BucketCallDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *BucketCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "BucketType";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"enum")) return "ProState";
            return NULL;
        default: return NULL;
    }
}

int BucketCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BucketCall *pp = (BucketCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BucketCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BucketCall *pp = (BucketCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getBucketType());
        case 1: return long2string(pp->getBucketIndex());
        case 2: return long2string(pp->getProState());
        default: return "";
    }
}

bool BucketCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BucketCall *pp = (BucketCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setBucketType(string2long(value)); return true;
        case 1: pp->setBucketIndex(string2long(value)); return true;
        case 2: pp->setProState(string2long(value)); return true;
        default: return false;
    }
}

const char *BucketCallDescriptor::getFieldStructName(void *object, int field) const
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

void *BucketCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BucketCall *pp = (BucketCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BucketResponse);

BucketResponse::BucketResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    nodes_arraysize = 0;
    this->nodes_var = 0;
}

BucketResponse::BucketResponse(const BucketResponse& other) : BaseResponseMessage(other)
{
    nodes_arraysize = 0;
    this->nodes_var = 0;
    copy(other);
}

BucketResponse::~BucketResponse()
{
    delete [] nodes_var;
}

BucketResponse& BucketResponse::operator=(const BucketResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void BucketResponse::copy(const BucketResponse& other)
{
    delete [] this->nodes_var;
    this->nodes_var = (other.nodes_arraysize==0) ? NULL : new NodeHandle[other.nodes_arraysize];
    nodes_arraysize = other.nodes_arraysize;
    for (unsigned int i=0; i<nodes_arraysize; i++)
        this->nodes_var[i] = other.nodes_var[i];
}

void BucketResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(nodes_arraysize);
    doPacking(b,this->nodes_var,nodes_arraysize);
}

void BucketResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->nodes_var;
    b->unpack(nodes_arraysize);
    if (nodes_arraysize==0) {
        this->nodes_var = 0;
    } else {
        this->nodes_var = new NodeHandle[nodes_arraysize];
        doUnpacking(b,this->nodes_var,nodes_arraysize);
    }
}

void BucketResponse::setNodesArraySize(unsigned int size)
{
    NodeHandle *nodes_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = nodes_arraysize < size ? nodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nodes_var2[i] = this->nodes_var[i];
    nodes_arraysize = size;
    delete [] this->nodes_var;
    this->nodes_var = nodes_var2;
}

unsigned int BucketResponse::getNodesArraySize() const
{
    return nodes_arraysize;
}

NodeHandle& BucketResponse::getNodes(unsigned int k)
{
    if (k>=nodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nodes_arraysize, k);
    return nodes_var[k];
}

void BucketResponse::setNodes(unsigned int k, const NodeHandle& nodes)
{
    if (k>=nodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nodes_arraysize, k);
    this->nodes_var[k] = nodes;
}

class BucketResponseDescriptor : public cClassDescriptor
{
  public:
    BucketResponseDescriptor();
    virtual ~BucketResponseDescriptor();

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

Register_ClassDescriptor(BucketResponseDescriptor);

BucketResponseDescriptor::BucketResponseDescriptor() : cClassDescriptor("BucketResponse", "BaseResponseMessage")
{
}

BucketResponseDescriptor::~BucketResponseDescriptor()
{
}

bool BucketResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BucketResponse *>(obj)!=NULL;
}

const char *BucketResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BucketResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BucketResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BucketResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodes",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int BucketResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodes")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BucketResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *BucketResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BucketResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BucketResponse *pp = (BucketResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNodesArraySize();
        default: return 0;
    }
}

std::string BucketResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BucketResponse *pp = (BucketResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNodes(i); return out.str();}
        default: return "";
    }
}

bool BucketResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BucketResponse *pp = (BucketResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BucketResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *BucketResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BucketResponse *pp = (BucketResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(BrooseFindNodeExtMessage);

BrooseFindNodeExtMessage::BrooseFindNodeExtMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->step_var = 0;
    this->maxDistance_var = 0;
    this->rightShifting_var = 0;
}

BrooseFindNodeExtMessage::BrooseFindNodeExtMessage(const BrooseFindNodeExtMessage& other) : cPacket(other)
{
    copy(other);
}

BrooseFindNodeExtMessage::~BrooseFindNodeExtMessage()
{
}

BrooseFindNodeExtMessage& BrooseFindNodeExtMessage::operator=(const BrooseFindNodeExtMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void BrooseFindNodeExtMessage::copy(const BrooseFindNodeExtMessage& other)
{
    this->routeKey_var = other.routeKey_var;
    this->step_var = other.step_var;
    this->maxDistance_var = other.maxDistance_var;
    this->rightShifting_var = other.rightShifting_var;
    this->lastNode_var = other.lastNode_var;
}

void BrooseFindNodeExtMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->routeKey_var);
    doPacking(b,this->step_var);
    doPacking(b,this->maxDistance_var);
    doPacking(b,this->rightShifting_var);
    doPacking(b,this->lastNode_var);
}

void BrooseFindNodeExtMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->routeKey_var);
    doUnpacking(b,this->step_var);
    doUnpacking(b,this->maxDistance_var);
    doUnpacking(b,this->rightShifting_var);
    doUnpacking(b,this->lastNode_var);
}

OverlayKey& BrooseFindNodeExtMessage::getRouteKey()
{
    return routeKey_var;
}

void BrooseFindNodeExtMessage::setRouteKey(const OverlayKey& routeKey)
{
    this->routeKey_var = routeKey;
}

int BrooseFindNodeExtMessage::getStep() const
{
    return step_var;
}

void BrooseFindNodeExtMessage::setStep(int step)
{
    this->step_var = step;
}

int BrooseFindNodeExtMessage::getMaxDistance() const
{
    return maxDistance_var;
}

void BrooseFindNodeExtMessage::setMaxDistance(int maxDistance)
{
    this->maxDistance_var = maxDistance;
}

bool BrooseFindNodeExtMessage::getRightShifting() const
{
    return rightShifting_var;
}

void BrooseFindNodeExtMessage::setRightShifting(bool rightShifting)
{
    this->rightShifting_var = rightShifting;
}

NodeHandle& BrooseFindNodeExtMessage::getLastNode()
{
    return lastNode_var;
}

void BrooseFindNodeExtMessage::setLastNode(const NodeHandle& lastNode)
{
    this->lastNode_var = lastNode;
}

class BrooseFindNodeExtMessageDescriptor : public cClassDescriptor
{
  public:
    BrooseFindNodeExtMessageDescriptor();
    virtual ~BrooseFindNodeExtMessageDescriptor();

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

Register_ClassDescriptor(BrooseFindNodeExtMessageDescriptor);

BrooseFindNodeExtMessageDescriptor::BrooseFindNodeExtMessageDescriptor() : cClassDescriptor("BrooseFindNodeExtMessage", "cPacket")
{
}

BrooseFindNodeExtMessageDescriptor::~BrooseFindNodeExtMessageDescriptor()
{
}

bool BrooseFindNodeExtMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BrooseFindNodeExtMessage *>(obj)!=NULL;
}

const char *BrooseFindNodeExtMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BrooseFindNodeExtMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int BrooseFindNodeExtMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *BrooseFindNodeExtMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "routeKey",
        "step",
        "maxDistance",
        "rightShifting",
        "lastNode",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int BrooseFindNodeExtMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routeKey")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "step")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxDistance")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "rightShifting")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastNode")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BrooseFindNodeExtMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "int",
        "int",
        "bool",
        "NodeHandle",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *BrooseFindNodeExtMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BrooseFindNodeExtMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BrooseFindNodeExtMessage *pp = (BrooseFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BrooseFindNodeExtMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BrooseFindNodeExtMessage *pp = (BrooseFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRouteKey(); return out.str();}
        case 1: return long2string(pp->getStep());
        case 2: return long2string(pp->getMaxDistance());
        case 3: return bool2string(pp->getRightShifting());
        case 4: {std::stringstream out; out << pp->getLastNode(); return out.str();}
        default: return "";
    }
}

bool BrooseFindNodeExtMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BrooseFindNodeExtMessage *pp = (BrooseFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setStep(string2long(value)); return true;
        case 2: pp->setMaxDistance(string2long(value)); return true;
        case 3: pp->setRightShifting(string2bool(value)); return true;
        default: return false;
    }
}

const char *BrooseFindNodeExtMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        NULL,
        NULL,
        NULL,
        "NodeHandle",
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *BrooseFindNodeExtMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BrooseFindNodeExtMessage *pp = (BrooseFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRouteKey()); break;
        case 4: return (void *)(&pp->getLastNode()); break;
        default: return NULL;
    }
}


