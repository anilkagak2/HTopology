//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/kbrtestapp/KBRTestMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "KBRTestMessage_m.h"

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




Register_Class(KBRTestMessage);

KBRTestMessage::KBRTestMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->id_var = 0;
    this->seqNum_var = 0;
    this->measurementPhase_var = 0;
    visitedNodes_arraysize = 0;
    this->visitedNodes_var = 0;
}

KBRTestMessage::KBRTestMessage(const KBRTestMessage& other) : cPacket(other)
{
    visitedNodes_arraysize = 0;
    this->visitedNodes_var = 0;
    copy(other);
}

KBRTestMessage::~KBRTestMessage()
{
    delete [] visitedNodes_var;
}

KBRTestMessage& KBRTestMessage::operator=(const KBRTestMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void KBRTestMessage::copy(const KBRTestMessage& other)
{
    this->id_var = other.id_var;
    this->seqNum_var = other.seqNum_var;
    this->measurementPhase_var = other.measurementPhase_var;
    delete [] this->visitedNodes_var;
    this->visitedNodes_var = (other.visitedNodes_arraysize==0) ? NULL : new IPvXAddress[other.visitedNodes_arraysize];
    visitedNodes_arraysize = other.visitedNodes_arraysize;
    for (unsigned int i=0; i<visitedNodes_arraysize; i++)
        this->visitedNodes_var[i] = other.visitedNodes_var[i];
}

void KBRTestMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->seqNum_var);
    doPacking(b,this->measurementPhase_var);
    b->pack(visitedNodes_arraysize);
    doPacking(b,this->visitedNodes_var,visitedNodes_arraysize);
}

void KBRTestMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->seqNum_var);
    doUnpacking(b,this->measurementPhase_var);
    delete [] this->visitedNodes_var;
    b->unpack(visitedNodes_arraysize);
    if (visitedNodes_arraysize==0) {
        this->visitedNodes_var = 0;
    } else {
        this->visitedNodes_var = new IPvXAddress[visitedNodes_arraysize];
        doUnpacking(b,this->visitedNodes_var,visitedNodes_arraysize);
    }
}

int KBRTestMessage::getId() const
{
    return id_var;
}

void KBRTestMessage::setId(int id)
{
    this->id_var = id;
}

int KBRTestMessage::getSeqNum() const
{
    return seqNum_var;
}

void KBRTestMessage::setSeqNum(int seqNum)
{
    this->seqNum_var = seqNum;
}

bool KBRTestMessage::getMeasurementPhase() const
{
    return measurementPhase_var;
}

void KBRTestMessage::setMeasurementPhase(bool measurementPhase)
{
    this->measurementPhase_var = measurementPhase;
}

void KBRTestMessage::setVisitedNodesArraySize(unsigned int size)
{
    IPvXAddress *visitedNodes_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = visitedNodes_arraysize < size ? visitedNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        visitedNodes_var2[i] = this->visitedNodes_var[i];
    visitedNodes_arraysize = size;
    delete [] this->visitedNodes_var;
    this->visitedNodes_var = visitedNodes_var2;
}

unsigned int KBRTestMessage::getVisitedNodesArraySize() const
{
    return visitedNodes_arraysize;
}

IPvXAddress& KBRTestMessage::getVisitedNodes(unsigned int k)
{
    if (k>=visitedNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedNodes_arraysize, k);
    return visitedNodes_var[k];
}

void KBRTestMessage::setVisitedNodes(unsigned int k, const IPvXAddress& visitedNodes)
{
    if (k>=visitedNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedNodes_arraysize, k);
    this->visitedNodes_var[k] = visitedNodes;
}

class KBRTestMessageDescriptor : public cClassDescriptor
{
  public:
    KBRTestMessageDescriptor();
    virtual ~KBRTestMessageDescriptor();

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

Register_ClassDescriptor(KBRTestMessageDescriptor);

KBRTestMessageDescriptor::KBRTestMessageDescriptor() : cClassDescriptor("KBRTestMessage", "cPacket")
{
}

KBRTestMessageDescriptor::~KBRTestMessageDescriptor()
{
}

bool KBRTestMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KBRTestMessage *>(obj)!=NULL;
}

const char *KBRTestMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KBRTestMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int KBRTestMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *KBRTestMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "seqNum",
        "measurementPhase",
        "visitedNodes",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int KBRTestMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "measurementPhase")==0) return base+2;
    if (fieldName[0]=='v' && strcmp(fieldName, "visitedNodes")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KBRTestMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "bool",
        "IPvXAddress",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *KBRTestMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KBRTestMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 3: return pp->getVisitedNodesArraySize();
        default: return 0;
    }
}

std::string KBRTestMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getSeqNum());
        case 2: return bool2string(pp->getMeasurementPhase());
        case 3: {std::stringstream out; out << pp->getVisitedNodes(i); return out.str();}
        default: return "";
    }
}

bool KBRTestMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setSeqNum(string2long(value)); return true;
        case 2: pp->setMeasurementPhase(string2bool(value)); return true;
        default: return false;
    }
}

const char *KBRTestMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "IPvXAddress",
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *KBRTestMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KBRTestMessage *pp = (KBRTestMessage *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getVisitedNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(KbrTestCall);

KbrTestCall::KbrTestCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

KbrTestCall::KbrTestCall(const KbrTestCall& other) : BaseCallMessage(other)
{
    copy(other);
}

KbrTestCall::~KbrTestCall()
{
}

KbrTestCall& KbrTestCall::operator=(const KbrTestCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void KbrTestCall::copy(const KbrTestCall& other)
{
}

void KbrTestCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void KbrTestCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class KbrTestCallDescriptor : public cClassDescriptor
{
  public:
    KbrTestCallDescriptor();
    virtual ~KbrTestCallDescriptor();

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

Register_ClassDescriptor(KbrTestCallDescriptor);

KbrTestCallDescriptor::KbrTestCallDescriptor() : cClassDescriptor("KbrTestCall", "BaseCallMessage")
{
}

KbrTestCallDescriptor::~KbrTestCallDescriptor()
{
}

bool KbrTestCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KbrTestCall *>(obj)!=NULL;
}

const char *KbrTestCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KbrTestCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int KbrTestCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *KbrTestCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int KbrTestCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KbrTestCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *KbrTestCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KbrTestCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string KbrTestCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool KbrTestCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KbrTestCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *KbrTestCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestCall *pp = (KbrTestCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(KbrTestResponse);

KbrTestResponse::KbrTestResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

KbrTestResponse::KbrTestResponse(const KbrTestResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

KbrTestResponse::~KbrTestResponse()
{
}

KbrTestResponse& KbrTestResponse::operator=(const KbrTestResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void KbrTestResponse::copy(const KbrTestResponse& other)
{
}

void KbrTestResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void KbrTestResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class KbrTestResponseDescriptor : public cClassDescriptor
{
  public:
    KbrTestResponseDescriptor();
    virtual ~KbrTestResponseDescriptor();

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

Register_ClassDescriptor(KbrTestResponseDescriptor);

KbrTestResponseDescriptor::KbrTestResponseDescriptor() : cClassDescriptor("KbrTestResponse", "BaseResponseMessage")
{
}

KbrTestResponseDescriptor::~KbrTestResponseDescriptor()
{
}

bool KbrTestResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KbrTestResponse *>(obj)!=NULL;
}

const char *KbrTestResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KbrTestResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int KbrTestResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *KbrTestResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int KbrTestResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KbrTestResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *KbrTestResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KbrTestResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string KbrTestResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool KbrTestResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KbrTestResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *KbrTestResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KbrTestResponse *pp = (KbrTestResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UnderlayTestCall);

UnderlayTestCall::UnderlayTestCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->sendTime_var = 0;
}

UnderlayTestCall::UnderlayTestCall(const UnderlayTestCall& other) : BaseCallMessage(other)
{
    copy(other);
}

UnderlayTestCall::~UnderlayTestCall()
{
}

UnderlayTestCall& UnderlayTestCall::operator=(const UnderlayTestCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void UnderlayTestCall::copy(const UnderlayTestCall& other)
{
    this->sendTime_var = other.sendTime_var;
}

void UnderlayTestCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->sendTime_var);
}

void UnderlayTestCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->sendTime_var);
}

simtime_t UnderlayTestCall::getSendTime() const
{
    return sendTime_var;
}

void UnderlayTestCall::setSendTime(simtime_t sendTime)
{
    this->sendTime_var = sendTime;
}

class UnderlayTestCallDescriptor : public cClassDescriptor
{
  public:
    UnderlayTestCallDescriptor();
    virtual ~UnderlayTestCallDescriptor();

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

Register_ClassDescriptor(UnderlayTestCallDescriptor);

UnderlayTestCallDescriptor::UnderlayTestCallDescriptor() : cClassDescriptor("UnderlayTestCall", "BaseCallMessage")
{
}

UnderlayTestCallDescriptor::~UnderlayTestCallDescriptor()
{
}

bool UnderlayTestCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnderlayTestCall *>(obj)!=NULL;
}

const char *UnderlayTestCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnderlayTestCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UnderlayTestCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UnderlayTestCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendTime",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UnderlayTestCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendTime")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnderlayTestCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "simtime_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UnderlayTestCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UnderlayTestCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestCall *pp = (UnderlayTestCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnderlayTestCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestCall *pp = (UnderlayTestCall *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getSendTime());
        default: return "";
    }
}

bool UnderlayTestCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestCall *pp = (UnderlayTestCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSendTime(string2double(value)); return true;
        default: return false;
    }
}

const char *UnderlayTestCallDescriptor::getFieldStructName(void *object, int field) const
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

void *UnderlayTestCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestCall *pp = (UnderlayTestCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UnderlayTestResponse);

UnderlayTestResponse::UnderlayTestResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->oneWayLatency_var = 0;
}

UnderlayTestResponse::UnderlayTestResponse(const UnderlayTestResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

UnderlayTestResponse::~UnderlayTestResponse()
{
}

UnderlayTestResponse& UnderlayTestResponse::operator=(const UnderlayTestResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void UnderlayTestResponse::copy(const UnderlayTestResponse& other)
{
    this->oneWayLatency_var = other.oneWayLatency_var;
}

void UnderlayTestResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->oneWayLatency_var);
}

void UnderlayTestResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->oneWayLatency_var);
}

simtime_t UnderlayTestResponse::getOneWayLatency() const
{
    return oneWayLatency_var;
}

void UnderlayTestResponse::setOneWayLatency(simtime_t oneWayLatency)
{
    this->oneWayLatency_var = oneWayLatency;
}

class UnderlayTestResponseDescriptor : public cClassDescriptor
{
  public:
    UnderlayTestResponseDescriptor();
    virtual ~UnderlayTestResponseDescriptor();

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

Register_ClassDescriptor(UnderlayTestResponseDescriptor);

UnderlayTestResponseDescriptor::UnderlayTestResponseDescriptor() : cClassDescriptor("UnderlayTestResponse", "BaseResponseMessage")
{
}

UnderlayTestResponseDescriptor::~UnderlayTestResponseDescriptor()
{
}

bool UnderlayTestResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnderlayTestResponse *>(obj)!=NULL;
}

const char *UnderlayTestResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnderlayTestResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UnderlayTestResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UnderlayTestResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "oneWayLatency",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UnderlayTestResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "oneWayLatency")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnderlayTestResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "simtime_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UnderlayTestResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UnderlayTestResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestResponse *pp = (UnderlayTestResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnderlayTestResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestResponse *pp = (UnderlayTestResponse *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getOneWayLatency());
        default: return "";
    }
}

bool UnderlayTestResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestResponse *pp = (UnderlayTestResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setOneWayLatency(string2double(value)); return true;
        default: return false;
    }
}

const char *UnderlayTestResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *UnderlayTestResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnderlayTestResponse *pp = (UnderlayTestResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(KbrRpcContext);

KbrRpcContext::KbrRpcContext() : cObject()
{
    this->destKey_var = OverlayKey::UNSPECIFIED_KEY;
    this->destAddr_var = TransportAddress::UNSPECIFIED_NODE;
    this->measurementPhase_var = 0;
}

KbrRpcContext::KbrRpcContext(const KbrRpcContext& other) : cObject(other)
{
    copy(other);
}

KbrRpcContext::~KbrRpcContext()
{
}

KbrRpcContext& KbrRpcContext::operator=(const KbrRpcContext& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    copy(other);
    return *this;
}

void KbrRpcContext::copy(const KbrRpcContext& other)
{
    this->destKey_var = other.destKey_var;
    this->destAddr_var = other.destAddr_var;
    this->measurementPhase_var = other.measurementPhase_var;
}

void KbrRpcContext::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->destKey_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->measurementPhase_var);
}

void KbrRpcContext::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->measurementPhase_var);
}

OverlayKey& KbrRpcContext::getDestKey()
{
    return destKey_var;
}

void KbrRpcContext::setDestKey(const OverlayKey& destKey)
{
    this->destKey_var = destKey;
}

TransportAddress& KbrRpcContext::getDestAddr()
{
    return destAddr_var;
}

void KbrRpcContext::setDestAddr(const TransportAddress& destAddr)
{
    this->destAddr_var = destAddr;
}

bool KbrRpcContext::getMeasurementPhase() const
{
    return measurementPhase_var;
}

void KbrRpcContext::setMeasurementPhase(bool measurementPhase)
{
    this->measurementPhase_var = measurementPhase;
}

class KbrRpcContextDescriptor : public cClassDescriptor
{
  public:
    KbrRpcContextDescriptor();
    virtual ~KbrRpcContextDescriptor();

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

Register_ClassDescriptor(KbrRpcContextDescriptor);

KbrRpcContextDescriptor::KbrRpcContextDescriptor() : cClassDescriptor("KbrRpcContext", "cObject")
{
}

KbrRpcContextDescriptor::~KbrRpcContextDescriptor()
{
}

bool KbrRpcContextDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KbrRpcContext *>(obj)!=NULL;
}

const char *KbrRpcContextDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KbrRpcContextDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int KbrRpcContextDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *KbrRpcContextDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destKey",
        "destAddr",
        "measurementPhase",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int KbrRpcContextDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destKey")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "measurementPhase")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KbrRpcContextDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "TransportAddress",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *KbrRpcContextDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KbrRpcContextDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string KbrRpcContextDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 2: return bool2string(pp->getMeasurementPhase());
        default: return "";
    }
}

bool KbrRpcContextDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        case 2: pp->setMeasurementPhase(string2bool(value)); return true;
        default: return false;
    }
}

const char *KbrRpcContextDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *KbrRpcContextDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KbrRpcContext *pp = (KbrRpcContext *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        case 1: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


