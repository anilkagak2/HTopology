//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/nice/NiceMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NiceMessage_m.h"

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
    cEnum *e = cEnum::find("NICECommand");
    if (!e) enums.getInstance()->add(e = new cEnum("NICECommand"));
    e->insert(NICE_QUERY, "NICE_QUERY");
    e->insert(NICE_QUERY_RESPONSE, "NICE_QUERY_RESPONSE");
    e->insert(NICE_JOIN_CLUSTER, "NICE_JOIN_CLUSTER");
    e->insert(NICE_HEARTBEAT, "NICE_HEARTBEAT");
    e->insert(NICE_LEADERHEARTBEAT, "NICE_LEADERHEARTBEAT");
    e->insert(NICE_LEADERTRANSFER, "NICE_LEADERTRANSFER");
    e->insert(NICE_JOINEVAL, "NICE_JOINEVAL");
    e->insert(NICE_JOINEVAL_RESPONSE, "NICE_JOINEVAL_RESPONSE");
    e->insert(NICE_REMOVE, "NICE_REMOVE");
    e->insert(NICE_PING_PROBE, "NICE_PING_PROBE");
    e->insert(NICE_PING_PROBE_RESPONSE, "NICE_PING_PROBE_RESPONSE");
    e->insert(NICE_CLUSTER_MERGE_REQUEST, "NICE_CLUSTER_MERGE_REQUEST");
    e->insert(NICE_PEER_TEMPORARY, "NICE_PEER_TEMPORARY");
    e->insert(NICE_PEER_TEMPORARY_RELEASE, "NICE_PEER_TEMPORARY_RELEASE");
    e->insert(NICE_POLL_RP, "NICE_POLL_RP");
    e->insert(NICE_POLL_RP_RESPONSE, "NICE_POLL_RP_RESPONSE");
    e->insert(NICE_FORCE_MERGE, "NICE_FORCE_MERGE");
    e->insert(NICE_MULTICAST, "NICE_MULTICAST");
);

Register_Class(NiceMessage);

NiceMessage::NiceMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
    this->layer_var = 0;
}

NiceMessage::NiceMessage(const NiceMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

NiceMessage::~NiceMessage()
{
}

NiceMessage& NiceMessage::operator=(const NiceMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void NiceMessage::copy(const NiceMessage& other)
{
    this->command_var = other.command_var;
    this->srcNode_var = other.srcNode_var;
    this->layer_var = other.layer_var;
}

void NiceMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->layer_var);
}

void NiceMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->layer_var);
}

int NiceMessage::getCommand() const
{
    return command_var;
}

void NiceMessage::setCommand(int command)
{
    this->command_var = command;
}

TransportAddress& NiceMessage::getSrcNode()
{
    return srcNode_var;
}

void NiceMessage::setSrcNode(const TransportAddress& srcNode)
{
    this->srcNode_var = srcNode;
}

short NiceMessage::getLayer() const
{
    return layer_var;
}

void NiceMessage::setLayer(short layer)
{
    this->layer_var = layer;
}

class NiceMessageDescriptor : public cClassDescriptor
{
  public:
    NiceMessageDescriptor();
    virtual ~NiceMessageDescriptor();

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

Register_ClassDescriptor(NiceMessageDescriptor);

NiceMessageDescriptor::NiceMessageDescriptor() : cClassDescriptor("NiceMessage", "BaseOverlayMessage")
{
}

NiceMessageDescriptor::~NiceMessageDescriptor()
{
}

bool NiceMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceMessage *>(obj)!=NULL;
}

const char *NiceMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int NiceMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *NiceMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
        "srcNode",
        "layer",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int NiceMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcNode")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "layer")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "TransportAddress",
        "short",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *NiceMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "NICECommand";
            return NULL;
        default: return NULL;
    }
}

int NiceMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NiceMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        case 1: {std::stringstream out; out << pp->getSrcNode(); return out.str();}
        case 2: return long2string(pp->getLayer());
        default: return "";
    }
}

bool NiceMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 2: pp->setLayer(string2long(value)); return true;
        default: return false;
    }
}

const char *NiceMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "TransportAddress",
        NULL,
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *NiceMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMessage *pp = (NiceMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrcNode()); break;
        default: return NULL;
    }
}

Register_Class(NiceMemberMessage);

NiceMemberMessage::NiceMemberMessage(const char *name, int kind) : NiceMessage(name,kind)
{
    members_arraysize = 0;
    this->members_var = 0;
}

NiceMemberMessage::NiceMemberMessage(const NiceMemberMessage& other) : NiceMessage(other)
{
    members_arraysize = 0;
    this->members_var = 0;
    copy(other);
}

NiceMemberMessage::~NiceMemberMessage()
{
    delete [] members_var;
}

NiceMemberMessage& NiceMemberMessage::operator=(const NiceMemberMessage& other)
{
    if (this==&other) return *this;
    NiceMessage::operator=(other);
    copy(other);
    return *this;
}

void NiceMemberMessage::copy(const NiceMemberMessage& other)
{
    delete [] this->members_var;
    this->members_var = (other.members_arraysize==0) ? NULL : new TransportAddress[other.members_arraysize];
    members_arraysize = other.members_arraysize;
    for (unsigned int i=0; i<members_arraysize; i++)
        this->members_var[i] = other.members_var[i];
}

void NiceMemberMessage::parsimPack(cCommBuffer *b)
{
    NiceMessage::parsimPack(b);
    b->pack(members_arraysize);
    doPacking(b,this->members_var,members_arraysize);
}

void NiceMemberMessage::parsimUnpack(cCommBuffer *b)
{
    NiceMessage::parsimUnpack(b);
    delete [] this->members_var;
    b->unpack(members_arraysize);
    if (members_arraysize==0) {
        this->members_var = 0;
    } else {
        this->members_var = new TransportAddress[members_arraysize];
        doUnpacking(b,this->members_var,members_arraysize);
    }
}

void NiceMemberMessage::setMembersArraySize(unsigned int size)
{
    TransportAddress *members_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = members_arraysize < size ? members_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        members_var2[i] = this->members_var[i];
    members_arraysize = size;
    delete [] this->members_var;
    this->members_var = members_var2;
}

unsigned int NiceMemberMessage::getMembersArraySize() const
{
    return members_arraysize;
}

TransportAddress& NiceMemberMessage::getMembers(unsigned int k)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    return members_var[k];
}

void NiceMemberMessage::setMembers(unsigned int k, const TransportAddress& members)
{
    if (k>=members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", members_arraysize, k);
    this->members_var[k] = members;
}

class NiceMemberMessageDescriptor : public cClassDescriptor
{
  public:
    NiceMemberMessageDescriptor();
    virtual ~NiceMemberMessageDescriptor();

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

Register_ClassDescriptor(NiceMemberMessageDescriptor);

NiceMemberMessageDescriptor::NiceMemberMessageDescriptor() : cClassDescriptor("NiceMemberMessage", "NiceMessage")
{
}

NiceMemberMessageDescriptor::~NiceMemberMessageDescriptor()
{
}

bool NiceMemberMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceMemberMessage *>(obj)!=NULL;
}

const char *NiceMemberMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceMemberMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NiceMemberMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NiceMemberMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "members",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int NiceMemberMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "members")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceMemberMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *NiceMemberMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceMemberMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getMembersArraySize();
        default: return 0;
    }
}

std::string NiceMemberMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMembers(i); return out.str();}
        default: return "";
    }
}

bool NiceMemberMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NiceMemberMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *NiceMemberMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMemberMessage *pp = (NiceMemberMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMembers(i)); break;
        default: return NULL;
    }
}

Register_Class(NiceClusterMerge);

NiceClusterMerge::NiceClusterMerge(const char *name, int kind) : NiceMemberMessage(name,kind)
{
}

NiceClusterMerge::NiceClusterMerge(const NiceClusterMerge& other) : NiceMemberMessage(other)
{
    copy(other);
}

NiceClusterMerge::~NiceClusterMerge()
{
}

NiceClusterMerge& NiceClusterMerge::operator=(const NiceClusterMerge& other)
{
    if (this==&other) return *this;
    NiceMemberMessage::operator=(other);
    copy(other);
    return *this;
}

void NiceClusterMerge::copy(const NiceClusterMerge& other)
{
    this->newClusterLeader_var = other.newClusterLeader_var;
}

void NiceClusterMerge::parsimPack(cCommBuffer *b)
{
    NiceMemberMessage::parsimPack(b);
    doPacking(b,this->newClusterLeader_var);
}

void NiceClusterMerge::parsimUnpack(cCommBuffer *b)
{
    NiceMemberMessage::parsimUnpack(b);
    doUnpacking(b,this->newClusterLeader_var);
}

TransportAddress& NiceClusterMerge::getNewClusterLeader()
{
    return newClusterLeader_var;
}

void NiceClusterMerge::setNewClusterLeader(const TransportAddress& newClusterLeader)
{
    this->newClusterLeader_var = newClusterLeader;
}

class NiceClusterMergeDescriptor : public cClassDescriptor
{
  public:
    NiceClusterMergeDescriptor();
    virtual ~NiceClusterMergeDescriptor();

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

Register_ClassDescriptor(NiceClusterMergeDescriptor);

NiceClusterMergeDescriptor::NiceClusterMergeDescriptor() : cClassDescriptor("NiceClusterMerge", "NiceMemberMessage")
{
}

NiceClusterMergeDescriptor::~NiceClusterMergeDescriptor()
{
}

bool NiceClusterMergeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceClusterMerge *>(obj)!=NULL;
}

const char *NiceClusterMergeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceClusterMergeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NiceClusterMergeDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NiceClusterMergeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "newClusterLeader",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int NiceClusterMergeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "newClusterLeader")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceClusterMergeDescriptor::getFieldTypeString(void *object, int field) const
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

const char *NiceClusterMergeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceClusterMergeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NiceClusterMergeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNewClusterLeader(); return out.str();}
        default: return "";
    }
}

bool NiceClusterMergeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NiceClusterMergeDescriptor::getFieldStructName(void *object, int field) const
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

void *NiceClusterMergeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceClusterMerge *pp = (NiceClusterMerge *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNewClusterLeader()); break;
        default: return NULL;
    }
}

Register_Class(NiceHeartbeat);

NiceHeartbeat::NiceHeartbeat(const char *name, int kind) : NiceMemberMessage(name,kind)
{
    this->seqNo_var = 0;
    this->seqRspNo_var = 0;
    this->hb_delay_var = 0;
    distances_arraysize = 0;
    this->distances_var = 0;
    this->one_hop_distance_var = 0;
    this->sublayermembers_var = 0;
}

NiceHeartbeat::NiceHeartbeat(const NiceHeartbeat& other) : NiceMemberMessage(other)
{
    distances_arraysize = 0;
    this->distances_var = 0;
    copy(other);
}

NiceHeartbeat::~NiceHeartbeat()
{
    delete [] distances_var;
}

NiceHeartbeat& NiceHeartbeat::operator=(const NiceHeartbeat& other)
{
    if (this==&other) return *this;
    NiceMemberMessage::operator=(other);
    copy(other);
    return *this;
}

void NiceHeartbeat::copy(const NiceHeartbeat& other)
{
    this->seqNo_var = other.seqNo_var;
    this->seqRspNo_var = other.seqRspNo_var;
    this->hb_delay_var = other.hb_delay_var;
    delete [] this->distances_var;
    this->distances_var = (other.distances_arraysize==0) ? NULL : new double[other.distances_arraysize];
    distances_arraysize = other.distances_arraysize;
    for (unsigned int i=0; i<distances_arraysize; i++)
        this->distances_var[i] = other.distances_var[i];
    this->one_hop_distance_var = other.one_hop_distance_var;
    this->sublayermembers_var = other.sublayermembers_var;
}

void NiceHeartbeat::parsimPack(cCommBuffer *b)
{
    NiceMemberMessage::parsimPack(b);
    doPacking(b,this->seqNo_var);
    doPacking(b,this->seqRspNo_var);
    doPacking(b,this->hb_delay_var);
    b->pack(distances_arraysize);
    doPacking(b,this->distances_var,distances_arraysize);
    doPacking(b,this->one_hop_distance_var);
    doPacking(b,this->sublayermembers_var);
}

void NiceHeartbeat::parsimUnpack(cCommBuffer *b)
{
    NiceMemberMessage::parsimUnpack(b);
    doUnpacking(b,this->seqNo_var);
    doUnpacking(b,this->seqRspNo_var);
    doUnpacking(b,this->hb_delay_var);
    delete [] this->distances_var;
    b->unpack(distances_arraysize);
    if (distances_arraysize==0) {
        this->distances_var = 0;
    } else {
        this->distances_var = new double[distances_arraysize];
        doUnpacking(b,this->distances_var,distances_arraysize);
    }
    doUnpacking(b,this->one_hop_distance_var);
    doUnpacking(b,this->sublayermembers_var);
}

unsigned int NiceHeartbeat::getSeqNo() const
{
    return seqNo_var;
}

void NiceHeartbeat::setSeqNo(unsigned int seqNo)
{
    this->seqNo_var = seqNo;
}

unsigned int NiceHeartbeat::getSeqRspNo() const
{
    return seqRspNo_var;
}

void NiceHeartbeat::setSeqRspNo(unsigned int seqRspNo)
{
    this->seqRspNo_var = seqRspNo;
}

double NiceHeartbeat::getHb_delay() const
{
    return hb_delay_var;
}

void NiceHeartbeat::setHb_delay(double hb_delay)
{
    this->hb_delay_var = hb_delay;
}

void NiceHeartbeat::setDistancesArraySize(unsigned int size)
{
    double *distances_var2 = (size==0) ? NULL : new double[size];
    unsigned int sz = distances_arraysize < size ? distances_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        distances_var2[i] = this->distances_var[i];
    for (unsigned int i=sz; i<size; i++)
        distances_var2[i] = 0;
    distances_arraysize = size;
    delete [] this->distances_var;
    this->distances_var = distances_var2;
}

unsigned int NiceHeartbeat::getDistancesArraySize() const
{
    return distances_arraysize;
}

double NiceHeartbeat::getDistances(unsigned int k) const
{
    if (k>=distances_arraysize) throw cRuntimeError("Array of size %d indexed by %d", distances_arraysize, k);
    return distances_var[k];
}

void NiceHeartbeat::setDistances(unsigned int k, double distances)
{
    if (k>=distances_arraysize) throw cRuntimeError("Array of size %d indexed by %d", distances_arraysize, k);
    this->distances_var[k] = distances;
}

double NiceHeartbeat::getOne_hop_distance() const
{
    return one_hop_distance_var;
}

void NiceHeartbeat::setOne_hop_distance(double one_hop_distance)
{
    this->one_hop_distance_var = one_hop_distance;
}

unsigned int NiceHeartbeat::getSublayermembers() const
{
    return sublayermembers_var;
}

void NiceHeartbeat::setSublayermembers(unsigned int sublayermembers)
{
    this->sublayermembers_var = sublayermembers;
}

class NiceHeartbeatDescriptor : public cClassDescriptor
{
  public:
    NiceHeartbeatDescriptor();
    virtual ~NiceHeartbeatDescriptor();

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

Register_ClassDescriptor(NiceHeartbeatDescriptor);

NiceHeartbeatDescriptor::NiceHeartbeatDescriptor() : cClassDescriptor("NiceHeartbeat", "NiceMemberMessage")
{
}

NiceHeartbeatDescriptor::~NiceHeartbeatDescriptor()
{
}

bool NiceHeartbeatDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceHeartbeat *>(obj)!=NULL;
}

const char *NiceHeartbeatDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceHeartbeatDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int NiceHeartbeatDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *NiceHeartbeatDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "seqNo",
        "seqRspNo",
        "hb_delay",
        "distances",
        "one_hop_distance",
        "sublayermembers",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int NiceHeartbeatDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNo")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqRspNo")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hb_delay")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "distances")==0) return base+3;
    if (fieldName[0]=='o' && strcmp(fieldName, "one_hop_distance")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "sublayermembers")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceHeartbeatDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "unsigned int",
        "double",
        "double",
        "double",
        "unsigned int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *NiceHeartbeatDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceHeartbeatDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        case 3: return pp->getDistancesArraySize();
        default: return 0;
    }
}

std::string NiceHeartbeatDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSeqNo());
        case 1: return ulong2string(pp->getSeqRspNo());
        case 2: return double2string(pp->getHb_delay());
        case 3: return double2string(pp->getDistances(i));
        case 4: return double2string(pp->getOne_hop_distance());
        case 5: return ulong2string(pp->getSublayermembers());
        default: return "";
    }
}

bool NiceHeartbeatDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: pp->setSeqNo(string2ulong(value)); return true;
        case 1: pp->setSeqRspNo(string2ulong(value)); return true;
        case 2: pp->setHb_delay(string2double(value)); return true;
        case 3: pp->setDistances(i,string2double(value)); return true;
        case 4: pp->setOne_hop_distance(string2double(value)); return true;
        case 5: pp->setSublayermembers(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NiceHeartbeatDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
    };
    return (field>=0 && field<6) ? fieldStructNames[field] : NULL;
}

void *NiceHeartbeatDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceHeartbeat *pp = (NiceHeartbeat *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NiceLeaderHeartbeat);

NiceLeaderHeartbeat::NiceLeaderHeartbeat(const char *name, int kind) : NiceHeartbeat(name,kind)
{
    supercluster_members_arraysize = 0;
    this->supercluster_members_var = 0;
    this->k_var = 0;
    this->sc_tolerance_var = 0;
}

NiceLeaderHeartbeat::NiceLeaderHeartbeat(const NiceLeaderHeartbeat& other) : NiceHeartbeat(other)
{
    supercluster_members_arraysize = 0;
    this->supercluster_members_var = 0;
    copy(other);
}

NiceLeaderHeartbeat::~NiceLeaderHeartbeat()
{
    delete [] supercluster_members_var;
}

NiceLeaderHeartbeat& NiceLeaderHeartbeat::operator=(const NiceLeaderHeartbeat& other)
{
    if (this==&other) return *this;
    NiceHeartbeat::operator=(other);
    copy(other);
    return *this;
}

void NiceLeaderHeartbeat::copy(const NiceLeaderHeartbeat& other)
{
    this->supercluster_leader_var = other.supercluster_leader_var;
    delete [] this->supercluster_members_var;
    this->supercluster_members_var = (other.supercluster_members_arraysize==0) ? NULL : new TransportAddress[other.supercluster_members_arraysize];
    supercluster_members_arraysize = other.supercluster_members_arraysize;
    for (unsigned int i=0; i<supercluster_members_arraysize; i++)
        this->supercluster_members_var[i] = other.supercluster_members_var[i];
    this->k_var = other.k_var;
    this->sc_tolerance_var = other.sc_tolerance_var;
}

void NiceLeaderHeartbeat::parsimPack(cCommBuffer *b)
{
    NiceHeartbeat::parsimPack(b);
    doPacking(b,this->supercluster_leader_var);
    b->pack(supercluster_members_arraysize);
    doPacking(b,this->supercluster_members_var,supercluster_members_arraysize);
    doPacking(b,this->k_var);
    doPacking(b,this->sc_tolerance_var);
}

void NiceLeaderHeartbeat::parsimUnpack(cCommBuffer *b)
{
    NiceHeartbeat::parsimUnpack(b);
    doUnpacking(b,this->supercluster_leader_var);
    delete [] this->supercluster_members_var;
    b->unpack(supercluster_members_arraysize);
    if (supercluster_members_arraysize==0) {
        this->supercluster_members_var = 0;
    } else {
        this->supercluster_members_var = new TransportAddress[supercluster_members_arraysize];
        doUnpacking(b,this->supercluster_members_var,supercluster_members_arraysize);
    }
    doUnpacking(b,this->k_var);
    doUnpacking(b,this->sc_tolerance_var);
}

TransportAddress& NiceLeaderHeartbeat::getSupercluster_leader()
{
    return supercluster_leader_var;
}

void NiceLeaderHeartbeat::setSupercluster_leader(const TransportAddress& supercluster_leader)
{
    this->supercluster_leader_var = supercluster_leader;
}

void NiceLeaderHeartbeat::setSupercluster_membersArraySize(unsigned int size)
{
    TransportAddress *supercluster_members_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = supercluster_members_arraysize < size ? supercluster_members_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        supercluster_members_var2[i] = this->supercluster_members_var[i];
    supercluster_members_arraysize = size;
    delete [] this->supercluster_members_var;
    this->supercluster_members_var = supercluster_members_var2;
}

unsigned int NiceLeaderHeartbeat::getSupercluster_membersArraySize() const
{
    return supercluster_members_arraysize;
}

TransportAddress& NiceLeaderHeartbeat::getSupercluster_members(unsigned int k)
{
    if (k>=supercluster_members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", supercluster_members_arraysize, k);
    return supercluster_members_var[k];
}

void NiceLeaderHeartbeat::setSupercluster_members(unsigned int k, const TransportAddress& supercluster_members)
{
    if (k>=supercluster_members_arraysize) throw cRuntimeError("Array of size %d indexed by %d", supercluster_members_arraysize, k);
    this->supercluster_members_var[k] = supercluster_members;
}

unsigned int NiceLeaderHeartbeat::getK() const
{
    return k_var;
}

void NiceLeaderHeartbeat::setK(unsigned int k)
{
    this->k_var = k;
}

unsigned int NiceLeaderHeartbeat::getSc_tolerance() const
{
    return sc_tolerance_var;
}

void NiceLeaderHeartbeat::setSc_tolerance(unsigned int sc_tolerance)
{
    this->sc_tolerance_var = sc_tolerance;
}

class NiceLeaderHeartbeatDescriptor : public cClassDescriptor
{
  public:
    NiceLeaderHeartbeatDescriptor();
    virtual ~NiceLeaderHeartbeatDescriptor();

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

Register_ClassDescriptor(NiceLeaderHeartbeatDescriptor);

NiceLeaderHeartbeatDescriptor::NiceLeaderHeartbeatDescriptor() : cClassDescriptor("NiceLeaderHeartbeat", "NiceHeartbeat")
{
}

NiceLeaderHeartbeatDescriptor::~NiceLeaderHeartbeatDescriptor()
{
}

bool NiceLeaderHeartbeatDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceLeaderHeartbeat *>(obj)!=NULL;
}

const char *NiceLeaderHeartbeatDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceLeaderHeartbeatDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int NiceLeaderHeartbeatDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *NiceLeaderHeartbeatDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "supercluster_leader",
        "supercluster_members",
        "k",
        "sc_tolerance",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int NiceLeaderHeartbeatDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "supercluster_leader")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "supercluster_members")==0) return base+1;
    if (fieldName[0]=='k' && strcmp(fieldName, "k")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "sc_tolerance")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceLeaderHeartbeatDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
        "TransportAddress",
        "unsigned int",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *NiceLeaderHeartbeatDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceLeaderHeartbeatDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 1: return pp->getSupercluster_membersArraySize();
        default: return 0;
    }
}

std::string NiceLeaderHeartbeatDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSupercluster_leader(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSupercluster_members(i); return out.str();}
        case 2: return ulong2string(pp->getK());
        case 3: return ulong2string(pp->getSc_tolerance());
        default: return "";
    }
}

bool NiceLeaderHeartbeatDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 2: pp->setK(string2ulong(value)); return true;
        case 3: pp->setSc_tolerance(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NiceLeaderHeartbeatDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "TransportAddress",
        "TransportAddress",
        NULL,
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *NiceLeaderHeartbeatDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceLeaderHeartbeat *pp = (NiceLeaderHeartbeat *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSupercluster_leader()); break;
        case 1: return (void *)(&pp->getSupercluster_members(i)); break;
        default: return NULL;
    }
}

Register_Class(NiceMulticastMessage);

NiceMulticastMessage::NiceMulticastMessage(const char *name, int kind) : NiceMessage(name,kind)
{
    this->sendTime_var = 0;
    this->seqNo_var = 0;
    this->hopCount_var = 0;
}

NiceMulticastMessage::NiceMulticastMessage(const NiceMulticastMessage& other) : NiceMessage(other)
{
    copy(other);
}

NiceMulticastMessage::~NiceMulticastMessage()
{
}

NiceMulticastMessage& NiceMulticastMessage::operator=(const NiceMulticastMessage& other)
{
    if (this==&other) return *this;
    NiceMessage::operator=(other);
    copy(other);
    return *this;
}

void NiceMulticastMessage::copy(const NiceMulticastMessage& other)
{
    this->lastHop_var = other.lastHop_var;
    this->sendTime_var = other.sendTime_var;
    this->seqNo_var = other.seqNo_var;
    this->hopCount_var = other.hopCount_var;
}

void NiceMulticastMessage::parsimPack(cCommBuffer *b)
{
    NiceMessage::parsimPack(b);
    doPacking(b,this->lastHop_var);
    doPacking(b,this->sendTime_var);
    doPacking(b,this->seqNo_var);
    doPacking(b,this->hopCount_var);
}

void NiceMulticastMessage::parsimUnpack(cCommBuffer *b)
{
    NiceMessage::parsimUnpack(b);
    doUnpacking(b,this->lastHop_var);
    doUnpacking(b,this->sendTime_var);
    doUnpacking(b,this->seqNo_var);
    doUnpacking(b,this->hopCount_var);
}

TransportAddress& NiceMulticastMessage::getLastHop()
{
    return lastHop_var;
}

void NiceMulticastMessage::setLastHop(const TransportAddress& lastHop)
{
    this->lastHop_var = lastHop;
}

double NiceMulticastMessage::getSendTime() const
{
    return sendTime_var;
}

void NiceMulticastMessage::setSendTime(double sendTime)
{
    this->sendTime_var = sendTime;
}

unsigned int NiceMulticastMessage::getSeqNo() const
{
    return seqNo_var;
}

void NiceMulticastMessage::setSeqNo(unsigned int seqNo)
{
    this->seqNo_var = seqNo;
}

unsigned int NiceMulticastMessage::getHopCount() const
{
    return hopCount_var;
}

void NiceMulticastMessage::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

class NiceMulticastMessageDescriptor : public cClassDescriptor
{
  public:
    NiceMulticastMessageDescriptor();
    virtual ~NiceMulticastMessageDescriptor();

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

Register_ClassDescriptor(NiceMulticastMessageDescriptor);

NiceMulticastMessageDescriptor::NiceMulticastMessageDescriptor() : cClassDescriptor("NiceMulticastMessage", "NiceMessage")
{
}

NiceMulticastMessageDescriptor::~NiceMulticastMessageDescriptor()
{
}

bool NiceMulticastMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceMulticastMessage *>(obj)!=NULL;
}

const char *NiceMulticastMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceMulticastMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int NiceMulticastMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *NiceMulticastMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "lastHop",
        "sendTime",
        "seqNo",
        "hopCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int NiceMulticastMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastHop")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendTime")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNo")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceMulticastMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TransportAddress",
        "double",
        "unsigned int",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *NiceMulticastMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceMulticastMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceMulticastMessage *pp = (NiceMulticastMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NiceMulticastMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMulticastMessage *pp = (NiceMulticastMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLastHop(); return out.str();}
        case 1: return double2string(pp->getSendTime());
        case 2: return ulong2string(pp->getSeqNo());
        case 3: return ulong2string(pp->getHopCount());
        default: return "";
    }
}

bool NiceMulticastMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceMulticastMessage *pp = (NiceMulticastMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setSendTime(string2double(value)); return true;
        case 2: pp->setSeqNo(string2ulong(value)); return true;
        case 3: pp->setHopCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NiceMulticastMessageDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *NiceMulticastMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceMulticastMessage *pp = (NiceMulticastMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLastHop()); break;
        default: return NULL;
    }
}


