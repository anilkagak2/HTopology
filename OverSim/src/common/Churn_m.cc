//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/Churn.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Churn_m.h"

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




Register_Class(ChurnMessage);

ChurnMessage::ChurnMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->createNode_var = 0;
    this->lifetime_var = 0;
    this->contextPos_var = 0;
}

ChurnMessage::ChurnMessage(const ChurnMessage& other) : cPacket(other)
{
    copy(other);
}

ChurnMessage::~ChurnMessage()
{
}

ChurnMessage& ChurnMessage::operator=(const ChurnMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void ChurnMessage::copy(const ChurnMessage& other)
{
    this->createNode_var = other.createNode_var;
    this->lifetime_var = other.lifetime_var;
    this->contextPos_var = other.contextPos_var;
    this->addr_var = other.addr_var;
}

void ChurnMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->createNode_var);
    doPacking(b,this->lifetime_var);
    doPacking(b,this->contextPos_var);
    doPacking(b,this->addr_var);
}

void ChurnMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->createNode_var);
    doUnpacking(b,this->lifetime_var);
    doUnpacking(b,this->contextPos_var);
    doUnpacking(b,this->addr_var);
}

bool ChurnMessage::getCreateNode() const
{
    return createNode_var;
}

void ChurnMessage::setCreateNode(bool createNode)
{
    this->createNode_var = createNode;
}

double ChurnMessage::getLifetime() const
{
    return lifetime_var;
}

void ChurnMessage::setLifetime(double lifetime)
{
    this->lifetime_var = lifetime;
}

int ChurnMessage::getContextPos() const
{
    return contextPos_var;
}

void ChurnMessage::setContextPos(int contextPos)
{
    this->contextPos_var = contextPos;
}

TransportAddress& ChurnMessage::getAddr()
{
    return addr_var;
}

void ChurnMessage::setAddr(const TransportAddress& addr)
{
    this->addr_var = addr;
}

class ChurnMessageDescriptor : public cClassDescriptor
{
  public:
    ChurnMessageDescriptor();
    virtual ~ChurnMessageDescriptor();

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

Register_ClassDescriptor(ChurnMessageDescriptor);

ChurnMessageDescriptor::ChurnMessageDescriptor() : cClassDescriptor("ChurnMessage", "cPacket")
{
}

ChurnMessageDescriptor::~ChurnMessageDescriptor()
{
}

bool ChurnMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChurnMessage *>(obj)!=NULL;
}

const char *ChurnMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChurnMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int ChurnMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *ChurnMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "createNode",
        "lifetime",
        "contextPos",
        "addr",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int ChurnMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "createNode")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifetime")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "contextPos")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ChurnMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "double",
        "int",
        "TransportAddress",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *ChurnMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ChurnMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ChurnMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getCreateNode());
        case 1: return double2string(pp->getLifetime());
        case 2: return long2string(pp->getContextPos());
        case 3: {std::stringstream out; out << pp->getAddr(); return out.str();}
        default: return "";
    }
}

bool ChurnMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCreateNode(string2bool(value)); return true;
        case 1: pp->setLifetime(string2double(value)); return true;
        case 2: pp->setContextPos(string2long(value)); return true;
        default: return false;
    }
}

const char *ChurnMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "TransportAddress",
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *ChurnMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChurnMessage *pp = (ChurnMessage *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getAddr()); break;
        default: return NULL;
    }
}

Register_Class(ParetoChurnMessage);

ParetoChurnMessage::ParetoChurnMessage(const char *name, int kind) : ChurnMessage(name,kind)
{
    this->meanLifetime_var = 0;
    this->meanDeadtime_var = 0;
}

ParetoChurnMessage::ParetoChurnMessage(const ParetoChurnMessage& other) : ChurnMessage(other)
{
    copy(other);
}

ParetoChurnMessage::~ParetoChurnMessage()
{
}

ParetoChurnMessage& ParetoChurnMessage::operator=(const ParetoChurnMessage& other)
{
    if (this==&other) return *this;
    ChurnMessage::operator=(other);
    copy(other);
    return *this;
}

void ParetoChurnMessage::copy(const ParetoChurnMessage& other)
{
    this->meanLifetime_var = other.meanLifetime_var;
    this->meanDeadtime_var = other.meanDeadtime_var;
}

void ParetoChurnMessage::parsimPack(cCommBuffer *b)
{
    ChurnMessage::parsimPack(b);
    doPacking(b,this->meanLifetime_var);
    doPacking(b,this->meanDeadtime_var);
}

void ParetoChurnMessage::parsimUnpack(cCommBuffer *b)
{
    ChurnMessage::parsimUnpack(b);
    doUnpacking(b,this->meanLifetime_var);
    doUnpacking(b,this->meanDeadtime_var);
}

double ParetoChurnMessage::getMeanLifetime() const
{
    return meanLifetime_var;
}

void ParetoChurnMessage::setMeanLifetime(double meanLifetime)
{
    this->meanLifetime_var = meanLifetime;
}

double ParetoChurnMessage::getMeanDeadtime() const
{
    return meanDeadtime_var;
}

void ParetoChurnMessage::setMeanDeadtime(double meanDeadtime)
{
    this->meanDeadtime_var = meanDeadtime;
}

class ParetoChurnMessageDescriptor : public cClassDescriptor
{
  public:
    ParetoChurnMessageDescriptor();
    virtual ~ParetoChurnMessageDescriptor();

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

Register_ClassDescriptor(ParetoChurnMessageDescriptor);

ParetoChurnMessageDescriptor::ParetoChurnMessageDescriptor() : cClassDescriptor("ParetoChurnMessage", "ChurnMessage")
{
}

ParetoChurnMessageDescriptor::~ParetoChurnMessageDescriptor()
{
}

bool ParetoChurnMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ParetoChurnMessage *>(obj)!=NULL;
}

const char *ParetoChurnMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ParetoChurnMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ParetoChurnMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ParetoChurnMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "meanLifetime",
        "meanDeadtime",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ParetoChurnMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "meanLifetime")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "meanDeadtime")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ParetoChurnMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "double",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ParetoChurnMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ParetoChurnMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ParetoChurnMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getMeanLifetime());
        case 1: return double2string(pp->getMeanDeadtime());
        default: return "";
    }
}

bool ParetoChurnMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setMeanLifetime(string2double(value)); return true;
        case 1: pp->setMeanDeadtime(string2double(value)); return true;
        default: return false;
    }
}

const char *ParetoChurnMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ParetoChurnMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ParetoChurnMessage *pp = (ParetoChurnMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


