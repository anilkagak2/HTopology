//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/pastry/PastryMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PastryMessage_m.h"

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
    cEnum *e = cEnum::find("PastryStateMsgType");
    if (!e) enums.getInstance()->add(e = new cEnum("PastryStateMsgType"));
    e->insert(PASTRY_STATE_STD, "PASTRY_STATE_STD");
    e->insert(PASTRY_STATE_JOIN, "PASTRY_STATE_JOIN");
    e->insert(PASTRY_STATE_MINJOIN, "PASTRY_STATE_MINJOIN");
    e->insert(PASTRY_STATE_UPDATE, "PASTRY_STATE_UPDATE");
    e->insert(PASTRY_STATE_REPAIR, "PASTRY_STATE_REPAIR");
    e->insert(PASTRY_STATE_JOINUPDATE, "PASTRY_STATE_JOINUPDATE");
    e->insert(PASTRY_STATE_LEAFSET, "PASTRY_STATE_LEAFSET");
    e->insert(PASTRY_STATE_ROUTINGROW, "PASTRY_STATE_ROUTINGROW");
);

Register_Class(PastryStateMessage);

PastryStateMessage::PastryStateMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->pastryStateMsgType_var = PASTRY_STATE_STD;
    this->sender_var = NodeHandle::UNSPECIFIED_NODE;
    routingTable_arraysize = 0;
    this->routingTable_var = 0;
    leafSet_arraysize = 0;
    this->leafSet_var = 0;
    neighborhoodSet_arraysize = 0;
    this->neighborhoodSet_var = 0;
    this->row_var = 0;
    this->lastHop_var = false;
    this->timestamp_var = 0;
}

PastryStateMessage::PastryStateMessage(const PastryStateMessage& other) : BaseOverlayMessage(other)
{
    routingTable_arraysize = 0;
    this->routingTable_var = 0;
    leafSet_arraysize = 0;
    this->leafSet_var = 0;
    neighborhoodSet_arraysize = 0;
    this->neighborhoodSet_var = 0;
    copy(other);
}

PastryStateMessage::~PastryStateMessage()
{
    delete [] routingTable_var;
    delete [] leafSet_var;
    delete [] neighborhoodSet_var;
}

PastryStateMessage& PastryStateMessage::operator=(const PastryStateMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void PastryStateMessage::copy(const PastryStateMessage& other)
{
    this->pastryStateMsgType_var = other.pastryStateMsgType_var;
    this->sender_var = other.sender_var;
    delete [] this->routingTable_var;
    this->routingTable_var = (other.routingTable_arraysize==0) ? NULL : new NodeHandle[other.routingTable_arraysize];
    routingTable_arraysize = other.routingTable_arraysize;
    for (unsigned int i=0; i<routingTable_arraysize; i++)
        this->routingTable_var[i] = other.routingTable_var[i];
    delete [] this->leafSet_var;
    this->leafSet_var = (other.leafSet_arraysize==0) ? NULL : new NodeHandle[other.leafSet_arraysize];
    leafSet_arraysize = other.leafSet_arraysize;
    for (unsigned int i=0; i<leafSet_arraysize; i++)
        this->leafSet_var[i] = other.leafSet_var[i];
    delete [] this->neighborhoodSet_var;
    this->neighborhoodSet_var = (other.neighborhoodSet_arraysize==0) ? NULL : new NodeHandle[other.neighborhoodSet_arraysize];
    neighborhoodSet_arraysize = other.neighborhoodSet_arraysize;
    for (unsigned int i=0; i<neighborhoodSet_arraysize; i++)
        this->neighborhoodSet_var[i] = other.neighborhoodSet_var[i];
    this->row_var = other.row_var;
    this->lastHop_var = other.lastHop_var;
    this->timestamp_var = other.timestamp_var;
}

void PastryStateMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->pastryStateMsgType_var);
    doPacking(b,this->sender_var);
    b->pack(routingTable_arraysize);
    doPacking(b,this->routingTable_var,routingTable_arraysize);
    b->pack(leafSet_arraysize);
    doPacking(b,this->leafSet_var,leafSet_arraysize);
    b->pack(neighborhoodSet_arraysize);
    doPacking(b,this->neighborhoodSet_var,neighborhoodSet_arraysize);
    doPacking(b,this->row_var);
    doPacking(b,this->lastHop_var);
    doPacking(b,this->timestamp_var);
}

void PastryStateMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->pastryStateMsgType_var);
    doUnpacking(b,this->sender_var);
    delete [] this->routingTable_var;
    b->unpack(routingTable_arraysize);
    if (routingTable_arraysize==0) {
        this->routingTable_var = 0;
    } else {
        this->routingTable_var = new NodeHandle[routingTable_arraysize];
        doUnpacking(b,this->routingTable_var,routingTable_arraysize);
    }
    delete [] this->leafSet_var;
    b->unpack(leafSet_arraysize);
    if (leafSet_arraysize==0) {
        this->leafSet_var = 0;
    } else {
        this->leafSet_var = new NodeHandle[leafSet_arraysize];
        doUnpacking(b,this->leafSet_var,leafSet_arraysize);
    }
    delete [] this->neighborhoodSet_var;
    b->unpack(neighborhoodSet_arraysize);
    if (neighborhoodSet_arraysize==0) {
        this->neighborhoodSet_var = 0;
    } else {
        this->neighborhoodSet_var = new NodeHandle[neighborhoodSet_arraysize];
        doUnpacking(b,this->neighborhoodSet_var,neighborhoodSet_arraysize);
    }
    doUnpacking(b,this->row_var);
    doUnpacking(b,this->lastHop_var);
    doUnpacking(b,this->timestamp_var);
}

int PastryStateMessage::getPastryStateMsgType() const
{
    return pastryStateMsgType_var;
}

void PastryStateMessage::setPastryStateMsgType(int pastryStateMsgType)
{
    this->pastryStateMsgType_var = pastryStateMsgType;
}

NodeHandle& PastryStateMessage::getSender()
{
    return sender_var;
}

void PastryStateMessage::setSender(const NodeHandle& sender)
{
    this->sender_var = sender;
}

void PastryStateMessage::setRoutingTableArraySize(unsigned int size)
{
    NodeHandle *routingTable_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = routingTable_arraysize < size ? routingTable_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        routingTable_var2[i] = this->routingTable_var[i];
    routingTable_arraysize = size;
    delete [] this->routingTable_var;
    this->routingTable_var = routingTable_var2;
}

unsigned int PastryStateMessage::getRoutingTableArraySize() const
{
    return routingTable_arraysize;
}

NodeHandle& PastryStateMessage::getRoutingTable(unsigned int k)
{
    if (k>=routingTable_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routingTable_arraysize, k);
    return routingTable_var[k];
}

void PastryStateMessage::setRoutingTable(unsigned int k, const NodeHandle& routingTable)
{
    if (k>=routingTable_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routingTable_arraysize, k);
    this->routingTable_var[k] = routingTable;
}

void PastryStateMessage::setLeafSetArraySize(unsigned int size)
{
    NodeHandle *leafSet_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = leafSet_arraysize < size ? leafSet_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        leafSet_var2[i] = this->leafSet_var[i];
    leafSet_arraysize = size;
    delete [] this->leafSet_var;
    this->leafSet_var = leafSet_var2;
}

unsigned int PastryStateMessage::getLeafSetArraySize() const
{
    return leafSet_arraysize;
}

NodeHandle& PastryStateMessage::getLeafSet(unsigned int k)
{
    if (k>=leafSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafSet_arraysize, k);
    return leafSet_var[k];
}

void PastryStateMessage::setLeafSet(unsigned int k, const NodeHandle& leafSet)
{
    if (k>=leafSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafSet_arraysize, k);
    this->leafSet_var[k] = leafSet;
}

void PastryStateMessage::setNeighborhoodSetArraySize(unsigned int size)
{
    NodeHandle *neighborhoodSet_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = neighborhoodSet_arraysize < size ? neighborhoodSet_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborhoodSet_var2[i] = this->neighborhoodSet_var[i];
    neighborhoodSet_arraysize = size;
    delete [] this->neighborhoodSet_var;
    this->neighborhoodSet_var = neighborhoodSet_var2;
}

unsigned int PastryStateMessage::getNeighborhoodSetArraySize() const
{
    return neighborhoodSet_arraysize;
}

NodeHandle& PastryStateMessage::getNeighborhoodSet(unsigned int k)
{
    if (k>=neighborhoodSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborhoodSet_arraysize, k);
    return neighborhoodSet_var[k];
}

void PastryStateMessage::setNeighborhoodSet(unsigned int k, const NodeHandle& neighborhoodSet)
{
    if (k>=neighborhoodSet_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborhoodSet_arraysize, k);
    this->neighborhoodSet_var[k] = neighborhoodSet;
}

int PastryStateMessage::getRow() const
{
    return row_var;
}

void PastryStateMessage::setRow(int row)
{
    this->row_var = row;
}

bool PastryStateMessage::getLastHop() const
{
    return lastHop_var;
}

void PastryStateMessage::setLastHop(bool lastHop)
{
    this->lastHop_var = lastHop;
}

simtime_t PastryStateMessage::getTimestamp() const
{
    return timestamp_var;
}

void PastryStateMessage::setTimestamp(simtime_t timestamp)
{
    this->timestamp_var = timestamp;
}

class PastryStateMessageDescriptor : public cClassDescriptor
{
  public:
    PastryStateMessageDescriptor();
    virtual ~PastryStateMessageDescriptor();

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

Register_ClassDescriptor(PastryStateMessageDescriptor);

PastryStateMessageDescriptor::PastryStateMessageDescriptor() : cClassDescriptor("PastryStateMessage", "BaseOverlayMessage")
{
}

PastryStateMessageDescriptor::~PastryStateMessageDescriptor()
{
}

bool PastryStateMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryStateMessage *>(obj)!=NULL;
}

const char *PastryStateMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryStateMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int PastryStateMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *PastryStateMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "pastryStateMsgType",
        "sender",
        "routingTable",
        "leafSet",
        "neighborhoodSet",
        "row",
        "lastHop",
        "timestamp",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int PastryStateMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pastryStateMsgType")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "routingTable")==0) return base+2;
    if (fieldName[0]=='l' && strcmp(fieldName, "leafSet")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborhoodSet")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "row")==0) return base+5;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastHop")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryStateMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "NodeHandle",
        "int",
        "bool",
        "simtime_t",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *PastryStateMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "PastryStateMsgType";
            return NULL;
        default: return NULL;
    }
}

int PastryStateMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getRoutingTableArraySize();
        case 3: return pp->getLeafSetArraySize();
        case 4: return pp->getNeighborhoodSetArraySize();
        default: return 0;
    }
}

std::string PastryStateMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPastryStateMsgType());
        case 1: {std::stringstream out; out << pp->getSender(); return out.str();}
        case 2: {std::stringstream out; out << pp->getRoutingTable(i); return out.str();}
        case 3: {std::stringstream out; out << pp->getLeafSet(i); return out.str();}
        case 4: {std::stringstream out; out << pp->getNeighborhoodSet(i); return out.str();}
        case 5: return long2string(pp->getRow());
        case 6: return bool2string(pp->getLastHop());
        case 7: return double2string(pp->getTimestamp());
        default: return "";
    }
}

bool PastryStateMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setPastryStateMsgType(string2long(value)); return true;
        case 5: pp->setRow(string2long(value)); return true;
        case 6: pp->setLastHop(string2bool(value)); return true;
        case 7: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *PastryStateMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<8) ? fieldStructNames[field] : NULL;
}

void *PastryStateMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryStateMessage *pp = (PastryStateMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSender()); break;
        case 2: return (void *)(&pp->getRoutingTable(i)); break;
        case 3: return (void *)(&pp->getLeafSet(i)); break;
        case 4: return (void *)(&pp->getNeighborhoodSet(i)); break;
        default: return NULL;
    }
}

Register_Class(PastryFindNodeExtData);

PastryFindNodeExtData::PastryFindNodeExtData(const char *name, int kind) : cPacket(name,kind)
{
    this->sendStateTo_var = TransportAddress::UNSPECIFIED_NODE;
    this->joinHopCount_var = 0;
}

PastryFindNodeExtData::PastryFindNodeExtData(const PastryFindNodeExtData& other) : cPacket(other)
{
    copy(other);
}

PastryFindNodeExtData::~PastryFindNodeExtData()
{
}

PastryFindNodeExtData& PastryFindNodeExtData::operator=(const PastryFindNodeExtData& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void PastryFindNodeExtData::copy(const PastryFindNodeExtData& other)
{
    this->sendStateTo_var = other.sendStateTo_var;
    this->joinHopCount_var = other.joinHopCount_var;
}

void PastryFindNodeExtData::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->sendStateTo_var);
    doPacking(b,this->joinHopCount_var);
}

void PastryFindNodeExtData::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->sendStateTo_var);
    doUnpacking(b,this->joinHopCount_var);
}

TransportAddress& PastryFindNodeExtData::getSendStateTo()
{
    return sendStateTo_var;
}

void PastryFindNodeExtData::setSendStateTo(const TransportAddress& sendStateTo)
{
    this->sendStateTo_var = sendStateTo;
}

int PastryFindNodeExtData::getJoinHopCount() const
{
    return joinHopCount_var;
}

void PastryFindNodeExtData::setJoinHopCount(int joinHopCount)
{
    this->joinHopCount_var = joinHopCount;
}

class PastryFindNodeExtDataDescriptor : public cClassDescriptor
{
  public:
    PastryFindNodeExtDataDescriptor();
    virtual ~PastryFindNodeExtDataDescriptor();

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

Register_ClassDescriptor(PastryFindNodeExtDataDescriptor);

PastryFindNodeExtDataDescriptor::PastryFindNodeExtDataDescriptor() : cClassDescriptor("PastryFindNodeExtData", "cPacket")
{
}

PastryFindNodeExtDataDescriptor::~PastryFindNodeExtDataDescriptor()
{
}

bool PastryFindNodeExtDataDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryFindNodeExtData *>(obj)!=NULL;
}

const char *PastryFindNodeExtDataDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryFindNodeExtDataDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PastryFindNodeExtDataDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PastryFindNodeExtDataDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sendStateTo",
        "joinHopCount",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PastryFindNodeExtDataDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendStateTo")==0) return base+0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinHopCount")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryFindNodeExtDataDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PastryFindNodeExtDataDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PastryFindNodeExtDataDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryFindNodeExtDataDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSendStateTo(); return out.str();}
        case 1: return long2string(pp->getJoinHopCount());
        default: return "";
    }
}

bool PastryFindNodeExtDataDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        case 1: pp->setJoinHopCount(string2long(value)); return true;
        default: return false;
    }
}

const char *PastryFindNodeExtDataDescriptor::getFieldStructName(void *object, int field) const
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

void *PastryFindNodeExtDataDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryFindNodeExtData *pp = (PastryFindNodeExtData *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSendStateTo()); break;
        default: return NULL;
    }
}

Register_Class(PastryNewLeafsMessage);

PastryNewLeafsMessage::PastryNewLeafsMessage(const char *name, int kind) : cPacket(name,kind)
{
    leafs_arraysize = 0;
    this->leafs_var = 0;
}

PastryNewLeafsMessage::PastryNewLeafsMessage(const PastryNewLeafsMessage& other) : cPacket(other)
{
    leafs_arraysize = 0;
    this->leafs_var = 0;
    copy(other);
}

PastryNewLeafsMessage::~PastryNewLeafsMessage()
{
    delete [] leafs_var;
}

PastryNewLeafsMessage& PastryNewLeafsMessage::operator=(const PastryNewLeafsMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void PastryNewLeafsMessage::copy(const PastryNewLeafsMessage& other)
{
    delete [] this->leafs_var;
    this->leafs_var = (other.leafs_arraysize==0) ? NULL : new NodeHandle[other.leafs_arraysize];
    leafs_arraysize = other.leafs_arraysize;
    for (unsigned int i=0; i<leafs_arraysize; i++)
        this->leafs_var[i] = other.leafs_var[i];
}

void PastryNewLeafsMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    b->pack(leafs_arraysize);
    doPacking(b,this->leafs_var,leafs_arraysize);
}

void PastryNewLeafsMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    delete [] this->leafs_var;
    b->unpack(leafs_arraysize);
    if (leafs_arraysize==0) {
        this->leafs_var = 0;
    } else {
        this->leafs_var = new NodeHandle[leafs_arraysize];
        doUnpacking(b,this->leafs_var,leafs_arraysize);
    }
}

void PastryNewLeafsMessage::setLeafsArraySize(unsigned int size)
{
    NodeHandle *leafs_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = leafs_arraysize < size ? leafs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        leafs_var2[i] = this->leafs_var[i];
    leafs_arraysize = size;
    delete [] this->leafs_var;
    this->leafs_var = leafs_var2;
}

unsigned int PastryNewLeafsMessage::getLeafsArraySize() const
{
    return leafs_arraysize;
}

NodeHandle& PastryNewLeafsMessage::getLeafs(unsigned int k)
{
    if (k>=leafs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafs_arraysize, k);
    return leafs_var[k];
}

void PastryNewLeafsMessage::setLeafs(unsigned int k, const NodeHandle& leafs)
{
    if (k>=leafs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", leafs_arraysize, k);
    this->leafs_var[k] = leafs;
}

class PastryNewLeafsMessageDescriptor : public cClassDescriptor
{
  public:
    PastryNewLeafsMessageDescriptor();
    virtual ~PastryNewLeafsMessageDescriptor();

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

Register_ClassDescriptor(PastryNewLeafsMessageDescriptor);

PastryNewLeafsMessageDescriptor::PastryNewLeafsMessageDescriptor() : cClassDescriptor("PastryNewLeafsMessage", "cPacket")
{
}

PastryNewLeafsMessageDescriptor::~PastryNewLeafsMessageDescriptor()
{
}

bool PastryNewLeafsMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryNewLeafsMessage *>(obj)!=NULL;
}

const char *PastryNewLeafsMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryNewLeafsMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PastryNewLeafsMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PastryNewLeafsMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "leafs",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PastryNewLeafsMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "leafs")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryNewLeafsMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PastryNewLeafsMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PastryNewLeafsMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getLeafsArraySize();
        default: return 0;
    }
}

std::string PastryNewLeafsMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLeafs(i); return out.str();}
        default: return "";
    }
}

bool PastryNewLeafsMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastryNewLeafsMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *PastryNewLeafsMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryNewLeafsMessage *pp = (PastryNewLeafsMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLeafs(i)); break;
        default: return NULL;
    }
}

Register_Class(PastrySendState);

PastrySendState::PastrySendState(const char *name, int kind) : cMessage(name,kind)
{
    this->dest_var = TransportAddress::UNSPECIFIED_NODE;
}

PastrySendState::PastrySendState(const PastrySendState& other) : cMessage(other)
{
    copy(other);
}

PastrySendState::~PastrySendState()
{
}

PastrySendState& PastrySendState::operator=(const PastrySendState& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void PastrySendState::copy(const PastrySendState& other)
{
    this->dest_var = other.dest_var;
}

void PastrySendState::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->dest_var);
}

void PastrySendState::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->dest_var);
}

TransportAddress& PastrySendState::getDest()
{
    return dest_var;
}

void PastrySendState::setDest(const TransportAddress& dest)
{
    this->dest_var = dest;
}

class PastrySendStateDescriptor : public cClassDescriptor
{
  public:
    PastrySendStateDescriptor();
    virtual ~PastrySendStateDescriptor();

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

Register_ClassDescriptor(PastrySendStateDescriptor);

PastrySendStateDescriptor::PastrySendStateDescriptor() : cClassDescriptor("PastrySendState", "cMessage")
{
}

PastrySendStateDescriptor::~PastrySendStateDescriptor()
{
}

bool PastrySendStateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastrySendState *>(obj)!=NULL;
}

const char *PastrySendStateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastrySendStateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PastrySendStateDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PastrySendStateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dest",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PastrySendStateDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastrySendStateDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PastrySendStateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PastrySendStateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastrySendStateDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDest(); return out.str();}
        default: return "";
    }
}

bool PastrySendStateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastrySendStateDescriptor::getFieldStructName(void *object, int field) const
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

void *PastrySendStateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastrySendState *pp = (PastrySendState *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}

Register_Class(PastryJoinCall);

PastryJoinCall::PastryJoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

PastryJoinCall::PastryJoinCall(const PastryJoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

PastryJoinCall::~PastryJoinCall()
{
}

PastryJoinCall& PastryJoinCall::operator=(const PastryJoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void PastryJoinCall::copy(const PastryJoinCall& other)
{
}

void PastryJoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void PastryJoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class PastryJoinCallDescriptor : public cClassDescriptor
{
  public:
    PastryJoinCallDescriptor();
    virtual ~PastryJoinCallDescriptor();

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

Register_ClassDescriptor(PastryJoinCallDescriptor);

PastryJoinCallDescriptor::PastryJoinCallDescriptor() : cClassDescriptor("PastryJoinCall", "BaseCallMessage")
{
}

PastryJoinCallDescriptor::~PastryJoinCallDescriptor()
{
}

bool PastryJoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryJoinCall *>(obj)!=NULL;
}

const char *PastryJoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryJoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PastryJoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *PastryJoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int PastryJoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryJoinCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *PastryJoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PastryJoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinCall *pp = (PastryJoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryJoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinCall *pp = (PastryJoinCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool PastryJoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinCall *pp = (PastryJoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastryJoinCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *PastryJoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinCall *pp = (PastryJoinCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PastryJoinResponse);

PastryJoinResponse::PastryJoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

PastryJoinResponse::PastryJoinResponse(const PastryJoinResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

PastryJoinResponse::~PastryJoinResponse()
{
}

PastryJoinResponse& PastryJoinResponse::operator=(const PastryJoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void PastryJoinResponse::copy(const PastryJoinResponse& other)
{
}

void PastryJoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void PastryJoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class PastryJoinResponseDescriptor : public cClassDescriptor
{
  public:
    PastryJoinResponseDescriptor();
    virtual ~PastryJoinResponseDescriptor();

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

Register_ClassDescriptor(PastryJoinResponseDescriptor);

PastryJoinResponseDescriptor::PastryJoinResponseDescriptor() : cClassDescriptor("PastryJoinResponse", "BaseResponseMessage")
{
}

PastryJoinResponseDescriptor::~PastryJoinResponseDescriptor()
{
}

bool PastryJoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PastryJoinResponse *>(obj)!=NULL;
}

const char *PastryJoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PastryJoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PastryJoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *PastryJoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int PastryJoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PastryJoinResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *PastryJoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PastryJoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinResponse *pp = (PastryJoinResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PastryJoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinResponse *pp = (PastryJoinResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool PastryJoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinResponse *pp = (PastryJoinResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PastryJoinResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *PastryJoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PastryJoinResponse *pp = (PastryJoinResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestStateCall);

RequestStateCall::RequestStateCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

RequestStateCall::RequestStateCall(const RequestStateCall& other) : BaseCallMessage(other)
{
    copy(other);
}

RequestStateCall::~RequestStateCall()
{
}

RequestStateCall& RequestStateCall::operator=(const RequestStateCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestStateCall::copy(const RequestStateCall& other)
{
}

void RequestStateCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void RequestStateCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class RequestStateCallDescriptor : public cClassDescriptor
{
  public:
    RequestStateCallDescriptor();
    virtual ~RequestStateCallDescriptor();

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

Register_ClassDescriptor(RequestStateCallDescriptor);

RequestStateCallDescriptor::RequestStateCallDescriptor() : cClassDescriptor("RequestStateCall", "BaseCallMessage")
{
}

RequestStateCallDescriptor::~RequestStateCallDescriptor()
{
}

bool RequestStateCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestStateCall *>(obj)!=NULL;
}

const char *RequestStateCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestStateCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestStateCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestStateCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestStateCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestStateCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestStateCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestStateCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateCall *pp = (RequestStateCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestStateCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateCall *pp = (RequestStateCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestStateCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateCall *pp = (RequestStateCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestStateCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestStateCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateCall *pp = (RequestStateCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestStateResponse);

RequestStateResponse::RequestStateResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

RequestStateResponse::RequestStateResponse(const RequestStateResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

RequestStateResponse::~RequestStateResponse()
{
}

RequestStateResponse& RequestStateResponse::operator=(const RequestStateResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestStateResponse::copy(const RequestStateResponse& other)
{
}

void RequestStateResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void RequestStateResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class RequestStateResponseDescriptor : public cClassDescriptor
{
  public:
    RequestStateResponseDescriptor();
    virtual ~RequestStateResponseDescriptor();

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

Register_ClassDescriptor(RequestStateResponseDescriptor);

RequestStateResponseDescriptor::RequestStateResponseDescriptor() : cClassDescriptor("RequestStateResponse", "BaseResponseMessage")
{
}

RequestStateResponseDescriptor::~RequestStateResponseDescriptor()
{
}

bool RequestStateResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestStateResponse *>(obj)!=NULL;
}

const char *RequestStateResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestStateResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestStateResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestStateResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestStateResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestStateResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestStateResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestStateResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateResponse *pp = (RequestStateResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestStateResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateResponse *pp = (RequestStateResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestStateResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateResponse *pp = (RequestStateResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestStateResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestStateResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestStateResponse *pp = (RequestStateResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestRepairCall);

RequestRepairCall::RequestRepairCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

RequestRepairCall::RequestRepairCall(const RequestRepairCall& other) : BaseCallMessage(other)
{
    copy(other);
}

RequestRepairCall::~RequestRepairCall()
{
}

RequestRepairCall& RequestRepairCall::operator=(const RequestRepairCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestRepairCall::copy(const RequestRepairCall& other)
{
}

void RequestRepairCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void RequestRepairCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class RequestRepairCallDescriptor : public cClassDescriptor
{
  public:
    RequestRepairCallDescriptor();
    virtual ~RequestRepairCallDescriptor();

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

Register_ClassDescriptor(RequestRepairCallDescriptor);

RequestRepairCallDescriptor::RequestRepairCallDescriptor() : cClassDescriptor("RequestRepairCall", "BaseCallMessage")
{
}

RequestRepairCallDescriptor::~RequestRepairCallDescriptor()
{
}

bool RequestRepairCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestRepairCall *>(obj)!=NULL;
}

const char *RequestRepairCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestRepairCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestRepairCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestRepairCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestRepairCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestRepairCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestRepairCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestRepairCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairCall *pp = (RequestRepairCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestRepairCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairCall *pp = (RequestRepairCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestRepairCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairCall *pp = (RequestRepairCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestRepairCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestRepairCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairCall *pp = (RequestRepairCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestRepairResponse);

RequestRepairResponse::RequestRepairResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

RequestRepairResponse::RequestRepairResponse(const RequestRepairResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

RequestRepairResponse::~RequestRepairResponse()
{
}

RequestRepairResponse& RequestRepairResponse::operator=(const RequestRepairResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestRepairResponse::copy(const RequestRepairResponse& other)
{
}

void RequestRepairResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void RequestRepairResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class RequestRepairResponseDescriptor : public cClassDescriptor
{
  public:
    RequestRepairResponseDescriptor();
    virtual ~RequestRepairResponseDescriptor();

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

Register_ClassDescriptor(RequestRepairResponseDescriptor);

RequestRepairResponseDescriptor::RequestRepairResponseDescriptor() : cClassDescriptor("RequestRepairResponse", "BaseResponseMessage")
{
}

RequestRepairResponseDescriptor::~RequestRepairResponseDescriptor()
{
}

bool RequestRepairResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestRepairResponse *>(obj)!=NULL;
}

const char *RequestRepairResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestRepairResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestRepairResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestRepairResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestRepairResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestRepairResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestRepairResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestRepairResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairResponse *pp = (RequestRepairResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestRepairResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairResponse *pp = (RequestRepairResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestRepairResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairResponse *pp = (RequestRepairResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestRepairResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestRepairResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRepairResponse *pp = (RequestRepairResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestLeafSetCall);

RequestLeafSetCall::RequestLeafSetCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

RequestLeafSetCall::RequestLeafSetCall(const RequestLeafSetCall& other) : BaseCallMessage(other)
{
    copy(other);
}

RequestLeafSetCall::~RequestLeafSetCall()
{
}

RequestLeafSetCall& RequestLeafSetCall::operator=(const RequestLeafSetCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestLeafSetCall::copy(const RequestLeafSetCall& other)
{
}

void RequestLeafSetCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void RequestLeafSetCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class RequestLeafSetCallDescriptor : public cClassDescriptor
{
  public:
    RequestLeafSetCallDescriptor();
    virtual ~RequestLeafSetCallDescriptor();

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

Register_ClassDescriptor(RequestLeafSetCallDescriptor);

RequestLeafSetCallDescriptor::RequestLeafSetCallDescriptor() : cClassDescriptor("RequestLeafSetCall", "BaseCallMessage")
{
}

RequestLeafSetCallDescriptor::~RequestLeafSetCallDescriptor()
{
}

bool RequestLeafSetCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestLeafSetCall *>(obj)!=NULL;
}

const char *RequestLeafSetCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestLeafSetCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestLeafSetCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestLeafSetCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestLeafSetCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestLeafSetCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestLeafSetCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestLeafSetCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetCall *pp = (RequestLeafSetCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestLeafSetCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetCall *pp = (RequestLeafSetCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestLeafSetCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetCall *pp = (RequestLeafSetCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestLeafSetCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestLeafSetCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetCall *pp = (RequestLeafSetCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestLeafSetResponse);

RequestLeafSetResponse::RequestLeafSetResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

RequestLeafSetResponse::RequestLeafSetResponse(const RequestLeafSetResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

RequestLeafSetResponse::~RequestLeafSetResponse()
{
}

RequestLeafSetResponse& RequestLeafSetResponse::operator=(const RequestLeafSetResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestLeafSetResponse::copy(const RequestLeafSetResponse& other)
{
}

void RequestLeafSetResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void RequestLeafSetResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class RequestLeafSetResponseDescriptor : public cClassDescriptor
{
  public:
    RequestLeafSetResponseDescriptor();
    virtual ~RequestLeafSetResponseDescriptor();

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

Register_ClassDescriptor(RequestLeafSetResponseDescriptor);

RequestLeafSetResponseDescriptor::RequestLeafSetResponseDescriptor() : cClassDescriptor("RequestLeafSetResponse", "BaseResponseMessage")
{
}

RequestLeafSetResponseDescriptor::~RequestLeafSetResponseDescriptor()
{
}

bool RequestLeafSetResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestLeafSetResponse *>(obj)!=NULL;
}

const char *RequestLeafSetResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestLeafSetResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestLeafSetResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestLeafSetResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestLeafSetResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestLeafSetResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestLeafSetResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestLeafSetResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetResponse *pp = (RequestLeafSetResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestLeafSetResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetResponse *pp = (RequestLeafSetResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestLeafSetResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetResponse *pp = (RequestLeafSetResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestLeafSetResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestLeafSetResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestLeafSetResponse *pp = (RequestLeafSetResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestRoutingRowCall);

RequestRoutingRowCall::RequestRoutingRowCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->row_var = 0;
}

RequestRoutingRowCall::RequestRoutingRowCall(const RequestRoutingRowCall& other) : BaseCallMessage(other)
{
    copy(other);
}

RequestRoutingRowCall::~RequestRoutingRowCall()
{
}

RequestRoutingRowCall& RequestRoutingRowCall::operator=(const RequestRoutingRowCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestRoutingRowCall::copy(const RequestRoutingRowCall& other)
{
    this->row_var = other.row_var;
}

void RequestRoutingRowCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->row_var);
}

void RequestRoutingRowCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->row_var);
}

int RequestRoutingRowCall::getRow() const
{
    return row_var;
}

void RequestRoutingRowCall::setRow(int row)
{
    this->row_var = row;
}

class RequestRoutingRowCallDescriptor : public cClassDescriptor
{
  public:
    RequestRoutingRowCallDescriptor();
    virtual ~RequestRoutingRowCallDescriptor();

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

Register_ClassDescriptor(RequestRoutingRowCallDescriptor);

RequestRoutingRowCallDescriptor::RequestRoutingRowCallDescriptor() : cClassDescriptor("RequestRoutingRowCall", "BaseCallMessage")
{
}

RequestRoutingRowCallDescriptor::~RequestRoutingRowCallDescriptor()
{
}

bool RequestRoutingRowCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestRoutingRowCall *>(obj)!=NULL;
}

const char *RequestRoutingRowCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestRoutingRowCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RequestRoutingRowCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RequestRoutingRowCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "row",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RequestRoutingRowCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "row")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestRoutingRowCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RequestRoutingRowCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestRoutingRowCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowCall *pp = (RequestRoutingRowCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestRoutingRowCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowCall *pp = (RequestRoutingRowCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRow());
        default: return "";
    }
}

bool RequestRoutingRowCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowCall *pp = (RequestRoutingRowCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setRow(string2long(value)); return true;
        default: return false;
    }
}

const char *RequestRoutingRowCallDescriptor::getFieldStructName(void *object, int field) const
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

void *RequestRoutingRowCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowCall *pp = (RequestRoutingRowCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RequestRoutingRowResponse);

RequestRoutingRowResponse::RequestRoutingRowResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

RequestRoutingRowResponse::RequestRoutingRowResponse(const RequestRoutingRowResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

RequestRoutingRowResponse::~RequestRoutingRowResponse()
{
}

RequestRoutingRowResponse& RequestRoutingRowResponse::operator=(const RequestRoutingRowResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void RequestRoutingRowResponse::copy(const RequestRoutingRowResponse& other)
{
}

void RequestRoutingRowResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void RequestRoutingRowResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class RequestRoutingRowResponseDescriptor : public cClassDescriptor
{
  public:
    RequestRoutingRowResponseDescriptor();
    virtual ~RequestRoutingRowResponseDescriptor();

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

Register_ClassDescriptor(RequestRoutingRowResponseDescriptor);

RequestRoutingRowResponseDescriptor::RequestRoutingRowResponseDescriptor() : cClassDescriptor("RequestRoutingRowResponse", "BaseResponseMessage")
{
}

RequestRoutingRowResponseDescriptor::~RequestRoutingRowResponseDescriptor()
{
}

bool RequestRoutingRowResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RequestRoutingRowResponse *>(obj)!=NULL;
}

const char *RequestRoutingRowResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RequestRoutingRowResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RequestRoutingRowResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RequestRoutingRowResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RequestRoutingRowResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RequestRoutingRowResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RequestRoutingRowResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RequestRoutingRowResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowResponse *pp = (RequestRoutingRowResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RequestRoutingRowResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowResponse *pp = (RequestRoutingRowResponse *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RequestRoutingRowResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowResponse *pp = (RequestRoutingRowResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RequestRoutingRowResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RequestRoutingRowResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RequestRoutingRowResponse *pp = (RequestRoutingRowResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


