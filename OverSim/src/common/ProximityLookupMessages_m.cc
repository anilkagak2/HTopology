//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/ProximityLookupMessages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ProximityLookupMessages_m.h"

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
    cEnum *e = cEnum::find("ProximityLookupMetrik");
    if (!e) enums.getInstance()->add(e = new cEnum("ProximityLookupMetrik"));
    e->insert(NONE, "NONE");
    e->insert(BY_KEY, "BY_KEY");
    e->insert(BY_KEY_X, "BY_KEY_X");
    e->insert(BY_PROXIMITY, "BY_PROXIMITY");
    e->insert(BY_PROXIMITY_X, "BY_PROXIMITY_X");
    e->insert(BY_KEY_AND_PROXIMITY, "BY_KEY_AND_PROXIMITY");
    e->insert(BY_KEY_AND_PROXIMITY_WEIGHT, "BY_KEY_AND_PROXIMITY_WEIGHT");
);

Register_Class(ProxFindNodeCall);

ProxFindNodeCall::ProxFindNodeCall(const char *name, int kind) : FindNodeCall(name,kind)
{
}

ProxFindNodeCall::ProxFindNodeCall(const ProxFindNodeCall& other) : FindNodeCall(other)
{
    copy(other);
}

ProxFindNodeCall::~ProxFindNodeCall()
{
}

ProxFindNodeCall& ProxFindNodeCall::operator=(const ProxFindNodeCall& other)
{
    if (this==&other) return *this;
    FindNodeCall::operator=(other);
    copy(other);
    return *this;
}

void ProxFindNodeCall::copy(const ProxFindNodeCall& other)
{
}

void ProxFindNodeCall::parsimPack(cCommBuffer *b)
{
    FindNodeCall::parsimPack(b);
}

void ProxFindNodeCall::parsimUnpack(cCommBuffer *b)
{
    FindNodeCall::parsimUnpack(b);
}

class ProxFindNodeCallDescriptor : public cClassDescriptor
{
  public:
    ProxFindNodeCallDescriptor();
    virtual ~ProxFindNodeCallDescriptor();

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

Register_ClassDescriptor(ProxFindNodeCallDescriptor);

ProxFindNodeCallDescriptor::ProxFindNodeCallDescriptor() : cClassDescriptor("ProxFindNodeCall", "FindNodeCall")
{
}

ProxFindNodeCallDescriptor::~ProxFindNodeCallDescriptor()
{
}

bool ProxFindNodeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ProxFindNodeCall *>(obj)!=NULL;
}

const char *ProxFindNodeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ProxFindNodeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ProxFindNodeCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *ProxFindNodeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int ProxFindNodeCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ProxFindNodeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *ProxFindNodeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ProxFindNodeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeCall *pp = (ProxFindNodeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ProxFindNodeCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeCall *pp = (ProxFindNodeCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool ProxFindNodeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeCall *pp = (ProxFindNodeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ProxFindNodeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *ProxFindNodeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeCall *pp = (ProxFindNodeCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ProxFindNodeResponse);

ProxFindNodeResponse::ProxFindNodeResponse(const char *name, int kind) : FindNodeResponse(name,kind)
{
    nextHopNcsInfos_arraysize = 0;
    this->nextHopNcsInfos_var = 0;
}

ProxFindNodeResponse::ProxFindNodeResponse(const ProxFindNodeResponse& other) : FindNodeResponse(other)
{
    nextHopNcsInfos_arraysize = 0;
    this->nextHopNcsInfos_var = 0;
    copy(other);
}

ProxFindNodeResponse::~ProxFindNodeResponse()
{
    delete [] nextHopNcsInfos_var;
}

ProxFindNodeResponse& ProxFindNodeResponse::operator=(const ProxFindNodeResponse& other)
{
    if (this==&other) return *this;
    FindNodeResponse::operator=(other);
    copy(other);
    return *this;
}

void ProxFindNodeResponse::copy(const ProxFindNodeResponse& other)
{
    delete [] this->nextHopNcsInfos_var;
    this->nextHopNcsInfos_var = (other.nextHopNcsInfos_arraysize==0) ? NULL : new double[other.nextHopNcsInfos_arraysize];
    nextHopNcsInfos_arraysize = other.nextHopNcsInfos_arraysize;
    for (unsigned int i=0; i<nextHopNcsInfos_arraysize; i++)
        this->nextHopNcsInfos_var[i] = other.nextHopNcsInfos_var[i];
}

void ProxFindNodeResponse::parsimPack(cCommBuffer *b)
{
    FindNodeResponse::parsimPack(b);
    b->pack(nextHopNcsInfos_arraysize);
    doPacking(b,this->nextHopNcsInfos_var,nextHopNcsInfos_arraysize);
}

void ProxFindNodeResponse::parsimUnpack(cCommBuffer *b)
{
    FindNodeResponse::parsimUnpack(b);
    delete [] this->nextHopNcsInfos_var;
    b->unpack(nextHopNcsInfos_arraysize);
    if (nextHopNcsInfos_arraysize==0) {
        this->nextHopNcsInfos_var = 0;
    } else {
        this->nextHopNcsInfos_var = new double[nextHopNcsInfos_arraysize];
        doUnpacking(b,this->nextHopNcsInfos_var,nextHopNcsInfos_arraysize);
    }
}

void ProxFindNodeResponse::setNextHopNcsInfosArraySize(unsigned int size)
{
    double *nextHopNcsInfos_var2 = (size==0) ? NULL : new double[size];
    unsigned int sz = nextHopNcsInfos_arraysize < size ? nextHopNcsInfos_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nextHopNcsInfos_var2[i] = this->nextHopNcsInfos_var[i];
    for (unsigned int i=sz; i<size; i++)
        nextHopNcsInfos_var2[i] = 0;
    nextHopNcsInfos_arraysize = size;
    delete [] this->nextHopNcsInfos_var;
    this->nextHopNcsInfos_var = nextHopNcsInfos_var2;
}

unsigned int ProxFindNodeResponse::getNextHopNcsInfosArraySize() const
{
    return nextHopNcsInfos_arraysize;
}

double ProxFindNodeResponse::getNextHopNcsInfos(unsigned int k) const
{
    if (k>=nextHopNcsInfos_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nextHopNcsInfos_arraysize, k);
    return nextHopNcsInfos_var[k];
}

void ProxFindNodeResponse::setNextHopNcsInfos(unsigned int k, double nextHopNcsInfos)
{
    if (k>=nextHopNcsInfos_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nextHopNcsInfos_arraysize, k);
    this->nextHopNcsInfos_var[k] = nextHopNcsInfos;
}

class ProxFindNodeResponseDescriptor : public cClassDescriptor
{
  public:
    ProxFindNodeResponseDescriptor();
    virtual ~ProxFindNodeResponseDescriptor();

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

Register_ClassDescriptor(ProxFindNodeResponseDescriptor);

ProxFindNodeResponseDescriptor::ProxFindNodeResponseDescriptor() : cClassDescriptor("ProxFindNodeResponse", "FindNodeResponse")
{
}

ProxFindNodeResponseDescriptor::~ProxFindNodeResponseDescriptor()
{
}

bool ProxFindNodeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ProxFindNodeResponse *>(obj)!=NULL;
}

const char *ProxFindNodeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ProxFindNodeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ProxFindNodeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *ProxFindNodeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nextHopNcsInfos",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ProxFindNodeResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHopNcsInfos")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ProxFindNodeResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *ProxFindNodeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ProxFindNodeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeResponse *pp = (ProxFindNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNextHopNcsInfosArraySize();
        default: return 0;
    }
}

std::string ProxFindNodeResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeResponse *pp = (ProxFindNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getNextHopNcsInfos(i));
        default: return "";
    }
}

bool ProxFindNodeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeResponse *pp = (ProxFindNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setNextHopNcsInfos(i,string2double(value)); return true;
        default: return false;
    }
}

const char *ProxFindNodeResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *ProxFindNodeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ProxFindNodeResponse *pp = (ProxFindNodeResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


