//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/i3/i3Apps/I3SessionMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "I3SessionMessage_m.h"

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
    cEnum *e = cEnum::find("SessionMsgType");
    if (!e) enums.getInstance()->add(e = new cEnum("SessionMsgType"));
    e->insert(PAYLOAD, "PAYLOAD");
    e->insert(CHANGE_SESSION, "CHANGE_SESSION");
    e->insert(TRIGGER_CONFIRMATION, "TRIGGER_CONFIRMATION");
);

Register_Class(SessionMsg);

SessionMsg::SessionMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
    this->value_var = 0;
}

SessionMsg::SessionMsg(const SessionMsg& other) : cPacket(other)
{
    copy(other);
}

SessionMsg::~SessionMsg()
{
}

SessionMsg& SessionMsg::operator=(const SessionMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void SessionMsg::copy(const SessionMsg& other)
{
    this->type_var = other.type_var;
    this->value_var = other.value_var;
    this->source_var = other.source_var;
}

void SessionMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->value_var);
    doPacking(b,this->source_var);
}

void SessionMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->source_var);
}

int SessionMsg::getType() const
{
    return type_var;
}

void SessionMsg::setType(int type)
{
    this->type_var = type;
}

double SessionMsg::getValue() const
{
    return value_var;
}

void SessionMsg::setValue(double value)
{
    this->value_var = value;
}

I3Identifier& SessionMsg::getSource()
{
    return source_var;
}

void SessionMsg::setSource(const I3Identifier& source)
{
    this->source_var = source;
}

class SessionMsgDescriptor : public cClassDescriptor
{
  public:
    SessionMsgDescriptor();
    virtual ~SessionMsgDescriptor();

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

Register_ClassDescriptor(SessionMsgDescriptor);

SessionMsgDescriptor::SessionMsgDescriptor() : cClassDescriptor("SessionMsg", "cPacket")
{
}

SessionMsgDescriptor::~SessionMsgDescriptor()
{
}

bool SessionMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SessionMsg *>(obj)!=NULL;
}

const char *SessionMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SessionMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SessionMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SessionMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "value",
        "source",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SessionMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SessionMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "double",
        "I3Identifier",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SessionMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "SessionMsgType";
            return NULL;
        default: return NULL;
    }
}

int SessionMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SessionMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return double2string(pp->getValue());
        case 2: {std::stringstream out; out << pp->getSource(); return out.str();}
        default: return "";
    }
}

bool SessionMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setValue(string2double(value)); return true;
        default: return false;
    }
}

const char *SessionMsgDescriptor::getFieldStructName(void *object, int field) const
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
        "I3Identifier",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *SessionMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SessionMsg *pp = (SessionMsg *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSource()); break;
        default: return NULL;
    }
}


