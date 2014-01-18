//
// Generated file, do not edit! Created by opp_msgc 4.3 from applications/scribe/ScribeMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ScribeMessage_m.h"

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
    cEnum *e = cEnum::find("ScribeTimerType");
    if (!e) enums.getInstance()->add(e = new cEnum("ScribeTimerType"));
    e->insert(SCRIBE_HEARTBEAT, "SCRIBE_HEARTBEAT");
    e->insert(SCRIBE_SUBSCRIPTION_REFRESH, "SCRIBE_SUBSCRIPTION_REFRESH");
    e->insert(SCRIBE_PARENT_TIMEOUT, "SCRIBE_PARENT_TIMEOUT");
    e->insert(SCRIBE_CHILD_TIMEOUT, "SCRIBE_CHILD_TIMEOUT");
);

Register_Class(ScribeJoinCall);

ScribeJoinCall::ScribeJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

ScribeJoinCall::ScribeJoinCall(const ScribeJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

ScribeJoinCall::~ScribeJoinCall()
{
}

ScribeJoinCall& ScribeJoinCall::operator=(const ScribeJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void ScribeJoinCall::copy(const ScribeJoinCall& other)
{
    this->groupId_var = other.groupId_var;
}

void ScribeJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->groupId_var);
}

void ScribeJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
}

OverlayKey& ScribeJoinCall::getGroupId()
{
    return groupId_var;
}

void ScribeJoinCall::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

class ScribeJoinCallDescriptor : public cClassDescriptor
{
  public:
    ScribeJoinCallDescriptor();
    virtual ~ScribeJoinCallDescriptor();

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

Register_ClassDescriptor(ScribeJoinCallDescriptor);

ScribeJoinCallDescriptor::ScribeJoinCallDescriptor() : cClassDescriptor("ScribeJoinCall", "BaseCallMessage")
{
}

ScribeJoinCallDescriptor::~ScribeJoinCallDescriptor()
{
}

bool ScribeJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribeJoinCall *>(obj)!=NULL;
}

const char *ScribeJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribeJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ScribeJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ScribeJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ScribeJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribeJoinCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ScribeJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribeJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinCall *pp = (ScribeJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribeJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinCall *pp = (ScribeJoinCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        default: return "";
    }
}

bool ScribeJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinCall *pp = (ScribeJoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ScribeJoinCallDescriptor::getFieldStructName(void *object, int field) const
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

void *ScribeJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinCall *pp = (ScribeJoinCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ScribeJoinResponse);

ScribeJoinResponse::ScribeJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

ScribeJoinResponse::ScribeJoinResponse(const ScribeJoinResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

ScribeJoinResponse::~ScribeJoinResponse()
{
}

ScribeJoinResponse& ScribeJoinResponse::operator=(const ScribeJoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void ScribeJoinResponse::copy(const ScribeJoinResponse& other)
{
    this->groupId_var = other.groupId_var;
}

void ScribeJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->groupId_var);
}

void ScribeJoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
}

OverlayKey& ScribeJoinResponse::getGroupId()
{
    return groupId_var;
}

void ScribeJoinResponse::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

class ScribeJoinResponseDescriptor : public cClassDescriptor
{
  public:
    ScribeJoinResponseDescriptor();
    virtual ~ScribeJoinResponseDescriptor();

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

Register_ClassDescriptor(ScribeJoinResponseDescriptor);

ScribeJoinResponseDescriptor::ScribeJoinResponseDescriptor() : cClassDescriptor("ScribeJoinResponse", "BaseResponseMessage")
{
}

ScribeJoinResponseDescriptor::~ScribeJoinResponseDescriptor()
{
}

bool ScribeJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribeJoinResponse *>(obj)!=NULL;
}

const char *ScribeJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribeJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ScribeJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ScribeJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ScribeJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribeJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ScribeJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribeJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinResponse *pp = (ScribeJoinResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribeJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinResponse *pp = (ScribeJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        default: return "";
    }
}

bool ScribeJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinResponse *pp = (ScribeJoinResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ScribeJoinResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *ScribeJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeJoinResponse *pp = (ScribeJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ScribePublishCall);

ScribePublishCall::ScribePublishCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

ScribePublishCall::ScribePublishCall(const ScribePublishCall& other) : BaseCallMessage(other)
{
    copy(other);
}

ScribePublishCall::~ScribePublishCall()
{
}

ScribePublishCall& ScribePublishCall::operator=(const ScribePublishCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void ScribePublishCall::copy(const ScribePublishCall& other)
{
    this->groupId_var = other.groupId_var;
}

void ScribePublishCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->groupId_var);
}

void ScribePublishCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
}

OverlayKey& ScribePublishCall::getGroupId()
{
    return groupId_var;
}

void ScribePublishCall::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

class ScribePublishCallDescriptor : public cClassDescriptor
{
  public:
    ScribePublishCallDescriptor();
    virtual ~ScribePublishCallDescriptor();

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

Register_ClassDescriptor(ScribePublishCallDescriptor);

ScribePublishCallDescriptor::ScribePublishCallDescriptor() : cClassDescriptor("ScribePublishCall", "BaseCallMessage")
{
}

ScribePublishCallDescriptor::~ScribePublishCallDescriptor()
{
}

bool ScribePublishCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribePublishCall *>(obj)!=NULL;
}

const char *ScribePublishCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribePublishCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ScribePublishCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ScribePublishCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ScribePublishCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribePublishCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ScribePublishCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribePublishCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishCall *pp = (ScribePublishCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribePublishCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishCall *pp = (ScribePublishCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        default: return "";
    }
}

bool ScribePublishCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishCall *pp = (ScribePublishCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ScribePublishCallDescriptor::getFieldStructName(void *object, int field) const
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

void *ScribePublishCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishCall *pp = (ScribePublishCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ScribePublishResponse);

ScribePublishResponse::ScribePublishResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->wrongRoot_var = false;
}

ScribePublishResponse::ScribePublishResponse(const ScribePublishResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

ScribePublishResponse::~ScribePublishResponse()
{
}

ScribePublishResponse& ScribePublishResponse::operator=(const ScribePublishResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void ScribePublishResponse::copy(const ScribePublishResponse& other)
{
    this->groupId_var = other.groupId_var;
    this->wrongRoot_var = other.wrongRoot_var;
}

void ScribePublishResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->groupId_var);
    doPacking(b,this->wrongRoot_var);
}

void ScribePublishResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
    doUnpacking(b,this->wrongRoot_var);
}

OverlayKey& ScribePublishResponse::getGroupId()
{
    return groupId_var;
}

void ScribePublishResponse::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

bool ScribePublishResponse::getWrongRoot() const
{
    return wrongRoot_var;
}

void ScribePublishResponse::setWrongRoot(bool wrongRoot)
{
    this->wrongRoot_var = wrongRoot;
}

class ScribePublishResponseDescriptor : public cClassDescriptor
{
  public:
    ScribePublishResponseDescriptor();
    virtual ~ScribePublishResponseDescriptor();

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

Register_ClassDescriptor(ScribePublishResponseDescriptor);

ScribePublishResponseDescriptor::ScribePublishResponseDescriptor() : cClassDescriptor("ScribePublishResponse", "BaseResponseMessage")
{
}

ScribePublishResponseDescriptor::~ScribePublishResponseDescriptor()
{
}

bool ScribePublishResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribePublishResponse *>(obj)!=NULL;
}

const char *ScribePublishResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribePublishResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ScribePublishResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ScribePublishResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupId",
        "wrongRoot",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ScribePublishResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+0;
    if (fieldName[0]=='w' && strcmp(fieldName, "wrongRoot")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribePublishResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "bool",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ScribePublishResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribePublishResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishResponse *pp = (ScribePublishResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribePublishResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishResponse *pp = (ScribePublishResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        case 1: return bool2string(pp->getWrongRoot());
        default: return "";
    }
}

bool ScribePublishResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishResponse *pp = (ScribePublishResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setWrongRoot(string2bool(value)); return true;
        default: return false;
    }
}

const char *ScribePublishResponseDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *ScribePublishResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribePublishResponse *pp = (ScribePublishResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ScribeSubscriptionRefreshMessage);

ScribeSubscriptionRefreshMessage::ScribeSubscriptionRefreshMessage(const char *name, int kind) : cPacket(name,kind)
{
}

ScribeSubscriptionRefreshMessage::ScribeSubscriptionRefreshMessage(const ScribeSubscriptionRefreshMessage& other) : cPacket(other)
{
    copy(other);
}

ScribeSubscriptionRefreshMessage::~ScribeSubscriptionRefreshMessage()
{
}

ScribeSubscriptionRefreshMessage& ScribeSubscriptionRefreshMessage::operator=(const ScribeSubscriptionRefreshMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void ScribeSubscriptionRefreshMessage::copy(const ScribeSubscriptionRefreshMessage& other)
{
    this->src_var = other.src_var;
    this->groupId_var = other.groupId_var;
}

void ScribeSubscriptionRefreshMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->groupId_var);
}

void ScribeSubscriptionRefreshMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->groupId_var);
}

NodeHandle& ScribeSubscriptionRefreshMessage::getSrc()
{
    return src_var;
}

void ScribeSubscriptionRefreshMessage::setSrc(const NodeHandle& src)
{
    this->src_var = src;
}

OverlayKey& ScribeSubscriptionRefreshMessage::getGroupId()
{
    return groupId_var;
}

void ScribeSubscriptionRefreshMessage::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

class ScribeSubscriptionRefreshMessageDescriptor : public cClassDescriptor
{
  public:
    ScribeSubscriptionRefreshMessageDescriptor();
    virtual ~ScribeSubscriptionRefreshMessageDescriptor();

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

Register_ClassDescriptor(ScribeSubscriptionRefreshMessageDescriptor);

ScribeSubscriptionRefreshMessageDescriptor::ScribeSubscriptionRefreshMessageDescriptor() : cClassDescriptor("ScribeSubscriptionRefreshMessage", "cPacket")
{
}

ScribeSubscriptionRefreshMessageDescriptor::~ScribeSubscriptionRefreshMessageDescriptor()
{
}

bool ScribeSubscriptionRefreshMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribeSubscriptionRefreshMessage *>(obj)!=NULL;
}

const char *ScribeSubscriptionRefreshMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribeSubscriptionRefreshMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ScribeSubscriptionRefreshMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *ScribeSubscriptionRefreshMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
        "groupId",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ScribeSubscriptionRefreshMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribeSubscriptionRefreshMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "OverlayKey",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ScribeSubscriptionRefreshMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribeSubscriptionRefreshMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribeSubscriptionRefreshMessage *pp = (ScribeSubscriptionRefreshMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribeSubscriptionRefreshMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeSubscriptionRefreshMessage *pp = (ScribeSubscriptionRefreshMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        default: return "";
    }
}

bool ScribeSubscriptionRefreshMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribeSubscriptionRefreshMessage *pp = (ScribeSubscriptionRefreshMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ScribeSubscriptionRefreshMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "OverlayKey",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *ScribeSubscriptionRefreshMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeSubscriptionRefreshMessage *pp = (ScribeSubscriptionRefreshMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ScribeLeaveMessage);

ScribeLeaveMessage::ScribeLeaveMessage(const char *name, int kind) : cPacket(name,kind)
{
}

ScribeLeaveMessage::ScribeLeaveMessage(const ScribeLeaveMessage& other) : cPacket(other)
{
    copy(other);
}

ScribeLeaveMessage::~ScribeLeaveMessage()
{
}

ScribeLeaveMessage& ScribeLeaveMessage::operator=(const ScribeLeaveMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void ScribeLeaveMessage::copy(const ScribeLeaveMessage& other)
{
    this->src_var = other.src_var;
    this->groupId_var = other.groupId_var;
}

void ScribeLeaveMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->groupId_var);
}

void ScribeLeaveMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->groupId_var);
}

NodeHandle& ScribeLeaveMessage::getSrc()
{
    return src_var;
}

void ScribeLeaveMessage::setSrc(const NodeHandle& src)
{
    this->src_var = src;
}

OverlayKey& ScribeLeaveMessage::getGroupId()
{
    return groupId_var;
}

void ScribeLeaveMessage::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

class ScribeLeaveMessageDescriptor : public cClassDescriptor
{
  public:
    ScribeLeaveMessageDescriptor();
    virtual ~ScribeLeaveMessageDescriptor();

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

Register_ClassDescriptor(ScribeLeaveMessageDescriptor);

ScribeLeaveMessageDescriptor::ScribeLeaveMessageDescriptor() : cClassDescriptor("ScribeLeaveMessage", "cPacket")
{
}

ScribeLeaveMessageDescriptor::~ScribeLeaveMessageDescriptor()
{
}

bool ScribeLeaveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribeLeaveMessage *>(obj)!=NULL;
}

const char *ScribeLeaveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribeLeaveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ScribeLeaveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *ScribeLeaveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
        "groupId",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ScribeLeaveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribeLeaveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "OverlayKey",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ScribeLeaveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribeLeaveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribeLeaveMessage *pp = (ScribeLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribeLeaveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeLeaveMessage *pp = (ScribeLeaveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        default: return "";
    }
}

bool ScribeLeaveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribeLeaveMessage *pp = (ScribeLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ScribeLeaveMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "OverlayKey",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *ScribeLeaveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeLeaveMessage *pp = (ScribeLeaveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ScribeTimer);

ScribeTimer::ScribeTimer(const char *name, int kind) : cMessage(name,kind)
{
    this->timerType_var = 0;
}

ScribeTimer::ScribeTimer(const ScribeTimer& other) : cMessage(other)
{
    copy(other);
}

ScribeTimer::~ScribeTimer()
{
}

ScribeTimer& ScribeTimer::operator=(const ScribeTimer& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void ScribeTimer::copy(const ScribeTimer& other)
{
    this->timerType_var = other.timerType_var;
    this->child_var = other.child_var;
    this->group_var = other.group_var;
}

void ScribeTimer::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->timerType_var);
    doPacking(b,this->child_var);
    doPacking(b,this->group_var);
}

void ScribeTimer::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->timerType_var);
    doUnpacking(b,this->child_var);
    doUnpacking(b,this->group_var);
}

int ScribeTimer::getTimerType() const
{
    return timerType_var;
}

void ScribeTimer::setTimerType(int timerType)
{
    this->timerType_var = timerType;
}

NodeHandle& ScribeTimer::getChild()
{
    return child_var;
}

void ScribeTimer::setChild(const NodeHandle& child)
{
    this->child_var = child;
}

OverlayKey& ScribeTimer::getGroup()
{
    return group_var;
}

void ScribeTimer::setGroup(const OverlayKey& group)
{
    this->group_var = group;
}

class ScribeTimerDescriptor : public cClassDescriptor
{
  public:
    ScribeTimerDescriptor();
    virtual ~ScribeTimerDescriptor();

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

Register_ClassDescriptor(ScribeTimerDescriptor);

ScribeTimerDescriptor::ScribeTimerDescriptor() : cClassDescriptor("ScribeTimer", "cMessage")
{
}

ScribeTimerDescriptor::~ScribeTimerDescriptor()
{
}

bool ScribeTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribeTimer *>(obj)!=NULL;
}

const char *ScribeTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribeTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ScribeTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ScribeTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "timerType",
        "child",
        "group",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int ScribeTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timerType")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "child")==0) return base+1;
    if (fieldName[0]=='g' && strcmp(fieldName, "group")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribeTimerDescriptor::getFieldTypeString(void *object, int field) const
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
        "OverlayKey",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *ScribeTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "ScribeTimerType";
            return NULL;
        default: return NULL;
    }
}

int ScribeTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribeTimer *pp = (ScribeTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribeTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeTimer *pp = (ScribeTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTimerType());
        case 1: {std::stringstream out; out << pp->getChild(); return out.str();}
        case 2: {std::stringstream out; out << pp->getGroup(); return out.str();}
        default: return "";
    }
}

bool ScribeTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribeTimer *pp = (ScribeTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setTimerType(string2long(value)); return true;
        default: return false;
    }
}

const char *ScribeTimerDescriptor::getFieldStructName(void *object, int field) const
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
        "OverlayKey",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *ScribeTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeTimer *pp = (ScribeTimer *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getChild()); break;
        case 2: return (void *)(&pp->getGroup()); break;
        default: return NULL;
    }
}

Register_Class(ScribeDataMessage);

ScribeDataMessage::ScribeDataMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->empty_var = false;
}

ScribeDataMessage::ScribeDataMessage(const ScribeDataMessage& other) : cPacket(other)
{
    copy(other);
}

ScribeDataMessage::~ScribeDataMessage()
{
}

ScribeDataMessage& ScribeDataMessage::operator=(const ScribeDataMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void ScribeDataMessage::copy(const ScribeDataMessage& other)
{
    this->groupId_var = other.groupId_var;
    this->empty_var = other.empty_var;
}

void ScribeDataMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->groupId_var);
    doPacking(b,this->empty_var);
}

void ScribeDataMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
    doUnpacking(b,this->empty_var);
}

OverlayKey& ScribeDataMessage::getGroupId()
{
    return groupId_var;
}

void ScribeDataMessage::setGroupId(const OverlayKey& groupId)
{
    this->groupId_var = groupId;
}

bool ScribeDataMessage::getEmpty() const
{
    return empty_var;
}

void ScribeDataMessage::setEmpty(bool empty)
{
    this->empty_var = empty;
}

class ScribeDataMessageDescriptor : public cClassDescriptor
{
  public:
    ScribeDataMessageDescriptor();
    virtual ~ScribeDataMessageDescriptor();

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

Register_ClassDescriptor(ScribeDataMessageDescriptor);

ScribeDataMessageDescriptor::ScribeDataMessageDescriptor() : cClassDescriptor("ScribeDataMessage", "cPacket")
{
}

ScribeDataMessageDescriptor::~ScribeDataMessageDescriptor()
{
}

bool ScribeDataMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ScribeDataMessage *>(obj)!=NULL;
}

const char *ScribeDataMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ScribeDataMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ScribeDataMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ScribeDataMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupId",
        "empty",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ScribeDataMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupId")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "empty")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ScribeDataMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "bool",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ScribeDataMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ScribeDataMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ScribeDataMessage *pp = (ScribeDataMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ScribeDataMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeDataMessage *pp = (ScribeDataMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); return out.str();}
        case 1: return bool2string(pp->getEmpty());
        default: return "";
    }
}

bool ScribeDataMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ScribeDataMessage *pp = (ScribeDataMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setEmpty(string2bool(value)); return true;
        default: return false;
    }
}

const char *ScribeDataMessageDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *ScribeDataMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ScribeDataMessage *pp = (ScribeDataMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}


