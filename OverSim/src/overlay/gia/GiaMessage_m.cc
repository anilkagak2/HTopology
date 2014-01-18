//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/gia/GiaMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GiaMessage_m.h"

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
    cEnum *e = cEnum::find("GIACommand");
    if (!e) enums.getInstance()->add(e = new cEnum("GIACommand"));
    e->insert(JOIN_REQUEST, "JOIN_REQUEST");
    e->insert(JOIN_RESPONSE, "JOIN_RESPONSE");
    e->insert(JOIN_ACK, "JOIN_ACK");
    e->insert(JOIN_DENY, "JOIN_DENY");
    e->insert(DISCONNECT, "DISCONNECT");
    e->insert(ROUTE, "ROUTE");
    e->insert(SEARCH, "SEARCH");
    e->insert(ANSWER, "ANSWER");
    e->insert(UPDATE, "UPDATE");
    e->insert(TOKEN, "TOKEN");
    e->insert(KEYLIST, "KEYLIST");
);

Register_Class(GiaMessage);

GiaMessage::GiaMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->hopCount_var = 0;
    this->command_var = 0;
    this->srcCapacity_var = 0;
    this->srcDegree_var = 0;
}

GiaMessage::GiaMessage(const GiaMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

GiaMessage::~GiaMessage()
{
}

GiaMessage& GiaMessage::operator=(const GiaMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void GiaMessage::copy(const GiaMessage& other)
{
    this->srcNode_var = other.srcNode_var;
    this->hopCount_var = other.hopCount_var;
    this->command_var = other.command_var;
    this->srcCapacity_var = other.srcCapacity_var;
    this->srcDegree_var = other.srcDegree_var;
}

void GiaMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->command_var);
    doPacking(b,this->srcCapacity_var);
    doPacking(b,this->srcDegree_var);
}

void GiaMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->srcCapacity_var);
    doUnpacking(b,this->srcDegree_var);
}

NodeHandle& GiaMessage::getSrcNode()
{
    return srcNode_var;
}

void GiaMessage::setSrcNode(const NodeHandle& srcNode)
{
    this->srcNode_var = srcNode;
}

int GiaMessage::getHopCount() const
{
    return hopCount_var;
}

void GiaMessage::setHopCount(int hopCount)
{
    this->hopCount_var = hopCount;
}

int GiaMessage::getCommand() const
{
    return command_var;
}

void GiaMessage::setCommand(int command)
{
    this->command_var = command;
}

double GiaMessage::getSrcCapacity() const
{
    return srcCapacity_var;
}

void GiaMessage::setSrcCapacity(double srcCapacity)
{
    this->srcCapacity_var = srcCapacity;
}

int GiaMessage::getSrcDegree() const
{
    return srcDegree_var;
}

void GiaMessage::setSrcDegree(int srcDegree)
{
    this->srcDegree_var = srcDegree;
}

class GiaMessageDescriptor : public cClassDescriptor
{
  public:
    GiaMessageDescriptor();
    virtual ~GiaMessageDescriptor();

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

Register_ClassDescriptor(GiaMessageDescriptor);

GiaMessageDescriptor::GiaMessageDescriptor() : cClassDescriptor("GiaMessage", "BaseOverlayMessage")
{
}

GiaMessageDescriptor::~GiaMessageDescriptor()
{
}

bool GiaMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GiaMessage *>(obj)!=NULL;
}

const char *GiaMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GiaMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int GiaMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *GiaMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcNode",
        "hopCount",
        "command",
        "srcCapacity",
        "srcDegree",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int GiaMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcNode")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcCapacity")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcDegree")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GiaMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
        "double",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *GiaMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "GIACommand";
            return NULL;
        default: return NULL;
    }
}

int GiaMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GiaMessage *pp = (GiaMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GiaMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GiaMessage *pp = (GiaMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcNode(); return out.str();}
        case 1: return long2string(pp->getHopCount());
        case 2: return long2string(pp->getCommand());
        case 3: return double2string(pp->getSrcCapacity());
        case 4: return long2string(pp->getSrcDegree());
        default: return "";
    }
}

bool GiaMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GiaMessage *pp = (GiaMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setHopCount(string2long(value)); return true;
        case 2: pp->setCommand(string2long(value)); return true;
        case 3: pp->setSrcCapacity(string2double(value)); return true;
        case 4: pp->setSrcDegree(string2long(value)); return true;
        default: return false;
    }
}

const char *GiaMessageDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *GiaMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GiaMessage *pp = (GiaMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcNode()); break;
        default: return NULL;
    }
}

Register_Class(GiaNeighborMessage);

GiaNeighborMessage::GiaNeighborMessage(const char *name, int kind) : GiaMessage(name,kind)
{
    neighbors_arraysize = 0;
    this->neighbors_var = 0;
}

GiaNeighborMessage::GiaNeighborMessage(const GiaNeighborMessage& other) : GiaMessage(other)
{
    neighbors_arraysize = 0;
    this->neighbors_var = 0;
    copy(other);
}

GiaNeighborMessage::~GiaNeighborMessage()
{
    delete [] neighbors_var;
}

GiaNeighborMessage& GiaNeighborMessage::operator=(const GiaNeighborMessage& other)
{
    if (this==&other) return *this;
    GiaMessage::operator=(other);
    copy(other);
    return *this;
}

void GiaNeighborMessage::copy(const GiaNeighborMessage& other)
{
    delete [] this->neighbors_var;
    this->neighbors_var = (other.neighbors_arraysize==0) ? NULL : new GiaNode[other.neighbors_arraysize];
    neighbors_arraysize = other.neighbors_arraysize;
    for (unsigned int i=0; i<neighbors_arraysize; i++)
        this->neighbors_var[i] = other.neighbors_var[i];
}

void GiaNeighborMessage::parsimPack(cCommBuffer *b)
{
    GiaMessage::parsimPack(b);
    b->pack(neighbors_arraysize);
    doPacking(b,this->neighbors_var,neighbors_arraysize);
}

void GiaNeighborMessage::parsimUnpack(cCommBuffer *b)
{
    GiaMessage::parsimUnpack(b);
    delete [] this->neighbors_var;
    b->unpack(neighbors_arraysize);
    if (neighbors_arraysize==0) {
        this->neighbors_var = 0;
    } else {
        this->neighbors_var = new GiaNode[neighbors_arraysize];
        doUnpacking(b,this->neighbors_var,neighbors_arraysize);
    }
}

void GiaNeighborMessage::setNeighborsArraySize(unsigned int size)
{
    GiaNode *neighbors_var2 = (size==0) ? NULL : new GiaNode[size];
    unsigned int sz = neighbors_arraysize < size ? neighbors_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighbors_var2[i] = this->neighbors_var[i];
    neighbors_arraysize = size;
    delete [] this->neighbors_var;
    this->neighbors_var = neighbors_var2;
}

unsigned int GiaNeighborMessage::getNeighborsArraySize() const
{
    return neighbors_arraysize;
}

GiaNode& GiaNeighborMessage::getNeighbors(unsigned int k)
{
    if (k>=neighbors_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighbors_arraysize, k);
    return neighbors_var[k];
}

void GiaNeighborMessage::setNeighbors(unsigned int k, const GiaNode& neighbors)
{
    if (k>=neighbors_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighbors_arraysize, k);
    this->neighbors_var[k] = neighbors;
}

class GiaNeighborMessageDescriptor : public cClassDescriptor
{
  public:
    GiaNeighborMessageDescriptor();
    virtual ~GiaNeighborMessageDescriptor();

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

Register_ClassDescriptor(GiaNeighborMessageDescriptor);

GiaNeighborMessageDescriptor::GiaNeighborMessageDescriptor() : cClassDescriptor("GiaNeighborMessage", "GiaMessage")
{
}

GiaNeighborMessageDescriptor::~GiaNeighborMessageDescriptor()
{
}

bool GiaNeighborMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GiaNeighborMessage *>(obj)!=NULL;
}

const char *GiaNeighborMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GiaNeighborMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GiaNeighborMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *GiaNeighborMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "neighbors",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int GiaNeighborMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighbors")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GiaNeighborMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "GiaNode",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *GiaNeighborMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GiaNeighborMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GiaNeighborMessage *pp = (GiaNeighborMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNeighborsArraySize();
        default: return 0;
    }
}

std::string GiaNeighborMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GiaNeighborMessage *pp = (GiaNeighborMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNeighbors(i); return out.str();}
        default: return "";
    }
}

bool GiaNeighborMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GiaNeighborMessage *pp = (GiaNeighborMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GiaNeighborMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "GiaNode",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *GiaNeighborMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GiaNeighborMessage *pp = (GiaNeighborMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNeighbors(i)); break;
        default: return NULL;
    }
}

Register_Class(TokenMessage);

TokenMessage::TokenMessage(const char *name, int kind) : GiaMessage(name,kind)
{
    this->srcTokenNr_var = 0;
    this->dstTokenNr_var = 0;
}

TokenMessage::TokenMessage(const TokenMessage& other) : GiaMessage(other)
{
    copy(other);
}

TokenMessage::~TokenMessage()
{
}

TokenMessage& TokenMessage::operator=(const TokenMessage& other)
{
    if (this==&other) return *this;
    GiaMessage::operator=(other);
    copy(other);
    return *this;
}

void TokenMessage::copy(const TokenMessage& other)
{
    this->srcTokenNr_var = other.srcTokenNr_var;
    this->dstTokenNr_var = other.dstTokenNr_var;
}

void TokenMessage::parsimPack(cCommBuffer *b)
{
    GiaMessage::parsimPack(b);
    doPacking(b,this->srcTokenNr_var);
    doPacking(b,this->dstTokenNr_var);
}

void TokenMessage::parsimUnpack(cCommBuffer *b)
{
    GiaMessage::parsimUnpack(b);
    doUnpacking(b,this->srcTokenNr_var);
    doUnpacking(b,this->dstTokenNr_var);
}

int TokenMessage::getSrcTokenNr() const
{
    return srcTokenNr_var;
}

void TokenMessage::setSrcTokenNr(int srcTokenNr)
{
    this->srcTokenNr_var = srcTokenNr;
}

int TokenMessage::getDstTokenNr() const
{
    return dstTokenNr_var;
}

void TokenMessage::setDstTokenNr(int dstTokenNr)
{
    this->dstTokenNr_var = dstTokenNr;
}

class TokenMessageDescriptor : public cClassDescriptor
{
  public:
    TokenMessageDescriptor();
    virtual ~TokenMessageDescriptor();

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

Register_ClassDescriptor(TokenMessageDescriptor);

TokenMessageDescriptor::TokenMessageDescriptor() : cClassDescriptor("TokenMessage", "GiaMessage")
{
}

TokenMessageDescriptor::~TokenMessageDescriptor()
{
}

bool TokenMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TokenMessage *>(obj)!=NULL;
}

const char *TokenMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TokenMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TokenMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TokenMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcTokenNr",
        "dstTokenNr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int TokenMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcTokenNr")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dstTokenNr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TokenMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *TokenMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TokenMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TokenMessage *pp = (TokenMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TokenMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TokenMessage *pp = (TokenMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSrcTokenNr());
        case 1: return long2string(pp->getDstTokenNr());
        default: return "";
    }
}

bool TokenMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TokenMessage *pp = (TokenMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrcTokenNr(string2long(value)); return true;
        case 1: pp->setDstTokenNr(string2long(value)); return true;
        default: return false;
    }
}

const char *TokenMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *TokenMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TokenMessage *pp = (TokenMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GiaIDMessage);

GiaIDMessage::GiaIDMessage(const char *name, int kind) : GiaMessage(name,kind)
{
}

GiaIDMessage::GiaIDMessage(const GiaIDMessage& other) : GiaMessage(other)
{
    copy(other);
}

GiaIDMessage::~GiaIDMessage()
{
}

GiaIDMessage& GiaIDMessage::operator=(const GiaIDMessage& other)
{
    if (this==&other) return *this;
    GiaMessage::operator=(other);
    copy(other);
    return *this;
}

void GiaIDMessage::copy(const GiaIDMessage& other)
{
    this->destKey_var = other.destKey_var;
    this->ID_var = other.ID_var;
}

void GiaIDMessage::parsimPack(cCommBuffer *b)
{
    GiaMessage::parsimPack(b);
    doPacking(b,this->destKey_var);
    doPacking(b,this->ID_var);
}

void GiaIDMessage::parsimUnpack(cCommBuffer *b)
{
    GiaMessage::parsimUnpack(b);
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->ID_var);
}

OverlayKey& GiaIDMessage::getDestKey()
{
    return destKey_var;
}

void GiaIDMessage::setDestKey(const OverlayKey& destKey)
{
    this->destKey_var = destKey;
}

OverlayKey& GiaIDMessage::getID()
{
    return ID_var;
}

void GiaIDMessage::setID(const OverlayKey& ID)
{
    this->ID_var = ID;
}

class GiaIDMessageDescriptor : public cClassDescriptor
{
  public:
    GiaIDMessageDescriptor();
    virtual ~GiaIDMessageDescriptor();

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

Register_ClassDescriptor(GiaIDMessageDescriptor);

GiaIDMessageDescriptor::GiaIDMessageDescriptor() : cClassDescriptor("GiaIDMessage", "GiaMessage")
{
}

GiaIDMessageDescriptor::~GiaIDMessageDescriptor()
{
}

bool GiaIDMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GiaIDMessage *>(obj)!=NULL;
}

const char *GiaIDMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GiaIDMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int GiaIDMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GiaIDMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destKey",
        "ID",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int GiaIDMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destKey")==0) return base+0;
    if (fieldName[0]=='I' && strcmp(fieldName, "ID")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GiaIDMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "OverlayKey",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *GiaIDMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GiaIDMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GiaIDMessage *pp = (GiaIDMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GiaIDMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GiaIDMessage *pp = (GiaIDMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); return out.str();}
        case 1: {std::stringstream out; out << pp->getID(); return out.str();}
        default: return "";
    }
}

bool GiaIDMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GiaIDMessage *pp = (GiaIDMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GiaIDMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        "OverlayKey",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *GiaIDMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GiaIDMessage *pp = (GiaIDMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        case 1: return (void *)(&pp->getID()); break;
        default: return NULL;
    }
}

Register_Class(GiaRouteMessage);

GiaRouteMessage::GiaRouteMessage(const char *name, int kind) : GiaIDMessage(name,kind)
{
    this->originatorPort_var = 0;
}

GiaRouteMessage::GiaRouteMessage(const GiaRouteMessage& other) : GiaIDMessage(other)
{
    copy(other);
}

GiaRouteMessage::~GiaRouteMessage()
{
}

GiaRouteMessage& GiaRouteMessage::operator=(const GiaRouteMessage& other)
{
    if (this==&other) return *this;
    GiaIDMessage::operator=(other);
    copy(other);
    return *this;
}

void GiaRouteMessage::copy(const GiaRouteMessage& other)
{
    this->originatorKey_var = other.originatorKey_var;
    this->originatorIP_var = other.originatorIP_var;
    this->originatorPort_var = other.originatorPort_var;
}

void GiaRouteMessage::parsimPack(cCommBuffer *b)
{
    GiaIDMessage::parsimPack(b);
    doPacking(b,this->originatorKey_var);
    doPacking(b,this->originatorIP_var);
    doPacking(b,this->originatorPort_var);
}

void GiaRouteMessage::parsimUnpack(cCommBuffer *b)
{
    GiaIDMessage::parsimUnpack(b);
    doUnpacking(b,this->originatorKey_var);
    doUnpacking(b,this->originatorIP_var);
    doUnpacking(b,this->originatorPort_var);
}

OverlayKey& GiaRouteMessage::getOriginatorKey()
{
    return originatorKey_var;
}

void GiaRouteMessage::setOriginatorKey(const OverlayKey& originatorKey)
{
    this->originatorKey_var = originatorKey;
}

IPvXAddress& GiaRouteMessage::getOriginatorIP()
{
    return originatorIP_var;
}

void GiaRouteMessage::setOriginatorIP(const IPvXAddress& originatorIP)
{
    this->originatorIP_var = originatorIP;
}

int GiaRouteMessage::getOriginatorPort() const
{
    return originatorPort_var;
}

void GiaRouteMessage::setOriginatorPort(int originatorPort)
{
    this->originatorPort_var = originatorPort;
}

class GiaRouteMessageDescriptor : public cClassDescriptor
{
  public:
    GiaRouteMessageDescriptor();
    virtual ~GiaRouteMessageDescriptor();

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

Register_ClassDescriptor(GiaRouteMessageDescriptor);

GiaRouteMessageDescriptor::GiaRouteMessageDescriptor() : cClassDescriptor("GiaRouteMessage", "GiaIDMessage")
{
}

GiaRouteMessageDescriptor::~GiaRouteMessageDescriptor()
{
}

bool GiaRouteMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GiaRouteMessage *>(obj)!=NULL;
}

const char *GiaRouteMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GiaRouteMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int GiaRouteMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GiaRouteMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "originatorKey",
        "originatorIP",
        "originatorPort",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int GiaRouteMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorKey")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorIP")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorPort")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GiaRouteMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "IPvXAddress",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *GiaRouteMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GiaRouteMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GiaRouteMessage *pp = (GiaRouteMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GiaRouteMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GiaRouteMessage *pp = (GiaRouteMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOriginatorKey(); return out.str();}
        case 1: {std::stringstream out; out << pp->getOriginatorIP(); return out.str();}
        case 2: return long2string(pp->getOriginatorPort());
        default: return "";
    }
}

bool GiaRouteMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GiaRouteMessage *pp = (GiaRouteMessage *)object; (void)pp;
    switch (field) {
        case 2: pp->setOriginatorPort(string2long(value)); return true;
        default: return false;
    }
}

const char *GiaRouteMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        "IPvXAddress",
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *GiaRouteMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GiaRouteMessage *pp = (GiaRouteMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOriginatorKey()); break;
        case 1: return (void *)(&pp->getOriginatorIP()); break;
        default: return NULL;
    }
}

Register_Class(KeyListMessage);

KeyListMessage::KeyListMessage(const char *name, int kind) : GiaMessage(name,kind)
{
    keys_arraysize = 0;
    this->keys_var = 0;
}

KeyListMessage::KeyListMessage(const KeyListMessage& other) : GiaMessage(other)
{
    keys_arraysize = 0;
    this->keys_var = 0;
    copy(other);
}

KeyListMessage::~KeyListMessage()
{
    delete [] keys_var;
}

KeyListMessage& KeyListMessage::operator=(const KeyListMessage& other)
{
    if (this==&other) return *this;
    GiaMessage::operator=(other);
    copy(other);
    return *this;
}

void KeyListMessage::copy(const KeyListMessage& other)
{
    delete [] this->keys_var;
    this->keys_var = (other.keys_arraysize==0) ? NULL : new OverlayKey[other.keys_arraysize];
    keys_arraysize = other.keys_arraysize;
    for (unsigned int i=0; i<keys_arraysize; i++)
        this->keys_var[i] = other.keys_var[i];
}

void KeyListMessage::parsimPack(cCommBuffer *b)
{
    GiaMessage::parsimPack(b);
    b->pack(keys_arraysize);
    doPacking(b,this->keys_var,keys_arraysize);
}

void KeyListMessage::parsimUnpack(cCommBuffer *b)
{
    GiaMessage::parsimUnpack(b);
    delete [] this->keys_var;
    b->unpack(keys_arraysize);
    if (keys_arraysize==0) {
        this->keys_var = 0;
    } else {
        this->keys_var = new OverlayKey[keys_arraysize];
        doUnpacking(b,this->keys_var,keys_arraysize);
    }
}

void KeyListMessage::setKeysArraySize(unsigned int size)
{
    OverlayKey *keys_var2 = (size==0) ? NULL : new OverlayKey[size];
    unsigned int sz = keys_arraysize < size ? keys_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        keys_var2[i] = this->keys_var[i];
    keys_arraysize = size;
    delete [] this->keys_var;
    this->keys_var = keys_var2;
}

unsigned int KeyListMessage::getKeysArraySize() const
{
    return keys_arraysize;
}

OverlayKey& KeyListMessage::getKeys(unsigned int k)
{
    if (k>=keys_arraysize) throw cRuntimeError("Array of size %d indexed by %d", keys_arraysize, k);
    return keys_var[k];
}

void KeyListMessage::setKeys(unsigned int k, const OverlayKey& keys)
{
    if (k>=keys_arraysize) throw cRuntimeError("Array of size %d indexed by %d", keys_arraysize, k);
    this->keys_var[k] = keys;
}

class KeyListMessageDescriptor : public cClassDescriptor
{
  public:
    KeyListMessageDescriptor();
    virtual ~KeyListMessageDescriptor();

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

Register_ClassDescriptor(KeyListMessageDescriptor);

KeyListMessageDescriptor::KeyListMessageDescriptor() : cClassDescriptor("KeyListMessage", "GiaMessage")
{
}

KeyListMessageDescriptor::~KeyListMessageDescriptor()
{
}

bool KeyListMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KeyListMessage *>(obj)!=NULL;
}

const char *KeyListMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KeyListMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int KeyListMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *KeyListMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "keys",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int KeyListMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "keys")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KeyListMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *KeyListMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KeyListMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KeyListMessage *pp = (KeyListMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getKeysArraySize();
        default: return 0;
    }
}

std::string KeyListMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KeyListMessage *pp = (KeyListMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKeys(i); return out.str();}
        default: return "";
    }
}

bool KeyListMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KeyListMessage *pp = (KeyListMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KeyListMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *KeyListMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KeyListMessage *pp = (KeyListMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKeys(i)); break;
        default: return NULL;
    }
}

Register_Class(SearchMessage);

SearchMessage::SearchMessage(const char *name, int kind) : GiaIDMessage(name,kind)
{
    this->maxResponses_var = 0;
    reversePath_arraysize = 0;
    this->reversePath_var = 0;
    foundNode_arraysize = 0;
    this->foundNode_var = 0;
}

SearchMessage::SearchMessage(const SearchMessage& other) : GiaIDMessage(other)
{
    reversePath_arraysize = 0;
    this->reversePath_var = 0;
    foundNode_arraysize = 0;
    this->foundNode_var = 0;
    copy(other);
}

SearchMessage::~SearchMessage()
{
    delete [] reversePath_var;
    delete [] foundNode_var;
}

SearchMessage& SearchMessage::operator=(const SearchMessage& other)
{
    if (this==&other) return *this;
    GiaIDMessage::operator=(other);
    copy(other);
    return *this;
}

void SearchMessage::copy(const SearchMessage& other)
{
    this->searchKey_var = other.searchKey_var;
    this->maxResponses_var = other.maxResponses_var;
    delete [] this->reversePath_var;
    this->reversePath_var = (other.reversePath_arraysize==0) ? NULL : new OverlayKey[other.reversePath_arraysize];
    reversePath_arraysize = other.reversePath_arraysize;
    for (unsigned int i=0; i<reversePath_arraysize; i++)
        this->reversePath_var[i] = other.reversePath_var[i];
    delete [] this->foundNode_var;
    this->foundNode_var = (other.foundNode_arraysize==0) ? NULL : new OverlayKey[other.foundNode_arraysize];
    foundNode_arraysize = other.foundNode_arraysize;
    for (unsigned int i=0; i<foundNode_arraysize; i++)
        this->foundNode_var[i] = other.foundNode_var[i];
}

void SearchMessage::parsimPack(cCommBuffer *b)
{
    GiaIDMessage::parsimPack(b);
    doPacking(b,this->searchKey_var);
    doPacking(b,this->maxResponses_var);
    b->pack(reversePath_arraysize);
    doPacking(b,this->reversePath_var,reversePath_arraysize);
    b->pack(foundNode_arraysize);
    doPacking(b,this->foundNode_var,foundNode_arraysize);
}

void SearchMessage::parsimUnpack(cCommBuffer *b)
{
    GiaIDMessage::parsimUnpack(b);
    doUnpacking(b,this->searchKey_var);
    doUnpacking(b,this->maxResponses_var);
    delete [] this->reversePath_var;
    b->unpack(reversePath_arraysize);
    if (reversePath_arraysize==0) {
        this->reversePath_var = 0;
    } else {
        this->reversePath_var = new OverlayKey[reversePath_arraysize];
        doUnpacking(b,this->reversePath_var,reversePath_arraysize);
    }
    delete [] this->foundNode_var;
    b->unpack(foundNode_arraysize);
    if (foundNode_arraysize==0) {
        this->foundNode_var = 0;
    } else {
        this->foundNode_var = new OverlayKey[foundNode_arraysize];
        doUnpacking(b,this->foundNode_var,foundNode_arraysize);
    }
}

OverlayKey& SearchMessage::getSearchKey()
{
    return searchKey_var;
}

void SearchMessage::setSearchKey(const OverlayKey& searchKey)
{
    this->searchKey_var = searchKey;
}

int SearchMessage::getMaxResponses() const
{
    return maxResponses_var;
}

void SearchMessage::setMaxResponses(int maxResponses)
{
    this->maxResponses_var = maxResponses;
}

void SearchMessage::setReversePathArraySize(unsigned int size)
{
    OverlayKey *reversePath_var2 = (size==0) ? NULL : new OverlayKey[size];
    unsigned int sz = reversePath_arraysize < size ? reversePath_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        reversePath_var2[i] = this->reversePath_var[i];
    reversePath_arraysize = size;
    delete [] this->reversePath_var;
    this->reversePath_var = reversePath_var2;
}

unsigned int SearchMessage::getReversePathArraySize() const
{
    return reversePath_arraysize;
}

OverlayKey& SearchMessage::getReversePath(unsigned int k)
{
    if (k>=reversePath_arraysize) throw cRuntimeError("Array of size %d indexed by %d", reversePath_arraysize, k);
    return reversePath_var[k];
}

void SearchMessage::setReversePath(unsigned int k, const OverlayKey& reversePath)
{
    if (k>=reversePath_arraysize) throw cRuntimeError("Array of size %d indexed by %d", reversePath_arraysize, k);
    this->reversePath_var[k] = reversePath;
}

void SearchMessage::setFoundNodeArraySize(unsigned int size)
{
    OverlayKey *foundNode_var2 = (size==0) ? NULL : new OverlayKey[size];
    unsigned int sz = foundNode_arraysize < size ? foundNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        foundNode_var2[i] = this->foundNode_var[i];
    foundNode_arraysize = size;
    delete [] this->foundNode_var;
    this->foundNode_var = foundNode_var2;
}

unsigned int SearchMessage::getFoundNodeArraySize() const
{
    return foundNode_arraysize;
}

OverlayKey& SearchMessage::getFoundNode(unsigned int k)
{
    if (k>=foundNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", foundNode_arraysize, k);
    return foundNode_var[k];
}

void SearchMessage::setFoundNode(unsigned int k, const OverlayKey& foundNode)
{
    if (k>=foundNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", foundNode_arraysize, k);
    this->foundNode_var[k] = foundNode;
}

class SearchMessageDescriptor : public cClassDescriptor
{
  public:
    SearchMessageDescriptor();
    virtual ~SearchMessageDescriptor();

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

Register_ClassDescriptor(SearchMessageDescriptor);

SearchMessageDescriptor::SearchMessageDescriptor() : cClassDescriptor("SearchMessage", "GiaIDMessage")
{
}

SearchMessageDescriptor::~SearchMessageDescriptor()
{
}

bool SearchMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SearchMessage *>(obj)!=NULL;
}

const char *SearchMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SearchMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SearchMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SearchMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "searchKey",
        "maxResponses",
        "reversePath",
        "foundNode",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SearchMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "searchKey")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxResponses")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "reversePath")==0) return base+2;
    if (fieldName[0]=='f' && strcmp(fieldName, "foundNode")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SearchMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "int",
        "OverlayKey",
        "OverlayKey",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SearchMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SearchMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SearchMessage *pp = (SearchMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getReversePathArraySize();
        case 3: return pp->getFoundNodeArraySize();
        default: return 0;
    }
}

std::string SearchMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SearchMessage *pp = (SearchMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSearchKey(); return out.str();}
        case 1: return long2string(pp->getMaxResponses());
        case 2: {std::stringstream out; out << pp->getReversePath(i); return out.str();}
        case 3: {std::stringstream out; out << pp->getFoundNode(i); return out.str();}
        default: return "";
    }
}

bool SearchMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SearchMessage *pp = (SearchMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setMaxResponses(string2long(value)); return true;
        default: return false;
    }
}

const char *SearchMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "OverlayKey",
        "OverlayKey",
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *SearchMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SearchMessage *pp = (SearchMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSearchKey()); break;
        case 2: return (void *)(&pp->getReversePath(i)); break;
        case 3: return (void *)(&pp->getFoundNode(i)); break;
        default: return NULL;
    }
}

Register_Class(SearchResponseMessage);

SearchResponseMessage::SearchResponseMessage(const char *name, int kind) : GiaIDMessage(name,kind)
{
    reversePath_arraysize = 0;
    this->reversePath_var = 0;
    this->searchHopCount_var = 0;
}

SearchResponseMessage::SearchResponseMessage(const SearchResponseMessage& other) : GiaIDMessage(other)
{
    reversePath_arraysize = 0;
    this->reversePath_var = 0;
    copy(other);
}

SearchResponseMessage::~SearchResponseMessage()
{
    delete [] reversePath_var;
}

SearchResponseMessage& SearchResponseMessage::operator=(const SearchResponseMessage& other)
{
    if (this==&other) return *this;
    GiaIDMessage::operator=(other);
    copy(other);
    return *this;
}

void SearchResponseMessage::copy(const SearchResponseMessage& other)
{
    this->searchKey_var = other.searchKey_var;
    delete [] this->reversePath_var;
    this->reversePath_var = (other.reversePath_arraysize==0) ? NULL : new OverlayKey[other.reversePath_arraysize];
    reversePath_arraysize = other.reversePath_arraysize;
    for (unsigned int i=0; i<reversePath_arraysize; i++)
        this->reversePath_var[i] = other.reversePath_var[i];
    this->foundNode_var = other.foundNode_var;
    this->searchHopCount_var = other.searchHopCount_var;
}

void SearchResponseMessage::parsimPack(cCommBuffer *b)
{
    GiaIDMessage::parsimPack(b);
    doPacking(b,this->searchKey_var);
    b->pack(reversePath_arraysize);
    doPacking(b,this->reversePath_var,reversePath_arraysize);
    doPacking(b,this->foundNode_var);
    doPacking(b,this->searchHopCount_var);
}

void SearchResponseMessage::parsimUnpack(cCommBuffer *b)
{
    GiaIDMessage::parsimUnpack(b);
    doUnpacking(b,this->searchKey_var);
    delete [] this->reversePath_var;
    b->unpack(reversePath_arraysize);
    if (reversePath_arraysize==0) {
        this->reversePath_var = 0;
    } else {
        this->reversePath_var = new OverlayKey[reversePath_arraysize];
        doUnpacking(b,this->reversePath_var,reversePath_arraysize);
    }
    doUnpacking(b,this->foundNode_var);
    doUnpacking(b,this->searchHopCount_var);
}

OverlayKey& SearchResponseMessage::getSearchKey()
{
    return searchKey_var;
}

void SearchResponseMessage::setSearchKey(const OverlayKey& searchKey)
{
    this->searchKey_var = searchKey;
}

void SearchResponseMessage::setReversePathArraySize(unsigned int size)
{
    OverlayKey *reversePath_var2 = (size==0) ? NULL : new OverlayKey[size];
    unsigned int sz = reversePath_arraysize < size ? reversePath_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        reversePath_var2[i] = this->reversePath_var[i];
    reversePath_arraysize = size;
    delete [] this->reversePath_var;
    this->reversePath_var = reversePath_var2;
}

unsigned int SearchResponseMessage::getReversePathArraySize() const
{
    return reversePath_arraysize;
}

OverlayKey& SearchResponseMessage::getReversePath(unsigned int k)
{
    if (k>=reversePath_arraysize) throw cRuntimeError("Array of size %d indexed by %d", reversePath_arraysize, k);
    return reversePath_var[k];
}

void SearchResponseMessage::setReversePath(unsigned int k, const OverlayKey& reversePath)
{
    if (k>=reversePath_arraysize) throw cRuntimeError("Array of size %d indexed by %d", reversePath_arraysize, k);
    this->reversePath_var[k] = reversePath;
}

GiaNode& SearchResponseMessage::getFoundNode()
{
    return foundNode_var;
}

void SearchResponseMessage::setFoundNode(const GiaNode& foundNode)
{
    this->foundNode_var = foundNode;
}

int SearchResponseMessage::getSearchHopCount() const
{
    return searchHopCount_var;
}

void SearchResponseMessage::setSearchHopCount(int searchHopCount)
{
    this->searchHopCount_var = searchHopCount;
}

class SearchResponseMessageDescriptor : public cClassDescriptor
{
  public:
    SearchResponseMessageDescriptor();
    virtual ~SearchResponseMessageDescriptor();

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

Register_ClassDescriptor(SearchResponseMessageDescriptor);

SearchResponseMessageDescriptor::SearchResponseMessageDescriptor() : cClassDescriptor("SearchResponseMessage", "GiaIDMessage")
{
}

SearchResponseMessageDescriptor::~SearchResponseMessageDescriptor()
{
}

bool SearchResponseMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SearchResponseMessage *>(obj)!=NULL;
}

const char *SearchResponseMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SearchResponseMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SearchResponseMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SearchResponseMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "searchKey",
        "reversePath",
        "foundNode",
        "searchHopCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SearchResponseMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "searchKey")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reversePath")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "foundNode")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "searchHopCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SearchResponseMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "OverlayKey",
        "GiaNode",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SearchResponseMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SearchResponseMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SearchResponseMessage *pp = (SearchResponseMessage *)object; (void)pp;
    switch (field) {
        case 1: return pp->getReversePathArraySize();
        default: return 0;
    }
}

std::string SearchResponseMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SearchResponseMessage *pp = (SearchResponseMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSearchKey(); return out.str();}
        case 1: {std::stringstream out; out << pp->getReversePath(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getFoundNode(); return out.str();}
        case 3: return long2string(pp->getSearchHopCount());
        default: return "";
    }
}

bool SearchResponseMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SearchResponseMessage *pp = (SearchResponseMessage *)object; (void)pp;
    switch (field) {
        case 3: pp->setSearchHopCount(string2long(value)); return true;
        default: return false;
    }
}

const char *SearchResponseMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        "OverlayKey",
        "GiaNode",
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *SearchResponseMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SearchResponseMessage *pp = (SearchResponseMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSearchKey()); break;
        case 1: return (void *)(&pp->getReversePath(i)); break;
        case 2: return (void *)(&pp->getFoundNode()); break;
        default: return NULL;
    }
}


