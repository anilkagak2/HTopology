//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/quon/Quon.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Quon_m.h"

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
    cEnum *e = cEnum::find("QUONCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("QUONCommand"));
    e->insert(JOIN_REQUEST, "JOIN_REQUEST");
    e->insert(JOIN_ACKNOWLEDGE, "JOIN_ACKNOWLEDGE");
    e->insert(NODE_MOVE, "NODE_MOVE");
    e->insert(NEW_NEIGHBORS, "NEW_NEIGHBORS");
    e->insert(NODE_LEAVE, "NODE_LEAVE");
    e->insert(QUON_EVENT, "QUON_EVENT");
);

Register_Class(QuonSelfMessage);

QuonSelfMessage::QuonSelfMessage(const char *name, int kind) : cMessage(name,kind)
{
}

QuonSelfMessage::QuonSelfMessage(const QuonSelfMessage& other) : cMessage(other)
{
    copy(other);
}

QuonSelfMessage::~QuonSelfMessage()
{
}

QuonSelfMessage& QuonSelfMessage::operator=(const QuonSelfMessage& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    copy(other);
    return *this;
}

void QuonSelfMessage::copy(const QuonSelfMessage& other)
{
    this->key_var = other.key_var;
}

void QuonSelfMessage::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
    doPacking(b,this->key_var);
}

void QuonSelfMessage::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
}

OverlayKey& QuonSelfMessage::getKey()
{
    return key_var;
}

void QuonSelfMessage::setKey(const OverlayKey& key)
{
    this->key_var = key;
}

class QuonSelfMessageDescriptor : public cClassDescriptor
{
  public:
    QuonSelfMessageDescriptor();
    virtual ~QuonSelfMessageDescriptor();

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

Register_ClassDescriptor(QuonSelfMessageDescriptor);

QuonSelfMessageDescriptor::QuonSelfMessageDescriptor() : cClassDescriptor("QuonSelfMessage", "cMessage")
{
}

QuonSelfMessageDescriptor::~QuonSelfMessageDescriptor()
{
}

bool QuonSelfMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonSelfMessage *>(obj)!=NULL;
}

const char *QuonSelfMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonSelfMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int QuonSelfMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *QuonSelfMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "key",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int QuonSelfMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "key")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *QuonSelfMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *QuonSelfMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonSelfMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string QuonSelfMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); return out.str();}
        default: return "";
    }
}

bool QuonSelfMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *QuonSelfMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *QuonSelfMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonSelfMessage *pp = (QuonSelfMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}

Register_Class(QuonMessage);

QuonMessage::QuonMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
    this->AOIsize_var = 0;
}

QuonMessage::QuonMessage(const QuonMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

QuonMessage::~QuonMessage()
{
}

QuonMessage& QuonMessage::operator=(const QuonMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void QuonMessage::copy(const QuonMessage& other)
{
    this->command_var = other.command_var;
    this->sender_var = other.sender_var;
    this->position_var = other.position_var;
    this->AOIsize_var = other.AOIsize_var;
}

void QuonMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->sender_var);
    doPacking(b,this->position_var);
    doPacking(b,this->AOIsize_var);
}

void QuonMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->sender_var);
    doUnpacking(b,this->position_var);
    doUnpacking(b,this->AOIsize_var);
}

int QuonMessage::getCommand() const
{
    return command_var;
}

void QuonMessage::setCommand(int command)
{
    this->command_var = command;
}

NodeHandle& QuonMessage::getSender()
{
    return sender_var;
}

void QuonMessage::setSender(const NodeHandle& sender)
{
    this->sender_var = sender;
}

Vector2D& QuonMessage::getPosition()
{
    return position_var;
}

void QuonMessage::setPosition(const Vector2D& position)
{
    this->position_var = position;
}

double QuonMessage::getAOIsize() const
{
    return AOIsize_var;
}

void QuonMessage::setAOIsize(double AOIsize)
{
    this->AOIsize_var = AOIsize;
}

class QuonMessageDescriptor : public cClassDescriptor
{
  public:
    QuonMessageDescriptor();
    virtual ~QuonMessageDescriptor();

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

Register_ClassDescriptor(QuonMessageDescriptor);

QuonMessageDescriptor::QuonMessageDescriptor() : cClassDescriptor("QuonMessage", "BaseOverlayMessage")
{
}

QuonMessageDescriptor::~QuonMessageDescriptor()
{
}

bool QuonMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonMessage *>(obj)!=NULL;
}

const char *QuonMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int QuonMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *QuonMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
        "sender",
        "position",
        "AOIsize",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int QuonMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+2;
    if (fieldName[0]=='A' && strcmp(fieldName, "AOIsize")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *QuonMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "Vector2D",
        "double",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *QuonMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "QUONCommand";
            return NULL;
        default: return NULL;
    }
}

int QuonMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string QuonMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        case 1: {std::stringstream out; out << pp->getSender(); return out.str();}
        case 2: {std::stringstream out; out << pp->getPosition(); return out.str();}
        case 3: return double2string(pp->getAOIsize());
        default: return "";
    }
}

bool QuonMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 3: pp->setAOIsize(string2double(value)); return true;
        default: return false;
    }
}

const char *QuonMessageDescriptor::getFieldStructName(void *object, int field) const
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
        "Vector2D",
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *QuonMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonMessage *pp = (QuonMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSender()); break;
        case 2: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(QuonListMessage);

QuonListMessage::QuonListMessage(const char *name, int kind) : QuonMessage(name,kind)
{
    neighborHandle_arraysize = 0;
    this->neighborHandle_var = 0;
    neighborPosition_arraysize = 0;
    this->neighborPosition_var = 0;
}

QuonListMessage::QuonListMessage(const QuonListMessage& other) : QuonMessage(other)
{
    neighborHandle_arraysize = 0;
    this->neighborHandle_var = 0;
    neighborPosition_arraysize = 0;
    this->neighborPosition_var = 0;
    copy(other);
}

QuonListMessage::~QuonListMessage()
{
    delete [] neighborHandle_var;
    delete [] neighborPosition_var;
}

QuonListMessage& QuonListMessage::operator=(const QuonListMessage& other)
{
    if (this==&other) return *this;
    QuonMessage::operator=(other);
    copy(other);
    return *this;
}

void QuonListMessage::copy(const QuonListMessage& other)
{
    delete [] this->neighborHandle_var;
    this->neighborHandle_var = (other.neighborHandle_arraysize==0) ? NULL : new NodeHandle[other.neighborHandle_arraysize];
    neighborHandle_arraysize = other.neighborHandle_arraysize;
    for (unsigned int i=0; i<neighborHandle_arraysize; i++)
        this->neighborHandle_var[i] = other.neighborHandle_var[i];
    delete [] this->neighborPosition_var;
    this->neighborPosition_var = (other.neighborPosition_arraysize==0) ? NULL : new Vector2D[other.neighborPosition_arraysize];
    neighborPosition_arraysize = other.neighborPosition_arraysize;
    for (unsigned int i=0; i<neighborPosition_arraysize; i++)
        this->neighborPosition_var[i] = other.neighborPosition_var[i];
}

void QuonListMessage::parsimPack(cCommBuffer *b)
{
    QuonMessage::parsimPack(b);
    b->pack(neighborHandle_arraysize);
    doPacking(b,this->neighborHandle_var,neighborHandle_arraysize);
    b->pack(neighborPosition_arraysize);
    doPacking(b,this->neighborPosition_var,neighborPosition_arraysize);
}

void QuonListMessage::parsimUnpack(cCommBuffer *b)
{
    QuonMessage::parsimUnpack(b);
    delete [] this->neighborHandle_var;
    b->unpack(neighborHandle_arraysize);
    if (neighborHandle_arraysize==0) {
        this->neighborHandle_var = 0;
    } else {
        this->neighborHandle_var = new NodeHandle[neighborHandle_arraysize];
        doUnpacking(b,this->neighborHandle_var,neighborHandle_arraysize);
    }
    delete [] this->neighborPosition_var;
    b->unpack(neighborPosition_arraysize);
    if (neighborPosition_arraysize==0) {
        this->neighborPosition_var = 0;
    } else {
        this->neighborPosition_var = new Vector2D[neighborPosition_arraysize];
        doUnpacking(b,this->neighborPosition_var,neighborPosition_arraysize);
    }
}

void QuonListMessage::setNeighborHandleArraySize(unsigned int size)
{
    NodeHandle *neighborHandle_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = neighborHandle_arraysize < size ? neighborHandle_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborHandle_var2[i] = this->neighborHandle_var[i];
    neighborHandle_arraysize = size;
    delete [] this->neighborHandle_var;
    this->neighborHandle_var = neighborHandle_var2;
}

unsigned int QuonListMessage::getNeighborHandleArraySize() const
{
    return neighborHandle_arraysize;
}

NodeHandle& QuonListMessage::getNeighborHandle(unsigned int k)
{
    if (k>=neighborHandle_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborHandle_arraysize, k);
    return neighborHandle_var[k];
}

void QuonListMessage::setNeighborHandle(unsigned int k, const NodeHandle& neighborHandle)
{
    if (k>=neighborHandle_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborHandle_arraysize, k);
    this->neighborHandle_var[k] = neighborHandle;
}

void QuonListMessage::setNeighborPositionArraySize(unsigned int size)
{
    Vector2D *neighborPosition_var2 = (size==0) ? NULL : new Vector2D[size];
    unsigned int sz = neighborPosition_arraysize < size ? neighborPosition_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborPosition_var2[i] = this->neighborPosition_var[i];
    neighborPosition_arraysize = size;
    delete [] this->neighborPosition_var;
    this->neighborPosition_var = neighborPosition_var2;
}

unsigned int QuonListMessage::getNeighborPositionArraySize() const
{
    return neighborPosition_arraysize;
}

Vector2D& QuonListMessage::getNeighborPosition(unsigned int k)
{
    if (k>=neighborPosition_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPosition_arraysize, k);
    return neighborPosition_var[k];
}

void QuonListMessage::setNeighborPosition(unsigned int k, const Vector2D& neighborPosition)
{
    if (k>=neighborPosition_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPosition_arraysize, k);
    this->neighborPosition_var[k] = neighborPosition;
}

class QuonListMessageDescriptor : public cClassDescriptor
{
  public:
    QuonListMessageDescriptor();
    virtual ~QuonListMessageDescriptor();

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

Register_ClassDescriptor(QuonListMessageDescriptor);

QuonListMessageDescriptor::QuonListMessageDescriptor() : cClassDescriptor("QuonListMessage", "QuonMessage")
{
}

QuonListMessageDescriptor::~QuonListMessageDescriptor()
{
}

bool QuonListMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonListMessage *>(obj)!=NULL;
}

const char *QuonListMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonListMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int QuonListMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *QuonListMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "neighborHandle",
        "neighborPosition",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int QuonListMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborHandle")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighborPosition")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *QuonListMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *QuonListMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonListMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNeighborHandleArraySize();
        case 1: return pp->getNeighborPositionArraySize();
        default: return 0;
    }
}

std::string QuonListMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNeighborHandle(i); return out.str();}
        case 1: {std::stringstream out; out << pp->getNeighborPosition(i); return out.str();}
        default: return "";
    }
}

bool QuonListMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *QuonListMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *QuonListMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonListMessage *pp = (QuonListMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNeighborHandle(i)); break;
        case 1: return (void *)(&pp->getNeighborPosition(i)); break;
        default: return NULL;
    }
}

Register_Class(QuonMoveMessage);

QuonMoveMessage::QuonMoveMessage(const char *name, int kind) : QuonListMessage(name,kind)
{
    this->isBinding_var = false;
}

QuonMoveMessage::QuonMoveMessage(const QuonMoveMessage& other) : QuonListMessage(other)
{
    copy(other);
}

QuonMoveMessage::~QuonMoveMessage()
{
}

QuonMoveMessage& QuonMoveMessage::operator=(const QuonMoveMessage& other)
{
    if (this==&other) return *this;
    QuonListMessage::operator=(other);
    copy(other);
    return *this;
}

void QuonMoveMessage::copy(const QuonMoveMessage& other)
{
    this->newPosition_var = other.newPosition_var;
    this->isBinding_var = other.isBinding_var;
}

void QuonMoveMessage::parsimPack(cCommBuffer *b)
{
    QuonListMessage::parsimPack(b);
    doPacking(b,this->newPosition_var);
    doPacking(b,this->isBinding_var);
}

void QuonMoveMessage::parsimUnpack(cCommBuffer *b)
{
    QuonListMessage::parsimUnpack(b);
    doUnpacking(b,this->newPosition_var);
    doUnpacking(b,this->isBinding_var);
}

Vector2D& QuonMoveMessage::getNewPosition()
{
    return newPosition_var;
}

void QuonMoveMessage::setNewPosition(const Vector2D& newPosition)
{
    this->newPosition_var = newPosition;
}

bool QuonMoveMessage::getIsBinding() const
{
    return isBinding_var;
}

void QuonMoveMessage::setIsBinding(bool isBinding)
{
    this->isBinding_var = isBinding;
}

class QuonMoveMessageDescriptor : public cClassDescriptor
{
  public:
    QuonMoveMessageDescriptor();
    virtual ~QuonMoveMessageDescriptor();

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

Register_ClassDescriptor(QuonMoveMessageDescriptor);

QuonMoveMessageDescriptor::QuonMoveMessageDescriptor() : cClassDescriptor("QuonMoveMessage", "QuonListMessage")
{
}

QuonMoveMessageDescriptor::~QuonMoveMessageDescriptor()
{
}

bool QuonMoveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonMoveMessage *>(obj)!=NULL;
}

const char *QuonMoveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonMoveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int QuonMoveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *QuonMoveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "newPosition",
        "isBinding",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int QuonMoveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "newPosition")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "isBinding")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *QuonMoveMessageDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *QuonMoveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonMoveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string QuonMoveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNewPosition(); return out.str();}
        case 1: return bool2string(pp->getIsBinding());
        default: return "";
    }
}

bool QuonMoveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setIsBinding(string2bool(value)); return true;
        default: return false;
    }
}

const char *QuonMoveMessageDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *QuonMoveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonMoveMessage *pp = (QuonMoveMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNewPosition()); break;
        default: return NULL;
    }
}

Register_Class(QuonEventMessage);

QuonEventMessage::QuonEventMessage(const char *name, int kind) : QuonMessage(name,kind)
{
}

QuonEventMessage::QuonEventMessage(const QuonEventMessage& other) : QuonMessage(other)
{
    copy(other);
}

QuonEventMessage::~QuonEventMessage()
{
}

QuonEventMessage& QuonEventMessage::operator=(const QuonEventMessage& other)
{
    if (this==&other) return *this;
    QuonMessage::operator=(other);
    copy(other);
    return *this;
}

void QuonEventMessage::copy(const QuonEventMessage& other)
{
}

void QuonEventMessage::parsimPack(cCommBuffer *b)
{
    QuonMessage::parsimPack(b);
}

void QuonEventMessage::parsimUnpack(cCommBuffer *b)
{
    QuonMessage::parsimUnpack(b);
}

class QuonEventMessageDescriptor : public cClassDescriptor
{
  public:
    QuonEventMessageDescriptor();
    virtual ~QuonEventMessageDescriptor();

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

Register_ClassDescriptor(QuonEventMessageDescriptor);

QuonEventMessageDescriptor::QuonEventMessageDescriptor() : cClassDescriptor("QuonEventMessage", "QuonMessage")
{
}

QuonEventMessageDescriptor::~QuonEventMessageDescriptor()
{
}

bool QuonEventMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<QuonEventMessage *>(obj)!=NULL;
}

const char *QuonEventMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int QuonEventMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int QuonEventMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *QuonEventMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int QuonEventMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *QuonEventMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *QuonEventMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int QuonEventMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string QuonEventMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool QuonEventMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *QuonEventMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *QuonEventMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    QuonEventMessage *pp = (QuonEventMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


