//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/DiscoveryMode.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DiscoveryMode_m.h"

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
    cEnum *e = cEnum::find("DiscoveryNodesType");
    if (!e) enums.getInstance()->add(e = new cEnum("DiscoveryNodesType"));
    e->insert(CLOSE_NODES, "CLOSE_NODES");
    e->insert(SPREADED_NODES, "SPREADED_NODES");
);

Register_Class(DiscoveryCall);

DiscoveryCall::DiscoveryCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->nodesType_var = CLOSE_NODES;
    this->numberOfNodes_var = -1;
    this->index_var = -1;
}

DiscoveryCall::DiscoveryCall(const DiscoveryCall& other) : BaseCallMessage(other)
{
    copy(other);
}

DiscoveryCall::~DiscoveryCall()
{
}

DiscoveryCall& DiscoveryCall::operator=(const DiscoveryCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void DiscoveryCall::copy(const DiscoveryCall& other)
{
    this->nodesType_var = other.nodesType_var;
    this->numberOfNodes_var = other.numberOfNodes_var;
    this->index_var = other.index_var;
}

void DiscoveryCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->nodesType_var);
    doPacking(b,this->numberOfNodes_var);
    doPacking(b,this->index_var);
}

void DiscoveryCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->nodesType_var);
    doUnpacking(b,this->numberOfNodes_var);
    doUnpacking(b,this->index_var);
}

unsigned int DiscoveryCall::getNodesType() const
{
    return nodesType_var;
}

void DiscoveryCall::setNodesType(unsigned int nodesType)
{
    this->nodesType_var = nodesType;
}

int DiscoveryCall::getNumberOfNodes() const
{
    return numberOfNodes_var;
}

void DiscoveryCall::setNumberOfNodes(int numberOfNodes)
{
    this->numberOfNodes_var = numberOfNodes;
}

int DiscoveryCall::getIndex() const
{
    return index_var;
}

void DiscoveryCall::setIndex(int index)
{
    this->index_var = index;
}

class DiscoveryCallDescriptor : public cClassDescriptor
{
  public:
    DiscoveryCallDescriptor();
    virtual ~DiscoveryCallDescriptor();

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

Register_ClassDescriptor(DiscoveryCallDescriptor);

DiscoveryCallDescriptor::DiscoveryCallDescriptor() : cClassDescriptor("DiscoveryCall", "BaseCallMessage")
{
}

DiscoveryCallDescriptor::~DiscoveryCallDescriptor()
{
}

bool DiscoveryCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DiscoveryCall *>(obj)!=NULL;
}

const char *DiscoveryCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DiscoveryCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DiscoveryCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *DiscoveryCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodesType",
        "numberOfNodes",
        "index",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int DiscoveryCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodesType")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "numberOfNodes")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "index")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DiscoveryCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "int",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *DiscoveryCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "DiscoveryNodesType";
            return NULL;
        default: return NULL;
    }
}

int DiscoveryCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryCall *pp = (DiscoveryCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DiscoveryCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryCall *pp = (DiscoveryCall *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getNodesType());
        case 1: return long2string(pp->getNumberOfNodes());
        case 2: return long2string(pp->getIndex());
        default: return "";
    }
}

bool DiscoveryCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryCall *pp = (DiscoveryCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setNodesType(string2ulong(value)); return true;
        case 1: pp->setNumberOfNodes(string2long(value)); return true;
        case 2: pp->setIndex(string2long(value)); return true;
        default: return false;
    }
}

const char *DiscoveryCallDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *DiscoveryCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryCall *pp = (DiscoveryCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DiscoveryResponse);

DiscoveryResponse::DiscoveryResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    nodes_arraysize = 0;
    this->nodes_var = 0;
    this->maxIndex_var = -1;
}

DiscoveryResponse::DiscoveryResponse(const DiscoveryResponse& other) : BaseResponseMessage(other)
{
    nodes_arraysize = 0;
    this->nodes_var = 0;
    copy(other);
}

DiscoveryResponse::~DiscoveryResponse()
{
    delete [] nodes_var;
}

DiscoveryResponse& DiscoveryResponse::operator=(const DiscoveryResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void DiscoveryResponse::copy(const DiscoveryResponse& other)
{
    delete [] this->nodes_var;
    this->nodes_var = (other.nodes_arraysize==0) ? NULL : new TransportAddress[other.nodes_arraysize];
    nodes_arraysize = other.nodes_arraysize;
    for (unsigned int i=0; i<nodes_arraysize; i++)
        this->nodes_var[i] = other.nodes_var[i];
    this->maxIndex_var = other.maxIndex_var;
}

void DiscoveryResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(nodes_arraysize);
    doPacking(b,this->nodes_var,nodes_arraysize);
    doPacking(b,this->maxIndex_var);
}

void DiscoveryResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->nodes_var;
    b->unpack(nodes_arraysize);
    if (nodes_arraysize==0) {
        this->nodes_var = 0;
    } else {
        this->nodes_var = new TransportAddress[nodes_arraysize];
        doUnpacking(b,this->nodes_var,nodes_arraysize);
    }
    doUnpacking(b,this->maxIndex_var);
}

void DiscoveryResponse::setNodesArraySize(unsigned int size)
{
    TransportAddress *nodes_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = nodes_arraysize < size ? nodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nodes_var2[i] = this->nodes_var[i];
    nodes_arraysize = size;
    delete [] this->nodes_var;
    this->nodes_var = nodes_var2;
}

unsigned int DiscoveryResponse::getNodesArraySize() const
{
    return nodes_arraysize;
}

TransportAddress& DiscoveryResponse::getNodes(unsigned int k)
{
    if (k>=nodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nodes_arraysize, k);
    return nodes_var[k];
}

void DiscoveryResponse::setNodes(unsigned int k, const TransportAddress& nodes)
{
    if (k>=nodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nodes_arraysize, k);
    this->nodes_var[k] = nodes;
}

int DiscoveryResponse::getMaxIndex() const
{
    return maxIndex_var;
}

void DiscoveryResponse::setMaxIndex(int maxIndex)
{
    this->maxIndex_var = maxIndex;
}

class DiscoveryResponseDescriptor : public cClassDescriptor
{
  public:
    DiscoveryResponseDescriptor();
    virtual ~DiscoveryResponseDescriptor();

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

Register_ClassDescriptor(DiscoveryResponseDescriptor);

DiscoveryResponseDescriptor::DiscoveryResponseDescriptor() : cClassDescriptor("DiscoveryResponse", "BaseResponseMessage")
{
}

DiscoveryResponseDescriptor::~DiscoveryResponseDescriptor()
{
}

bool DiscoveryResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DiscoveryResponse *>(obj)!=NULL;
}

const char *DiscoveryResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DiscoveryResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int DiscoveryResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DiscoveryResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodes",
        "maxIndex",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int DiscoveryResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodes")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxIndex")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DiscoveryResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *DiscoveryResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DiscoveryResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryResponse *pp = (DiscoveryResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNodesArraySize();
        default: return 0;
    }
}

std::string DiscoveryResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryResponse *pp = (DiscoveryResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNodes(i); return out.str();}
        case 1: return long2string(pp->getMaxIndex());
        default: return "";
    }
}

bool DiscoveryResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryResponse *pp = (DiscoveryResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setMaxIndex(string2long(value)); return true;
        default: return false;
    }
}

const char *DiscoveryResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *DiscoveryResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DiscoveryResponse *pp = (DiscoveryResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNodes(i)); break;
        default: return NULL;
    }
}


