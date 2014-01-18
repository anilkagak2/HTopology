//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/cbr/CBR-DHTMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "CBR-DHTMessage_m.h"

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




Register_Class(CBRDHTGetCall);

CBRDHTGetCall::CBRDHTGetCall(const char *name, int kind) : DHTGetCall(name,kind)
{
}

CBRDHTGetCall::CBRDHTGetCall(const CBRDHTGetCall& other) : DHTGetCall(other)
{
    copy(other);
}

CBRDHTGetCall::~CBRDHTGetCall()
{
}

CBRDHTGetCall& CBRDHTGetCall::operator=(const CBRDHTGetCall& other)
{
    if (this==&other) return *this;
    DHTGetCall::operator=(other);
    copy(other);
    return *this;
}

void CBRDHTGetCall::copy(const CBRDHTGetCall& other)
{
    this->originalKey_var = other.originalKey_var;
}

void CBRDHTGetCall::parsimPack(cCommBuffer *b)
{
    DHTGetCall::parsimPack(b);
    doPacking(b,this->originalKey_var);
}

void CBRDHTGetCall::parsimUnpack(cCommBuffer *b)
{
    DHTGetCall::parsimUnpack(b);
    doUnpacking(b,this->originalKey_var);
}

OverlayKey& CBRDHTGetCall::getOriginalKey()
{
    return originalKey_var;
}

void CBRDHTGetCall::setOriginalKey(const OverlayKey& originalKey)
{
    this->originalKey_var = originalKey;
}

class CBRDHTGetCallDescriptor : public cClassDescriptor
{
  public:
    CBRDHTGetCallDescriptor();
    virtual ~CBRDHTGetCallDescriptor();

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

Register_ClassDescriptor(CBRDHTGetCallDescriptor);

CBRDHTGetCallDescriptor::CBRDHTGetCallDescriptor() : cClassDescriptor("CBRDHTGetCall", "DHTGetCall")
{
}

CBRDHTGetCallDescriptor::~CBRDHTGetCallDescriptor()
{
}

bool CBRDHTGetCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CBRDHTGetCall *>(obj)!=NULL;
}

const char *CBRDHTGetCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CBRDHTGetCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CBRDHTGetCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *CBRDHTGetCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "originalKey",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int CBRDHTGetCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originalKey")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CBRDHTGetCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *CBRDHTGetCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CBRDHTGetCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetCall *pp = (CBRDHTGetCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CBRDHTGetCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetCall *pp = (CBRDHTGetCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOriginalKey(); return out.str();}
        default: return "";
    }
}

bool CBRDHTGetCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetCall *pp = (CBRDHTGetCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CBRDHTGetCallDescriptor::getFieldStructName(void *object, int field) const
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

void *CBRDHTGetCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetCall *pp = (CBRDHTGetCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOriginalKey()); break;
        default: return NULL;
    }
}

Register_Class(CBRDHTGetResponse);

CBRDHTGetResponse::CBRDHTGetResponse(const char *name, int kind) : DHTGetResponse(name,kind)
{
}

CBRDHTGetResponse::CBRDHTGetResponse(const CBRDHTGetResponse& other) : DHTGetResponse(other)
{
    copy(other);
}

CBRDHTGetResponse::~CBRDHTGetResponse()
{
}

CBRDHTGetResponse& CBRDHTGetResponse::operator=(const CBRDHTGetResponse& other)
{
    if (this==&other) return *this;
    DHTGetResponse::operator=(other);
    copy(other);
    return *this;
}

void CBRDHTGetResponse::copy(const CBRDHTGetResponse& other)
{
    this->originalKey_var = other.originalKey_var;
}

void CBRDHTGetResponse::parsimPack(cCommBuffer *b)
{
    DHTGetResponse::parsimPack(b);
    doPacking(b,this->originalKey_var);
}

void CBRDHTGetResponse::parsimUnpack(cCommBuffer *b)
{
    DHTGetResponse::parsimUnpack(b);
    doUnpacking(b,this->originalKey_var);
}

OverlayKey& CBRDHTGetResponse::getOriginalKey()
{
    return originalKey_var;
}

void CBRDHTGetResponse::setOriginalKey(const OverlayKey& originalKey)
{
    this->originalKey_var = originalKey;
}

class CBRDHTGetResponseDescriptor : public cClassDescriptor
{
  public:
    CBRDHTGetResponseDescriptor();
    virtual ~CBRDHTGetResponseDescriptor();

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

Register_ClassDescriptor(CBRDHTGetResponseDescriptor);

CBRDHTGetResponseDescriptor::CBRDHTGetResponseDescriptor() : cClassDescriptor("CBRDHTGetResponse", "DHTGetResponse")
{
}

CBRDHTGetResponseDescriptor::~CBRDHTGetResponseDescriptor()
{
}

bool CBRDHTGetResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CBRDHTGetResponse *>(obj)!=NULL;
}

const char *CBRDHTGetResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CBRDHTGetResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CBRDHTGetResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *CBRDHTGetResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "originalKey",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int CBRDHTGetResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originalKey")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CBRDHTGetResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *CBRDHTGetResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CBRDHTGetResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetResponse *pp = (CBRDHTGetResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CBRDHTGetResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetResponse *pp = (CBRDHTGetResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOriginalKey(); return out.str();}
        default: return "";
    }
}

bool CBRDHTGetResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetResponse *pp = (CBRDHTGetResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CBRDHTGetResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *CBRDHTGetResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CBRDHTGetResponse *pp = (CBRDHTGetResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOriginalKey()); break;
        default: return NULL;
    }
}


