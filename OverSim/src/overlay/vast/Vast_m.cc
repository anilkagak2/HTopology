//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/vast/Vast.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Vast_m.h"

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
    cEnum *e = cEnum::find("VASTCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("VASTCommand"));
    e->insert(JOIN_REQUEST, "JOIN_REQUEST");
    e->insert(JOIN_ACKNOWLEDGE, "JOIN_ACKNOWLEDGE");
    e->insert(NODE_MOVE, "NODE_MOVE");
    e->insert(NEW_NEIGHBORS, "NEW_NEIGHBORS");
    e->insert(NODE_LEAVE, "NODE_LEAVE");
    e->insert(ENCLOSING_NEIGHBORS_REQUEST, "ENCLOSING_NEIGHBORS_REQUEST");
    e->insert(BACKUP_NEIGHBORS, "BACKUP_NEIGHBORS");
    e->insert(PING, "PING");
    e->insert(PONG, "PONG");
    e->insert(DISCARD_NODE, "DISCARD_NODE");
    e->insert(VAST_EVENT, "VAST_EVENT");
);

Register_Class(VastMessage);

VastMessage::VastMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
    this->neighborCount_var = 0;
}

VastMessage::VastMessage(const VastMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

VastMessage::~VastMessage()
{
}

VastMessage& VastMessage::operator=(const VastMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void VastMessage::copy(const VastMessage& other)
{
    this->command_var = other.command_var;
    this->sourceNode_var = other.sourceNode_var;
    this->destKey_var = other.destKey_var;
    this->pos_var = other.pos_var;
    this->neighborCount_var = other.neighborCount_var;
}

void VastMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->sourceNode_var);
    doPacking(b,this->destKey_var);
    doPacking(b,this->pos_var);
    doPacking(b,this->neighborCount_var);
}

void VastMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->sourceNode_var);
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->pos_var);
    doUnpacking(b,this->neighborCount_var);
}

int VastMessage::getCommand() const
{
    return command_var;
}

void VastMessage::setCommand(int command)
{
    this->command_var = command;
}

NodeHandle& VastMessage::getSourceNode()
{
    return sourceNode_var;
}

void VastMessage::setSourceNode(const NodeHandle& sourceNode)
{
    this->sourceNode_var = sourceNode;
}

OverlayKey& VastMessage::getDestKey()
{
    return destKey_var;
}

void VastMessage::setDestKey(const OverlayKey& destKey)
{
    this->destKey_var = destKey;
}

Vector2D& VastMessage::getPos()
{
    return pos_var;
}

void VastMessage::setPos(const Vector2D& pos)
{
    this->pos_var = pos;
}

int VastMessage::getNeighborCount() const
{
    return neighborCount_var;
}

void VastMessage::setNeighborCount(int neighborCount)
{
    this->neighborCount_var = neighborCount;
}

class VastMessageDescriptor : public cClassDescriptor
{
  public:
    VastMessageDescriptor();
    virtual ~VastMessageDescriptor();

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

Register_ClassDescriptor(VastMessageDescriptor);

VastMessageDescriptor::VastMessageDescriptor() : cClassDescriptor("VastMessage", "BaseOverlayMessage")
{
}

VastMessageDescriptor::~VastMessageDescriptor()
{
}

bool VastMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VastMessage *>(obj)!=NULL;
}

const char *VastMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VastMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int VastMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *VastMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
        "sourceNode",
        "destKey",
        "pos",
        "neighborCount",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int VastMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceNode")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "destKey")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "pos")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborCount")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VastMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "Vector2D",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *VastMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "VASTCommand";
            return NULL;
        default: return NULL;
    }
}

int VastMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VastMessage *pp = (VastMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VastMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VastMessage *pp = (VastMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        case 1: {std::stringstream out; out << pp->getSourceNode(); return out.str();}
        case 2: {std::stringstream out; out << pp->getDestKey(); return out.str();}
        case 3: {std::stringstream out; out << pp->getPos(); return out.str();}
        case 4: return long2string(pp->getNeighborCount());
        default: return "";
    }
}

bool VastMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VastMessage *pp = (VastMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 4: pp->setNeighborCount(string2long(value)); return true;
        default: return false;
    }
}

const char *VastMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "Vector2D",
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *VastMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VastMessage *pp = (VastMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSourceNode()); break;
        case 2: return (void *)(&pp->getDestKey()); break;
        case 3: return (void *)(&pp->getPos()); break;
        default: return NULL;
    }
}

Register_Class(VastListMessage);

VastListMessage::VastListMessage(const char *name, int kind) : VastMessage(name,kind)
{
    neighborNode_arraysize = 0;
    this->neighborNode_var = 0;
    neighborPos_arraysize = 0;
    this->neighborPos_var = 0;
    this->requestEnclosingNeighbors_var = false;
}

VastListMessage::VastListMessage(const VastListMessage& other) : VastMessage(other)
{
    neighborNode_arraysize = 0;
    this->neighborNode_var = 0;
    neighborPos_arraysize = 0;
    this->neighborPos_var = 0;
    copy(other);
}

VastListMessage::~VastListMessage()
{
    delete [] neighborNode_var;
    delete [] neighborPos_var;
}

VastListMessage& VastListMessage::operator=(const VastListMessage& other)
{
    if (this==&other) return *this;
    VastMessage::operator=(other);
    copy(other);
    return *this;
}

void VastListMessage::copy(const VastListMessage& other)
{
    delete [] this->neighborNode_var;
    this->neighborNode_var = (other.neighborNode_arraysize==0) ? NULL : new NodeHandle[other.neighborNode_arraysize];
    neighborNode_arraysize = other.neighborNode_arraysize;
    for (unsigned int i=0; i<neighborNode_arraysize; i++)
        this->neighborNode_var[i] = other.neighborNode_var[i];
    delete [] this->neighborPos_var;
    this->neighborPos_var = (other.neighborPos_arraysize==0) ? NULL : new Vector2D[other.neighborPos_arraysize];
    neighborPos_arraysize = other.neighborPos_arraysize;
    for (unsigned int i=0; i<neighborPos_arraysize; i++)
        this->neighborPos_var[i] = other.neighborPos_var[i];
    this->requestEnclosingNeighbors_var = other.requestEnclosingNeighbors_var;
}

void VastListMessage::parsimPack(cCommBuffer *b)
{
    VastMessage::parsimPack(b);
    b->pack(neighborNode_arraysize);
    doPacking(b,this->neighborNode_var,neighborNode_arraysize);
    b->pack(neighborPos_arraysize);
    doPacking(b,this->neighborPos_var,neighborPos_arraysize);
    doPacking(b,this->requestEnclosingNeighbors_var);
}

void VastListMessage::parsimUnpack(cCommBuffer *b)
{
    VastMessage::parsimUnpack(b);
    delete [] this->neighborNode_var;
    b->unpack(neighborNode_arraysize);
    if (neighborNode_arraysize==0) {
        this->neighborNode_var = 0;
    } else {
        this->neighborNode_var = new NodeHandle[neighborNode_arraysize];
        doUnpacking(b,this->neighborNode_var,neighborNode_arraysize);
    }
    delete [] this->neighborPos_var;
    b->unpack(neighborPos_arraysize);
    if (neighborPos_arraysize==0) {
        this->neighborPos_var = 0;
    } else {
        this->neighborPos_var = new Vector2D[neighborPos_arraysize];
        doUnpacking(b,this->neighborPos_var,neighborPos_arraysize);
    }
    doUnpacking(b,this->requestEnclosingNeighbors_var);
}

void VastListMessage::setNeighborNodeArraySize(unsigned int size)
{
    NodeHandle *neighborNode_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = neighborNode_arraysize < size ? neighborNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborNode_var2[i] = this->neighborNode_var[i];
    neighborNode_arraysize = size;
    delete [] this->neighborNode_var;
    this->neighborNode_var = neighborNode_var2;
}

unsigned int VastListMessage::getNeighborNodeArraySize() const
{
    return neighborNode_arraysize;
}

NodeHandle& VastListMessage::getNeighborNode(unsigned int k)
{
    if (k>=neighborNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborNode_arraysize, k);
    return neighborNode_var[k];
}

void VastListMessage::setNeighborNode(unsigned int k, const NodeHandle& neighborNode)
{
    if (k>=neighborNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborNode_arraysize, k);
    this->neighborNode_var[k] = neighborNode;
}

void VastListMessage::setNeighborPosArraySize(unsigned int size)
{
    Vector2D *neighborPos_var2 = (size==0) ? NULL : new Vector2D[size];
    unsigned int sz = neighborPos_arraysize < size ? neighborPos_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborPos_var2[i] = this->neighborPos_var[i];
    neighborPos_arraysize = size;
    delete [] this->neighborPos_var;
    this->neighborPos_var = neighborPos_var2;
}

unsigned int VastListMessage::getNeighborPosArraySize() const
{
    return neighborPos_arraysize;
}

Vector2D& VastListMessage::getNeighborPos(unsigned int k)
{
    if (k>=neighborPos_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPos_arraysize, k);
    return neighborPos_var[k];
}

void VastListMessage::setNeighborPos(unsigned int k, const Vector2D& neighborPos)
{
    if (k>=neighborPos_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPos_arraysize, k);
    this->neighborPos_var[k] = neighborPos;
}

bool VastListMessage::getRequestEnclosingNeighbors() const
{
    return requestEnclosingNeighbors_var;
}

void VastListMessage::setRequestEnclosingNeighbors(bool requestEnclosingNeighbors)
{
    this->requestEnclosingNeighbors_var = requestEnclosingNeighbors;
}

class VastListMessageDescriptor : public cClassDescriptor
{
  public:
    VastListMessageDescriptor();
    virtual ~VastListMessageDescriptor();

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

Register_ClassDescriptor(VastListMessageDescriptor);

VastListMessageDescriptor::VastListMessageDescriptor() : cClassDescriptor("VastListMessage", "VastMessage")
{
}

VastListMessageDescriptor::~VastListMessageDescriptor()
{
}

bool VastListMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VastListMessage *>(obj)!=NULL;
}

const char *VastListMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VastListMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int VastListMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *VastListMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "neighborNode",
        "neighborPos",
        "requestEnclosingNeighbors",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int VastListMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborNode")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborPos")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestEnclosingNeighbors")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VastListMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *VastListMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VastListMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VastListMessage *pp = (VastListMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNeighborNodeArraySize();
        case 1: return pp->getNeighborPosArraySize();
        default: return 0;
    }
}

std::string VastListMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VastListMessage *pp = (VastListMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNeighborNode(i); return out.str();}
        case 1: {std::stringstream out; out << pp->getNeighborPos(i); return out.str();}
        case 2: return bool2string(pp->getRequestEnclosingNeighbors());
        default: return "";
    }
}

bool VastListMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VastListMessage *pp = (VastListMessage *)object; (void)pp;
    switch (field) {
        case 2: pp->setRequestEnclosingNeighbors(string2bool(value)); return true;
        default: return false;
    }
}

const char *VastListMessageDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *VastListMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VastListMessage *pp = (VastListMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNeighborNode(i)); break;
        case 1: return (void *)(&pp->getNeighborPos(i)); break;
        default: return NULL;
    }
}

Register_Class(VastMoveMessage);

VastMoveMessage::VastMoveMessage(const char *name, int kind) : VastMessage(name,kind)
{
    this->is_boundary_var = false;
    this->request_list_var = false;
}

VastMoveMessage::VastMoveMessage(const VastMoveMessage& other) : VastMessage(other)
{
    copy(other);
}

VastMoveMessage::~VastMoveMessage()
{
}

VastMoveMessage& VastMoveMessage::operator=(const VastMoveMessage& other)
{
    if (this==&other) return *this;
    VastMessage::operator=(other);
    copy(other);
    return *this;
}

void VastMoveMessage::copy(const VastMoveMessage& other)
{
    this->newPos_var = other.newPos_var;
    this->is_boundary_var = other.is_boundary_var;
    this->request_list_var = other.request_list_var;
}

void VastMoveMessage::parsimPack(cCommBuffer *b)
{
    VastMessage::parsimPack(b);
    doPacking(b,this->newPos_var);
    doPacking(b,this->is_boundary_var);
    doPacking(b,this->request_list_var);
}

void VastMoveMessage::parsimUnpack(cCommBuffer *b)
{
    VastMessage::parsimUnpack(b);
    doUnpacking(b,this->newPos_var);
    doUnpacking(b,this->is_boundary_var);
    doUnpacking(b,this->request_list_var);
}

Vector2D& VastMoveMessage::getNewPos()
{
    return newPos_var;
}

void VastMoveMessage::setNewPos(const Vector2D& newPos)
{
    this->newPos_var = newPos;
}

bool VastMoveMessage::getIs_boundary() const
{
    return is_boundary_var;
}

void VastMoveMessage::setIs_boundary(bool is_boundary)
{
    this->is_boundary_var = is_boundary;
}

bool VastMoveMessage::getRequest_list() const
{
    return request_list_var;
}

void VastMoveMessage::setRequest_list(bool request_list)
{
    this->request_list_var = request_list;
}

class VastMoveMessageDescriptor : public cClassDescriptor
{
  public:
    VastMoveMessageDescriptor();
    virtual ~VastMoveMessageDescriptor();

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

Register_ClassDescriptor(VastMoveMessageDescriptor);

VastMoveMessageDescriptor::VastMoveMessageDescriptor() : cClassDescriptor("VastMoveMessage", "VastMessage")
{
}

VastMoveMessageDescriptor::~VastMoveMessageDescriptor()
{
}

bool VastMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VastMoveMessage *>(obj)!=NULL;
}

const char *VastMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VastMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int VastMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *VastMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "newPos",
        "is_boundary",
        "request_list",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int VastMoveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "newPos")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "is_boundary")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "request_list")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VastMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Vector2D",
        "bool",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *VastMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VastMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VastMoveMessage *pp = (VastMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VastMoveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VastMoveMessage *pp = (VastMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNewPos(); return out.str();}
        case 1: return bool2string(pp->getIs_boundary());
        case 2: return bool2string(pp->getRequest_list());
        default: return "";
    }
}

bool VastMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VastMoveMessage *pp = (VastMoveMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setIs_boundary(string2bool(value)); return true;
        case 2: pp->setRequest_list(string2bool(value)); return true;
        default: return false;
    }
}

const char *VastMoveMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *VastMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VastMoveMessage *pp = (VastMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNewPos()); break;
        default: return NULL;
    }
}

Register_Class(VastDiscardMessage);

VastDiscardMessage::VastDiscardMessage(const char *name, int kind) : VastMessage(name,kind)
{
}

VastDiscardMessage::VastDiscardMessage(const VastDiscardMessage& other) : VastMessage(other)
{
    copy(other);
}

VastDiscardMessage::~VastDiscardMessage()
{
}

VastDiscardMessage& VastDiscardMessage::operator=(const VastDiscardMessage& other)
{
    if (this==&other) return *this;
    VastMessage::operator=(other);
    copy(other);
    return *this;
}

void VastDiscardMessage::copy(const VastDiscardMessage& other)
{
    this->discardNode_var = other.discardNode_var;
}

void VastDiscardMessage::parsimPack(cCommBuffer *b)
{
    VastMessage::parsimPack(b);
    doPacking(b,this->discardNode_var);
}

void VastDiscardMessage::parsimUnpack(cCommBuffer *b)
{
    VastMessage::parsimUnpack(b);
    doUnpacking(b,this->discardNode_var);
}

NodeHandle& VastDiscardMessage::getDiscardNode()
{
    return discardNode_var;
}

void VastDiscardMessage::setDiscardNode(const NodeHandle& discardNode)
{
    this->discardNode_var = discardNode;
}

class VastDiscardMessageDescriptor : public cClassDescriptor
{
  public:
    VastDiscardMessageDescriptor();
    virtual ~VastDiscardMessageDescriptor();

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

Register_ClassDescriptor(VastDiscardMessageDescriptor);

VastDiscardMessageDescriptor::VastDiscardMessageDescriptor() : cClassDescriptor("VastDiscardMessage", "VastMessage")
{
}

VastDiscardMessageDescriptor::~VastDiscardMessageDescriptor()
{
}

bool VastDiscardMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VastDiscardMessage *>(obj)!=NULL;
}

const char *VastDiscardMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VastDiscardMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int VastDiscardMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *VastDiscardMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "discardNode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int VastDiscardMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "discardNode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VastDiscardMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *VastDiscardMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VastDiscardMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VastDiscardMessage *pp = (VastDiscardMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VastDiscardMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VastDiscardMessage *pp = (VastDiscardMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDiscardNode(); return out.str();}
        default: return "";
    }
}

bool VastDiscardMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VastDiscardMessage *pp = (VastDiscardMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *VastDiscardMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *VastDiscardMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VastDiscardMessage *pp = (VastDiscardMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDiscardNode()); break;
        default: return NULL;
    }
}

Register_Class(VastEventMessage);

VastEventMessage::VastEventMessage(const char *name, int kind) : VastMessage(name,kind)
{
}

VastEventMessage::VastEventMessage(const VastEventMessage& other) : VastMessage(other)
{
    copy(other);
}

VastEventMessage::~VastEventMessage()
{
}

VastEventMessage& VastEventMessage::operator=(const VastEventMessage& other)
{
    if (this==&other) return *this;
    VastMessage::operator=(other);
    copy(other);
    return *this;
}

void VastEventMessage::copy(const VastEventMessage& other)
{
}

void VastEventMessage::parsimPack(cCommBuffer *b)
{
    VastMessage::parsimPack(b);
}

void VastEventMessage::parsimUnpack(cCommBuffer *b)
{
    VastMessage::parsimUnpack(b);
}

class VastEventMessageDescriptor : public cClassDescriptor
{
  public:
    VastEventMessageDescriptor();
    virtual ~VastEventMessageDescriptor();

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

Register_ClassDescriptor(VastEventMessageDescriptor);

VastEventMessageDescriptor::VastEventMessageDescriptor() : cClassDescriptor("VastEventMessage", "VastMessage")
{
}

VastEventMessageDescriptor::~VastEventMessageDescriptor()
{
}

bool VastEventMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VastEventMessage *>(obj)!=NULL;
}

const char *VastEventMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VastEventMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int VastEventMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *VastEventMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int VastEventMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VastEventMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *VastEventMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VastEventMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VastEventMessage *pp = (VastEventMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VastEventMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VastEventMessage *pp = (VastEventMessage *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool VastEventMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VastEventMessage *pp = (VastEventMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *VastEventMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *VastEventMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VastEventMessage *pp = (VastEventMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


