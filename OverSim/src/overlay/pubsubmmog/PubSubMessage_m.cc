//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/pubsubmmog/PubSubMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PubSubMessage_m.h"

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
    cEnum *e = cEnum::find("PubSubTimerType");
    if (!e) enums.getInstance()->add(e = new cEnum("PubSubTimerType"));
    e->insert(PUBSUB_HEARTBEAT, "PUBSUB_HEARTBEAT");
    e->insert(PUBSUB_CHILDPING, "PUBSUB_CHILDPING");
    e->insert(PUBSUB_PARENT_TIMEOUT, "PUBSUB_PARENT_TIMEOUT");
    e->insert(PUBSUB_TAKEOVER_GRACE_TIME, "PUBSUB_TAKEOVER_GRACE_TIME");
    e->insert(PUBSUB_EVENTDELIVERY, "PUBSUB_EVENTDELIVERY");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("PubSubHelpType");
    if (!e) enums.getInstance()->add(e = new cEnum("PubSubHelpType"));
    e->insert(PUBSUB_BACKUP, "PUBSUB_BACKUP");
    e->insert(PUBSUB_INTERMEDIATE, "PUBSUB_INTERMEDIATE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("PubSubPingType");
    if (!e) enums.getInstance()->add(e = new cEnum("PubSubPingType"));
    e->insert(PUBSUB_PING_BACKUP, "PUBSUB_PING_BACKUP");
    e->insert(PUBSUB_PING_INTERMEDIATE, "PUBSUB_PING_INTERMEDIATE");
    e->insert(PUBSUB_PING_CHILD, "PUBSUB_PING_CHILD");
);

Register_Class(PubSubTimer);

PubSubTimer::PubSubTimer(const char *name, int kind) : cMessage(name,kind)
{
    this->type_var = 0;
    this->subspaceId_var = 0;
}

PubSubTimer::PubSubTimer(const PubSubTimer& other) : cMessage(other)
{
    copy(other);
}

PubSubTimer::~PubSubTimer()
{
}

PubSubTimer& PubSubTimer::operator=(const PubSubTimer& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubTimer::copy(const PubSubTimer& other)
{
    this->type_var = other.type_var;
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubTimer::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->subspaceId_var);
}

void PubSubTimer::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubTimer::getType() const
{
    return type_var;
}

void PubSubTimer::setType(int type)
{
    this->type_var = type;
}

int PubSubTimer::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubTimer::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubTimerDescriptor : public cClassDescriptor
{
  public:
    PubSubTimerDescriptor();
    virtual ~PubSubTimerDescriptor();

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

Register_ClassDescriptor(PubSubTimerDescriptor);

PubSubTimerDescriptor::PubSubTimerDescriptor() : cClassDescriptor("PubSubTimer", "cMessage")
{
}

PubSubTimerDescriptor::~PubSubTimerDescriptor()
{
}

bool PubSubTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubTimer *>(obj)!=NULL;
}

const char *PubSubTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "subspaceId",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubTimerDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "PubSubTimerType";
            return NULL;
        default: return NULL;
    }
}

int PubSubTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTimer *pp = (PubSubTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTimer *pp = (PubSubTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTimer *pp = (PubSubTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubTimerDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTimer *pp = (PubSubTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubJoinCall);

PubSubJoinCall::PubSubJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->ressources_var = 0;
}

PubSubJoinCall::PubSubJoinCall(const PubSubJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubJoinCall::~PubSubJoinCall()
{
}

PubSubJoinCall& PubSubJoinCall::operator=(const PubSubJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubJoinCall::copy(const PubSubJoinCall& other)
{
    this->position_var = other.position_var;
    this->ressources_var = other.ressources_var;
}

void PubSubJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->position_var);
    doPacking(b,this->ressources_var);
}

void PubSubJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->position_var);
    doUnpacking(b,this->ressources_var);
}

Vector2D& PubSubJoinCall::getPosition()
{
    return position_var;
}

void PubSubJoinCall::setPosition(const Vector2D& position)
{
    this->position_var = position;
}

int PubSubJoinCall::getRessources() const
{
    return ressources_var;
}

void PubSubJoinCall::setRessources(int ressources)
{
    this->ressources_var = ressources;
}

class PubSubJoinCallDescriptor : public cClassDescriptor
{
  public:
    PubSubJoinCallDescriptor();
    virtual ~PubSubJoinCallDescriptor();

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

Register_ClassDescriptor(PubSubJoinCallDescriptor);

PubSubJoinCallDescriptor::PubSubJoinCallDescriptor() : cClassDescriptor("PubSubJoinCall", "BaseCallMessage")
{
}

PubSubJoinCallDescriptor::~PubSubJoinCallDescriptor()
{
}

bool PubSubJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubJoinCall *>(obj)!=NULL;
}

const char *PubSubJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "position",
        "ressources",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "ressources")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubJoinCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinCall *pp = (PubSubJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinCall *pp = (PubSubJoinCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPosition(); return out.str();}
        case 1: return long2string(pp->getRessources());
        default: return "";
    }
}

bool PubSubJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinCall *pp = (PubSubJoinCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setRessources(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubJoinCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "Vector2D",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *PubSubJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinCall *pp = (PubSubJoinCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(PubSubJoinResponse);

PubSubJoinResponse::PubSubJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

PubSubJoinResponse::PubSubJoinResponse(const PubSubJoinResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubJoinResponse::~PubSubJoinResponse()
{
}

PubSubJoinResponse& PubSubJoinResponse::operator=(const PubSubJoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubJoinResponse::copy(const PubSubJoinResponse& other)
{
    this->responsibleNode_var = other.responsibleNode_var;
}

void PubSubJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->responsibleNode_var);
}

void PubSubJoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->responsibleNode_var);
}

NodeHandle& PubSubJoinResponse::getResponsibleNode()
{
    return responsibleNode_var;
}

void PubSubJoinResponse::setResponsibleNode(const NodeHandle& responsibleNode)
{
    this->responsibleNode_var = responsibleNode;
}

class PubSubJoinResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubJoinResponseDescriptor();
    virtual ~PubSubJoinResponseDescriptor();

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

Register_ClassDescriptor(PubSubJoinResponseDescriptor);

PubSubJoinResponseDescriptor::PubSubJoinResponseDescriptor() : cClassDescriptor("PubSubJoinResponse", "BaseResponseMessage")
{
}

PubSubJoinResponseDescriptor::~PubSubJoinResponseDescriptor()
{
}

bool PubSubJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubJoinResponse *>(obj)!=NULL;
}

const char *PubSubJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "responsibleNode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "responsibleNode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinResponse *pp = (PubSubJoinResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinResponse *pp = (PubSubJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getResponsibleNode(); return out.str();}
        default: return "";
    }
}

bool PubSubJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinResponse *pp = (PubSubJoinResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PubSubJoinResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubJoinResponse *pp = (PubSubJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getResponsibleNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubResponsibleNodeCall);

PubSubResponsibleNodeCall::PubSubResponsibleNodeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

PubSubResponsibleNodeCall::PubSubResponsibleNodeCall(const PubSubResponsibleNodeCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubResponsibleNodeCall::~PubSubResponsibleNodeCall()
{
}

PubSubResponsibleNodeCall& PubSubResponsibleNodeCall::operator=(const PubSubResponsibleNodeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubResponsibleNodeCall::copy(const PubSubResponsibleNodeCall& other)
{
    this->subspacePos_var = other.subspacePos_var;
}

void PubSubResponsibleNodeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspacePos_var);
}

void PubSubResponsibleNodeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspacePos_var);
}

Vector2D& PubSubResponsibleNodeCall::getSubspacePos()
{
    return subspacePos_var;
}

void PubSubResponsibleNodeCall::setSubspacePos(const Vector2D& subspacePos)
{
    this->subspacePos_var = subspacePos;
}

class PubSubResponsibleNodeCallDescriptor : public cClassDescriptor
{
  public:
    PubSubResponsibleNodeCallDescriptor();
    virtual ~PubSubResponsibleNodeCallDescriptor();

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

Register_ClassDescriptor(PubSubResponsibleNodeCallDescriptor);

PubSubResponsibleNodeCallDescriptor::PubSubResponsibleNodeCallDescriptor() : cClassDescriptor("PubSubResponsibleNodeCall", "BaseCallMessage")
{
}

PubSubResponsibleNodeCallDescriptor::~PubSubResponsibleNodeCallDescriptor()
{
}

bool PubSubResponsibleNodeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubResponsibleNodeCall *>(obj)!=NULL;
}

const char *PubSubResponsibleNodeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubResponsibleNodeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubResponsibleNodeCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubResponsibleNodeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspacePos",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubResponsibleNodeCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspacePos")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubResponsibleNodeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubResponsibleNodeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubResponsibleNodeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeCall *pp = (PubSubResponsibleNodeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubResponsibleNodeCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeCall *pp = (PubSubResponsibleNodeCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSubspacePos(); return out.str();}
        default: return "";
    }
}

bool PubSubResponsibleNodeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeCall *pp = (PubSubResponsibleNodeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PubSubResponsibleNodeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "Vector2D",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PubSubResponsibleNodeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeCall *pp = (PubSubResponsibleNodeCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSubspacePos()); break;
        default: return NULL;
    }
}

Register_Class(PubSubResponsibleNodeResponse);

PubSubResponsibleNodeResponse::PubSubResponsibleNodeResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubResponsibleNodeResponse::PubSubResponsibleNodeResponse(const PubSubResponsibleNodeResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubResponsibleNodeResponse::~PubSubResponsibleNodeResponse()
{
}

PubSubResponsibleNodeResponse& PubSubResponsibleNodeResponse::operator=(const PubSubResponsibleNodeResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubResponsibleNodeResponse::copy(const PubSubResponsibleNodeResponse& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->responsibleNode_var = other.responsibleNode_var;
}

void PubSubResponsibleNodeResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->responsibleNode_var);
}

void PubSubResponsibleNodeResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->responsibleNode_var);
}

int PubSubResponsibleNodeResponse::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubResponsibleNodeResponse::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubResponsibleNodeResponse::getResponsibleNode()
{
    return responsibleNode_var;
}

void PubSubResponsibleNodeResponse::setResponsibleNode(const NodeHandle& responsibleNode)
{
    this->responsibleNode_var = responsibleNode;
}

class PubSubResponsibleNodeResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubResponsibleNodeResponseDescriptor();
    virtual ~PubSubResponsibleNodeResponseDescriptor();

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

Register_ClassDescriptor(PubSubResponsibleNodeResponseDescriptor);

PubSubResponsibleNodeResponseDescriptor::PubSubResponsibleNodeResponseDescriptor() : cClassDescriptor("PubSubResponsibleNodeResponse", "BaseResponseMessage")
{
}

PubSubResponsibleNodeResponseDescriptor::~PubSubResponsibleNodeResponseDescriptor()
{
}

bool PubSubResponsibleNodeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubResponsibleNodeResponse *>(obj)!=NULL;
}

const char *PubSubResponsibleNodeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubResponsibleNodeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubResponsibleNodeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubResponsibleNodeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "responsibleNode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubResponsibleNodeResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "responsibleNode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubResponsibleNodeResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubResponsibleNodeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubResponsibleNodeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeResponse *pp = (PubSubResponsibleNodeResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubResponsibleNodeResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeResponse *pp = (PubSubResponsibleNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getResponsibleNode(); return out.str();}
        default: return "";
    }
}

bool PubSubResponsibleNodeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeResponse *pp = (PubSubResponsibleNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubResponsibleNodeResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubResponsibleNodeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubResponsibleNodeResponse *pp = (PubSubResponsibleNodeResponse *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getResponsibleNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubTakeOverSubspaceCall);

PubSubTakeOverSubspaceCall::PubSubTakeOverSubspaceCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

PubSubTakeOverSubspaceCall::PubSubTakeOverSubspaceCall(const PubSubTakeOverSubspaceCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubTakeOverSubspaceCall::~PubSubTakeOverSubspaceCall()
{
}

PubSubTakeOverSubspaceCall& PubSubTakeOverSubspaceCall::operator=(const PubSubTakeOverSubspaceCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubTakeOverSubspaceCall::copy(const PubSubTakeOverSubspaceCall& other)
{
    this->subspacePos_var = other.subspacePos_var;
}

void PubSubTakeOverSubspaceCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspacePos_var);
}

void PubSubTakeOverSubspaceCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspacePos_var);
}

Vector2D& PubSubTakeOverSubspaceCall::getSubspacePos()
{
    return subspacePos_var;
}

void PubSubTakeOverSubspaceCall::setSubspacePos(const Vector2D& subspacePos)
{
    this->subspacePos_var = subspacePos;
}

class PubSubTakeOverSubspaceCallDescriptor : public cClassDescriptor
{
  public:
    PubSubTakeOverSubspaceCallDescriptor();
    virtual ~PubSubTakeOverSubspaceCallDescriptor();

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

Register_ClassDescriptor(PubSubTakeOverSubspaceCallDescriptor);

PubSubTakeOverSubspaceCallDescriptor::PubSubTakeOverSubspaceCallDescriptor() : cClassDescriptor("PubSubTakeOverSubspaceCall", "BaseCallMessage")
{
}

PubSubTakeOverSubspaceCallDescriptor::~PubSubTakeOverSubspaceCallDescriptor()
{
}

bool PubSubTakeOverSubspaceCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubTakeOverSubspaceCall *>(obj)!=NULL;
}

const char *PubSubTakeOverSubspaceCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubTakeOverSubspaceCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubTakeOverSubspaceCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubTakeOverSubspaceCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspacePos",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubTakeOverSubspaceCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspacePos")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubTakeOverSubspaceCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubTakeOverSubspaceCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubTakeOverSubspaceCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceCall *pp = (PubSubTakeOverSubspaceCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubTakeOverSubspaceCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceCall *pp = (PubSubTakeOverSubspaceCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSubspacePos(); return out.str();}
        default: return "";
    }
}

bool PubSubTakeOverSubspaceCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceCall *pp = (PubSubTakeOverSubspaceCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PubSubTakeOverSubspaceCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "Vector2D",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PubSubTakeOverSubspaceCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceCall *pp = (PubSubTakeOverSubspaceCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSubspacePos()); break;
        default: return NULL;
    }
}

Register_Class(PubSubTakeOverSubspaceResponse);

PubSubTakeOverSubspaceResponse::PubSubTakeOverSubspaceResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

PubSubTakeOverSubspaceResponse::PubSubTakeOverSubspaceResponse(const PubSubTakeOverSubspaceResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubTakeOverSubspaceResponse::~PubSubTakeOverSubspaceResponse()
{
}

PubSubTakeOverSubspaceResponse& PubSubTakeOverSubspaceResponse::operator=(const PubSubTakeOverSubspaceResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubTakeOverSubspaceResponse::copy(const PubSubTakeOverSubspaceResponse& other)
{
    this->subspacePos_var = other.subspacePos_var;
}

void PubSubTakeOverSubspaceResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspacePos_var);
}

void PubSubTakeOverSubspaceResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspacePos_var);
}

Vector2D& PubSubTakeOverSubspaceResponse::getSubspacePos()
{
    return subspacePos_var;
}

void PubSubTakeOverSubspaceResponse::setSubspacePos(const Vector2D& subspacePos)
{
    this->subspacePos_var = subspacePos;
}

class PubSubTakeOverSubspaceResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubTakeOverSubspaceResponseDescriptor();
    virtual ~PubSubTakeOverSubspaceResponseDescriptor();

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

Register_ClassDescriptor(PubSubTakeOverSubspaceResponseDescriptor);

PubSubTakeOverSubspaceResponseDescriptor::PubSubTakeOverSubspaceResponseDescriptor() : cClassDescriptor("PubSubTakeOverSubspaceResponse", "BaseResponseMessage")
{
}

PubSubTakeOverSubspaceResponseDescriptor::~PubSubTakeOverSubspaceResponseDescriptor()
{
}

bool PubSubTakeOverSubspaceResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubTakeOverSubspaceResponse *>(obj)!=NULL;
}

const char *PubSubTakeOverSubspaceResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubTakeOverSubspaceResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubTakeOverSubspaceResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubTakeOverSubspaceResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspacePos",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubTakeOverSubspaceResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspacePos")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubTakeOverSubspaceResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubTakeOverSubspaceResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubTakeOverSubspaceResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceResponse *pp = (PubSubTakeOverSubspaceResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubTakeOverSubspaceResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceResponse *pp = (PubSubTakeOverSubspaceResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSubspacePos(); return out.str();}
        default: return "";
    }
}

bool PubSubTakeOverSubspaceResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceResponse *pp = (PubSubTakeOverSubspaceResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PubSubTakeOverSubspaceResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "Vector2D",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PubSubTakeOverSubspaceResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubTakeOverSubspaceResponse *pp = (PubSubTakeOverSubspaceResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSubspacePos()); break;
        default: return NULL;
    }
}

Register_Class(PubSubSubscriptionCall);

PubSubSubscriptionCall::PubSubSubscriptionCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubSubscriptionCall::PubSubSubscriptionCall(const PubSubSubscriptionCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubSubscriptionCall::~PubSubSubscriptionCall()
{
}

PubSubSubscriptionCall& PubSubSubscriptionCall::operator=(const PubSubSubscriptionCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubSubscriptionCall::copy(const PubSubSubscriptionCall& other)
{
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubSubscriptionCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
}

void PubSubSubscriptionCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubSubscriptionCall::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubSubscriptionCall::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubSubscriptionCallDescriptor : public cClassDescriptor
{
  public:
    PubSubSubscriptionCallDescriptor();
    virtual ~PubSubSubscriptionCallDescriptor();

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

Register_ClassDescriptor(PubSubSubscriptionCallDescriptor);

PubSubSubscriptionCallDescriptor::PubSubSubscriptionCallDescriptor() : cClassDescriptor("PubSubSubscriptionCall", "BaseCallMessage")
{
}

PubSubSubscriptionCallDescriptor::~PubSubSubscriptionCallDescriptor()
{
}

bool PubSubSubscriptionCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubSubscriptionCall *>(obj)!=NULL;
}

const char *PubSubSubscriptionCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubSubscriptionCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubSubscriptionCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubSubscriptionCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubSubscriptionCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubSubscriptionCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubSubscriptionCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubSubscriptionCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionCall *pp = (PubSubSubscriptionCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubSubscriptionCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionCall *pp = (PubSubSubscriptionCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubSubscriptionCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionCall *pp = (PubSubSubscriptionCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubSubscriptionCallDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubSubscriptionCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionCall *pp = (PubSubSubscriptionCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubSubscriptionResponse);

PubSubSubscriptionResponse::PubSubSubscriptionResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->failed_var = false;
}

PubSubSubscriptionResponse::PubSubSubscriptionResponse(const PubSubSubscriptionResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubSubscriptionResponse::~PubSubSubscriptionResponse()
{
}

PubSubSubscriptionResponse& PubSubSubscriptionResponse::operator=(const PubSubSubscriptionResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubSubscriptionResponse::copy(const PubSubSubscriptionResponse& other)
{
    this->failed_var = other.failed_var;
}

void PubSubSubscriptionResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->failed_var);
}

void PubSubSubscriptionResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->failed_var);
}

bool PubSubSubscriptionResponse::getFailed() const
{
    return failed_var;
}

void PubSubSubscriptionResponse::setFailed(bool failed)
{
    this->failed_var = failed;
}

class PubSubSubscriptionResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubSubscriptionResponseDescriptor();
    virtual ~PubSubSubscriptionResponseDescriptor();

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

Register_ClassDescriptor(PubSubSubscriptionResponseDescriptor);

PubSubSubscriptionResponseDescriptor::PubSubSubscriptionResponseDescriptor() : cClassDescriptor("PubSubSubscriptionResponse", "BaseResponseMessage")
{
}

PubSubSubscriptionResponseDescriptor::~PubSubSubscriptionResponseDescriptor()
{
}

bool PubSubSubscriptionResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubSubscriptionResponse *>(obj)!=NULL;
}

const char *PubSubSubscriptionResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubSubscriptionResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubSubscriptionResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubSubscriptionResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "failed",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubSubscriptionResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "failed")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubSubscriptionResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubSubscriptionResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubSubscriptionResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionResponse *pp = (PubSubSubscriptionResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubSubscriptionResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionResponse *pp = (PubSubSubscriptionResponse *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getFailed());
        default: return "";
    }
}

bool PubSubSubscriptionResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionResponse *pp = (PubSubSubscriptionResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setFailed(string2bool(value)); return true;
        default: return false;
    }
}

const char *PubSubSubscriptionResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubSubscriptionResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubSubscriptionResponse *pp = (PubSubSubscriptionResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubUnsubscriptionMessage);

PubSubUnsubscriptionMessage::PubSubUnsubscriptionMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubUnsubscriptionMessage::PubSubUnsubscriptionMessage(const PubSubUnsubscriptionMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubUnsubscriptionMessage::~PubSubUnsubscriptionMessage()
{
}

PubSubUnsubscriptionMessage& PubSubUnsubscriptionMessage::operator=(const PubSubUnsubscriptionMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubUnsubscriptionMessage::copy(const PubSubUnsubscriptionMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->src_var = other.src_var;
}

void PubSubUnsubscriptionMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->src_var);
}

void PubSubUnsubscriptionMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->src_var);
}

int PubSubUnsubscriptionMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubUnsubscriptionMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubUnsubscriptionMessage::getSrc()
{
    return src_var;
}

void PubSubUnsubscriptionMessage::setSrc(const NodeHandle& src)
{
    this->src_var = src;
}

class PubSubUnsubscriptionMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubUnsubscriptionMessageDescriptor();
    virtual ~PubSubUnsubscriptionMessageDescriptor();

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

Register_ClassDescriptor(PubSubUnsubscriptionMessageDescriptor);

PubSubUnsubscriptionMessageDescriptor::PubSubUnsubscriptionMessageDescriptor() : cClassDescriptor("PubSubUnsubscriptionMessage", "BaseOverlayMessage")
{
}

PubSubUnsubscriptionMessageDescriptor::~PubSubUnsubscriptionMessageDescriptor()
{
}

bool PubSubUnsubscriptionMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubUnsubscriptionMessage *>(obj)!=NULL;
}

const char *PubSubUnsubscriptionMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubUnsubscriptionMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubUnsubscriptionMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubUnsubscriptionMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "src",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubUnsubscriptionMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubUnsubscriptionMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubUnsubscriptionMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubUnsubscriptionMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubUnsubscriptionMessage *pp = (PubSubUnsubscriptionMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubUnsubscriptionMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubUnsubscriptionMessage *pp = (PubSubUnsubscriptionMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getSrc(); return out.str();}
        default: return "";
    }
}

bool PubSubUnsubscriptionMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubUnsubscriptionMessage *pp = (PubSubUnsubscriptionMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubUnsubscriptionMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubUnsubscriptionMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubUnsubscriptionMessage *pp = (PubSubUnsubscriptionMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}

Register_Class(PubSubHelpCall);

PubSubHelpCall::PubSubHelpCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->subspaceId_var = 0;
    this->helpType_var = 0;
}

PubSubHelpCall::PubSubHelpCall(const PubSubHelpCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubHelpCall::~PubSubHelpCall()
{
}

PubSubHelpCall& PubSubHelpCall::operator=(const PubSubHelpCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubHelpCall::copy(const PubSubHelpCall& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->helpType_var = other.helpType_var;
}

void PubSubHelpCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->helpType_var);
}

void PubSubHelpCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->helpType_var);
}

int PubSubHelpCall::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubHelpCall::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

int PubSubHelpCall::getHelpType() const
{
    return helpType_var;
}

void PubSubHelpCall::setHelpType(int helpType)
{
    this->helpType_var = helpType;
}

class PubSubHelpCallDescriptor : public cClassDescriptor
{
  public:
    PubSubHelpCallDescriptor();
    virtual ~PubSubHelpCallDescriptor();

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

Register_ClassDescriptor(PubSubHelpCallDescriptor);

PubSubHelpCallDescriptor::PubSubHelpCallDescriptor() : cClassDescriptor("PubSubHelpCall", "BaseCallMessage")
{
}

PubSubHelpCallDescriptor::~PubSubHelpCallDescriptor()
{
}

bool PubSubHelpCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubHelpCall *>(obj)!=NULL;
}

const char *PubSubHelpCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubHelpCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubHelpCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubHelpCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "helpType",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubHelpCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "helpType")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubHelpCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubHelpCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "PubSubHelpType";
            return NULL;
        default: return NULL;
    }
}

int PubSubHelpCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpCall *pp = (PubSubHelpCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubHelpCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpCall *pp = (PubSubHelpCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: return long2string(pp->getHelpType());
        default: return "";
    }
}

bool PubSubHelpCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpCall *pp = (PubSubHelpCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 1: pp->setHelpType(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubHelpCallDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubHelpCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpCall *pp = (PubSubHelpCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubHelpResponse);

PubSubHelpResponse::PubSubHelpResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->subspaceId_var = 0;
    this->helpType_var = 0;
}

PubSubHelpResponse::PubSubHelpResponse(const PubSubHelpResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubHelpResponse::~PubSubHelpResponse()
{
}

PubSubHelpResponse& PubSubHelpResponse::operator=(const PubSubHelpResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubHelpResponse::copy(const PubSubHelpResponse& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->helpType_var = other.helpType_var;
    this->node_var = other.node_var;
}

void PubSubHelpResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->helpType_var);
    doPacking(b,this->node_var);
}

void PubSubHelpResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->helpType_var);
    doUnpacking(b,this->node_var);
}

int PubSubHelpResponse::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubHelpResponse::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

int PubSubHelpResponse::getHelpType() const
{
    return helpType_var;
}

void PubSubHelpResponse::setHelpType(int helpType)
{
    this->helpType_var = helpType;
}

NodeHandle& PubSubHelpResponse::getNode()
{
    return node_var;
}

void PubSubHelpResponse::setNode(const NodeHandle& node)
{
    this->node_var = node;
}

class PubSubHelpResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubHelpResponseDescriptor();
    virtual ~PubSubHelpResponseDescriptor();

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

Register_ClassDescriptor(PubSubHelpResponseDescriptor);

PubSubHelpResponseDescriptor::PubSubHelpResponseDescriptor() : cClassDescriptor("PubSubHelpResponse", "BaseResponseMessage")
{
}

PubSubHelpResponseDescriptor::~PubSubHelpResponseDescriptor()
{
}

bool PubSubHelpResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubHelpResponse *>(obj)!=NULL;
}

const char *PubSubHelpResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubHelpResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PubSubHelpResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubHelpResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "helpType",
        "node",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PubSubHelpResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "helpType")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "node")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubHelpResponseDescriptor::getFieldTypeString(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubHelpResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "PubSubHelpType";
            return NULL;
        default: return NULL;
    }
}

int PubSubHelpResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpResponse *pp = (PubSubHelpResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubHelpResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpResponse *pp = (PubSubHelpResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: return long2string(pp->getHelpType());
        case 2: {std::stringstream out; out << pp->getNode(); return out.str();}
        default: return "";
    }
}

bool PubSubHelpResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpResponse *pp = (PubSubHelpResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 1: pp->setHelpType(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubHelpResponseDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *PubSubHelpResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpResponse *pp = (PubSubHelpResponse *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubIntermediateCall);

PubSubIntermediateCall::PubSubIntermediateCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubIntermediateCall::PubSubIntermediateCall(const PubSubIntermediateCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubIntermediateCall::~PubSubIntermediateCall()
{
}

PubSubIntermediateCall& PubSubIntermediateCall::operator=(const PubSubIntermediateCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubIntermediateCall::copy(const PubSubIntermediateCall& other)
{
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubIntermediateCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
}

void PubSubIntermediateCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubIntermediateCall::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubIntermediateCall::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubIntermediateCallDescriptor : public cClassDescriptor
{
  public:
    PubSubIntermediateCallDescriptor();
    virtual ~PubSubIntermediateCallDescriptor();

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

Register_ClassDescriptor(PubSubIntermediateCallDescriptor);

PubSubIntermediateCallDescriptor::PubSubIntermediateCallDescriptor() : cClassDescriptor("PubSubIntermediateCall", "BaseCallMessage")
{
}

PubSubIntermediateCallDescriptor::~PubSubIntermediateCallDescriptor()
{
}

bool PubSubIntermediateCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubIntermediateCall *>(obj)!=NULL;
}

const char *PubSubIntermediateCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubIntermediateCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubIntermediateCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubIntermediateCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubIntermediateCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubIntermediateCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubIntermediateCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubIntermediateCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateCall *pp = (PubSubIntermediateCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubIntermediateCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateCall *pp = (PubSubIntermediateCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubIntermediateCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateCall *pp = (PubSubIntermediateCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubIntermediateCallDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubIntermediateCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateCall *pp = (PubSubIntermediateCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubIntermediateResponse);

PubSubIntermediateResponse::PubSubIntermediateResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubIntermediateResponse::PubSubIntermediateResponse(const PubSubIntermediateResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubIntermediateResponse::~PubSubIntermediateResponse()
{
}

PubSubIntermediateResponse& PubSubIntermediateResponse::operator=(const PubSubIntermediateResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubIntermediateResponse::copy(const PubSubIntermediateResponse& other)
{
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubIntermediateResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
}

void PubSubIntermediateResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubIntermediateResponse::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubIntermediateResponse::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubIntermediateResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubIntermediateResponseDescriptor();
    virtual ~PubSubIntermediateResponseDescriptor();

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

Register_ClassDescriptor(PubSubIntermediateResponseDescriptor);

PubSubIntermediateResponseDescriptor::PubSubIntermediateResponseDescriptor() : cClassDescriptor("PubSubIntermediateResponse", "BaseResponseMessage")
{
}

PubSubIntermediateResponseDescriptor::~PubSubIntermediateResponseDescriptor()
{
}

bool PubSubIntermediateResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubIntermediateResponse *>(obj)!=NULL;
}

const char *PubSubIntermediateResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubIntermediateResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubIntermediateResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubIntermediateResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubIntermediateResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubIntermediateResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubIntermediateResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubIntermediateResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateResponse *pp = (PubSubIntermediateResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubIntermediateResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateResponse *pp = (PubSubIntermediateResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubIntermediateResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateResponse *pp = (PubSubIntermediateResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubIntermediateResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubIntermediateResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubIntermediateResponse *pp = (PubSubIntermediateResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubBackupCall);

PubSubBackupCall::PubSubBackupCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->subspaceId_var = 0;
    intermediates_arraysize = 0;
    this->intermediates_var = 0;
    children_arraysize = 0;
    this->children_var = 0;
    childrenPos_arraysize = 0;
    this->childrenPos_var = 0;
}

PubSubBackupCall::PubSubBackupCall(const PubSubBackupCall& other) : BaseCallMessage(other)
{
    intermediates_arraysize = 0;
    this->intermediates_var = 0;
    children_arraysize = 0;
    this->children_var = 0;
    childrenPos_arraysize = 0;
    this->childrenPos_var = 0;
    copy(other);
}

PubSubBackupCall::~PubSubBackupCall()
{
    delete [] intermediates_var;
    delete [] children_var;
    delete [] childrenPos_var;
}

PubSubBackupCall& PubSubBackupCall::operator=(const PubSubBackupCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubBackupCall::copy(const PubSubBackupCall& other)
{
    this->subspaceId_var = other.subspaceId_var;
    delete [] this->intermediates_var;
    this->intermediates_var = (other.intermediates_arraysize==0) ? NULL : new NodeHandle[other.intermediates_arraysize];
    intermediates_arraysize = other.intermediates_arraysize;
    for (unsigned int i=0; i<intermediates_arraysize; i++)
        this->intermediates_var[i] = other.intermediates_var[i];
    delete [] this->children_var;
    this->children_var = (other.children_arraysize==0) ? NULL : new NodeHandle[other.children_arraysize];
    children_arraysize = other.children_arraysize;
    for (unsigned int i=0; i<children_arraysize; i++)
        this->children_var[i] = other.children_var[i];
    delete [] this->childrenPos_var;
    this->childrenPos_var = (other.childrenPos_arraysize==0) ? NULL : new int[other.childrenPos_arraysize];
    childrenPos_arraysize = other.childrenPos_arraysize;
    for (unsigned int i=0; i<childrenPos_arraysize; i++)
        this->childrenPos_var[i] = other.childrenPos_var[i];
}

void PubSubBackupCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    b->pack(intermediates_arraysize);
    doPacking(b,this->intermediates_var,intermediates_arraysize);
    b->pack(children_arraysize);
    doPacking(b,this->children_var,children_arraysize);
    b->pack(childrenPos_arraysize);
    doPacking(b,this->childrenPos_var,childrenPos_arraysize);
}

void PubSubBackupCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    delete [] this->intermediates_var;
    b->unpack(intermediates_arraysize);
    if (intermediates_arraysize==0) {
        this->intermediates_var = 0;
    } else {
        this->intermediates_var = new NodeHandle[intermediates_arraysize];
        doUnpacking(b,this->intermediates_var,intermediates_arraysize);
    }
    delete [] this->children_var;
    b->unpack(children_arraysize);
    if (children_arraysize==0) {
        this->children_var = 0;
    } else {
        this->children_var = new NodeHandle[children_arraysize];
        doUnpacking(b,this->children_var,children_arraysize);
    }
    delete [] this->childrenPos_var;
    b->unpack(childrenPos_arraysize);
    if (childrenPos_arraysize==0) {
        this->childrenPos_var = 0;
    } else {
        this->childrenPos_var = new int[childrenPos_arraysize];
        doUnpacking(b,this->childrenPos_var,childrenPos_arraysize);
    }
}

int PubSubBackupCall::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubBackupCall::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

void PubSubBackupCall::setIntermediatesArraySize(unsigned int size)
{
    NodeHandle *intermediates_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = intermediates_arraysize < size ? intermediates_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        intermediates_var2[i] = this->intermediates_var[i];
    intermediates_arraysize = size;
    delete [] this->intermediates_var;
    this->intermediates_var = intermediates_var2;
}

unsigned int PubSubBackupCall::getIntermediatesArraySize() const
{
    return intermediates_arraysize;
}

NodeHandle& PubSubBackupCall::getIntermediates(unsigned int k)
{
    if (k>=intermediates_arraysize) throw cRuntimeError("Array of size %d indexed by %d", intermediates_arraysize, k);
    return intermediates_var[k];
}

void PubSubBackupCall::setIntermediates(unsigned int k, const NodeHandle& intermediates)
{
    if (k>=intermediates_arraysize) throw cRuntimeError("Array of size %d indexed by %d", intermediates_arraysize, k);
    this->intermediates_var[k] = intermediates;
}

void PubSubBackupCall::setChildrenArraySize(unsigned int size)
{
    NodeHandle *children_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = children_arraysize < size ? children_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        children_var2[i] = this->children_var[i];
    children_arraysize = size;
    delete [] this->children_var;
    this->children_var = children_var2;
}

unsigned int PubSubBackupCall::getChildrenArraySize() const
{
    return children_arraysize;
}

NodeHandle& PubSubBackupCall::getChildren(unsigned int k)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    return children_var[k];
}

void PubSubBackupCall::setChildren(unsigned int k, const NodeHandle& children)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    this->children_var[k] = children;
}

void PubSubBackupCall::setChildrenPosArraySize(unsigned int size)
{
    int *childrenPos_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = childrenPos_arraysize < size ? childrenPos_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        childrenPos_var2[i] = this->childrenPos_var[i];
    for (unsigned int i=sz; i<size; i++)
        childrenPos_var2[i] = 0;
    childrenPos_arraysize = size;
    delete [] this->childrenPos_var;
    this->childrenPos_var = childrenPos_var2;
}

unsigned int PubSubBackupCall::getChildrenPosArraySize() const
{
    return childrenPos_arraysize;
}

int PubSubBackupCall::getChildrenPos(unsigned int k) const
{
    if (k>=childrenPos_arraysize) throw cRuntimeError("Array of size %d indexed by %d", childrenPos_arraysize, k);
    return childrenPos_var[k];
}

void PubSubBackupCall::setChildrenPos(unsigned int k, int childrenPos)
{
    if (k>=childrenPos_arraysize) throw cRuntimeError("Array of size %d indexed by %d", childrenPos_arraysize, k);
    this->childrenPos_var[k] = childrenPos;
}

class PubSubBackupCallDescriptor : public cClassDescriptor
{
  public:
    PubSubBackupCallDescriptor();
    virtual ~PubSubBackupCallDescriptor();

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

Register_ClassDescriptor(PubSubBackupCallDescriptor);

PubSubBackupCallDescriptor::PubSubBackupCallDescriptor() : cClassDescriptor("PubSubBackupCall", "BaseCallMessage")
{
}

PubSubBackupCallDescriptor::~PubSubBackupCallDescriptor()
{
}

bool PubSubBackupCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubBackupCall *>(obj)!=NULL;
}

const char *PubSubBackupCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubBackupCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PubSubBackupCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PubSubBackupCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "intermediates",
        "children",
        "childrenPos",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PubSubBackupCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "intermediates")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "children")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "childrenPos")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubBackupCallDescriptor::getFieldTypeString(void *object, int field) const
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
        "NodeHandle",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubBackupCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubBackupCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupCall *pp = (PubSubBackupCall *)object; (void)pp;
    switch (field) {
        case 1: return pp->getIntermediatesArraySize();
        case 2: return pp->getChildrenArraySize();
        case 3: return pp->getChildrenPosArraySize();
        default: return 0;
    }
}

std::string PubSubBackupCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupCall *pp = (PubSubBackupCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getIntermediates(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getChildren(i); return out.str();}
        case 3: return long2string(pp->getChildrenPos(i));
        default: return "";
    }
}

bool PubSubBackupCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupCall *pp = (PubSubBackupCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 3: pp->setChildrenPos(i,string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubBackupCallDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *PubSubBackupCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupCall *pp = (PubSubBackupCall *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getIntermediates(i)); break;
        case 2: return (void *)(&pp->getChildren(i)); break;
        default: return NULL;
    }
}

Register_Class(PubSubBackupResponse);

PubSubBackupResponse::PubSubBackupResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubBackupResponse::PubSubBackupResponse(const PubSubBackupResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubBackupResponse::~PubSubBackupResponse()
{
}

PubSubBackupResponse& PubSubBackupResponse::operator=(const PubSubBackupResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubBackupResponse::copy(const PubSubBackupResponse& other)
{
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubBackupResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
}

void PubSubBackupResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubBackupResponse::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubBackupResponse::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubBackupResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubBackupResponseDescriptor();
    virtual ~PubSubBackupResponseDescriptor();

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

Register_ClassDescriptor(PubSubBackupResponseDescriptor);

PubSubBackupResponseDescriptor::PubSubBackupResponseDescriptor() : cClassDescriptor("PubSubBackupResponse", "BaseResponseMessage")
{
}

PubSubBackupResponseDescriptor::~PubSubBackupResponseDescriptor()
{
}

bool PubSubBackupResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubBackupResponse *>(obj)!=NULL;
}

const char *PubSubBackupResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubBackupResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubBackupResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubBackupResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubBackupResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubBackupResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubBackupResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubBackupResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupResponse *pp = (PubSubBackupResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubBackupResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupResponse *pp = (PubSubBackupResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubBackupResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupResponse *pp = (PubSubBackupResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubBackupResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubBackupResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupResponse *pp = (PubSubBackupResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubPingCall);

PubSubPingCall::PubSubPingCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->subspaceId_var = 0;
    this->pingType_var = 0;
}

PubSubPingCall::PubSubPingCall(const PubSubPingCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubPingCall::~PubSubPingCall()
{
}

PubSubPingCall& PubSubPingCall::operator=(const PubSubPingCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubPingCall::copy(const PubSubPingCall& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->pingType_var = other.pingType_var;
}

void PubSubPingCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->pingType_var);
}

void PubSubPingCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->pingType_var);
}

int PubSubPingCall::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubPingCall::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

int PubSubPingCall::getPingType() const
{
    return pingType_var;
}

void PubSubPingCall::setPingType(int pingType)
{
    this->pingType_var = pingType;
}

class PubSubPingCallDescriptor : public cClassDescriptor
{
  public:
    PubSubPingCallDescriptor();
    virtual ~PubSubPingCallDescriptor();

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

Register_ClassDescriptor(PubSubPingCallDescriptor);

PubSubPingCallDescriptor::PubSubPingCallDescriptor() : cClassDescriptor("PubSubPingCall", "BaseCallMessage")
{
}

PubSubPingCallDescriptor::~PubSubPingCallDescriptor()
{
}

bool PubSubPingCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubPingCall *>(obj)!=NULL;
}

const char *PubSubPingCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubPingCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubPingCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubPingCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "pingType",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubPingCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pingType")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubPingCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubPingCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "PubSubPingType";
            return NULL;
        default: return NULL;
    }
}

int PubSubPingCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingCall *pp = (PubSubPingCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubPingCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingCall *pp = (PubSubPingCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: return long2string(pp->getPingType());
        default: return "";
    }
}

bool PubSubPingCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingCall *pp = (PubSubPingCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 1: pp->setPingType(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubPingCallDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubPingCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingCall *pp = (PubSubPingCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubPingResponse);

PubSubPingResponse::PubSubPingResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubPingResponse::PubSubPingResponse(const PubSubPingResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubPingResponse::~PubSubPingResponse()
{
}

PubSubPingResponse& PubSubPingResponse::operator=(const PubSubPingResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubPingResponse::copy(const PubSubPingResponse& other)
{
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubPingResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
}

void PubSubPingResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubPingResponse::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubPingResponse::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubPingResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubPingResponseDescriptor();
    virtual ~PubSubPingResponseDescriptor();

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

Register_ClassDescriptor(PubSubPingResponseDescriptor);

PubSubPingResponseDescriptor::PubSubPingResponseDescriptor() : cClassDescriptor("PubSubPingResponse", "BaseResponseMessage")
{
}

PubSubPingResponseDescriptor::~PubSubPingResponseDescriptor()
{
}

bool PubSubPingResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubPingResponse *>(obj)!=NULL;
}

const char *PubSubPingResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubPingResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubPingResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubPingResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubPingResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubPingResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubPingResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubPingResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingResponse *pp = (PubSubPingResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubPingResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingResponse *pp = (PubSubPingResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubPingResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingResponse *pp = (PubSubPingResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubPingResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubPingResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubPingResponse *pp = (PubSubPingResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubReplacementMessage);

PubSubReplacementMessage::PubSubReplacementMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubReplacementMessage::PubSubReplacementMessage(const PubSubReplacementMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubReplacementMessage::~PubSubReplacementMessage()
{
}

PubSubReplacementMessage& PubSubReplacementMessage::operator=(const PubSubReplacementMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubReplacementMessage::copy(const PubSubReplacementMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->newResponsibleNode_var = other.newResponsibleNode_var;
}

void PubSubReplacementMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->newResponsibleNode_var);
}

void PubSubReplacementMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->newResponsibleNode_var);
}

int PubSubReplacementMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubReplacementMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubReplacementMessage::getNewResponsibleNode()
{
    return newResponsibleNode_var;
}

void PubSubReplacementMessage::setNewResponsibleNode(const NodeHandle& newResponsibleNode)
{
    this->newResponsibleNode_var = newResponsibleNode;
}

class PubSubReplacementMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubReplacementMessageDescriptor();
    virtual ~PubSubReplacementMessageDescriptor();

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

Register_ClassDescriptor(PubSubReplacementMessageDescriptor);

PubSubReplacementMessageDescriptor::PubSubReplacementMessageDescriptor() : cClassDescriptor("PubSubReplacementMessage", "BaseOverlayMessage")
{
}

PubSubReplacementMessageDescriptor::~PubSubReplacementMessageDescriptor()
{
}

bool PubSubReplacementMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubReplacementMessage *>(obj)!=NULL;
}

const char *PubSubReplacementMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubReplacementMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubReplacementMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubReplacementMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "newResponsibleNode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubReplacementMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "newResponsibleNode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubReplacementMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubReplacementMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubReplacementMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReplacementMessage *pp = (PubSubReplacementMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubReplacementMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReplacementMessage *pp = (PubSubReplacementMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getNewResponsibleNode(); return out.str();}
        default: return "";
    }
}

bool PubSubReplacementMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReplacementMessage *pp = (PubSubReplacementMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubReplacementMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubReplacementMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReplacementMessage *pp = (PubSubReplacementMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getNewResponsibleNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubFailedNodeMessage);

PubSubFailedNodeMessage::PubSubFailedNodeMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
}

PubSubFailedNodeMessage::PubSubFailedNodeMessage(const PubSubFailedNodeMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubFailedNodeMessage::~PubSubFailedNodeMessage()
{
}

PubSubFailedNodeMessage& PubSubFailedNodeMessage::operator=(const PubSubFailedNodeMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubFailedNodeMessage::copy(const PubSubFailedNodeMessage& other)
{
    this->failedNode_var = other.failedNode_var;
}

void PubSubFailedNodeMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->failedNode_var);
}

void PubSubFailedNodeMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->failedNode_var);
}

TransportAddress& PubSubFailedNodeMessage::getFailedNode()
{
    return failedNode_var;
}

void PubSubFailedNodeMessage::setFailedNode(const TransportAddress& failedNode)
{
    this->failedNode_var = failedNode;
}

class PubSubFailedNodeMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubFailedNodeMessageDescriptor();
    virtual ~PubSubFailedNodeMessageDescriptor();

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

Register_ClassDescriptor(PubSubFailedNodeMessageDescriptor);

PubSubFailedNodeMessageDescriptor::PubSubFailedNodeMessageDescriptor() : cClassDescriptor("PubSubFailedNodeMessage", "BaseOverlayMessage")
{
}

PubSubFailedNodeMessageDescriptor::~PubSubFailedNodeMessageDescriptor()
{
}

bool PubSubFailedNodeMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubFailedNodeMessage *>(obj)!=NULL;
}

const char *PubSubFailedNodeMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubFailedNodeMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubFailedNodeMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubFailedNodeMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "failedNode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubFailedNodeMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "failedNode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubFailedNodeMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubFailedNodeMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubFailedNodeMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubFailedNodeMessage *pp = (PubSubFailedNodeMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubFailedNodeMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubFailedNodeMessage *pp = (PubSubFailedNodeMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getFailedNode(); return out.str();}
        default: return "";
    }
}

bool PubSubFailedNodeMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubFailedNodeMessage *pp = (PubSubFailedNodeMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PubSubFailedNodeMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *PubSubFailedNodeMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubFailedNodeMessage *pp = (PubSubFailedNodeMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getFailedNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubNodeLeftMessage);

PubSubNodeLeftMessage::PubSubNodeLeftMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubNodeLeftMessage::PubSubNodeLeftMessage(const PubSubNodeLeftMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubNodeLeftMessage::~PubSubNodeLeftMessage()
{
}

PubSubNodeLeftMessage& PubSubNodeLeftMessage::operator=(const PubSubNodeLeftMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubNodeLeftMessage::copy(const PubSubNodeLeftMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->node_var = other.node_var;
}

void PubSubNodeLeftMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->node_var);
}

void PubSubNodeLeftMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->node_var);
}

int PubSubNodeLeftMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubNodeLeftMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubNodeLeftMessage::getNode()
{
    return node_var;
}

void PubSubNodeLeftMessage::setNode(const NodeHandle& node)
{
    this->node_var = node;
}

class PubSubNodeLeftMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubNodeLeftMessageDescriptor();
    virtual ~PubSubNodeLeftMessageDescriptor();

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

Register_ClassDescriptor(PubSubNodeLeftMessageDescriptor);

PubSubNodeLeftMessageDescriptor::PubSubNodeLeftMessageDescriptor() : cClassDescriptor("PubSubNodeLeftMessage", "BaseOverlayMessage")
{
}

PubSubNodeLeftMessageDescriptor::~PubSubNodeLeftMessageDescriptor()
{
}

bool PubSubNodeLeftMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubNodeLeftMessage *>(obj)!=NULL;
}

const char *PubSubNodeLeftMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubNodeLeftMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubNodeLeftMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubNodeLeftMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "node",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubNodeLeftMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "node")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubNodeLeftMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubNodeLeftMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubNodeLeftMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubNodeLeftMessage *pp = (PubSubNodeLeftMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubNodeLeftMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubNodeLeftMessage *pp = (PubSubNodeLeftMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getNode(); return out.str();}
        default: return "";
    }
}

bool PubSubNodeLeftMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubNodeLeftMessage *pp = (PubSubNodeLeftMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubNodeLeftMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubNodeLeftMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubNodeLeftMessage *pp = (PubSubNodeLeftMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubAdoptChildCall);

PubSubAdoptChildCall::PubSubAdoptChildCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubAdoptChildCall::PubSubAdoptChildCall(const PubSubAdoptChildCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PubSubAdoptChildCall::~PubSubAdoptChildCall()
{
}

PubSubAdoptChildCall& PubSubAdoptChildCall::operator=(const PubSubAdoptChildCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubAdoptChildCall::copy(const PubSubAdoptChildCall& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->child_var = other.child_var;
}

void PubSubAdoptChildCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->child_var);
}

void PubSubAdoptChildCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->child_var);
}

int PubSubAdoptChildCall::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubAdoptChildCall::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubAdoptChildCall::getChild()
{
    return child_var;
}

void PubSubAdoptChildCall::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

class PubSubAdoptChildCallDescriptor : public cClassDescriptor
{
  public:
    PubSubAdoptChildCallDescriptor();
    virtual ~PubSubAdoptChildCallDescriptor();

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

Register_ClassDescriptor(PubSubAdoptChildCallDescriptor);

PubSubAdoptChildCallDescriptor::PubSubAdoptChildCallDescriptor() : cClassDescriptor("PubSubAdoptChildCall", "BaseCallMessage")
{
}

PubSubAdoptChildCallDescriptor::~PubSubAdoptChildCallDescriptor()
{
}

bool PubSubAdoptChildCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubAdoptChildCall *>(obj)!=NULL;
}

const char *PubSubAdoptChildCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubAdoptChildCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubAdoptChildCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubAdoptChildCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "child",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubAdoptChildCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubAdoptChildCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubAdoptChildCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubAdoptChildCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildCall *pp = (PubSubAdoptChildCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubAdoptChildCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildCall *pp = (PubSubAdoptChildCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getChild(); return out.str();}
        default: return "";
    }
}

bool PubSubAdoptChildCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildCall *pp = (PubSubAdoptChildCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubAdoptChildCallDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubAdoptChildCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildCall *pp = (PubSubAdoptChildCall *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getChild()); break;
        default: return NULL;
    }
}

Register_Class(PubSubAdoptChildResponse);

PubSubAdoptChildResponse::PubSubAdoptChildResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubAdoptChildResponse::PubSubAdoptChildResponse(const PubSubAdoptChildResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PubSubAdoptChildResponse::~PubSubAdoptChildResponse()
{
}

PubSubAdoptChildResponse& PubSubAdoptChildResponse::operator=(const PubSubAdoptChildResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubAdoptChildResponse::copy(const PubSubAdoptChildResponse& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->child_var = other.child_var;
}

void PubSubAdoptChildResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->child_var);
}

void PubSubAdoptChildResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->child_var);
}

int PubSubAdoptChildResponse::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubAdoptChildResponse::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubAdoptChildResponse::getChild()
{
    return child_var;
}

void PubSubAdoptChildResponse::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

class PubSubAdoptChildResponseDescriptor : public cClassDescriptor
{
  public:
    PubSubAdoptChildResponseDescriptor();
    virtual ~PubSubAdoptChildResponseDescriptor();

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

Register_ClassDescriptor(PubSubAdoptChildResponseDescriptor);

PubSubAdoptChildResponseDescriptor::PubSubAdoptChildResponseDescriptor() : cClassDescriptor("PubSubAdoptChildResponse", "BaseResponseMessage")
{
}

PubSubAdoptChildResponseDescriptor::~PubSubAdoptChildResponseDescriptor()
{
}

bool PubSubAdoptChildResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubAdoptChildResponse *>(obj)!=NULL;
}

const char *PubSubAdoptChildResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubAdoptChildResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubAdoptChildResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubAdoptChildResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "child",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubAdoptChildResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubAdoptChildResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubAdoptChildResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubAdoptChildResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildResponse *pp = (PubSubAdoptChildResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubAdoptChildResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildResponse *pp = (PubSubAdoptChildResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getChild(); return out.str();}
        default: return "";
    }
}

bool PubSubAdoptChildResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildResponse *pp = (PubSubAdoptChildResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubAdoptChildResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubAdoptChildResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubAdoptChildResponse *pp = (PubSubAdoptChildResponse *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getChild()); break;
        default: return NULL;
    }
}

Register_Class(PubSubReleaseIntermediateMessage);

PubSubReleaseIntermediateMessage::PubSubReleaseIntermediateMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubReleaseIntermediateMessage::PubSubReleaseIntermediateMessage(const PubSubReleaseIntermediateMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubReleaseIntermediateMessage::~PubSubReleaseIntermediateMessage()
{
}

PubSubReleaseIntermediateMessage& PubSubReleaseIntermediateMessage::operator=(const PubSubReleaseIntermediateMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubReleaseIntermediateMessage::copy(const PubSubReleaseIntermediateMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
}

void PubSubReleaseIntermediateMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
}

void PubSubReleaseIntermediateMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
}

int PubSubReleaseIntermediateMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubReleaseIntermediateMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

class PubSubReleaseIntermediateMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubReleaseIntermediateMessageDescriptor();
    virtual ~PubSubReleaseIntermediateMessageDescriptor();

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

Register_ClassDescriptor(PubSubReleaseIntermediateMessageDescriptor);

PubSubReleaseIntermediateMessageDescriptor::PubSubReleaseIntermediateMessageDescriptor() : cClassDescriptor("PubSubReleaseIntermediateMessage", "BaseOverlayMessage")
{
}

PubSubReleaseIntermediateMessageDescriptor::~PubSubReleaseIntermediateMessageDescriptor()
{
}

bool PubSubReleaseIntermediateMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubReleaseIntermediateMessage *>(obj)!=NULL;
}

const char *PubSubReleaseIntermediateMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubReleaseIntermediateMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PubSubReleaseIntermediateMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubReleaseIntermediateMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PubSubReleaseIntermediateMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubReleaseIntermediateMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubReleaseIntermediateMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubReleaseIntermediateMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReleaseIntermediateMessage *pp = (PubSubReleaseIntermediateMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubReleaseIntermediateMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReleaseIntermediateMessage *pp = (PubSubReleaseIntermediateMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        default: return "";
    }
}

bool PubSubReleaseIntermediateMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReleaseIntermediateMessage *pp = (PubSubReleaseIntermediateMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubReleaseIntermediateMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubReleaseIntermediateMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubReleaseIntermediateMessage *pp = (PubSubReleaseIntermediateMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PubSubHelpReleaseMessage);

PubSubHelpReleaseMessage::PubSubHelpReleaseMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubHelpReleaseMessage::PubSubHelpReleaseMessage(const PubSubHelpReleaseMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubHelpReleaseMessage::~PubSubHelpReleaseMessage()
{
}

PubSubHelpReleaseMessage& PubSubHelpReleaseMessage::operator=(const PubSubHelpReleaseMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubHelpReleaseMessage::copy(const PubSubHelpReleaseMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->node_var = other.node_var;
}

void PubSubHelpReleaseMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->node_var);
}

void PubSubHelpReleaseMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->node_var);
}

int PubSubHelpReleaseMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubHelpReleaseMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubHelpReleaseMessage::getNode()
{
    return node_var;
}

void PubSubHelpReleaseMessage::setNode(const NodeHandle& node)
{
    this->node_var = node;
}

class PubSubHelpReleaseMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubHelpReleaseMessageDescriptor();
    virtual ~PubSubHelpReleaseMessageDescriptor();

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

Register_ClassDescriptor(PubSubHelpReleaseMessageDescriptor);

PubSubHelpReleaseMessageDescriptor::PubSubHelpReleaseMessageDescriptor() : cClassDescriptor("PubSubHelpReleaseMessage", "BaseOverlayMessage")
{
}

PubSubHelpReleaseMessageDescriptor::~PubSubHelpReleaseMessageDescriptor()
{
}

bool PubSubHelpReleaseMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubHelpReleaseMessage *>(obj)!=NULL;
}

const char *PubSubHelpReleaseMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubHelpReleaseMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PubSubHelpReleaseMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *PubSubHelpReleaseMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "node",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PubSubHelpReleaseMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "node")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubHelpReleaseMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PubSubHelpReleaseMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubHelpReleaseMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpReleaseMessage *pp = (PubSubHelpReleaseMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubHelpReleaseMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpReleaseMessage *pp = (PubSubHelpReleaseMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getNode(); return out.str();}
        default: return "";
    }
}

bool PubSubHelpReleaseMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpReleaseMessage *pp = (PubSubHelpReleaseMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubHelpReleaseMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *PubSubHelpReleaseMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubHelpReleaseMessage *pp = (PubSubHelpReleaseMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubBackupSubscriptionMessage);

PubSubBackupSubscriptionMessage::PubSubBackupSubscriptionMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubBackupSubscriptionMessage::PubSubBackupSubscriptionMessage(const PubSubBackupSubscriptionMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubBackupSubscriptionMessage::~PubSubBackupSubscriptionMessage()
{
}

PubSubBackupSubscriptionMessage& PubSubBackupSubscriptionMessage::operator=(const PubSubBackupSubscriptionMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubBackupSubscriptionMessage::copy(const PubSubBackupSubscriptionMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->child_var = other.child_var;
    this->parent_var = other.parent_var;
    this->oldParent_var = other.oldParent_var;
}

void PubSubBackupSubscriptionMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->child_var);
    doPacking(b,this->parent_var);
    doPacking(b,this->oldParent_var);
}

void PubSubBackupSubscriptionMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->child_var);
    doUnpacking(b,this->parent_var);
    doUnpacking(b,this->oldParent_var);
}

int PubSubBackupSubscriptionMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubBackupSubscriptionMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubBackupSubscriptionMessage::getChild()
{
    return child_var;
}

void PubSubBackupSubscriptionMessage::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

NodeHandle& PubSubBackupSubscriptionMessage::getParent()
{
    return parent_var;
}

void PubSubBackupSubscriptionMessage::setParent(const NodeHandle& parent)
{
    this->parent_var = parent;
}

NodeHandle& PubSubBackupSubscriptionMessage::getOldParent()
{
    return oldParent_var;
}

void PubSubBackupSubscriptionMessage::setOldParent(const NodeHandle& oldParent)
{
    this->oldParent_var = oldParent;
}

class PubSubBackupSubscriptionMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubBackupSubscriptionMessageDescriptor();
    virtual ~PubSubBackupSubscriptionMessageDescriptor();

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

Register_ClassDescriptor(PubSubBackupSubscriptionMessageDescriptor);

PubSubBackupSubscriptionMessageDescriptor::PubSubBackupSubscriptionMessageDescriptor() : cClassDescriptor("PubSubBackupSubscriptionMessage", "BaseOverlayMessage")
{
}

PubSubBackupSubscriptionMessageDescriptor::~PubSubBackupSubscriptionMessageDescriptor()
{
}

bool PubSubBackupSubscriptionMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubBackupSubscriptionMessage *>(obj)!=NULL;
}

const char *PubSubBackupSubscriptionMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubBackupSubscriptionMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PubSubBackupSubscriptionMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PubSubBackupSubscriptionMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "child",
        "parent",
        "oldParent",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PubSubBackupSubscriptionMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "parent")==0) return base+2;
    if (fieldName[0]=='o' && strcmp(fieldName, "oldParent")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubBackupSubscriptionMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "NodeHandle",
        "NodeHandle",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubBackupSubscriptionMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubBackupSubscriptionMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupSubscriptionMessage *pp = (PubSubBackupSubscriptionMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubBackupSubscriptionMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupSubscriptionMessage *pp = (PubSubBackupSubscriptionMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getChild(); return out.str();}
        case 2: {std::stringstream out; out << pp->getParent(); return out.str();}
        case 3: {std::stringstream out; out << pp->getOldParent(); return out.str();}
        default: return "";
    }
}

bool PubSubBackupSubscriptionMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupSubscriptionMessage *pp = (PubSubBackupSubscriptionMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubBackupSubscriptionMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
        "NodeHandle",
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *PubSubBackupSubscriptionMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupSubscriptionMessage *pp = (PubSubBackupSubscriptionMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getChild()); break;
        case 2: return (void *)(&pp->getParent()); break;
        case 3: return (void *)(&pp->getOldParent()); break;
        default: return NULL;
    }
}

Register_Class(PubSubBackupIntermediateMessage);

PubSubBackupIntermediateMessage::PubSubBackupIntermediateMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
    this->pos_var = 0;
}

PubSubBackupIntermediateMessage::PubSubBackupIntermediateMessage(const PubSubBackupIntermediateMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubBackupIntermediateMessage::~PubSubBackupIntermediateMessage()
{
}

PubSubBackupIntermediateMessage& PubSubBackupIntermediateMessage::operator=(const PubSubBackupIntermediateMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubBackupIntermediateMessage::copy(const PubSubBackupIntermediateMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->node_var = other.node_var;
    this->pos_var = other.pos_var;
}

void PubSubBackupIntermediateMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->node_var);
    doPacking(b,this->pos_var);
}

void PubSubBackupIntermediateMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->node_var);
    doUnpacking(b,this->pos_var);
}

int PubSubBackupIntermediateMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubBackupIntermediateMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubBackupIntermediateMessage::getNode()
{
    return node_var;
}

void PubSubBackupIntermediateMessage::setNode(const NodeHandle& node)
{
    this->node_var = node;
}

int PubSubBackupIntermediateMessage::getPos() const
{
    return pos_var;
}

void PubSubBackupIntermediateMessage::setPos(int pos)
{
    this->pos_var = pos;
}

class PubSubBackupIntermediateMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubBackupIntermediateMessageDescriptor();
    virtual ~PubSubBackupIntermediateMessageDescriptor();

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

Register_ClassDescriptor(PubSubBackupIntermediateMessageDescriptor);

PubSubBackupIntermediateMessageDescriptor::PubSubBackupIntermediateMessageDescriptor() : cClassDescriptor("PubSubBackupIntermediateMessage", "BaseOverlayMessage")
{
}

PubSubBackupIntermediateMessageDescriptor::~PubSubBackupIntermediateMessageDescriptor()
{
}

bool PubSubBackupIntermediateMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubBackupIntermediateMessage *>(obj)!=NULL;
}

const char *PubSubBackupIntermediateMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubBackupIntermediateMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PubSubBackupIntermediateMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *PubSubBackupIntermediateMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "node",
        "pos",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PubSubBackupIntermediateMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "node")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "pos")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubBackupIntermediateMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubBackupIntermediateMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubBackupIntermediateMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupIntermediateMessage *pp = (PubSubBackupIntermediateMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubBackupIntermediateMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupIntermediateMessage *pp = (PubSubBackupIntermediateMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getNode(); return out.str();}
        case 2: return long2string(pp->getPos());
        default: return "";
    }
}

bool PubSubBackupIntermediateMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupIntermediateMessage *pp = (PubSubBackupIntermediateMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 2: pp->setPos(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubBackupIntermediateMessageDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *PubSubBackupIntermediateMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupIntermediateMessage *pp = (PubSubBackupIntermediateMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getNode()); break;
        default: return NULL;
    }
}

Register_Class(PubSubBackupUnsubscribeMessage);

PubSubBackupUnsubscribeMessage::PubSubBackupUnsubscribeMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
}

PubSubBackupUnsubscribeMessage::PubSubBackupUnsubscribeMessage(const PubSubBackupUnsubscribeMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubBackupUnsubscribeMessage::~PubSubBackupUnsubscribeMessage()
{
}

PubSubBackupUnsubscribeMessage& PubSubBackupUnsubscribeMessage::operator=(const PubSubBackupUnsubscribeMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubBackupUnsubscribeMessage::copy(const PubSubBackupUnsubscribeMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->child_var = other.child_var;
    this->intermediate_var = other.intermediate_var;
}

void PubSubBackupUnsubscribeMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->child_var);
    doPacking(b,this->intermediate_var);
}

void PubSubBackupUnsubscribeMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->child_var);
    doUnpacking(b,this->intermediate_var);
}

int PubSubBackupUnsubscribeMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubBackupUnsubscribeMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

NodeHandle& PubSubBackupUnsubscribeMessage::getChild()
{
    return child_var;
}

void PubSubBackupUnsubscribeMessage::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

NodeHandle& PubSubBackupUnsubscribeMessage::getIntermediate()
{
    return intermediate_var;
}

void PubSubBackupUnsubscribeMessage::setIntermediate(const NodeHandle& intermediate)
{
    this->intermediate_var = intermediate;
}

class PubSubBackupUnsubscribeMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubBackupUnsubscribeMessageDescriptor();
    virtual ~PubSubBackupUnsubscribeMessageDescriptor();

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

Register_ClassDescriptor(PubSubBackupUnsubscribeMessageDescriptor);

PubSubBackupUnsubscribeMessageDescriptor::PubSubBackupUnsubscribeMessageDescriptor() : cClassDescriptor("PubSubBackupUnsubscribeMessage", "BaseOverlayMessage")
{
}

PubSubBackupUnsubscribeMessageDescriptor::~PubSubBackupUnsubscribeMessageDescriptor()
{
}

bool PubSubBackupUnsubscribeMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubBackupUnsubscribeMessage *>(obj)!=NULL;
}

const char *PubSubBackupUnsubscribeMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubBackupUnsubscribeMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PubSubBackupUnsubscribeMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PubSubBackupUnsubscribeMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "child",
        "intermediate",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PubSubBackupUnsubscribeMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "intermediate")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubBackupUnsubscribeMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubBackupUnsubscribeMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubBackupUnsubscribeMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupUnsubscribeMessage *pp = (PubSubBackupUnsubscribeMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubBackupUnsubscribeMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupUnsubscribeMessage *pp = (PubSubBackupUnsubscribeMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: {std::stringstream out; out << pp->getChild(); return out.str();}
        case 2: {std::stringstream out; out << pp->getIntermediate(); return out.str();}
        default: return "";
    }
}

bool PubSubBackupUnsubscribeMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupUnsubscribeMessage *pp = (PubSubBackupUnsubscribeMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *PubSubBackupUnsubscribeMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *PubSubBackupUnsubscribeMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubBackupUnsubscribeMessage *pp = (PubSubBackupUnsubscribeMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getChild()); break;
        case 2: return (void *)(&pp->getIntermediate()); break;
        default: return NULL;
    }
}

Register_Class(PubSubMoveMessage);

PubSubMoveMessage::PubSubMoveMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
    this->timestamp_var = 0;
}

PubSubMoveMessage::PubSubMoveMessage(const PubSubMoveMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

PubSubMoveMessage::~PubSubMoveMessage()
{
}

PubSubMoveMessage& PubSubMoveMessage::operator=(const PubSubMoveMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubMoveMessage::copy(const PubSubMoveMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->timestamp_var = other.timestamp_var;
    this->player_var = other.player_var;
    this->position_var = other.position_var;
}

void PubSubMoveMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->timestamp_var);
    doPacking(b,this->player_var);
    doPacking(b,this->position_var);
}

void PubSubMoveMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->timestamp_var);
    doUnpacking(b,this->player_var);
    doUnpacking(b,this->position_var);
}

int PubSubMoveMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubMoveMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

simtime_t PubSubMoveMessage::getTimestamp() const
{
    return timestamp_var;
}

void PubSubMoveMessage::setTimestamp(simtime_t timestamp)
{
    this->timestamp_var = timestamp;
}

NodeHandle& PubSubMoveMessage::getPlayer()
{
    return player_var;
}

void PubSubMoveMessage::setPlayer(const NodeHandle& player)
{
    this->player_var = player;
}

Vector2D& PubSubMoveMessage::getPosition()
{
    return position_var;
}

void PubSubMoveMessage::setPosition(const Vector2D& position)
{
    this->position_var = position;
}

class PubSubMoveMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubMoveMessageDescriptor();
    virtual ~PubSubMoveMessageDescriptor();

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

Register_ClassDescriptor(PubSubMoveMessageDescriptor);

PubSubMoveMessageDescriptor::PubSubMoveMessageDescriptor() : cClassDescriptor("PubSubMoveMessage", "BaseOverlayMessage")
{
}

PubSubMoveMessageDescriptor::~PubSubMoveMessageDescriptor()
{
}

bool PubSubMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubMoveMessage *>(obj)!=NULL;
}

const char *PubSubMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PubSubMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PubSubMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "timestamp",
        "player",
        "position",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PubSubMoveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "simtime_t",
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveMessage *pp = (PubSubMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PubSubMoveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveMessage *pp = (PubSubMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: return double2string(pp->getTimestamp());
        case 2: {std::stringstream out; out << pp->getPlayer(); return out.str();}
        case 3: {std::stringstream out; out << pp->getPosition(); return out.str();}
        default: return "";
    }
}

bool PubSubMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveMessage *pp = (PubSubMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 1: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *PubSubMoveMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *PubSubMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveMessage *pp = (PubSubMoveMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getPlayer()); break;
        case 3: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(PubSubMoveListMessage);

PubSubMoveListMessage::PubSubMoveListMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->subspaceId_var = 0;
    this->timestamp_var = 0;
    player_arraysize = 0;
    this->player_var = 0;
    position_arraysize = 0;
    this->position_var = 0;
    positionAge_arraysize = 0;
    this->positionAge_var = 0;
}

PubSubMoveListMessage::PubSubMoveListMessage(const PubSubMoveListMessage& other) : BaseOverlayMessage(other)
{
    player_arraysize = 0;
    this->player_var = 0;
    position_arraysize = 0;
    this->position_var = 0;
    positionAge_arraysize = 0;
    this->positionAge_var = 0;
    copy(other);
}

PubSubMoveListMessage::~PubSubMoveListMessage()
{
    delete [] player_var;
    delete [] position_var;
    delete [] positionAge_var;
}

PubSubMoveListMessage& PubSubMoveListMessage::operator=(const PubSubMoveListMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PubSubMoveListMessage::copy(const PubSubMoveListMessage& other)
{
    this->subspaceId_var = other.subspaceId_var;
    this->timestamp_var = other.timestamp_var;
    delete [] this->player_var;
    this->player_var = (other.player_arraysize==0) ? NULL : new NodeHandle[other.player_arraysize];
    player_arraysize = other.player_arraysize;
    for (unsigned int i=0; i<player_arraysize; i++)
        this->player_var[i] = other.player_var[i];
    delete [] this->position_var;
    this->position_var = (other.position_arraysize==0) ? NULL : new Vector2D[other.position_arraysize];
    position_arraysize = other.position_arraysize;
    for (unsigned int i=0; i<position_arraysize; i++)
        this->position_var[i] = other.position_var[i];
    delete [] this->positionAge_var;
    this->positionAge_var = (other.positionAge_arraysize==0) ? NULL : new simtime_t[other.positionAge_arraysize];
    positionAge_arraysize = other.positionAge_arraysize;
    for (unsigned int i=0; i<positionAge_arraysize; i++)
        this->positionAge_var[i] = other.positionAge_var[i];
}

void PubSubMoveListMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->subspaceId_var);
    doPacking(b,this->timestamp_var);
    b->pack(player_arraysize);
    doPacking(b,this->player_var,player_arraysize);
    b->pack(position_arraysize);
    doPacking(b,this->position_var,position_arraysize);
    b->pack(positionAge_arraysize);
    doPacking(b,this->positionAge_var,positionAge_arraysize);
}

void PubSubMoveListMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->subspaceId_var);
    doUnpacking(b,this->timestamp_var);
    delete [] this->player_var;
    b->unpack(player_arraysize);
    if (player_arraysize==0) {
        this->player_var = 0;
    } else {
        this->player_var = new NodeHandle[player_arraysize];
        doUnpacking(b,this->player_var,player_arraysize);
    }
    delete [] this->position_var;
    b->unpack(position_arraysize);
    if (position_arraysize==0) {
        this->position_var = 0;
    } else {
        this->position_var = new Vector2D[position_arraysize];
        doUnpacking(b,this->position_var,position_arraysize);
    }
    delete [] this->positionAge_var;
    b->unpack(positionAge_arraysize);
    if (positionAge_arraysize==0) {
        this->positionAge_var = 0;
    } else {
        this->positionAge_var = new simtime_t[positionAge_arraysize];
        doUnpacking(b,this->positionAge_var,positionAge_arraysize);
    }
}

int PubSubMoveListMessage::getSubspaceId() const
{
    return subspaceId_var;
}

void PubSubMoveListMessage::setSubspaceId(int subspaceId)
{
    this->subspaceId_var = subspaceId;
}

simtime_t PubSubMoveListMessage::getTimestamp() const
{
    return timestamp_var;
}

void PubSubMoveListMessage::setTimestamp(simtime_t timestamp)
{
    this->timestamp_var = timestamp;
}

void PubSubMoveListMessage::setPlayerArraySize(unsigned int size)
{
    NodeHandle *player_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = player_arraysize < size ? player_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        player_var2[i] = this->player_var[i];
    player_arraysize = size;
    delete [] this->player_var;
    this->player_var = player_var2;
}

unsigned int PubSubMoveListMessage::getPlayerArraySize() const
{
    return player_arraysize;
}

NodeHandle& PubSubMoveListMessage::getPlayer(unsigned int k)
{
    if (k>=player_arraysize) throw cRuntimeError("Array of size %d indexed by %d", player_arraysize, k);
    return player_var[k];
}

void PubSubMoveListMessage::setPlayer(unsigned int k, const NodeHandle& player)
{
    if (k>=player_arraysize) throw cRuntimeError("Array of size %d indexed by %d", player_arraysize, k);
    this->player_var[k] = player;
}

void PubSubMoveListMessage::setPositionArraySize(unsigned int size)
{
    Vector2D *position_var2 = (size==0) ? NULL : new Vector2D[size];
    unsigned int sz = position_arraysize < size ? position_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        position_var2[i] = this->position_var[i];
    position_arraysize = size;
    delete [] this->position_var;
    this->position_var = position_var2;
}

unsigned int PubSubMoveListMessage::getPositionArraySize() const
{
    return position_arraysize;
}

Vector2D& PubSubMoveListMessage::getPosition(unsigned int k)
{
    if (k>=position_arraysize) throw cRuntimeError("Array of size %d indexed by %d", position_arraysize, k);
    return position_var[k];
}

void PubSubMoveListMessage::setPosition(unsigned int k, const Vector2D& position)
{
    if (k>=position_arraysize) throw cRuntimeError("Array of size %d indexed by %d", position_arraysize, k);
    this->position_var[k] = position;
}

void PubSubMoveListMessage::setPositionAgeArraySize(unsigned int size)
{
    simtime_t *positionAge_var2 = (size==0) ? NULL : new simtime_t[size];
    unsigned int sz = positionAge_arraysize < size ? positionAge_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        positionAge_var2[i] = this->positionAge_var[i];
    for (unsigned int i=sz; i<size; i++)
        positionAge_var2[i] = 0;
    positionAge_arraysize = size;
    delete [] this->positionAge_var;
    this->positionAge_var = positionAge_var2;
}

unsigned int PubSubMoveListMessage::getPositionAgeArraySize() const
{
    return positionAge_arraysize;
}

simtime_t PubSubMoveListMessage::getPositionAge(unsigned int k) const
{
    if (k>=positionAge_arraysize) throw cRuntimeError("Array of size %d indexed by %d", positionAge_arraysize, k);
    return positionAge_var[k];
}

void PubSubMoveListMessage::setPositionAge(unsigned int k, simtime_t positionAge)
{
    if (k>=positionAge_arraysize) throw cRuntimeError("Array of size %d indexed by %d", positionAge_arraysize, k);
    this->positionAge_var[k] = positionAge;
}

class PubSubMoveListMessageDescriptor : public cClassDescriptor
{
  public:
    PubSubMoveListMessageDescriptor();
    virtual ~PubSubMoveListMessageDescriptor();

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

Register_ClassDescriptor(PubSubMoveListMessageDescriptor);

PubSubMoveListMessageDescriptor::PubSubMoveListMessageDescriptor() : cClassDescriptor("PubSubMoveListMessage", "BaseOverlayMessage")
{
}

PubSubMoveListMessageDescriptor::~PubSubMoveListMessageDescriptor()
{
}

bool PubSubMoveListMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PubSubMoveListMessage *>(obj)!=NULL;
}

const char *PubSubMoveListMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PubSubMoveListMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int PubSubMoveListMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *PubSubMoveListMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "subspaceId",
        "timestamp",
        "player",
        "position",
        "positionAge",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int PubSubMoveListMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subspaceId")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "positionAge")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PubSubMoveListMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "simtime_t",
        "NodeHandle",
        "Vector2D",
        "simtime_t",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *PubSubMoveListMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PubSubMoveListMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveListMessage *pp = (PubSubMoveListMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getPlayerArraySize();
        case 3: return pp->getPositionArraySize();
        case 4: return pp->getPositionAgeArraySize();
        default: return 0;
    }
}

std::string PubSubMoveListMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveListMessage *pp = (PubSubMoveListMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSubspaceId());
        case 1: return double2string(pp->getTimestamp());
        case 2: {std::stringstream out; out << pp->getPlayer(i); return out.str();}
        case 3: {std::stringstream out; out << pp->getPosition(i); return out.str();}
        case 4: return double2string(pp->getPositionAge(i));
        default: return "";
    }
}

bool PubSubMoveListMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveListMessage *pp = (PubSubMoveListMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSubspaceId(string2long(value)); return true;
        case 1: pp->setTimestamp(string2double(value)); return true;
        case 4: pp->setPositionAge(i,string2double(value)); return true;
        default: return false;
    }
}

const char *PubSubMoveListMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
        "Vector2D",
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *PubSubMoveListMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PubSubMoveListMessage *pp = (PubSubMoveListMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getPlayer(i)); break;
        case 3: return (void *)(&pp->getPosition(i)); break;
        default: return NULL;
    }
}


