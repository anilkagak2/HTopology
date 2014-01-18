//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/almtest/ALMTestTracedMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ALMTestTracedMessage_m.h"

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




Register_Class(ALMTestTracedMessage);

ALMTestTracedMessage::ALMTestTracedMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->mcastId_var = 0;
    this->senderId_var = 0;
    this->receiverId_var = 0;
}

ALMTestTracedMessage::ALMTestTracedMessage(const ALMTestTracedMessage& other) : cPacket(other)
{
    copy(other);
}

ALMTestTracedMessage::~ALMTestTracedMessage()
{
}

ALMTestTracedMessage& ALMTestTracedMessage::operator=(const ALMTestTracedMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void ALMTestTracedMessage::copy(const ALMTestTracedMessage& other)
{
    this->groupId_var = other.groupId_var;
    this->mcastId_var = other.mcastId_var;
    this->senderId_var = other.senderId_var;
    this->receiverId_var = other.receiverId_var;
}

void ALMTestTracedMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->groupId_var);
    doPacking(b,this->mcastId_var);
    doPacking(b,this->senderId_var);
    doPacking(b,this->receiverId_var);
}

void ALMTestTracedMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
    doUnpacking(b,this->mcastId_var);
    doUnpacking(b,this->senderId_var);
    doUnpacking(b,this->receiverId_var);
}

OverlayKey& ALMTestTracedMessage::getGroupId()
{
    return groupId_var;
}

void ALMTestTracedMessage::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

long ALMTestTracedMessage::getMcastId() const
{
    return mcastId_var;
}

void ALMTestTracedMessage::setMcastId(long mcastId)
{
    this->mcastId_var = mcastId;
}

int ALMTestTracedMessage::getSenderId() const
{
    return senderId_var;
}

void ALMTestTracedMessage::setSenderId(int senderId)
{
    this->senderId_var = senderId;
}

int ALMTestTracedMessage::getReceiverId() const
{
    return receiverId_var;
}

void ALMTestTracedMessage::setReceiverId(int receiverId)
{
    this->receiverId_var = receiverId;
}

class ALMTestTracedMessageDescriptor : public cClassDescriptor
{
  public:
    ALMTestTracedMessageDescriptor();
    virtual ~ALMTestTracedMessageDescriptor();

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

Register_ClassDescriptor(ALMTestTracedMessageDescriptor);

ALMTestTracedMessageDescriptor::ALMTestTracedMessageDescriptor() : cClassDescriptor("ALMTestTracedMessage", "cPacket")
{
}

ALMTestTracedMessageDescriptor::~ALMTestTracedMessageDescriptor()
{
}

bool ALMTestTracedMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMTestTracedMessage *>(obj)!=NULL;
}

const char *ALMTestTracedMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMTestTracedMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int ALMTestTracedMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *ALMTestTracedMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupId",
        "mcastId",
        "senderId",
        "receiverId",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int ALMTestTracedMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mcastId")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderId")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "receiverId")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ALMTestTracedMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "long",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *ALMTestTracedMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMTestTracedMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMTestTracedMessage *pp = (ALMTestTracedMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ALMTestTracedMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ALMTestTracedMessage *pp = (ALMTestTracedMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        case 1: return long2string(pp->getMcastId());
        case 2: return long2string(pp->getSenderId());
        case 3: return long2string(pp->getReceiverId());
        default: return "";
    }
}

bool ALMTestTracedMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMTestTracedMessage *pp = (ALMTestTracedMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setMcastId(string2long(value)); return true;
        case 2: pp->setSenderId(string2long(value)); return true;
        case 3: pp->setReceiverId(string2long(value)); return true;
        default: return false;
    }
}

const char *ALMTestTracedMessageDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *ALMTestTracedMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMTestTracedMessage *pp = (ALMTestTracedMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}


