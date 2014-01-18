//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/ntree/NTree.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NTree_m.h"

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




Register_Class(NTreeJoinCall);

NTreeJoinCall::NTreeJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

NTreeJoinCall::NTreeJoinCall(const NTreeJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

NTreeJoinCall::~NTreeJoinCall()
{
}

NTreeJoinCall& NTreeJoinCall::operator=(const NTreeJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeJoinCall::copy(const NTreeJoinCall& other)
{
    this->position_var = other.position_var;
}

void NTreeJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->position_var);
}

void NTreeJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->position_var);
}

Vector2D& NTreeJoinCall::getPosition()
{
    return position_var;
}

void NTreeJoinCall::setPosition(const Vector2D& position)
{
    this->position_var = position;
}

class NTreeJoinCallDescriptor : public cClassDescriptor
{
  public:
    NTreeJoinCallDescriptor();
    virtual ~NTreeJoinCallDescriptor();

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

Register_ClassDescriptor(NTreeJoinCallDescriptor);

NTreeJoinCallDescriptor::NTreeJoinCallDescriptor() : cClassDescriptor("NTreeJoinCall", "BaseCallMessage")
{
}

NTreeJoinCallDescriptor::~NTreeJoinCallDescriptor()
{
}

bool NTreeJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeJoinCall *>(obj)!=NULL;
}

const char *NTreeJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NTreeJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NTreeJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "position",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int NTreeJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeJoinCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *NTreeJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinCall *pp = (NTreeJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinCall *pp = (NTreeJoinCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPosition(); return out.str();}
        default: return "";
    }
}

bool NTreeJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinCall *pp = (NTreeJoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NTreeJoinCallDescriptor::getFieldStructName(void *object, int field) const
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

void *NTreeJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinCall *pp = (NTreeJoinCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(NTreeJoinResponse);

NTreeJoinResponse::NTreeJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->size_var = 0;
    members_arraysize = 0;
    this->members_var = 0;
}

NTreeJoinResponse::NTreeJoinResponse(const NTreeJoinResponse& other) : BaseResponseMessage(other)
{
    members_arraysize = 0;
    this->members_var = 0;
    copy(other);
}

NTreeJoinResponse::~NTreeJoinResponse()
{
    delete [] members_var;
}

NTreeJoinResponse& NTreeJoinResponse::operator=(const NTreeJoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeJoinResponse::copy(const NTreeJoinResponse& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    delete [] this->members_var;
    this->members_var = (other.members_arraysize==0) ? NULL : new NodeHandle[other.members_arraysize];
    members_arraysize = other.members_arraysize;
    for (unsigned int i=0; i<members_arraysize; i++)
        this->members_var[i] = other.members_var[i];
}

void NTreeJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    b->pack(members_arraysize);
    doPacking(b,this->members_var,members_arraysize);
}

void NTreeJoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    delete [] this->members_var;
    b->unpack(members_arraysize);
    if (members_arraysize==0) {
        this->members_var = 0;
    } else {
        this->members_var = new NodeHandle[members_arraysize];
        doUnpacking(b,this->members_var,members_arraysize);
    }
}

Vector2D& NTreeJoinResponse::getOrigin()
{
    return origin_var;
}

void NTreeJoinResponse::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreeJoinResponse::getSize() const
{
    return size_var;
}

void NTreeJoinResponse::setSize(double size)
{
    this->size_var = size;
}

void NTreeJoinResponse::setMembersArraySize(unsigned int size)
{
    NodeHandle *members_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = members_arraysize < size ? members_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        members_var2[i] = this->members_var[i];
    members_arraysize = size;
    delete [] this->members_var;
    this->members_var = members_var2;
}

unsigned int NTreeJoinResponse::getMembersArraySize() const
{
    return members_arraysize;
}

NodeHandle& NTreeJoinResponse::getMembers(unsigned int k)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    return members_var[k];
}

void NTreeJoinResponse::setMembers(unsigned int k, const NodeHandle& members)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    this->members_var[k] = members;
}

class NTreeJoinResponseDescriptor : public cClassDescriptor
{
  public:
    NTreeJoinResponseDescriptor();
    virtual ~NTreeJoinResponseDescriptor();

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

Register_ClassDescriptor(NTreeJoinResponseDescriptor);

NTreeJoinResponseDescriptor::NTreeJoinResponseDescriptor() : cClassDescriptor("NTreeJoinResponse", "BaseResponseMessage")
{
}

NTreeJoinResponseDescriptor::~NTreeJoinResponseDescriptor()
{
}

bool NTreeJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeJoinResponse *>(obj)!=NULL;
}

const char *NTreeJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NTreeJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NTreeJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "members",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NTreeJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "members")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinResponse *pp = (NTreeJoinResponse *)object; (void)pp;
    switch (field) {
        case 2: return pp->getMembersArraySize();
        default: return 0;
    }
}

std::string NTreeJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinResponse *pp = (NTreeJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: {std::stringstream out; out << pp->getMembers(i); return out.str();}
        default: return "";
    }
}

bool NTreeJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinResponse *pp = (NTreeJoinResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        default: return false;
    }
}

const char *NTreeJoinResponseDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NTreeJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeJoinResponse *pp = (NTreeJoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 2: return (void *)(&pp->getMembers(i)); break;
        default: return NULL;
    }
}

Register_Class(NTreeDivideCall);

NTreeDivideCall::NTreeDivideCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->size_var = 0;
    this->quadrant_var = 0;
}

NTreeDivideCall::NTreeDivideCall(const NTreeDivideCall& other) : BaseCallMessage(other)
{
    copy(other);
}

NTreeDivideCall::~NTreeDivideCall()
{
}

NTreeDivideCall& NTreeDivideCall::operator=(const NTreeDivideCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeDivideCall::copy(const NTreeDivideCall& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    this->quadrant_var = other.quadrant_var;
}

void NTreeDivideCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    doPacking(b,this->quadrant_var);
}

void NTreeDivideCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    doUnpacking(b,this->quadrant_var);
}

Vector2D& NTreeDivideCall::getOrigin()
{
    return origin_var;
}

void NTreeDivideCall::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreeDivideCall::getSize() const
{
    return size_var;
}

void NTreeDivideCall::setSize(double size)
{
    this->size_var = size;
}

int NTreeDivideCall::getQuadrant() const
{
    return quadrant_var;
}

void NTreeDivideCall::setQuadrant(int quadrant)
{
    this->quadrant_var = quadrant;
}

class NTreeDivideCallDescriptor : public cClassDescriptor
{
  public:
    NTreeDivideCallDescriptor();
    virtual ~NTreeDivideCallDescriptor();

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

Register_ClassDescriptor(NTreeDivideCallDescriptor);

NTreeDivideCallDescriptor::NTreeDivideCallDescriptor() : cClassDescriptor("NTreeDivideCall", "BaseCallMessage")
{
}

NTreeDivideCallDescriptor::~NTreeDivideCallDescriptor()
{
}

bool NTreeDivideCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeDivideCall *>(obj)!=NULL;
}

const char *NTreeDivideCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeDivideCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NTreeDivideCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NTreeDivideCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "quadrant",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NTreeDivideCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='q' && strcmp(fieldName, "quadrant")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeDivideCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeDivideCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeDivideCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideCall *pp = (NTreeDivideCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeDivideCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideCall *pp = (NTreeDivideCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: return long2string(pp->getQuadrant());
        default: return "";
    }
}

bool NTreeDivideCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideCall *pp = (NTreeDivideCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        case 2: pp->setQuadrant(string2long(value)); return true;
        default: return false;
    }
}

const char *NTreeDivideCallDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NTreeDivideCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideCall *pp = (NTreeDivideCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        default: return NULL;
    }
}

Register_Class(NTreeDivideResponse);

NTreeDivideResponse::NTreeDivideResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->quadrant_var = 0;
}

NTreeDivideResponse::NTreeDivideResponse(const NTreeDivideResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

NTreeDivideResponse::~NTreeDivideResponse()
{
}

NTreeDivideResponse& NTreeDivideResponse::operator=(const NTreeDivideResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeDivideResponse::copy(const NTreeDivideResponse& other)
{
    this->quadrant_var = other.quadrant_var;
}

void NTreeDivideResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->quadrant_var);
}

void NTreeDivideResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->quadrant_var);
}

int NTreeDivideResponse::getQuadrant() const
{
    return quadrant_var;
}

void NTreeDivideResponse::setQuadrant(int quadrant)
{
    this->quadrant_var = quadrant;
}

class NTreeDivideResponseDescriptor : public cClassDescriptor
{
  public:
    NTreeDivideResponseDescriptor();
    virtual ~NTreeDivideResponseDescriptor();

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

Register_ClassDescriptor(NTreeDivideResponseDescriptor);

NTreeDivideResponseDescriptor::NTreeDivideResponseDescriptor() : cClassDescriptor("NTreeDivideResponse", "BaseResponseMessage")
{
}

NTreeDivideResponseDescriptor::~NTreeDivideResponseDescriptor()
{
}

bool NTreeDivideResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeDivideResponse *>(obj)!=NULL;
}

const char *NTreeDivideResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeDivideResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NTreeDivideResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NTreeDivideResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "quadrant",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int NTreeDivideResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='q' && strcmp(fieldName, "quadrant")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeDivideResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *NTreeDivideResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeDivideResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideResponse *pp = (NTreeDivideResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeDivideResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideResponse *pp = (NTreeDivideResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getQuadrant());
        default: return "";
    }
}

bool NTreeDivideResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideResponse *pp = (NTreeDivideResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setQuadrant(string2long(value)); return true;
        default: return false;
    }
}

const char *NTreeDivideResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *NTreeDivideResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeDivideResponse *pp = (NTreeDivideResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NTreePingCall);

NTreePingCall::NTreePingCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->size_var = 0;
}

NTreePingCall::NTreePingCall(const NTreePingCall& other) : BaseCallMessage(other)
{
    copy(other);
}

NTreePingCall::~NTreePingCall()
{
}

NTreePingCall& NTreePingCall::operator=(const NTreePingCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreePingCall::copy(const NTreePingCall& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    this->parent_var = other.parent_var;
}

void NTreePingCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    doPacking(b,this->parent_var);
}

void NTreePingCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    doUnpacking(b,this->parent_var);
}

Vector2D& NTreePingCall::getOrigin()
{
    return origin_var;
}

void NTreePingCall::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreePingCall::getSize() const
{
    return size_var;
}

void NTreePingCall::setSize(double size)
{
    this->size_var = size;
}

NodeHandle& NTreePingCall::getParent()
{
    return parent_var;
}

void NTreePingCall::setParent(const NodeHandle& parent)
{
    this->parent_var = parent;
}

class NTreePingCallDescriptor : public cClassDescriptor
{
  public:
    NTreePingCallDescriptor();
    virtual ~NTreePingCallDescriptor();

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

Register_ClassDescriptor(NTreePingCallDescriptor);

NTreePingCallDescriptor::NTreePingCallDescriptor() : cClassDescriptor("NTreePingCall", "BaseCallMessage")
{
}

NTreePingCallDescriptor::~NTreePingCallDescriptor()
{
}

bool NTreePingCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreePingCall *>(obj)!=NULL;
}

const char *NTreePingCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreePingCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NTreePingCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NTreePingCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "parent",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NTreePingCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "parent")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreePingCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NTreePingCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreePingCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingCall *pp = (NTreePingCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreePingCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingCall *pp = (NTreePingCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: {std::stringstream out; out << pp->getParent(); return out.str();}
        default: return "";
    }
}

bool NTreePingCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingCall *pp = (NTreePingCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        default: return false;
    }
}

const char *NTreePingCallDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NTreePingCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingCall *pp = (NTreePingCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 2: return (void *)(&pp->getParent()); break;
        default: return NULL;
    }
}

Register_Class(NTreeNodePingCall);

NTreeNodePingCall::NTreeNodePingCall(const char *name, int kind) : NTreePingCall(name,kind)
{
    this->quadrant_var = 0;
}

NTreeNodePingCall::NTreeNodePingCall(const NTreeNodePingCall& other) : NTreePingCall(other)
{
    copy(other);
}

NTreeNodePingCall::~NTreeNodePingCall()
{
}

NTreeNodePingCall& NTreeNodePingCall::operator=(const NTreeNodePingCall& other)
{
    if (this==&other) return *this;
    NTreePingCall::operator=(other);
    copy(other);
    return *this;
}

void NTreeNodePingCall::copy(const NTreeNodePingCall& other)
{
    for (unsigned int i=0; i<4; i++)
        this->siblings_var[i] = other.siblings_var[i];
    this->quadrant_var = other.quadrant_var;
}

void NTreeNodePingCall::parsimPack(cCommBuffer *b)
{
    NTreePingCall::parsimPack(b);
    doPacking(b,this->siblings_var,4);
    doPacking(b,this->quadrant_var);
}

void NTreeNodePingCall::parsimUnpack(cCommBuffer *b)
{
    NTreePingCall::parsimUnpack(b);
    doUnpacking(b,this->siblings_var,4);
    doUnpacking(b,this->quadrant_var);
}

unsigned int NTreeNodePingCall::getSiblingsArraySize() const
{
    return 4;
}

NodeHandle& NTreeNodePingCall::getSiblings(unsigned int k)
{
    if (k>=4) throw cRuntimeError("Array of size 4 indexed by %lu", (unsigned long)k);
    return siblings_var[k];
}

void NTreeNodePingCall::setSiblings(unsigned int k, const NodeHandle& siblings)
{
    if (k>=4) throw cRuntimeError("Array of size 4 indexed by %lu", (unsigned long)k);
    this->siblings_var[k] = siblings;
}

int NTreeNodePingCall::getQuadrant() const
{
    return quadrant_var;
}

void NTreeNodePingCall::setQuadrant(int quadrant)
{
    this->quadrant_var = quadrant;
}

class NTreeNodePingCallDescriptor : public cClassDescriptor
{
  public:
    NTreeNodePingCallDescriptor();
    virtual ~NTreeNodePingCallDescriptor();

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

Register_ClassDescriptor(NTreeNodePingCallDescriptor);

NTreeNodePingCallDescriptor::NTreeNodePingCallDescriptor() : cClassDescriptor("NTreeNodePingCall", "NTreePingCall")
{
}

NTreeNodePingCallDescriptor::~NTreeNodePingCallDescriptor()
{
}

bool NTreeNodePingCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeNodePingCall *>(obj)!=NULL;
}

const char *NTreeNodePingCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeNodePingCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NTreeNodePingCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *NTreeNodePingCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "siblings",
        "quadrant",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NTreeNodePingCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "siblings")==0) return base+0;
    if (fieldName[0]=='q' && strcmp(fieldName, "quadrant")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeNodePingCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeNodePingCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeNodePingCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingCall *pp = (NTreeNodePingCall *)object; (void)pp;
    switch (field) {
        case 0: return 4;
        default: return 0;
    }
}

std::string NTreeNodePingCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingCall *pp = (NTreeNodePingCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSiblings(i); return out.str();}
        case 1: return long2string(pp->getQuadrant());
        default: return "";
    }
}

bool NTreeNodePingCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingCall *pp = (NTreeNodePingCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setQuadrant(string2long(value)); return true;
        default: return false;
    }
}

const char *NTreeNodePingCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *NTreeNodePingCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingCall *pp = (NTreeNodePingCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSiblings(i)); break;
        default: return NULL;
    }
}

Register_Class(NTreePingResponse);

NTreePingResponse::NTreePingResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

NTreePingResponse::NTreePingResponse(const NTreePingResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

NTreePingResponse::~NTreePingResponse()
{
}

NTreePingResponse& NTreePingResponse::operator=(const NTreePingResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreePingResponse::copy(const NTreePingResponse& other)
{
}

void NTreePingResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void NTreePingResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class NTreePingResponseDescriptor : public cClassDescriptor
{
  public:
    NTreePingResponseDescriptor();
    virtual ~NTreePingResponseDescriptor();

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

Register_ClassDescriptor(NTreePingResponseDescriptor);

NTreePingResponseDescriptor::NTreePingResponseDescriptor() : cClassDescriptor("NTreePingResponse", "BaseResponseMessage")
{
}

NTreePingResponseDescriptor::~NTreePingResponseDescriptor()
{
}

bool NTreePingResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreePingResponse *>(obj)!=NULL;
}

const char *NTreePingResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreePingResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NTreePingResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *NTreePingResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int NTreePingResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreePingResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *NTreePingResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreePingResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingResponse *pp = (NTreePingResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreePingResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingResponse *pp = (NTreePingResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool NTreePingResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingResponse *pp = (NTreePingResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NTreePingResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *NTreePingResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreePingResponse *pp = (NTreePingResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NTreeNodePingResponse);

NTreeNodePingResponse::NTreeNodePingResponse(const char *name, int kind) : NTreePingResponse(name,kind)
{
    members_arraysize = 0;
    this->members_var = 0;
    this->aggChildCount_var = 0;
}

NTreeNodePingResponse::NTreeNodePingResponse(const NTreeNodePingResponse& other) : NTreePingResponse(other)
{
    members_arraysize = 0;
    this->members_var = 0;
    copy(other);
}

NTreeNodePingResponse::~NTreeNodePingResponse()
{
    delete [] members_var;
}

NTreeNodePingResponse& NTreeNodePingResponse::operator=(const NTreeNodePingResponse& other)
{
    if (this==&other) return *this;
    NTreePingResponse::operator=(other);
    copy(other);
    return *this;
}

void NTreeNodePingResponse::copy(const NTreeNodePingResponse& other)
{
    delete [] this->members_var;
    this->members_var = (other.members_arraysize==0) ? NULL : new NodeHandle[other.members_arraysize];
    members_arraysize = other.members_arraysize;
    for (unsigned int i=0; i<members_arraysize; i++)
        this->members_var[i] = other.members_var[i];
    this->aggChildCount_var = other.aggChildCount_var;
}

void NTreeNodePingResponse::parsimPack(cCommBuffer *b)
{
    NTreePingResponse::parsimPack(b);
    b->pack(members_arraysize);
    doPacking(b,this->members_var,members_arraysize);
    doPacking(b,this->aggChildCount_var);
}

void NTreeNodePingResponse::parsimUnpack(cCommBuffer *b)
{
    NTreePingResponse::parsimUnpack(b);
    delete [] this->members_var;
    b->unpack(members_arraysize);
    if (members_arraysize==0) {
        this->members_var = 0;
    } else {
        this->members_var = new NodeHandle[members_arraysize];
        doUnpacking(b,this->members_var,members_arraysize);
    }
    doUnpacking(b,this->aggChildCount_var);
}

void NTreeNodePingResponse::setMembersArraySize(unsigned int size)
{
    NodeHandle *members_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = members_arraysize < size ? members_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        members_var2[i] = this->members_var[i];
    members_arraysize = size;
    delete [] this->members_var;
    this->members_var = members_var2;
}

unsigned int NTreeNodePingResponse::getMembersArraySize() const
{
    return members_arraysize;
}

NodeHandle& NTreeNodePingResponse::getMembers(unsigned int k)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    return members_var[k];
}

void NTreeNodePingResponse::setMembers(unsigned int k, const NodeHandle& members)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    this->members_var[k] = members;
}

int NTreeNodePingResponse::getAggChildCount() const
{
    return aggChildCount_var;
}

void NTreeNodePingResponse::setAggChildCount(int aggChildCount)
{
    this->aggChildCount_var = aggChildCount;
}

class NTreeNodePingResponseDescriptor : public cClassDescriptor
{
  public:
    NTreeNodePingResponseDescriptor();
    virtual ~NTreeNodePingResponseDescriptor();

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

Register_ClassDescriptor(NTreeNodePingResponseDescriptor);

NTreeNodePingResponseDescriptor::NTreeNodePingResponseDescriptor() : cClassDescriptor("NTreeNodePingResponse", "NTreePingResponse")
{
}

NTreeNodePingResponseDescriptor::~NTreeNodePingResponseDescriptor()
{
}

bool NTreeNodePingResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeNodePingResponse *>(obj)!=NULL;
}

const char *NTreeNodePingResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeNodePingResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NTreeNodePingResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *NTreeNodePingResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "members",
        "aggChildCount",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NTreeNodePingResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "members")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "aggChildCount")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeNodePingResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeNodePingResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeNodePingResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingResponse *pp = (NTreeNodePingResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getMembersArraySize();
        default: return 0;
    }
}

std::string NTreeNodePingResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingResponse *pp = (NTreeNodePingResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMembers(i); return out.str();}
        case 1: return long2string(pp->getAggChildCount());
        default: return "";
    }
}

bool NTreeNodePingResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingResponse *pp = (NTreeNodePingResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setAggChildCount(string2long(value)); return true;
        default: return false;
    }
}

const char *NTreeNodePingResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *NTreeNodePingResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeNodePingResponse *pp = (NTreeNodePingResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMembers(i)); break;
        default: return NULL;
    }
}

Register_Class(NTreeGroupDeleteMessage);

NTreeGroupDeleteMessage::NTreeGroupDeleteMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->size_var = 0;
}

NTreeGroupDeleteMessage::NTreeGroupDeleteMessage(const NTreeGroupDeleteMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NTreeGroupDeleteMessage::~NTreeGroupDeleteMessage()
{
}

NTreeGroupDeleteMessage& NTreeGroupDeleteMessage::operator=(const NTreeGroupDeleteMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeGroupDeleteMessage::copy(const NTreeGroupDeleteMessage& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    for (unsigned int i=0; i<4; i++)
        this->newChild_var[i] = other.newChild_var[i];
}

void NTreeGroupDeleteMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    doPacking(b,this->newChild_var,4);
}

void NTreeGroupDeleteMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    doUnpacking(b,this->newChild_var,4);
}

Vector2D& NTreeGroupDeleteMessage::getOrigin()
{
    return origin_var;
}

void NTreeGroupDeleteMessage::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreeGroupDeleteMessage::getSize() const
{
    return size_var;
}

void NTreeGroupDeleteMessage::setSize(double size)
{
    this->size_var = size;
}

unsigned int NTreeGroupDeleteMessage::getNewChildArraySize() const
{
    return 4;
}

NodeHandle& NTreeGroupDeleteMessage::getNewChild(unsigned int k)
{
    if (k>=4) throw cRuntimeError("Array of size 4 indexed by %lu", (unsigned long)k);
    return newChild_var[k];
}

void NTreeGroupDeleteMessage::setNewChild(unsigned int k, const NodeHandle& newChild)
{
    if (k>=4) throw cRuntimeError("Array of size 4 indexed by %lu", (unsigned long)k);
    this->newChild_var[k] = newChild;
}

class NTreeGroupDeleteMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeGroupDeleteMessageDescriptor();
    virtual ~NTreeGroupDeleteMessageDescriptor();

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

Register_ClassDescriptor(NTreeGroupDeleteMessageDescriptor);

NTreeGroupDeleteMessageDescriptor::NTreeGroupDeleteMessageDescriptor() : cClassDescriptor("NTreeGroupDeleteMessage", "BaseOverlayMessage")
{
}

NTreeGroupDeleteMessageDescriptor::~NTreeGroupDeleteMessageDescriptor()
{
}

bool NTreeGroupDeleteMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeGroupDeleteMessage *>(obj)!=NULL;
}

const char *NTreeGroupDeleteMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeGroupDeleteMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NTreeGroupDeleteMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NTreeGroupDeleteMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "newChild",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NTreeGroupDeleteMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "newChild")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeGroupDeleteMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeGroupDeleteMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeGroupDeleteMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupDeleteMessage *pp = (NTreeGroupDeleteMessage *)object; (void)pp;
    switch (field) {
        case 2: return 4;
        default: return 0;
    }
}

std::string NTreeGroupDeleteMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupDeleteMessage *pp = (NTreeGroupDeleteMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: {std::stringstream out; out << pp->getNewChild(i); return out.str();}
        default: return "";
    }
}

bool NTreeGroupDeleteMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupDeleteMessage *pp = (NTreeGroupDeleteMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        default: return false;
    }
}

const char *NTreeGroupDeleteMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NTreeGroupDeleteMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupDeleteMessage *pp = (NTreeGroupDeleteMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 2: return (void *)(&pp->getNewChild(i)); break;
        default: return NULL;
    }
}

Register_Class(NTreeCollapseMessage);

NTreeCollapseMessage::NTreeCollapseMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->size_var = 0;
}

NTreeCollapseMessage::NTreeCollapseMessage(const NTreeCollapseMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NTreeCollapseMessage::~NTreeCollapseMessage()
{
}

NTreeCollapseMessage& NTreeCollapseMessage::operator=(const NTreeCollapseMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeCollapseMessage::copy(const NTreeCollapseMessage& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    this->player_var = other.player_var;
}

void NTreeCollapseMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    doPacking(b,this->player_var);
}

void NTreeCollapseMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    doUnpacking(b,this->player_var);
}

Vector2D& NTreeCollapseMessage::getOrigin()
{
    return origin_var;
}

void NTreeCollapseMessage::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreeCollapseMessage::getSize() const
{
    return size_var;
}

void NTreeCollapseMessage::setSize(double size)
{
    this->size_var = size;
}

NodeHandle& NTreeCollapseMessage::getPlayer()
{
    return player_var;
}

void NTreeCollapseMessage::setPlayer(const NodeHandle& player)
{
    this->player_var = player;
}

class NTreeCollapseMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeCollapseMessageDescriptor();
    virtual ~NTreeCollapseMessageDescriptor();

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

Register_ClassDescriptor(NTreeCollapseMessageDescriptor);

NTreeCollapseMessageDescriptor::NTreeCollapseMessageDescriptor() : cClassDescriptor("NTreeCollapseMessage", "BaseOverlayMessage")
{
}

NTreeCollapseMessageDescriptor::~NTreeCollapseMessageDescriptor()
{
}

bool NTreeCollapseMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeCollapseMessage *>(obj)!=NULL;
}

const char *NTreeCollapseMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeCollapseMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NTreeCollapseMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NTreeCollapseMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "player",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NTreeCollapseMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeCollapseMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeCollapseMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeCollapseMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeCollapseMessage *pp = (NTreeCollapseMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeCollapseMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeCollapseMessage *pp = (NTreeCollapseMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: {std::stringstream out; out << pp->getPlayer(); return out.str();}
        default: return "";
    }
}

bool NTreeCollapseMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeCollapseMessage *pp = (NTreeCollapseMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        default: return false;
    }
}

const char *NTreeCollapseMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NTreeCollapseMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeCollapseMessage *pp = (NTreeCollapseMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 2: return (void *)(&pp->getPlayer()); break;
        default: return NULL;
    }
}

Register_Class(NTreeLeaveMessage);

NTreeLeaveMessage::NTreeLeaveMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
}

NTreeLeaveMessage::NTreeLeaveMessage(const NTreeLeaveMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NTreeLeaveMessage::~NTreeLeaveMessage()
{
}

NTreeLeaveMessage& NTreeLeaveMessage::operator=(const NTreeLeaveMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeLeaveMessage::copy(const NTreeLeaveMessage& other)
{
    this->player_var = other.player_var;
    this->position_var = other.position_var;
}

void NTreeLeaveMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->player_var);
    doPacking(b,this->position_var);
}

void NTreeLeaveMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->player_var);
    doUnpacking(b,this->position_var);
}

NodeHandle& NTreeLeaveMessage::getPlayer()
{
    return player_var;
}

void NTreeLeaveMessage::setPlayer(const NodeHandle& player)
{
    this->player_var = player;
}

Vector2D& NTreeLeaveMessage::getPosition()
{
    return position_var;
}

void NTreeLeaveMessage::setPosition(const Vector2D& position)
{
    this->position_var = position;
}

class NTreeLeaveMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeLeaveMessageDescriptor();
    virtual ~NTreeLeaveMessageDescriptor();

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

Register_ClassDescriptor(NTreeLeaveMessageDescriptor);

NTreeLeaveMessageDescriptor::NTreeLeaveMessageDescriptor() : cClassDescriptor("NTreeLeaveMessage", "BaseOverlayMessage")
{
}

NTreeLeaveMessageDescriptor::~NTreeLeaveMessageDescriptor()
{
}

bool NTreeLeaveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeLeaveMessage *>(obj)!=NULL;
}

const char *NTreeLeaveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeLeaveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NTreeLeaveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NTreeLeaveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "player",
        "position",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NTreeLeaveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeLeaveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeLeaveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeLeaveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeLeaveMessage *pp = (NTreeLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeLeaveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeLeaveMessage *pp = (NTreeLeaveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPlayer(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPosition(); return out.str();}
        default: return "";
    }
}

bool NTreeLeaveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeLeaveMessage *pp = (NTreeLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NTreeLeaveMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *NTreeLeaveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeLeaveMessage *pp = (NTreeLeaveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPlayer()); break;
        case 1: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(NTreeMoveMessage);

NTreeMoveMessage::NTreeMoveMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
}

NTreeMoveMessage::NTreeMoveMessage(const NTreeMoveMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NTreeMoveMessage::~NTreeMoveMessage()
{
}

NTreeMoveMessage& NTreeMoveMessage::operator=(const NTreeMoveMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeMoveMessage::copy(const NTreeMoveMessage& other)
{
    this->player_var = other.player_var;
    this->position_var = other.position_var;
}

void NTreeMoveMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->player_var);
    doPacking(b,this->position_var);
}

void NTreeMoveMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->player_var);
    doUnpacking(b,this->position_var);
}

NodeHandle& NTreeMoveMessage::getPlayer()
{
    return player_var;
}

void NTreeMoveMessage::setPlayer(const NodeHandle& player)
{
    this->player_var = player;
}

Vector2D& NTreeMoveMessage::getPosition()
{
    return position_var;
}

void NTreeMoveMessage::setPosition(const Vector2D& position)
{
    this->position_var = position;
}

class NTreeMoveMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeMoveMessageDescriptor();
    virtual ~NTreeMoveMessageDescriptor();

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

Register_ClassDescriptor(NTreeMoveMessageDescriptor);

NTreeMoveMessageDescriptor::NTreeMoveMessageDescriptor() : cClassDescriptor("NTreeMoveMessage", "BaseOverlayMessage")
{
}

NTreeMoveMessageDescriptor::~NTreeMoveMessageDescriptor()
{
}

bool NTreeMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeMoveMessage *>(obj)!=NULL;
}

const char *NTreeMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NTreeMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NTreeMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "player",
        "position",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NTreeMoveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeMoveMessage *pp = (NTreeMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeMoveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeMoveMessage *pp = (NTreeMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPlayer(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPosition(); return out.str();}
        default: return "";
    }
}

bool NTreeMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeMoveMessage *pp = (NTreeMoveMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NTreeMoveMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *NTreeMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeMoveMessage *pp = (NTreeMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPlayer()); break;
        case 1: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(NTreeGroupAddMessage);

NTreeGroupAddMessage::NTreeGroupAddMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
}

NTreeGroupAddMessage::NTreeGroupAddMessage(const NTreeGroupAddMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NTreeGroupAddMessage::~NTreeGroupAddMessage()
{
}

NTreeGroupAddMessage& NTreeGroupAddMessage::operator=(const NTreeGroupAddMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeGroupAddMessage::copy(const NTreeGroupAddMessage& other)
{
    this->player_var = other.player_var;
    this->origin_var = other.origin_var;
}

void NTreeGroupAddMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->player_var);
    doPacking(b,this->origin_var);
}

void NTreeGroupAddMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->player_var);
    doUnpacking(b,this->origin_var);
}

NodeHandle& NTreeGroupAddMessage::getPlayer()
{
    return player_var;
}

void NTreeGroupAddMessage::setPlayer(const NodeHandle& player)
{
    this->player_var = player;
}

Vector2D& NTreeGroupAddMessage::getOrigin()
{
    return origin_var;
}

void NTreeGroupAddMessage::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

class NTreeGroupAddMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeGroupAddMessageDescriptor();
    virtual ~NTreeGroupAddMessageDescriptor();

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

Register_ClassDescriptor(NTreeGroupAddMessageDescriptor);

NTreeGroupAddMessageDescriptor::NTreeGroupAddMessageDescriptor() : cClassDescriptor("NTreeGroupAddMessage", "BaseOverlayMessage")
{
}

NTreeGroupAddMessageDescriptor::~NTreeGroupAddMessageDescriptor()
{
}

bool NTreeGroupAddMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeGroupAddMessage *>(obj)!=NULL;
}

const char *NTreeGroupAddMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeGroupAddMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NTreeGroupAddMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NTreeGroupAddMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "player",
        "origin",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NTreeGroupAddMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeGroupAddMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeGroupAddMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeGroupAddMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupAddMessage *pp = (NTreeGroupAddMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeGroupAddMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupAddMessage *pp = (NTreeGroupAddMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPlayer(); return out.str();}
        case 1: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        default: return "";
    }
}

bool NTreeGroupAddMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupAddMessage *pp = (NTreeGroupAddMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NTreeGroupAddMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "Vector2D",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *NTreeGroupAddMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeGroupAddMessage *pp = (NTreeGroupAddMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPlayer()); break;
        case 1: return (void *)(&pp->getOrigin()); break;
        default: return NULL;
    }
}

Register_Class(NTreeReplaceNodeMessage);

NTreeReplaceNodeMessage::NTreeReplaceNodeMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->size_var = 0;
    children_arraysize = 0;
    this->children_var = 0;
    this->isLeaf_var = 0;
}

NTreeReplaceNodeMessage::NTreeReplaceNodeMessage(const NTreeReplaceNodeMessage& other) : BaseOverlayMessage(other)
{
    children_arraysize = 0;
    this->children_var = 0;
    copy(other);
}

NTreeReplaceNodeMessage::~NTreeReplaceNodeMessage()
{
    delete [] children_var;
}

NTreeReplaceNodeMessage& NTreeReplaceNodeMessage::operator=(const NTreeReplaceNodeMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeReplaceNodeMessage::copy(const NTreeReplaceNodeMessage& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    this->parent_var = other.parent_var;
    delete [] this->children_var;
    this->children_var = (other.children_arraysize==0) ? NULL : new NodeHandle[other.children_arraysize];
    children_arraysize = other.children_arraysize;
    for (unsigned int i=0; i<children_arraysize; i++)
        this->children_var[i] = other.children_var[i];
    this->oldNode_var = other.oldNode_var;
    this->isLeaf_var = other.isLeaf_var;
}

void NTreeReplaceNodeMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    doPacking(b,this->parent_var);
    b->pack(children_arraysize);
    doPacking(b,this->children_var,children_arraysize);
    doPacking(b,this->oldNode_var);
    doPacking(b,this->isLeaf_var);
}

void NTreeReplaceNodeMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    doUnpacking(b,this->parent_var);
    delete [] this->children_var;
    b->unpack(children_arraysize);
    if (children_arraysize==0) {
        this->children_var = 0;
    } else {
        this->children_var = new NodeHandle[children_arraysize];
        doUnpacking(b,this->children_var,children_arraysize);
    }
    doUnpacking(b,this->oldNode_var);
    doUnpacking(b,this->isLeaf_var);
}

Vector2D& NTreeReplaceNodeMessage::getOrigin()
{
    return origin_var;
}

void NTreeReplaceNodeMessage::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreeReplaceNodeMessage::getSize() const
{
    return size_var;
}

void NTreeReplaceNodeMessage::setSize(double size)
{
    this->size_var = size;
}

NodeHandle& NTreeReplaceNodeMessage::getParent()
{
    return parent_var;
}

void NTreeReplaceNodeMessage::setParent(const NodeHandle& parent)
{
    this->parent_var = parent;
}

void NTreeReplaceNodeMessage::setChildrenArraySize(unsigned int size)
{
    NodeHandle *children_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = children_arraysize < size ? children_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        children_var2[i] = this->children_var[i];
    children_arraysize = size;
    delete [] this->children_var;
    this->children_var = children_var2;
}

unsigned int NTreeReplaceNodeMessage::getChildrenArraySize() const
{
    return children_arraysize;
}

NodeHandle& NTreeReplaceNodeMessage::getChildren(unsigned int k)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    return children_var[k];
}

void NTreeReplaceNodeMessage::setChildren(unsigned int k, const NodeHandle& children)
{
    if (k>=children_arraysize) throw cRuntimeError("Array of size %d indexed by %d", children_arraysize, k);
    this->children_var[k] = children;
}

TransportAddress& NTreeReplaceNodeMessage::getOldNode()
{
    return oldNode_var;
}

void NTreeReplaceNodeMessage::setOldNode(const TransportAddress& oldNode)
{
    this->oldNode_var = oldNode;
}

bool NTreeReplaceNodeMessage::getIsLeaf() const
{
    return isLeaf_var;
}

void NTreeReplaceNodeMessage::setIsLeaf(bool isLeaf)
{
    this->isLeaf_var = isLeaf;
}

class NTreeReplaceNodeMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeReplaceNodeMessageDescriptor();
    virtual ~NTreeReplaceNodeMessageDescriptor();

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

Register_ClassDescriptor(NTreeReplaceNodeMessageDescriptor);

NTreeReplaceNodeMessageDescriptor::NTreeReplaceNodeMessageDescriptor() : cClassDescriptor("NTreeReplaceNodeMessage", "BaseOverlayMessage")
{
}

NTreeReplaceNodeMessageDescriptor::~NTreeReplaceNodeMessageDescriptor()
{
}

bool NTreeReplaceNodeMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeReplaceNodeMessage *>(obj)!=NULL;
}

const char *NTreeReplaceNodeMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeReplaceNodeMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int NTreeReplaceNodeMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *NTreeReplaceNodeMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "parent",
        "children",
        "oldNode",
        "isLeaf",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int NTreeReplaceNodeMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "parent")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "children")==0) return base+3;
    if (fieldName[0]=='o' && strcmp(fieldName, "oldNode")==0) return base+4;
    if (fieldName[0]=='i' && strcmp(fieldName, "isLeaf")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeReplaceNodeMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "NodeHandle",
        "NodeHandle",
        "TransportAddress",
        "bool",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeReplaceNodeMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeReplaceNodeMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeReplaceNodeMessage *pp = (NTreeReplaceNodeMessage *)object; (void)pp;
    switch (field) {
        case 3: return pp->getChildrenArraySize();
        default: return 0;
    }
}

std::string NTreeReplaceNodeMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeReplaceNodeMessage *pp = (NTreeReplaceNodeMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: {std::stringstream out; out << pp->getParent(); return out.str();}
        case 3: {std::stringstream out; out << pp->getChildren(i); return out.str();}
        case 4: {std::stringstream out; out << pp->getOldNode(); return out.str();}
        case 5: return bool2string(pp->getIsLeaf());
        default: return "";
    }
}

bool NTreeReplaceNodeMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeReplaceNodeMessage *pp = (NTreeReplaceNodeMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        case 5: pp->setIsLeaf(string2bool(value)); return true;
        default: return false;
    }
}

const char *NTreeReplaceNodeMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
        "NodeHandle",
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<6) ? fieldStructNames[field] : NULL;
}

void *NTreeReplaceNodeMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeReplaceNodeMessage *pp = (NTreeReplaceNodeMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 2: return (void *)(&pp->getParent()); break;
        case 3: return (void *)(&pp->getChildren(i)); break;
        case 4: return (void *)(&pp->getOldNode()); break;
        default: return NULL;
    }
}

Register_Class(NTreeTakeOverMessage);

NTreeTakeOverMessage::NTreeTakeOverMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->size_var = 0;
}

NTreeTakeOverMessage::NTreeTakeOverMessage(const NTreeTakeOverMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NTreeTakeOverMessage::~NTreeTakeOverMessage()
{
}

NTreeTakeOverMessage& NTreeTakeOverMessage::operator=(const NTreeTakeOverMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NTreeTakeOverMessage::copy(const NTreeTakeOverMessage& other)
{
    this->origin_var = other.origin_var;
    this->size_var = other.size_var;
    this->player_var = other.player_var;
}

void NTreeTakeOverMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->origin_var);
    doPacking(b,this->size_var);
    doPacking(b,this->player_var);
}

void NTreeTakeOverMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->size_var);
    doUnpacking(b,this->player_var);
}

Vector2D& NTreeTakeOverMessage::getOrigin()
{
    return origin_var;
}

void NTreeTakeOverMessage::setOrigin(const Vector2D& origin)
{
    this->origin_var = origin;
}

double NTreeTakeOverMessage::getSize() const
{
    return size_var;
}

void NTreeTakeOverMessage::setSize(double size)
{
    this->size_var = size;
}

NodeHandle& NTreeTakeOverMessage::getPlayer()
{
    return player_var;
}

void NTreeTakeOverMessage::setPlayer(const NodeHandle& player)
{
    this->player_var = player;
}

class NTreeTakeOverMessageDescriptor : public cClassDescriptor
{
  public:
    NTreeTakeOverMessageDescriptor();
    virtual ~NTreeTakeOverMessageDescriptor();

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

Register_ClassDescriptor(NTreeTakeOverMessageDescriptor);

NTreeTakeOverMessageDescriptor::NTreeTakeOverMessageDescriptor() : cClassDescriptor("NTreeTakeOverMessage", "BaseOverlayMessage")
{
}

NTreeTakeOverMessageDescriptor::~NTreeTakeOverMessageDescriptor()
{
}

bool NTreeTakeOverMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NTreeTakeOverMessage *>(obj)!=NULL;
}

const char *NTreeTakeOverMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NTreeTakeOverMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NTreeTakeOverMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NTreeTakeOverMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "size",
        "player",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NTreeTakeOverMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "player")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NTreeTakeOverMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "double",
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NTreeTakeOverMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NTreeTakeOverMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NTreeTakeOverMessage *pp = (NTreeTakeOverMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NTreeTakeOverMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeTakeOverMessage *pp = (NTreeTakeOverMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: return double2string(pp->getSize());
        case 2: {std::stringstream out; out << pp->getPlayer(); return out.str();}
        default: return "";
    }
}

bool NTreeTakeOverMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NTreeTakeOverMessage *pp = (NTreeTakeOverMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setSize(string2double(value)); return true;
        default: return false;
    }
}

const char *NTreeTakeOverMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NTreeTakeOverMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NTreeTakeOverMessage *pp = (NTreeTakeOverMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 2: return (void *)(&pp->getPlayer()); break;
        default: return NULL;
    }
}


