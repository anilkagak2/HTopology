//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/i3/I3Message.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "I3Message_m.h"

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
    cEnum *e = cEnum::find("I3MessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("I3MessageType"));
    e->insert(INSERT_TRIGGER, "INSERT_TRIGGER");
    e->insert(QUERY_REPLY, "QUERY_REPLY");
    e->insert(REMOVE_TRIGGER, "REMOVE_TRIGGER");
    e->insert(SEND_PACKET, "SEND_PACKET");
);

Register_Class(I3Message);

I3Message::I3Message(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
}

I3Message::I3Message(const I3Message& other) : cPacket(other)
{
    copy(other);
}

I3Message::~I3Message()
{
}

I3Message& I3Message::operator=(const I3Message& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void I3Message::copy(const I3Message& other)
{
    this->type_var = other.type_var;
}

void I3Message::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
}

void I3Message::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
}

int I3Message::getType() const
{
    return type_var;
}

void I3Message::setType(int type)
{
    this->type_var = type;
}

class I3MessageDescriptor : public cClassDescriptor
{
  public:
    I3MessageDescriptor();
    virtual ~I3MessageDescriptor();

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

Register_ClassDescriptor(I3MessageDescriptor);

I3MessageDescriptor::I3MessageDescriptor() : cClassDescriptor("I3Message", "cPacket")
{
}

I3MessageDescriptor::~I3MessageDescriptor()
{
}

bool I3MessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<I3Message *>(obj)!=NULL;
}

const char *I3MessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int I3MessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int I3MessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *I3MessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int I3MessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *I3MessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *I3MessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "I3MessageType";
            return NULL;
        default: return NULL;
    }
}

int I3MessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    I3Message *pp = (I3Message *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string I3MessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    I3Message *pp = (I3Message *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        default: return "";
    }
}

bool I3MessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    I3Message *pp = (I3Message *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *I3MessageDescriptor::getFieldStructName(void *object, int field) const
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

void *I3MessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    I3Message *pp = (I3Message *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

I3InsertTriggerMessage_Base::I3InsertTriggerMessage_Base(const char *name, int kind) : I3Message(name,kind)
{
    this->sendReply_var = 0;
}

I3InsertTriggerMessage_Base::I3InsertTriggerMessage_Base(const I3InsertTriggerMessage_Base& other) : I3Message(other)
{
    copy(other);
}

I3InsertTriggerMessage_Base::~I3InsertTriggerMessage_Base()
{
}

I3InsertTriggerMessage_Base& I3InsertTriggerMessage_Base::operator=(const I3InsertTriggerMessage_Base& other)
{
    if (this==&other) return *this;
    I3Message::operator=(other);
    copy(other);
    return *this;
}

void I3InsertTriggerMessage_Base::copy(const I3InsertTriggerMessage_Base& other)
{
    this->sendReply_var = other.sendReply_var;
    this->trigger_var = other.trigger_var;
    this->source_var = other.source_var;
}

void I3InsertTriggerMessage_Base::parsimPack(cCommBuffer *b)
{
    I3Message::parsimPack(b);
    doPacking(b,this->sendReply_var);
    doPacking(b,this->trigger_var);
    doPacking(b,this->source_var);
}

void I3InsertTriggerMessage_Base::parsimUnpack(cCommBuffer *b)
{
    I3Message::parsimUnpack(b);
    doUnpacking(b,this->sendReply_var);
    doUnpacking(b,this->trigger_var);
    doUnpacking(b,this->source_var);
}

bool I3InsertTriggerMessage_Base::getSendReply() const
{
    return sendReply_var;
}

void I3InsertTriggerMessage_Base::setSendReply(bool sendReply)
{
    this->sendReply_var = sendReply;
}

I3Trigger& I3InsertTriggerMessage_Base::getTrigger()
{
    return trigger_var;
}

void I3InsertTriggerMessage_Base::setTrigger(const I3Trigger& trigger)
{
    this->trigger_var = trigger;
}

I3IPAddress& I3InsertTriggerMessage_Base::getSource()
{
    return source_var;
}

void I3InsertTriggerMessage_Base::setSource(const I3IPAddress& source)
{
    this->source_var = source;
}

class I3InsertTriggerMessageDescriptor : public cClassDescriptor
{
  public:
    I3InsertTriggerMessageDescriptor();
    virtual ~I3InsertTriggerMessageDescriptor();

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

Register_ClassDescriptor(I3InsertTriggerMessageDescriptor);

I3InsertTriggerMessageDescriptor::I3InsertTriggerMessageDescriptor() : cClassDescriptor("I3InsertTriggerMessage", "I3Message")
{
}

I3InsertTriggerMessageDescriptor::~I3InsertTriggerMessageDescriptor()
{
}

bool I3InsertTriggerMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<I3InsertTriggerMessage_Base *>(obj)!=NULL;
}

const char *I3InsertTriggerMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int I3InsertTriggerMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int I3InsertTriggerMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *I3InsertTriggerMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendReply",
        "trigger",
        "source",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int I3InsertTriggerMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendReply")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "trigger")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *I3InsertTriggerMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "I3Trigger",
        "I3IPAddress",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *I3InsertTriggerMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int I3InsertTriggerMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    I3InsertTriggerMessage_Base *pp = (I3InsertTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string I3InsertTriggerMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    I3InsertTriggerMessage_Base *pp = (I3InsertTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getSendReply());
        case 1: {std::stringstream out; out << pp->getTrigger(); return out.str();}
        case 2: {std::stringstream out; out << pp->getSource(); return out.str();}
        default: return "";
    }
}

bool I3InsertTriggerMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    I3InsertTriggerMessage_Base *pp = (I3InsertTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSendReply(string2bool(value)); return true;
        default: return false;
    }
}

const char *I3InsertTriggerMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "I3Trigger",
        "I3IPAddress",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *I3InsertTriggerMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    I3InsertTriggerMessage_Base *pp = (I3InsertTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getTrigger()); break;
        case 2: return (void *)(&pp->getSource()); break;
        default: return NULL;
    }
}

I3QueryReplyMessage_Base::I3QueryReplyMessage_Base(const char *name, int kind) : I3Message(name,kind)
{
    this->sendingTime_var = 0;
}

I3QueryReplyMessage_Base::I3QueryReplyMessage_Base(const I3QueryReplyMessage_Base& other) : I3Message(other)
{
    copy(other);
}

I3QueryReplyMessage_Base::~I3QueryReplyMessage_Base()
{
}

I3QueryReplyMessage_Base& I3QueryReplyMessage_Base::operator=(const I3QueryReplyMessage_Base& other)
{
    if (this==&other) return *this;
    I3Message::operator=(other);
    copy(other);
    return *this;
}

void I3QueryReplyMessage_Base::copy(const I3QueryReplyMessage_Base& other)
{
    this->source_var = other.source_var;
    this->identifier_var = other.identifier_var;
    this->sendingTime_var = other.sendingTime_var;
}

void I3QueryReplyMessage_Base::parsimPack(cCommBuffer *b)
{
    I3Message::parsimPack(b);
    doPacking(b,this->source_var);
    doPacking(b,this->identifier_var);
    doPacking(b,this->sendingTime_var);
}

void I3QueryReplyMessage_Base::parsimUnpack(cCommBuffer *b)
{
    I3Message::parsimUnpack(b);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->identifier_var);
    doUnpacking(b,this->sendingTime_var);
}

I3IPAddress& I3QueryReplyMessage_Base::getSource()
{
    return source_var;
}

void I3QueryReplyMessage_Base::setSource(const I3IPAddress& source)
{
    this->source_var = source;
}

I3Identifier& I3QueryReplyMessage_Base::getIdentifier()
{
    return identifier_var;
}

void I3QueryReplyMessage_Base::setIdentifier(const I3Identifier& identifier)
{
    this->identifier_var = identifier;
}

simtime_t I3QueryReplyMessage_Base::getSendingTime() const
{
    return sendingTime_var;
}

void I3QueryReplyMessage_Base::setSendingTime(simtime_t sendingTime)
{
    this->sendingTime_var = sendingTime;
}

class I3QueryReplyMessageDescriptor : public cClassDescriptor
{
  public:
    I3QueryReplyMessageDescriptor();
    virtual ~I3QueryReplyMessageDescriptor();

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

Register_ClassDescriptor(I3QueryReplyMessageDescriptor);

I3QueryReplyMessageDescriptor::I3QueryReplyMessageDescriptor() : cClassDescriptor("I3QueryReplyMessage", "I3Message")
{
}

I3QueryReplyMessageDescriptor::~I3QueryReplyMessageDescriptor()
{
}

bool I3QueryReplyMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<I3QueryReplyMessage_Base *>(obj)!=NULL;
}

const char *I3QueryReplyMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int I3QueryReplyMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int I3QueryReplyMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *I3QueryReplyMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "source",
        "identifier",
        "sendingTime",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int I3QueryReplyMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "identifier")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendingTime")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *I3QueryReplyMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "I3IPAddress",
        "I3Identifier",
        "simtime_t",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *I3QueryReplyMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int I3QueryReplyMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    I3QueryReplyMessage_Base *pp = (I3QueryReplyMessage_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string I3QueryReplyMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    I3QueryReplyMessage_Base *pp = (I3QueryReplyMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSource(); return out.str();}
        case 1: {std::stringstream out; out << pp->getIdentifier(); return out.str();}
        case 2: return double2string(pp->getSendingTime());
        default: return "";
    }
}

bool I3QueryReplyMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    I3QueryReplyMessage_Base *pp = (I3QueryReplyMessage_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setSendingTime(string2double(value)); return true;
        default: return false;
    }
}

const char *I3QueryReplyMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "I3IPAddress",
        "I3Identifier",
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *I3QueryReplyMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    I3QueryReplyMessage_Base *pp = (I3QueryReplyMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSource()); break;
        case 1: return (void *)(&pp->getIdentifier()); break;
        default: return NULL;
    }
}

I3RemoveTriggerMessage_Base::I3RemoveTriggerMessage_Base(const char *name, int kind) : I3Message(name,kind)
{
}

I3RemoveTriggerMessage_Base::I3RemoveTriggerMessage_Base(const I3RemoveTriggerMessage_Base& other) : I3Message(other)
{
    copy(other);
}

I3RemoveTriggerMessage_Base::~I3RemoveTriggerMessage_Base()
{
}

I3RemoveTriggerMessage_Base& I3RemoveTriggerMessage_Base::operator=(const I3RemoveTriggerMessage_Base& other)
{
    if (this==&other) return *this;
    I3Message::operator=(other);
    copy(other);
    return *this;
}

void I3RemoveTriggerMessage_Base::copy(const I3RemoveTriggerMessage_Base& other)
{
    this->trigger_var = other.trigger_var;
}

void I3RemoveTriggerMessage_Base::parsimPack(cCommBuffer *b)
{
    I3Message::parsimPack(b);
    doPacking(b,this->trigger_var);
}

void I3RemoveTriggerMessage_Base::parsimUnpack(cCommBuffer *b)
{
    I3Message::parsimUnpack(b);
    doUnpacking(b,this->trigger_var);
}

I3Trigger& I3RemoveTriggerMessage_Base::getTrigger()
{
    return trigger_var;
}

void I3RemoveTriggerMessage_Base::setTrigger(const I3Trigger& trigger)
{
    this->trigger_var = trigger;
}

class I3RemoveTriggerMessageDescriptor : public cClassDescriptor
{
  public:
    I3RemoveTriggerMessageDescriptor();
    virtual ~I3RemoveTriggerMessageDescriptor();

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

Register_ClassDescriptor(I3RemoveTriggerMessageDescriptor);

I3RemoveTriggerMessageDescriptor::I3RemoveTriggerMessageDescriptor() : cClassDescriptor("I3RemoveTriggerMessage", "I3Message")
{
}

I3RemoveTriggerMessageDescriptor::~I3RemoveTriggerMessageDescriptor()
{
}

bool I3RemoveTriggerMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<I3RemoveTriggerMessage_Base *>(obj)!=NULL;
}

const char *I3RemoveTriggerMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int I3RemoveTriggerMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int I3RemoveTriggerMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *I3RemoveTriggerMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "trigger",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int I3RemoveTriggerMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "trigger")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *I3RemoveTriggerMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "I3Trigger",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *I3RemoveTriggerMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int I3RemoveTriggerMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    I3RemoveTriggerMessage_Base *pp = (I3RemoveTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string I3RemoveTriggerMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    I3RemoveTriggerMessage_Base *pp = (I3RemoveTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTrigger(); return out.str();}
        default: return "";
    }
}

bool I3RemoveTriggerMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    I3RemoveTriggerMessage_Base *pp = (I3RemoveTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *I3RemoveTriggerMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "I3Trigger",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *I3RemoveTriggerMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    I3RemoveTriggerMessage_Base *pp = (I3RemoveTriggerMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTrigger()); break;
        default: return NULL;
    }
}

I3SendPacketMessage_Base::I3SendPacketMessage_Base(const char *name, int kind) : I3Message(name,kind)
{
    this->sendReply_var = 0;
}

I3SendPacketMessage_Base::I3SendPacketMessage_Base(const I3SendPacketMessage_Base& other) : I3Message(other)
{
    copy(other);
}

I3SendPacketMessage_Base::~I3SendPacketMessage_Base()
{
}

I3SendPacketMessage_Base& I3SendPacketMessage_Base::operator=(const I3SendPacketMessage_Base& other)
{
    if (this==&other) return *this;
    I3Message::operator=(other);
    copy(other);
    return *this;
}

void I3SendPacketMessage_Base::copy(const I3SendPacketMessage_Base& other)
{
    this->identifierStack_var = other.identifierStack_var;
    this->matchedTrigger_var = other.matchedTrigger_var;
    this->sendReply_var = other.sendReply_var;
    this->source_var = other.source_var;
}

void I3SendPacketMessage_Base::parsimPack(cCommBuffer *b)
{
    I3Message::parsimPack(b);
    doPacking(b,this->identifierStack_var);
    doPacking(b,this->matchedTrigger_var);
    doPacking(b,this->sendReply_var);
    doPacking(b,this->source_var);
}

void I3SendPacketMessage_Base::parsimUnpack(cCommBuffer *b)
{
    I3Message::parsimUnpack(b);
    doUnpacking(b,this->identifierStack_var);
    doUnpacking(b,this->matchedTrigger_var);
    doUnpacking(b,this->sendReply_var);
    doUnpacking(b,this->source_var);
}

I3IdentifierStack& I3SendPacketMessage_Base::getIdentifierStack()
{
    return identifierStack_var;
}

void I3SendPacketMessage_Base::setIdentifierStack(const I3IdentifierStack& identifierStack)
{
    this->identifierStack_var = identifierStack;
}

I3Trigger& I3SendPacketMessage_Base::getMatchedTrigger()
{
    return matchedTrigger_var;
}

void I3SendPacketMessage_Base::setMatchedTrigger(const I3Trigger& matchedTrigger)
{
    this->matchedTrigger_var = matchedTrigger;
}

bool I3SendPacketMessage_Base::getSendReply() const
{
    return sendReply_var;
}

void I3SendPacketMessage_Base::setSendReply(bool sendReply)
{
    this->sendReply_var = sendReply;
}

I3IPAddress& I3SendPacketMessage_Base::getSource()
{
    return source_var;
}

void I3SendPacketMessage_Base::setSource(const I3IPAddress& source)
{
    this->source_var = source;
}

class I3SendPacketMessageDescriptor : public cClassDescriptor
{
  public:
    I3SendPacketMessageDescriptor();
    virtual ~I3SendPacketMessageDescriptor();

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

Register_ClassDescriptor(I3SendPacketMessageDescriptor);

I3SendPacketMessageDescriptor::I3SendPacketMessageDescriptor() : cClassDescriptor("I3SendPacketMessage", "I3Message")
{
}

I3SendPacketMessageDescriptor::~I3SendPacketMessageDescriptor()
{
}

bool I3SendPacketMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<I3SendPacketMessage_Base *>(obj)!=NULL;
}

const char *I3SendPacketMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int I3SendPacketMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int I3SendPacketMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *I3SendPacketMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "identifierStack",
        "matchedTrigger",
        "sendReply",
        "source",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int I3SendPacketMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "identifierStack")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "matchedTrigger")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendReply")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *I3SendPacketMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "I3IdentifierStack",
        "I3Trigger",
        "bool",
        "I3IPAddress",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *I3SendPacketMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int I3SendPacketMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    I3SendPacketMessage_Base *pp = (I3SendPacketMessage_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string I3SendPacketMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    I3SendPacketMessage_Base *pp = (I3SendPacketMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getIdentifierStack(); return out.str();}
        case 1: {std::stringstream out; out << pp->getMatchedTrigger(); return out.str();}
        case 2: return bool2string(pp->getSendReply());
        case 3: {std::stringstream out; out << pp->getSource(); return out.str();}
        default: return "";
    }
}

bool I3SendPacketMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    I3SendPacketMessage_Base *pp = (I3SendPacketMessage_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setSendReply(string2bool(value)); return true;
        default: return false;
    }
}

const char *I3SendPacketMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "I3IdentifierStack",
        "I3Trigger",
        NULL,
        "I3IPAddress",
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *I3SendPacketMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    I3SendPacketMessage_Base *pp = (I3SendPacketMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getIdentifierStack()); break;
        case 1: return (void *)(&pp->getMatchedTrigger()); break;
        case 3: return (void *)(&pp->getSource()); break;
        default: return NULL;
    }
}


