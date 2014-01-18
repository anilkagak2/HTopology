//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/TreeManagementMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TreeManagementMessage_m.h"

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




Register_Class(ParentRequestCall);

ParentRequestCall::ParentRequestCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

ParentRequestCall::ParentRequestCall(const ParentRequestCall& other) : BaseCallMessage(other)
{
    copy(other);
}

ParentRequestCall::~ParentRequestCall()
{
}

ParentRequestCall& ParentRequestCall::operator=(const ParentRequestCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void ParentRequestCall::copy(const ParentRequestCall& other)
{
    this->domainKey_var = other.domainKey_var;
}

void ParentRequestCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->domainKey_var);
}

void ParentRequestCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->domainKey_var);
}

OverlayKey& ParentRequestCall::getDomainKey()
{
    return domainKey_var;
}

void ParentRequestCall::setDomainKey(const OverlayKey& domainKey)
{
    this->domainKey_var = domainKey;
}

class ParentRequestCallDescriptor : public cClassDescriptor
{
  public:
    ParentRequestCallDescriptor();
    virtual ~ParentRequestCallDescriptor();

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

Register_ClassDescriptor(ParentRequestCallDescriptor);

ParentRequestCallDescriptor::ParentRequestCallDescriptor() : cClassDescriptor("ParentRequestCall", "BaseCallMessage")
{
}

ParentRequestCallDescriptor::~ParentRequestCallDescriptor()
{
}

bool ParentRequestCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ParentRequestCall *>(obj)!=NULL;
}

const char *ParentRequestCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ParentRequestCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ParentRequestCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ParentRequestCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "domainKey",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ParentRequestCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "domainKey")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ParentRequestCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ParentRequestCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ParentRequestCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestCall *pp = (ParentRequestCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ParentRequestCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestCall *pp = (ParentRequestCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDomainKey(); return out.str();}
        default: return "";
    }
}

bool ParentRequestCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestCall *pp = (ParentRequestCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ParentRequestCallDescriptor::getFieldStructName(void *object, int field) const
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

void *ParentRequestCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestCall *pp = (ParentRequestCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDomainKey()); break;
        default: return NULL;
    }
}

Register_Class(ParentRequestResponse);

ParentRequestResponse::ParentRequestResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

ParentRequestResponse::ParentRequestResponse(const ParentRequestResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

ParentRequestResponse::~ParentRequestResponse()
{
}

ParentRequestResponse& ParentRequestResponse::operator=(const ParentRequestResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void ParentRequestResponse::copy(const ParentRequestResponse& other)
{
}

void ParentRequestResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void ParentRequestResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class ParentRequestResponseDescriptor : public cClassDescriptor
{
  public:
    ParentRequestResponseDescriptor();
    virtual ~ParentRequestResponseDescriptor();

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

Register_ClassDescriptor(ParentRequestResponseDescriptor);

ParentRequestResponseDescriptor::ParentRequestResponseDescriptor() : cClassDescriptor("ParentRequestResponse", "BaseResponseMessage")
{
}

ParentRequestResponseDescriptor::~ParentRequestResponseDescriptor()
{
}

bool ParentRequestResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ParentRequestResponse *>(obj)!=NULL;
}

const char *ParentRequestResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ParentRequestResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ParentRequestResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *ParentRequestResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int ParentRequestResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ParentRequestResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *ParentRequestResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ParentRequestResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestResponse *pp = (ParentRequestResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ParentRequestResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestResponse *pp = (ParentRequestResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool ParentRequestResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestResponse *pp = (ParentRequestResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ParentRequestResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *ParentRequestResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ParentRequestResponse *pp = (ParentRequestResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TreeAppCall);

TreeAppCall::TreeAppCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

TreeAppCall::TreeAppCall(const TreeAppCall& other) : BaseCallMessage(other)
{
    copy(other);
}

TreeAppCall::~TreeAppCall()
{
}

TreeAppCall& TreeAppCall::operator=(const TreeAppCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void TreeAppCall::copy(const TreeAppCall& other)
{
}

void TreeAppCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void TreeAppCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class TreeAppCallDescriptor : public cClassDescriptor
{
  public:
    TreeAppCallDescriptor();
    virtual ~TreeAppCallDescriptor();

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

Register_ClassDescriptor(TreeAppCallDescriptor);

TreeAppCallDescriptor::TreeAppCallDescriptor() : cClassDescriptor("TreeAppCall", "BaseCallMessage")
{
}

TreeAppCallDescriptor::~TreeAppCallDescriptor()
{
}

bool TreeAppCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TreeAppCall *>(obj)!=NULL;
}

const char *TreeAppCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TreeAppCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TreeAppCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TreeAppCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TreeAppCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TreeAppCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TreeAppCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TreeAppCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppCall *pp = (TreeAppCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TreeAppCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppCall *pp = (TreeAppCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TreeAppCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppCall *pp = (TreeAppCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TreeAppCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TreeAppCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppCall *pp = (TreeAppCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TreeAppResponse);

TreeAppResponse::TreeAppResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

TreeAppResponse::TreeAppResponse(const TreeAppResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

TreeAppResponse::~TreeAppResponse()
{
}

TreeAppResponse& TreeAppResponse::operator=(const TreeAppResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void TreeAppResponse::copy(const TreeAppResponse& other)
{
}

void TreeAppResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void TreeAppResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class TreeAppResponseDescriptor : public cClassDescriptor
{
  public:
    TreeAppResponseDescriptor();
    virtual ~TreeAppResponseDescriptor();

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

Register_ClassDescriptor(TreeAppResponseDescriptor);

TreeAppResponseDescriptor::TreeAppResponseDescriptor() : cClassDescriptor("TreeAppResponse", "BaseResponseMessage")
{
}

TreeAppResponseDescriptor::~TreeAppResponseDescriptor()
{
}

bool TreeAppResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TreeAppResponse *>(obj)!=NULL;
}

const char *TreeAppResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TreeAppResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TreeAppResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TreeAppResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TreeAppResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TreeAppResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TreeAppResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TreeAppResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppResponse *pp = (TreeAppResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TreeAppResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppResponse *pp = (TreeAppResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TreeAppResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppResponse *pp = (TreeAppResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TreeAppResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TreeAppResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TreeAppResponse *pp = (TreeAppResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GlobalViewBuilderCall);

GlobalViewBuilderCall::GlobalViewBuilderCall(const char *name, int kind) : TreeAppCall(name,kind)
{
}

GlobalViewBuilderCall::GlobalViewBuilderCall(const GlobalViewBuilderCall& other) : TreeAppCall(other)
{
    copy(other);
}

GlobalViewBuilderCall::~GlobalViewBuilderCall()
{
}

GlobalViewBuilderCall& GlobalViewBuilderCall::operator=(const GlobalViewBuilderCall& other)
{
    if (this==&other) return *this;
    TreeAppCall::operator=(other);
    copy(other);
    return *this;
}

void GlobalViewBuilderCall::copy(const GlobalViewBuilderCall& other)
{
}

void GlobalViewBuilderCall::parsimPack(cCommBuffer *b)
{
    TreeAppCall::parsimPack(b);
}

void GlobalViewBuilderCall::parsimUnpack(cCommBuffer *b)
{
    TreeAppCall::parsimUnpack(b);
}

class GlobalViewBuilderCallDescriptor : public cClassDescriptor
{
  public:
    GlobalViewBuilderCallDescriptor();
    virtual ~GlobalViewBuilderCallDescriptor();

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

Register_ClassDescriptor(GlobalViewBuilderCallDescriptor);

GlobalViewBuilderCallDescriptor::GlobalViewBuilderCallDescriptor() : cClassDescriptor("GlobalViewBuilderCall", "TreeAppCall")
{
}

GlobalViewBuilderCallDescriptor::~GlobalViewBuilderCallDescriptor()
{
}

bool GlobalViewBuilderCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GlobalViewBuilderCall *>(obj)!=NULL;
}

const char *GlobalViewBuilderCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GlobalViewBuilderCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int GlobalViewBuilderCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *GlobalViewBuilderCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int GlobalViewBuilderCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GlobalViewBuilderCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *GlobalViewBuilderCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GlobalViewBuilderCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderCall *pp = (GlobalViewBuilderCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GlobalViewBuilderCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderCall *pp = (GlobalViewBuilderCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool GlobalViewBuilderCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderCall *pp = (GlobalViewBuilderCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GlobalViewBuilderCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *GlobalViewBuilderCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderCall *pp = (GlobalViewBuilderCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GlobalViewBuilderResponse);

GlobalViewBuilderResponse::GlobalViewBuilderResponse(const char *name, int kind) : TreeAppResponse(name,kind)
{
}

GlobalViewBuilderResponse::GlobalViewBuilderResponse(const GlobalViewBuilderResponse& other) : TreeAppResponse(other)
{
    copy(other);
}

GlobalViewBuilderResponse::~GlobalViewBuilderResponse()
{
}

GlobalViewBuilderResponse& GlobalViewBuilderResponse::operator=(const GlobalViewBuilderResponse& other)
{
    if (this==&other) return *this;
    TreeAppResponse::operator=(other);
    copy(other);
    return *this;
}

void GlobalViewBuilderResponse::copy(const GlobalViewBuilderResponse& other)
{
}

void GlobalViewBuilderResponse::parsimPack(cCommBuffer *b)
{
    TreeAppResponse::parsimPack(b);
}

void GlobalViewBuilderResponse::parsimUnpack(cCommBuffer *b)
{
    TreeAppResponse::parsimUnpack(b);
}

class GlobalViewBuilderResponseDescriptor : public cClassDescriptor
{
  public:
    GlobalViewBuilderResponseDescriptor();
    virtual ~GlobalViewBuilderResponseDescriptor();

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

Register_ClassDescriptor(GlobalViewBuilderResponseDescriptor);

GlobalViewBuilderResponseDescriptor::GlobalViewBuilderResponseDescriptor() : cClassDescriptor("GlobalViewBuilderResponse", "TreeAppResponse")
{
}

GlobalViewBuilderResponseDescriptor::~GlobalViewBuilderResponseDescriptor()
{
}

bool GlobalViewBuilderResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GlobalViewBuilderResponse *>(obj)!=NULL;
}

const char *GlobalViewBuilderResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GlobalViewBuilderResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int GlobalViewBuilderResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *GlobalViewBuilderResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int GlobalViewBuilderResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GlobalViewBuilderResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *GlobalViewBuilderResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GlobalViewBuilderResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderResponse *pp = (GlobalViewBuilderResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GlobalViewBuilderResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderResponse *pp = (GlobalViewBuilderResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool GlobalViewBuilderResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderResponse *pp = (GlobalViewBuilderResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GlobalViewBuilderResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *GlobalViewBuilderResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GlobalViewBuilderResponse *pp = (GlobalViewBuilderResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ChildReleaseCall);

ChildReleaseCall::ChildReleaseCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

ChildReleaseCall::ChildReleaseCall(const ChildReleaseCall& other) : BaseCallMessage(other)
{
    copy(other);
}

ChildReleaseCall::~ChildReleaseCall()
{
}

ChildReleaseCall& ChildReleaseCall::operator=(const ChildReleaseCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void ChildReleaseCall::copy(const ChildReleaseCall& other)
{
}

void ChildReleaseCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void ChildReleaseCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class ChildReleaseCallDescriptor : public cClassDescriptor
{
  public:
    ChildReleaseCallDescriptor();
    virtual ~ChildReleaseCallDescriptor();

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

Register_ClassDescriptor(ChildReleaseCallDescriptor);

ChildReleaseCallDescriptor::ChildReleaseCallDescriptor() : cClassDescriptor("ChildReleaseCall", "BaseCallMessage")
{
}

ChildReleaseCallDescriptor::~ChildReleaseCallDescriptor()
{
}

bool ChildReleaseCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChildReleaseCall *>(obj)!=NULL;
}

const char *ChildReleaseCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChildReleaseCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ChildReleaseCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *ChildReleaseCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int ChildReleaseCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ChildReleaseCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *ChildReleaseCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ChildReleaseCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseCall *pp = (ChildReleaseCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ChildReleaseCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseCall *pp = (ChildReleaseCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool ChildReleaseCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseCall *pp = (ChildReleaseCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ChildReleaseCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *ChildReleaseCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseCall *pp = (ChildReleaseCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ChildReleaseResponse);

ChildReleaseResponse::ChildReleaseResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

ChildReleaseResponse::ChildReleaseResponse(const ChildReleaseResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

ChildReleaseResponse::~ChildReleaseResponse()
{
}

ChildReleaseResponse& ChildReleaseResponse::operator=(const ChildReleaseResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void ChildReleaseResponse::copy(const ChildReleaseResponse& other)
{
}

void ChildReleaseResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void ChildReleaseResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class ChildReleaseResponseDescriptor : public cClassDescriptor
{
  public:
    ChildReleaseResponseDescriptor();
    virtual ~ChildReleaseResponseDescriptor();

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

Register_ClassDescriptor(ChildReleaseResponseDescriptor);

ChildReleaseResponseDescriptor::ChildReleaseResponseDescriptor() : cClassDescriptor("ChildReleaseResponse", "BaseResponseMessage")
{
}

ChildReleaseResponseDescriptor::~ChildReleaseResponseDescriptor()
{
}

bool ChildReleaseResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChildReleaseResponse *>(obj)!=NULL;
}

const char *ChildReleaseResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChildReleaseResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ChildReleaseResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *ChildReleaseResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int ChildReleaseResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ChildReleaseResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *ChildReleaseResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ChildReleaseResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseResponse *pp = (ChildReleaseResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ChildReleaseResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseResponse *pp = (ChildReleaseResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool ChildReleaseResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseResponse *pp = (ChildReleaseResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ChildReleaseResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *ChildReleaseResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChildReleaseResponse *pp = (ChildReleaseResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ChildCheckCall);

ChildCheckCall::ChildCheckCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

ChildCheckCall::ChildCheckCall(const ChildCheckCall& other) : BaseCallMessage(other)
{
    copy(other);
}

ChildCheckCall::~ChildCheckCall()
{
}

ChildCheckCall& ChildCheckCall::operator=(const ChildCheckCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void ChildCheckCall::copy(const ChildCheckCall& other)
{
}

void ChildCheckCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void ChildCheckCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class ChildCheckCallDescriptor : public cClassDescriptor
{
  public:
    ChildCheckCallDescriptor();
    virtual ~ChildCheckCallDescriptor();

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

Register_ClassDescriptor(ChildCheckCallDescriptor);

ChildCheckCallDescriptor::ChildCheckCallDescriptor() : cClassDescriptor("ChildCheckCall", "BaseCallMessage")
{
}

ChildCheckCallDescriptor::~ChildCheckCallDescriptor()
{
}

bool ChildCheckCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChildCheckCall *>(obj)!=NULL;
}

const char *ChildCheckCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChildCheckCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ChildCheckCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *ChildCheckCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int ChildCheckCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ChildCheckCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *ChildCheckCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ChildCheckCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckCall *pp = (ChildCheckCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ChildCheckCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckCall *pp = (ChildCheckCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool ChildCheckCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckCall *pp = (ChildCheckCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ChildCheckCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *ChildCheckCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckCall *pp = (ChildCheckCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ChildCheckResponse);

ChildCheckResponse::ChildCheckResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

ChildCheckResponse::ChildCheckResponse(const ChildCheckResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

ChildCheckResponse::~ChildCheckResponse()
{
}

ChildCheckResponse& ChildCheckResponse::operator=(const ChildCheckResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void ChildCheckResponse::copy(const ChildCheckResponse& other)
{
}

void ChildCheckResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void ChildCheckResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class ChildCheckResponseDescriptor : public cClassDescriptor
{
  public:
    ChildCheckResponseDescriptor();
    virtual ~ChildCheckResponseDescriptor();

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

Register_ClassDescriptor(ChildCheckResponseDescriptor);

ChildCheckResponseDescriptor::ChildCheckResponseDescriptor() : cClassDescriptor("ChildCheckResponse", "BaseResponseMessage")
{
}

ChildCheckResponseDescriptor::~ChildCheckResponseDescriptor()
{
}

bool ChildCheckResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChildCheckResponse *>(obj)!=NULL;
}

const char *ChildCheckResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChildCheckResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ChildCheckResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *ChildCheckResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int ChildCheckResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ChildCheckResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *ChildCheckResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ChildCheckResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckResponse *pp = (ChildCheckResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ChildCheckResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckResponse *pp = (ChildCheckResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool ChildCheckResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckResponse *pp = (ChildCheckResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ChildCheckResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *ChildCheckResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChildCheckResponse *pp = (ChildCheckResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SendCoordinatesCall);

SendCoordinatesCall::SendCoordinatesCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
}

SendCoordinatesCall::SendCoordinatesCall(const SendCoordinatesCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

SendCoordinatesCall::~SendCoordinatesCall()
{
}

SendCoordinatesCall& SendCoordinatesCall::operator=(const SendCoordinatesCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void SendCoordinatesCall::copy(const SendCoordinatesCall& other)
{
    this->coordData_var = other.coordData_var;
}

void SendCoordinatesCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->coordData_var);
}

void SendCoordinatesCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->coordData_var);
}

CoordDataContainer& SendCoordinatesCall::getCoordData()
{
    return coordData_var;
}

void SendCoordinatesCall::setCoordData(const CoordDataContainer& coordData)
{
    this->coordData_var = coordData;
}

class SendCoordinatesCallDescriptor : public cClassDescriptor
{
  public:
    SendCoordinatesCallDescriptor();
    virtual ~SendCoordinatesCallDescriptor();

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

Register_ClassDescriptor(SendCoordinatesCallDescriptor);

SendCoordinatesCallDescriptor::SendCoordinatesCallDescriptor() : cClassDescriptor("SendCoordinatesCall", "GlobalViewBuilderCall")
{
}

SendCoordinatesCallDescriptor::~SendCoordinatesCallDescriptor()
{
}

bool SendCoordinatesCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SendCoordinatesCall *>(obj)!=NULL;
}

const char *SendCoordinatesCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SendCoordinatesCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SendCoordinatesCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SendCoordinatesCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "coordData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SendCoordinatesCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "coordData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SendCoordinatesCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "CoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SendCoordinatesCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SendCoordinatesCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SendCoordinatesCall *pp = (SendCoordinatesCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SendCoordinatesCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SendCoordinatesCall *pp = (SendCoordinatesCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCoordData(); return out.str();}
        default: return "";
    }
}

bool SendCoordinatesCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SendCoordinatesCall *pp = (SendCoordinatesCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SendCoordinatesCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "CoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *SendCoordinatesCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SendCoordinatesCall *pp = (SendCoordinatesCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCoordData()); break;
        default: return NULL;
    }
}

Register_Class(SendAllStrategyCall);

SendAllStrategyCall::SendAllStrategyCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
}

SendAllStrategyCall::SendAllStrategyCall(const SendAllStrategyCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

SendAllStrategyCall::~SendAllStrategyCall()
{
}

SendAllStrategyCall& SendAllStrategyCall::operator=(const SendAllStrategyCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void SendAllStrategyCall::copy(const SendAllStrategyCall& other)
{
    this->coordData_var = other.coordData_var;
}

void SendAllStrategyCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->coordData_var);
}

void SendAllStrategyCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->coordData_var);
}

CoordDataContainer& SendAllStrategyCall::getCoordData()
{
    return coordData_var;
}

void SendAllStrategyCall::setCoordData(const CoordDataContainer& coordData)
{
    this->coordData_var = coordData;
}

class SendAllStrategyCallDescriptor : public cClassDescriptor
{
  public:
    SendAllStrategyCallDescriptor();
    virtual ~SendAllStrategyCallDescriptor();

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

Register_ClassDescriptor(SendAllStrategyCallDescriptor);

SendAllStrategyCallDescriptor::SendAllStrategyCallDescriptor() : cClassDescriptor("SendAllStrategyCall", "GlobalViewBuilderCall")
{
}

SendAllStrategyCallDescriptor::~SendAllStrategyCallDescriptor()
{
}

bool SendAllStrategyCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SendAllStrategyCall *>(obj)!=NULL;
}

const char *SendAllStrategyCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SendAllStrategyCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SendAllStrategyCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SendAllStrategyCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "coordData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SendAllStrategyCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "coordData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SendAllStrategyCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "CoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SendAllStrategyCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SendAllStrategyCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SendAllStrategyCall *pp = (SendAllStrategyCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SendAllStrategyCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SendAllStrategyCall *pp = (SendAllStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCoordData(); return out.str();}
        default: return "";
    }
}

bool SendAllStrategyCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SendAllStrategyCall *pp = (SendAllStrategyCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SendAllStrategyCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "CoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *SendAllStrategyCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SendAllStrategyCall *pp = (SendAllStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCoordData()); break;
        default: return NULL;
    }
}

Register_Class(RemoveRandomStrategyCall);

RemoveRandomStrategyCall::RemoveRandomStrategyCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
}

RemoveRandomStrategyCall::RemoveRandomStrategyCall(const RemoveRandomStrategyCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

RemoveRandomStrategyCall::~RemoveRandomStrategyCall()
{
}

RemoveRandomStrategyCall& RemoveRandomStrategyCall::operator=(const RemoveRandomStrategyCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void RemoveRandomStrategyCall::copy(const RemoveRandomStrategyCall& other)
{
    this->coordData_var = other.coordData_var;
}

void RemoveRandomStrategyCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->coordData_var);
}

void RemoveRandomStrategyCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->coordData_var);
}

CoordDataContainer& RemoveRandomStrategyCall::getCoordData()
{
    return coordData_var;
}

void RemoveRandomStrategyCall::setCoordData(const CoordDataContainer& coordData)
{
    this->coordData_var = coordData;
}

class RemoveRandomStrategyCallDescriptor : public cClassDescriptor
{
  public:
    RemoveRandomStrategyCallDescriptor();
    virtual ~RemoveRandomStrategyCallDescriptor();

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

Register_ClassDescriptor(RemoveRandomStrategyCallDescriptor);

RemoveRandomStrategyCallDescriptor::RemoveRandomStrategyCallDescriptor() : cClassDescriptor("RemoveRandomStrategyCall", "GlobalViewBuilderCall")
{
}

RemoveRandomStrategyCallDescriptor::~RemoveRandomStrategyCallDescriptor()
{
}

bool RemoveRandomStrategyCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RemoveRandomStrategyCall *>(obj)!=NULL;
}

const char *RemoveRandomStrategyCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RemoveRandomStrategyCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RemoveRandomStrategyCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RemoveRandomStrategyCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "coordData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RemoveRandomStrategyCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "coordData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RemoveRandomStrategyCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "CoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *RemoveRandomStrategyCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RemoveRandomStrategyCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RemoveRandomStrategyCall *pp = (RemoveRandomStrategyCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RemoveRandomStrategyCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RemoveRandomStrategyCall *pp = (RemoveRandomStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCoordData(); return out.str();}
        default: return "";
    }
}

bool RemoveRandomStrategyCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RemoveRandomStrategyCall *pp = (RemoveRandomStrategyCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RemoveRandomStrategyCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "CoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *RemoveRandomStrategyCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RemoveRandomStrategyCall *pp = (RemoveRandomStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCoordData()); break;
        default: return NULL;
    }
}

Register_Class(TreeTestStrategyCall);

TreeTestStrategyCall::TreeTestStrategyCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
    this->nodeCount_var = 0;
}

TreeTestStrategyCall::TreeTestStrategyCall(const TreeTestStrategyCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

TreeTestStrategyCall::~TreeTestStrategyCall()
{
}

TreeTestStrategyCall& TreeTestStrategyCall::operator=(const TreeTestStrategyCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void TreeTestStrategyCall::copy(const TreeTestStrategyCall& other)
{
    this->nodeCount_var = other.nodeCount_var;
}

void TreeTestStrategyCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->nodeCount_var);
}

void TreeTestStrategyCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->nodeCount_var);
}

int TreeTestStrategyCall::getNodeCount() const
{
    return nodeCount_var;
}

void TreeTestStrategyCall::setNodeCount(int nodeCount)
{
    this->nodeCount_var = nodeCount;
}

class TreeTestStrategyCallDescriptor : public cClassDescriptor
{
  public:
    TreeTestStrategyCallDescriptor();
    virtual ~TreeTestStrategyCallDescriptor();

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

Register_ClassDescriptor(TreeTestStrategyCallDescriptor);

TreeTestStrategyCallDescriptor::TreeTestStrategyCallDescriptor() : cClassDescriptor("TreeTestStrategyCall", "GlobalViewBuilderCall")
{
}

TreeTestStrategyCallDescriptor::~TreeTestStrategyCallDescriptor()
{
}

bool TreeTestStrategyCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TreeTestStrategyCall *>(obj)!=NULL;
}

const char *TreeTestStrategyCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TreeTestStrategyCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TreeTestStrategyCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TreeTestStrategyCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodeCount",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TreeTestStrategyCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodeCount")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TreeTestStrategyCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *TreeTestStrategyCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TreeTestStrategyCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TreeTestStrategyCall *pp = (TreeTestStrategyCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TreeTestStrategyCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TreeTestStrategyCall *pp = (TreeTestStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getNodeCount());
        default: return "";
    }
}

bool TreeTestStrategyCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TreeTestStrategyCall *pp = (TreeTestStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setNodeCount(string2long(value)); return true;
        default: return false;
    }
}

const char *TreeTestStrategyCallDescriptor::getFieldStructName(void *object, int field) const
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

void *TreeTestStrategyCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TreeTestStrategyCall *pp = (TreeTestStrategyCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RegionsStrategyCall);

RegionsStrategyCall::RegionsStrategyCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
}

RegionsStrategyCall::RegionsStrategyCall(const RegionsStrategyCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

RegionsStrategyCall::~RegionsStrategyCall()
{
}

RegionsStrategyCall& RegionsStrategyCall::operator=(const RegionsStrategyCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void RegionsStrategyCall::copy(const RegionsStrategyCall& other)
{
    this->regionData_var = other.regionData_var;
}

void RegionsStrategyCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->regionData_var);
}

void RegionsStrategyCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->regionData_var);
}

RegionDataContainer& RegionsStrategyCall::getRegionData()
{
    return regionData_var;
}

void RegionsStrategyCall::setRegionData(const RegionDataContainer& regionData)
{
    this->regionData_var = regionData;
}

class RegionsStrategyCallDescriptor : public cClassDescriptor
{
  public:
    RegionsStrategyCallDescriptor();
    virtual ~RegionsStrategyCallDescriptor();

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

Register_ClassDescriptor(RegionsStrategyCallDescriptor);

RegionsStrategyCallDescriptor::RegionsStrategyCallDescriptor() : cClassDescriptor("RegionsStrategyCall", "GlobalViewBuilderCall")
{
}

RegionsStrategyCallDescriptor::~RegionsStrategyCallDescriptor()
{
}

bool RegionsStrategyCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RegionsStrategyCall *>(obj)!=NULL;
}

const char *RegionsStrategyCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RegionsStrategyCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RegionsStrategyCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RegionsStrategyCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "regionData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RegionsStrategyCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "regionData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RegionsStrategyCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "RegionDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *RegionsStrategyCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RegionsStrategyCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RegionsStrategyCall *pp = (RegionsStrategyCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RegionsStrategyCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RegionsStrategyCall *pp = (RegionsStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRegionData(); return out.str();}
        default: return "";
    }
}

bool RegionsStrategyCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RegionsStrategyCall *pp = (RegionsStrategyCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RegionsStrategyCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "RegionDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *RegionsStrategyCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RegionsStrategyCall *pp = (RegionsStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRegionData()); break;
        default: return NULL;
    }
}

Register_Class(SimpleCoordStrategyCall);

SimpleCoordStrategyCall::SimpleCoordStrategyCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
}

SimpleCoordStrategyCall::SimpleCoordStrategyCall(const SimpleCoordStrategyCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

SimpleCoordStrategyCall::~SimpleCoordStrategyCall()
{
}

SimpleCoordStrategyCall& SimpleCoordStrategyCall::operator=(const SimpleCoordStrategyCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void SimpleCoordStrategyCall::copy(const SimpleCoordStrategyCall& other)
{
    this->coordData_var = other.coordData_var;
}

void SimpleCoordStrategyCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->coordData_var);
}

void SimpleCoordStrategyCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->coordData_var);
}

SimpleCoordDataContainer& SimpleCoordStrategyCall::getCoordData()
{
    return coordData_var;
}

void SimpleCoordStrategyCall::setCoordData(const SimpleCoordDataContainer& coordData)
{
    this->coordData_var = coordData;
}

class SimpleCoordStrategyCallDescriptor : public cClassDescriptor
{
  public:
    SimpleCoordStrategyCallDescriptor();
    virtual ~SimpleCoordStrategyCallDescriptor();

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

Register_ClassDescriptor(SimpleCoordStrategyCallDescriptor);

SimpleCoordStrategyCallDescriptor::SimpleCoordStrategyCallDescriptor() : cClassDescriptor("SimpleCoordStrategyCall", "GlobalViewBuilderCall")
{
}

SimpleCoordStrategyCallDescriptor::~SimpleCoordStrategyCallDescriptor()
{
}

bool SimpleCoordStrategyCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SimpleCoordStrategyCall *>(obj)!=NULL;
}

const char *SimpleCoordStrategyCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SimpleCoordStrategyCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SimpleCoordStrategyCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SimpleCoordStrategyCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "coordData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SimpleCoordStrategyCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "coordData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SimpleCoordStrategyCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "SimpleCoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SimpleCoordStrategyCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SimpleCoordStrategyCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SimpleCoordStrategyCall *pp = (SimpleCoordStrategyCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SimpleCoordStrategyCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleCoordStrategyCall *pp = (SimpleCoordStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCoordData(); return out.str();}
        default: return "";
    }
}

bool SimpleCoordStrategyCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SimpleCoordStrategyCall *pp = (SimpleCoordStrategyCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SimpleCoordStrategyCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "SimpleCoordDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *SimpleCoordStrategyCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleCoordStrategyCall *pp = (SimpleCoordStrategyCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCoordData()); break;
        default: return NULL;
    }
}

Register_Class(AreaDataCall);

AreaDataCall::AreaDataCall(const char *name, int kind) : GlobalViewBuilderCall(name,kind)
{
}

AreaDataCall::AreaDataCall(const AreaDataCall& other) : GlobalViewBuilderCall(other)
{
    copy(other);
}

AreaDataCall::~AreaDataCall()
{
}

AreaDataCall& AreaDataCall::operator=(const AreaDataCall& other)
{
    if (this==&other) return *this;
    GlobalViewBuilderCall::operator=(other);
    copy(other);
    return *this;
}

void AreaDataCall::copy(const AreaDataCall& other)
{
    this->areaData_var = other.areaData_var;
}

void AreaDataCall::parsimPack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimPack(b);
    doPacking(b,this->areaData_var);
}

void AreaDataCall::parsimUnpack(cCommBuffer *b)
{
    GlobalViewBuilderCall::parsimUnpack(b);
    doUnpacking(b,this->areaData_var);
}

AreaDataContainer& AreaDataCall::getAreaData()
{
    return areaData_var;
}

void AreaDataCall::setAreaData(const AreaDataContainer& areaData)
{
    this->areaData_var = areaData;
}

class AreaDataCallDescriptor : public cClassDescriptor
{
  public:
    AreaDataCallDescriptor();
    virtual ~AreaDataCallDescriptor();

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

Register_ClassDescriptor(AreaDataCallDescriptor);

AreaDataCallDescriptor::AreaDataCallDescriptor() : cClassDescriptor("AreaDataCall", "GlobalViewBuilderCall")
{
}

AreaDataCallDescriptor::~AreaDataCallDescriptor()
{
}

bool AreaDataCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AreaDataCall *>(obj)!=NULL;
}

const char *AreaDataCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AreaDataCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AreaDataCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AreaDataCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "areaData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AreaDataCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "areaData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AreaDataCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "AreaDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AreaDataCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AreaDataCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AreaDataCall *pp = (AreaDataCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AreaDataCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AreaDataCall *pp = (AreaDataCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAreaData(); return out.str();}
        default: return "";
    }
}

bool AreaDataCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AreaDataCall *pp = (AreaDataCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AreaDataCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "AreaDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *AreaDataCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AreaDataCall *pp = (AreaDataCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAreaData()); break;
        default: return NULL;
    }
}

Register_Class(CapReqCall);

CapReqCall::CapReqCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

CapReqCall::CapReqCall(const CapReqCall& other) : BaseCallMessage(other)
{
    copy(other);
}

CapReqCall::~CapReqCall()
{
}

CapReqCall& CapReqCall::operator=(const CapReqCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void CapReqCall::copy(const CapReqCall& other)
{
}

void CapReqCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void CapReqCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class CapReqCallDescriptor : public cClassDescriptor
{
  public:
    CapReqCallDescriptor();
    virtual ~CapReqCallDescriptor();

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

Register_ClassDescriptor(CapReqCallDescriptor);

CapReqCallDescriptor::CapReqCallDescriptor() : cClassDescriptor("CapReqCall", "BaseCallMessage")
{
}

CapReqCallDescriptor::~CapReqCallDescriptor()
{
}

bool CapReqCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CapReqCall *>(obj)!=NULL;
}

const char *CapReqCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CapReqCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int CapReqCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *CapReqCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int CapReqCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CapReqCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *CapReqCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CapReqCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CapReqCall *pp = (CapReqCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CapReqCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CapReqCall *pp = (CapReqCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool CapReqCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CapReqCall *pp = (CapReqCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CapReqCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *CapReqCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CapReqCall *pp = (CapReqCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(CapReqResponse);

CapReqResponse::CapReqResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

CapReqResponse::CapReqResponse(const CapReqResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

CapReqResponse::~CapReqResponse()
{
}

CapReqResponse& CapReqResponse::operator=(const CapReqResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void CapReqResponse::copy(const CapReqResponse& other)
{
    this->areaData_var = other.areaData_var;
}

void CapReqResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->areaData_var);
}

void CapReqResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->areaData_var);
}

AreaDataContainer& CapReqResponse::getAreaData()
{
    return areaData_var;
}

void CapReqResponse::setAreaData(const AreaDataContainer& areaData)
{
    this->areaData_var = areaData;
}

class CapReqResponseDescriptor : public cClassDescriptor
{
  public:
    CapReqResponseDescriptor();
    virtual ~CapReqResponseDescriptor();

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

Register_ClassDescriptor(CapReqResponseDescriptor);

CapReqResponseDescriptor::CapReqResponseDescriptor() : cClassDescriptor("CapReqResponse", "BaseResponseMessage")
{
}

CapReqResponseDescriptor::~CapReqResponseDescriptor()
{
}

bool CapReqResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CapReqResponse *>(obj)!=NULL;
}

const char *CapReqResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CapReqResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CapReqResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *CapReqResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "areaData",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int CapReqResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "areaData")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CapReqResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "AreaDataContainer",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *CapReqResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CapReqResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CapReqResponse *pp = (CapReqResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CapReqResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CapReqResponse *pp = (CapReqResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAreaData(); return out.str();}
        default: return "";
    }
}

bool CapReqResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CapReqResponse *pp = (CapReqResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CapReqResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "AreaDataContainer",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *CapReqResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CapReqResponse *pp = (CapReqResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAreaData()); break;
        default: return NULL;
    }
}


