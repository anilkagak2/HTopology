//
// Generated file, do not edit! Created by opp_msgc 4.3 from tier2/simmud/SimMud.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SimMud_m.h"

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




Register_Class(SimMudMoveMessage);

SimMudMoveMessage::SimMudMoveMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->posX_var = 0;
    this->posY_var = 0;
    this->timestamp_var = 0;
    this->leaveRegion_var = false;
}

SimMudMoveMessage::SimMudMoveMessage(const SimMudMoveMessage& other) : cPacket(other)
{
    copy(other);
}

SimMudMoveMessage::~SimMudMoveMessage()
{
}

SimMudMoveMessage& SimMudMoveMessage::operator=(const SimMudMoveMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void SimMudMoveMessage::copy(const SimMudMoveMessage& other)
{
    this->src_var = other.src_var;
    this->posX_var = other.posX_var;
    this->posY_var = other.posY_var;
    this->timestamp_var = other.timestamp_var;
    this->leaveRegion_var = other.leaveRegion_var;
}

void SimMudMoveMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->posX_var);
    doPacking(b,this->posY_var);
    doPacking(b,this->timestamp_var);
    doPacking(b,this->leaveRegion_var);
}

void SimMudMoveMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->posX_var);
    doUnpacking(b,this->posY_var);
    doUnpacking(b,this->timestamp_var);
    doUnpacking(b,this->leaveRegion_var);
}

NodeHandle& SimMudMoveMessage::getSrc()
{
    return src_var;
}

void SimMudMoveMessage::setSrc(const NodeHandle& src)
{
    this->src_var = src;
}

double SimMudMoveMessage::getPosX() const
{
    return posX_var;
}

void SimMudMoveMessage::setPosX(double posX)
{
    this->posX_var = posX;
}

double SimMudMoveMessage::getPosY() const
{
    return posY_var;
}

void SimMudMoveMessage::setPosY(double posY)
{
    this->posY_var = posY;
}

simtime_t SimMudMoveMessage::getTimestamp() const
{
    return timestamp_var;
}

void SimMudMoveMessage::setTimestamp(simtime_t timestamp)
{
    this->timestamp_var = timestamp;
}

bool SimMudMoveMessage::getLeaveRegion() const
{
    return leaveRegion_var;
}

void SimMudMoveMessage::setLeaveRegion(bool leaveRegion)
{
    this->leaveRegion_var = leaveRegion;
}

class SimMudMoveMessageDescriptor : public cClassDescriptor
{
  public:
    SimMudMoveMessageDescriptor();
    virtual ~SimMudMoveMessageDescriptor();

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

Register_ClassDescriptor(SimMudMoveMessageDescriptor);

SimMudMoveMessageDescriptor::SimMudMoveMessageDescriptor() : cClassDescriptor("SimMudMoveMessage", "cPacket")
{
}

SimMudMoveMessageDescriptor::~SimMudMoveMessageDescriptor()
{
}

bool SimMudMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SimMudMoveMessage *>(obj)!=NULL;
}

const char *SimMudMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SimMudMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SimMudMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SimMudMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
        "posX",
        "posY",
        "timestamp",
        "leaveRegion",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SimMudMoveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "posX")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "posY")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "leaveRegion")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SimMudMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "double",
        "double",
        "simtime_t",
        "bool",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SimMudMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SimMudMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SimMudMoveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: return double2string(pp->getPosX());
        case 2: return double2string(pp->getPosY());
        case 3: return double2string(pp->getTimestamp());
        case 4: return bool2string(pp->getLeaveRegion());
        default: return "";
    }
}

bool SimMudMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setPosX(string2double(value)); return true;
        case 2: pp->setPosY(string2double(value)); return true;
        case 3: pp->setTimestamp(string2double(value)); return true;
        case 4: pp->setLeaveRegion(string2bool(value)); return true;
        default: return false;
    }
}

const char *SimMudMoveMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *SimMudMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SimMudMoveMessage *pp = (SimMudMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}


