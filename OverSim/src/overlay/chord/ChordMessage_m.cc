//
// Generated file, do not edit! Created by opp_msgc 4.3 from overlay/chord/ChordMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ChordMessage_m.h"

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
    cEnum *e = cEnum::find("ChordCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("ChordCommand"));
    e->insert(NEWSUCCESSORHINT, "NEWSUCCESSORHINT");
);

Register_Class(ChordMessage);

ChordMessage::ChordMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
}

ChordMessage::ChordMessage(const ChordMessage& other) : BaseOverlayMessage(other)
{
    copy(other);
}

ChordMessage::~ChordMessage()
{
}

ChordMessage& ChordMessage::operator=(const ChordMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    copy(other);
    return *this;
}

void ChordMessage::copy(const ChordMessage& other)
{
    this->command_var = other.command_var;
}

void ChordMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
}

void ChordMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
}

int ChordMessage::getCommand() const
{
    return command_var;
}

void ChordMessage::setCommand(int command)
{
    this->command_var = command;
}

class ChordMessageDescriptor : public cClassDescriptor
{
  public:
    ChordMessageDescriptor();
    virtual ~ChordMessageDescriptor();

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

Register_ClassDescriptor(ChordMessageDescriptor);

ChordMessageDescriptor::ChordMessageDescriptor() : cClassDescriptor("ChordMessage", "BaseOverlayMessage")
{
}

ChordMessageDescriptor::~ChordMessageDescriptor()
{
}

bool ChordMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ChordMessage *>(obj)!=NULL;
}

const char *ChordMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ChordMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ChordMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ChordMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ChordMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ChordMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ChordMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "ChordCommand";
            return NULL;
        default: return NULL;
    }
}

int ChordMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ChordMessage *pp = (ChordMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ChordMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ChordMessage *pp = (ChordMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        default: return "";
    }
}

bool ChordMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ChordMessage *pp = (ChordMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *ChordMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ChordMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ChordMessage *pp = (ChordMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NewSuccessorHintMessage);

NewSuccessorHintMessage::NewSuccessorHintMessage(const char *name, int kind) : ChordMessage(name,kind)
{
}

NewSuccessorHintMessage::NewSuccessorHintMessage(const NewSuccessorHintMessage& other) : ChordMessage(other)
{
    copy(other);
}

NewSuccessorHintMessage::~NewSuccessorHintMessage()
{
}

NewSuccessorHintMessage& NewSuccessorHintMessage::operator=(const NewSuccessorHintMessage& other)
{
    if (this==&other) return *this;
    ChordMessage::operator=(other);
    copy(other);
    return *this;
}

void NewSuccessorHintMessage::copy(const NewSuccessorHintMessage& other)
{
    this->srcNode_var = other.srcNode_var;
    this->preNode_var = other.preNode_var;
}

void NewSuccessorHintMessage::parsimPack(cCommBuffer *b)
{
    ChordMessage::parsimPack(b);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->preNode_var);
}

void NewSuccessorHintMessage::parsimUnpack(cCommBuffer *b)
{
    ChordMessage::parsimUnpack(b);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->preNode_var);
}

NodeHandle& NewSuccessorHintMessage::getSrcNode()
{
    return srcNode_var;
}

void NewSuccessorHintMessage::setSrcNode(const NodeHandle& srcNode)
{
    this->srcNode_var = srcNode;
}

NodeHandle& NewSuccessorHintMessage::getPreNode()
{
    return preNode_var;
}

void NewSuccessorHintMessage::setPreNode(const NodeHandle& preNode)
{
    this->preNode_var = preNode;
}

class NewSuccessorHintMessageDescriptor : public cClassDescriptor
{
  public:
    NewSuccessorHintMessageDescriptor();
    virtual ~NewSuccessorHintMessageDescriptor();

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

Register_ClassDescriptor(NewSuccessorHintMessageDescriptor);

NewSuccessorHintMessageDescriptor::NewSuccessorHintMessageDescriptor() : cClassDescriptor("NewSuccessorHintMessage", "ChordMessage")
{
}

NewSuccessorHintMessageDescriptor::~NewSuccessorHintMessageDescriptor()
{
}

bool NewSuccessorHintMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NewSuccessorHintMessage *>(obj)!=NULL;
}

const char *NewSuccessorHintMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NewSuccessorHintMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int NewSuccessorHintMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NewSuccessorHintMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcNode",
        "preNode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int NewSuccessorHintMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcNode")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "preNode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NewSuccessorHintMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "NodeHandle",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *NewSuccessorHintMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NewSuccessorHintMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NewSuccessorHintMessage *pp = (NewSuccessorHintMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NewSuccessorHintMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NewSuccessorHintMessage *pp = (NewSuccessorHintMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcNode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPreNode(); return out.str();}
        default: return "";
    }
}

bool NewSuccessorHintMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NewSuccessorHintMessage *pp = (NewSuccessorHintMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NewSuccessorHintMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "NodeHandle",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *NewSuccessorHintMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NewSuccessorHintMessage *pp = (NewSuccessorHintMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcNode()); break;
        case 1: return (void *)(&pp->getPreNode()); break;
        default: return NULL;
    }
}

Register_Class(NotifyCall);

NotifyCall::NotifyCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->failed_var = TransportAddress::UNSPECIFIED_NODE;
}

NotifyCall::NotifyCall(const NotifyCall& other) : BaseCallMessage(other)
{
    copy(other);
}

NotifyCall::~NotifyCall()
{
}

NotifyCall& NotifyCall::operator=(const NotifyCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void NotifyCall::copy(const NotifyCall& other)
{
    this->failed_var = other.failed_var;
}

void NotifyCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->failed_var);
}

void NotifyCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->failed_var);
}

TransportAddress& NotifyCall::getFailed()
{
    return failed_var;
}

void NotifyCall::setFailed(const TransportAddress& failed)
{
    this->failed_var = failed;
}

class NotifyCallDescriptor : public cClassDescriptor
{
  public:
    NotifyCallDescriptor();
    virtual ~NotifyCallDescriptor();

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

Register_ClassDescriptor(NotifyCallDescriptor);

NotifyCallDescriptor::NotifyCallDescriptor() : cClassDescriptor("NotifyCall", "BaseCallMessage")
{
}

NotifyCallDescriptor::~NotifyCallDescriptor()
{
}

bool NotifyCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NotifyCall *>(obj)!=NULL;
}

const char *NotifyCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NotifyCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NotifyCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NotifyCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "failed",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int NotifyCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "failed")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NotifyCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *NotifyCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NotifyCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NotifyCall *pp = (NotifyCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NotifyCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NotifyCall *pp = (NotifyCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getFailed(); return out.str();}
        default: return "";
    }
}

bool NotifyCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NotifyCall *pp = (NotifyCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NotifyCallDescriptor::getFieldStructName(void *object, int field) const
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

void *NotifyCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NotifyCall *pp = (NotifyCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getFailed()); break;
        default: return NULL;
    }
}

Register_Class(NotifyResponse);

NotifyResponse::NotifyResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->sucNum_var = 0;
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
    this->preNodeSet_var = 0;
}

NotifyResponse::NotifyResponse(const NotifyResponse& other) : BaseResponseMessage(other)
{
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
    copy(other);
}

NotifyResponse::~NotifyResponse()
{
    delete [] sucNode_var;
}

NotifyResponse& NotifyResponse::operator=(const NotifyResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void NotifyResponse::copy(const NotifyResponse& other)
{
    this->sucNum_var = other.sucNum_var;
    delete [] this->sucNode_var;
    this->sucNode_var = (other.sucNode_arraysize==0) ? NULL : new NodeHandle[other.sucNode_arraysize];
    sucNode_arraysize = other.sucNode_arraysize;
    for (unsigned int i=0; i<sucNode_arraysize; i++)
        this->sucNode_var[i] = other.sucNode_var[i];
    this->preNode_var = other.preNode_var;
    this->preNodeSet_var = other.preNodeSet_var;
}

void NotifyResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->sucNum_var);
    b->pack(sucNode_arraysize);
    doPacking(b,this->sucNode_var,sucNode_arraysize);
    doPacking(b,this->preNode_var);
    doPacking(b,this->preNodeSet_var);
}

void NotifyResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->sucNum_var);
    delete [] this->sucNode_var;
    b->unpack(sucNode_arraysize);
    if (sucNode_arraysize==0) {
        this->sucNode_var = 0;
    } else {
        this->sucNode_var = new NodeHandle[sucNode_arraysize];
        doUnpacking(b,this->sucNode_var,sucNode_arraysize);
    }
    doUnpacking(b,this->preNode_var);
    doUnpacking(b,this->preNodeSet_var);
}

int NotifyResponse::getSucNum() const
{
    return sucNum_var;
}

void NotifyResponse::setSucNum(int sucNum)
{
    this->sucNum_var = sucNum;
}

void NotifyResponse::setSucNodeArraySize(unsigned int size)
{
    NodeHandle *sucNode_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = sucNode_arraysize < size ? sucNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sucNode_var2[i] = this->sucNode_var[i];
    sucNode_arraysize = size;
    delete [] this->sucNode_var;
    this->sucNode_var = sucNode_var2;
}

unsigned int NotifyResponse::getSucNodeArraySize() const
{
    return sucNode_arraysize;
}

NodeHandle& NotifyResponse::getSucNode(unsigned int k)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    return sucNode_var[k];
}

void NotifyResponse::setSucNode(unsigned int k, const NodeHandle& sucNode)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    this->sucNode_var[k] = sucNode;
}

NodeHandle& NotifyResponse::getPreNode()
{
    return preNode_var;
}

void NotifyResponse::setPreNode(const NodeHandle& preNode)
{
    this->preNode_var = preNode;
}

bool NotifyResponse::getPreNodeSet() const
{
    return preNodeSet_var;
}

void NotifyResponse::setPreNodeSet(bool preNodeSet)
{
    this->preNodeSet_var = preNodeSet;
}

class NotifyResponseDescriptor : public cClassDescriptor
{
  public:
    NotifyResponseDescriptor();
    virtual ~NotifyResponseDescriptor();

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

Register_ClassDescriptor(NotifyResponseDescriptor);

NotifyResponseDescriptor::NotifyResponseDescriptor() : cClassDescriptor("NotifyResponse", "BaseResponseMessage")
{
}

NotifyResponseDescriptor::~NotifyResponseDescriptor()
{
}

bool NotifyResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NotifyResponse *>(obj)!=NULL;
}

const char *NotifyResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NotifyResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int NotifyResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *NotifyResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sucNum",
        "sucNode",
        "preNode",
        "preNodeSet",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int NotifyResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNum")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNode")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "preNode")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "preNodeSet")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NotifyResponseDescriptor::getFieldTypeString(void *object, int field) const
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
        "bool",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *NotifyResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NotifyResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NotifyResponse *pp = (NotifyResponse *)object; (void)pp;
    switch (field) {
        case 1: return pp->getSucNodeArraySize();
        default: return 0;
    }
}

std::string NotifyResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NotifyResponse *pp = (NotifyResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSucNum());
        case 1: {std::stringstream out; out << pp->getSucNode(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getPreNode(); return out.str();}
        case 3: return bool2string(pp->getPreNodeSet());
        default: return "";
    }
}

bool NotifyResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NotifyResponse *pp = (NotifyResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSucNum(string2long(value)); return true;
        case 3: pp->setPreNodeSet(string2bool(value)); return true;
        default: return false;
    }
}

const char *NotifyResponseDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *NotifyResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NotifyResponse *pp = (NotifyResponse *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSucNode(i)); break;
        case 2: return (void *)(&pp->getPreNode()); break;
        default: return NULL;
    }
}

Register_Class(JoinCall);

JoinCall::JoinCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

JoinCall::JoinCall(const JoinCall& other) : BaseCallMessage(other)
{
    copy(other);
}

JoinCall::~JoinCall()
{
}

JoinCall& JoinCall::operator=(const JoinCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void JoinCall::copy(const JoinCall& other)
{
}

void JoinCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void JoinCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class JoinCallDescriptor : public cClassDescriptor
{
  public:
    JoinCallDescriptor();
    virtual ~JoinCallDescriptor();

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

Register_ClassDescriptor(JoinCallDescriptor);

JoinCallDescriptor::JoinCallDescriptor() : cClassDescriptor("JoinCall", "BaseCallMessage")
{
}

JoinCallDescriptor::~JoinCallDescriptor()
{
}

bool JoinCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<JoinCall *>(obj)!=NULL;
}

const char *JoinCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int JoinCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int JoinCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *JoinCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int JoinCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *JoinCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *JoinCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int JoinCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    JoinCall *pp = (JoinCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string JoinCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    JoinCall *pp = (JoinCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool JoinCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    JoinCall *pp = (JoinCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *JoinCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *JoinCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    JoinCall *pp = (JoinCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(JoinResponse);

JoinResponse::JoinResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->sucNum_var = 0;
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
}

JoinResponse::JoinResponse(const JoinResponse& other) : BaseResponseMessage(other)
{
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
    copy(other);
}

JoinResponse::~JoinResponse()
{
    delete [] sucNode_var;
}

JoinResponse& JoinResponse::operator=(const JoinResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void JoinResponse::copy(const JoinResponse& other)
{
    this->sucNum_var = other.sucNum_var;
    delete [] this->sucNode_var;
    this->sucNode_var = (other.sucNode_arraysize==0) ? NULL : new NodeHandle[other.sucNode_arraysize];
    sucNode_arraysize = other.sucNode_arraysize;
    for (unsigned int i=0; i<sucNode_arraysize; i++)
        this->sucNode_var[i] = other.sucNode_var[i];
    this->preNode_var = other.preNode_var;
}

void JoinResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->sucNum_var);
    b->pack(sucNode_arraysize);
    doPacking(b,this->sucNode_var,sucNode_arraysize);
    doPacking(b,this->preNode_var);
}

void JoinResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->sucNum_var);
    delete [] this->sucNode_var;
    b->unpack(sucNode_arraysize);
    if (sucNode_arraysize==0) {
        this->sucNode_var = 0;
    } else {
        this->sucNode_var = new NodeHandle[sucNode_arraysize];
        doUnpacking(b,this->sucNode_var,sucNode_arraysize);
    }
    doUnpacking(b,this->preNode_var);
}

int JoinResponse::getSucNum() const
{
    return sucNum_var;
}

void JoinResponse::setSucNum(int sucNum)
{
    this->sucNum_var = sucNum;
}

void JoinResponse::setSucNodeArraySize(unsigned int size)
{
    NodeHandle *sucNode_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = sucNode_arraysize < size ? sucNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sucNode_var2[i] = this->sucNode_var[i];
    sucNode_arraysize = size;
    delete [] this->sucNode_var;
    this->sucNode_var = sucNode_var2;
}

unsigned int JoinResponse::getSucNodeArraySize() const
{
    return sucNode_arraysize;
}

NodeHandle& JoinResponse::getSucNode(unsigned int k)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    return sucNode_var[k];
}

void JoinResponse::setSucNode(unsigned int k, const NodeHandle& sucNode)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    this->sucNode_var[k] = sucNode;
}

NodeHandle& JoinResponse::getPreNode()
{
    return preNode_var;
}

void JoinResponse::setPreNode(const NodeHandle& preNode)
{
    this->preNode_var = preNode;
}

class JoinResponseDescriptor : public cClassDescriptor
{
  public:
    JoinResponseDescriptor();
    virtual ~JoinResponseDescriptor();

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

Register_ClassDescriptor(JoinResponseDescriptor);

JoinResponseDescriptor::JoinResponseDescriptor() : cClassDescriptor("JoinResponse", "BaseResponseMessage")
{
}

JoinResponseDescriptor::~JoinResponseDescriptor()
{
}

bool JoinResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<JoinResponse *>(obj)!=NULL;
}

const char *JoinResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int JoinResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int JoinResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *JoinResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sucNum",
        "sucNode",
        "preNode",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int JoinResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNum")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNode")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "preNode")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *JoinResponseDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *JoinResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int JoinResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    JoinResponse *pp = (JoinResponse *)object; (void)pp;
    switch (field) {
        case 1: return pp->getSucNodeArraySize();
        default: return 0;
    }
}

std::string JoinResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    JoinResponse *pp = (JoinResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSucNum());
        case 1: {std::stringstream out; out << pp->getSucNode(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getPreNode(); return out.str();}
        default: return "";
    }
}

bool JoinResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    JoinResponse *pp = (JoinResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSucNum(string2long(value)); return true;
        default: return false;
    }
}

const char *JoinResponseDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *JoinResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    JoinResponse *pp = (JoinResponse *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSucNode(i)); break;
        case 2: return (void *)(&pp->getPreNode()); break;
        default: return NULL;
    }
}

Register_Class(StabilizeCall);

StabilizeCall::StabilizeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

StabilizeCall::StabilizeCall(const StabilizeCall& other) : BaseCallMessage(other)
{
    copy(other);
}

StabilizeCall::~StabilizeCall()
{
}

StabilizeCall& StabilizeCall::operator=(const StabilizeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void StabilizeCall::copy(const StabilizeCall& other)
{
}

void StabilizeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void StabilizeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class StabilizeCallDescriptor : public cClassDescriptor
{
  public:
    StabilizeCallDescriptor();
    virtual ~StabilizeCallDescriptor();

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

Register_ClassDescriptor(StabilizeCallDescriptor);

StabilizeCallDescriptor::StabilizeCallDescriptor() : cClassDescriptor("StabilizeCall", "BaseCallMessage")
{
}

StabilizeCallDescriptor::~StabilizeCallDescriptor()
{
}

bool StabilizeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<StabilizeCall *>(obj)!=NULL;
}

const char *StabilizeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int StabilizeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int StabilizeCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *StabilizeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int StabilizeCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *StabilizeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *StabilizeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int StabilizeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeCall *pp = (StabilizeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string StabilizeCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeCall *pp = (StabilizeCall *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool StabilizeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeCall *pp = (StabilizeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *StabilizeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *StabilizeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeCall *pp = (StabilizeCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(StabilizeResponse);

StabilizeResponse::StabilizeResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

StabilizeResponse::StabilizeResponse(const StabilizeResponse& other) : BaseResponseMessage(other)
{
    copy(other);
}

StabilizeResponse::~StabilizeResponse()
{
}

StabilizeResponse& StabilizeResponse::operator=(const StabilizeResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void StabilizeResponse::copy(const StabilizeResponse& other)
{
    this->preNode_var = other.preNode_var;
}

void StabilizeResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->preNode_var);
}

void StabilizeResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->preNode_var);
}

NodeHandle& StabilizeResponse::getPreNode()
{
    return preNode_var;
}

void StabilizeResponse::setPreNode(const NodeHandle& preNode)
{
    this->preNode_var = preNode;
}

class StabilizeResponseDescriptor : public cClassDescriptor
{
  public:
    StabilizeResponseDescriptor();
    virtual ~StabilizeResponseDescriptor();

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

Register_ClassDescriptor(StabilizeResponseDescriptor);

StabilizeResponseDescriptor::StabilizeResponseDescriptor() : cClassDescriptor("StabilizeResponse", "BaseResponseMessage")
{
}

StabilizeResponseDescriptor::~StabilizeResponseDescriptor()
{
}

bool StabilizeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<StabilizeResponse *>(obj)!=NULL;
}

const char *StabilizeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int StabilizeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int StabilizeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *StabilizeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "preNode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int StabilizeResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "preNode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *StabilizeResponseDescriptor::getFieldTypeString(void *object, int field) const
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

const char *StabilizeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int StabilizeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeResponse *pp = (StabilizeResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string StabilizeResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeResponse *pp = (StabilizeResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPreNode(); return out.str();}
        default: return "";
    }
}

bool StabilizeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeResponse *pp = (StabilizeResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *StabilizeResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *StabilizeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    StabilizeResponse *pp = (StabilizeResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPreNode()); break;
        default: return NULL;
    }
}

Register_Class(FixfingersCall);

FixfingersCall::FixfingersCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->finger_var = 0;
}

FixfingersCall::FixfingersCall(const FixfingersCall& other) : BaseCallMessage(other)
{
    copy(other);
}

FixfingersCall::~FixfingersCall()
{
}

FixfingersCall& FixfingersCall::operator=(const FixfingersCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void FixfingersCall::copy(const FixfingersCall& other)
{
    this->finger_var = other.finger_var;
}

void FixfingersCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->finger_var);
}

void FixfingersCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->finger_var);
}

int FixfingersCall::getFinger() const
{
    return finger_var;
}

void FixfingersCall::setFinger(int finger)
{
    this->finger_var = finger;
}

class FixfingersCallDescriptor : public cClassDescriptor
{
  public:
    FixfingersCallDescriptor();
    virtual ~FixfingersCallDescriptor();

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

Register_ClassDescriptor(FixfingersCallDescriptor);

FixfingersCallDescriptor::FixfingersCallDescriptor() : cClassDescriptor("FixfingersCall", "BaseCallMessage")
{
}

FixfingersCallDescriptor::~FixfingersCallDescriptor()
{
}

bool FixfingersCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FixfingersCall *>(obj)!=NULL;
}

const char *FixfingersCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FixfingersCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int FixfingersCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *FixfingersCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "finger",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int FixfingersCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "finger")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *FixfingersCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *FixfingersCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FixfingersCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersCall *pp = (FixfingersCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string FixfingersCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersCall *pp = (FixfingersCall *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getFinger());
        default: return "";
    }
}

bool FixfingersCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersCall *pp = (FixfingersCall *)object; (void)pp;
    switch (field) {
        case 0: pp->setFinger(string2long(value)); return true;
        default: return false;
    }
}

const char *FixfingersCallDescriptor::getFieldStructName(void *object, int field) const
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

void *FixfingersCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersCall *pp = (FixfingersCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(FixfingersResponse);

FixfingersResponse::FixfingersResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->finger_var = 0;
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
}

FixfingersResponse::FixfingersResponse(const FixfingersResponse& other) : BaseResponseMessage(other)
{
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
    copy(other);
}

FixfingersResponse::~FixfingersResponse()
{
    delete [] sucNode_var;
}

FixfingersResponse& FixfingersResponse::operator=(const FixfingersResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void FixfingersResponse::copy(const FixfingersResponse& other)
{
    this->finger_var = other.finger_var;
    delete [] this->sucNode_var;
    this->sucNode_var = (other.sucNode_arraysize==0) ? NULL : new NodeHandle[other.sucNode_arraysize];
    sucNode_arraysize = other.sucNode_arraysize;
    for (unsigned int i=0; i<sucNode_arraysize; i++)
        this->sucNode_var[i] = other.sucNode_var[i];
}

void FixfingersResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->finger_var);
    b->pack(sucNode_arraysize);
    doPacking(b,this->sucNode_var,sucNode_arraysize);
}

void FixfingersResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->finger_var);
    delete [] this->sucNode_var;
    b->unpack(sucNode_arraysize);
    if (sucNode_arraysize==0) {
        this->sucNode_var = 0;
    } else {
        this->sucNode_var = new NodeHandle[sucNode_arraysize];
        doUnpacking(b,this->sucNode_var,sucNode_arraysize);
    }
}

int FixfingersResponse::getFinger() const
{
    return finger_var;
}

void FixfingersResponse::setFinger(int finger)
{
    this->finger_var = finger;
}

void FixfingersResponse::setSucNodeArraySize(unsigned int size)
{
    NodeHandle *sucNode_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = sucNode_arraysize < size ? sucNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sucNode_var2[i] = this->sucNode_var[i];
    sucNode_arraysize = size;
    delete [] this->sucNode_var;
    this->sucNode_var = sucNode_var2;
}

unsigned int FixfingersResponse::getSucNodeArraySize() const
{
    return sucNode_arraysize;
}

NodeHandle& FixfingersResponse::getSucNode(unsigned int k)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    return sucNode_var[k];
}

void FixfingersResponse::setSucNode(unsigned int k, const NodeHandle& sucNode)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    this->sucNode_var[k] = sucNode;
}

class FixfingersResponseDescriptor : public cClassDescriptor
{
  public:
    FixfingersResponseDescriptor();
    virtual ~FixfingersResponseDescriptor();

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

Register_ClassDescriptor(FixfingersResponseDescriptor);

FixfingersResponseDescriptor::FixfingersResponseDescriptor() : cClassDescriptor("FixfingersResponse", "BaseResponseMessage")
{
}

FixfingersResponseDescriptor::~FixfingersResponseDescriptor()
{
}

bool FixfingersResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FixfingersResponse *>(obj)!=NULL;
}

const char *FixfingersResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FixfingersResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int FixfingersResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *FixfingersResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "finger",
        "sucNode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int FixfingersResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "finger")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *FixfingersResponseDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *FixfingersResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FixfingersResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersResponse *pp = (FixfingersResponse *)object; (void)pp;
    switch (field) {
        case 1: return pp->getSucNodeArraySize();
        default: return 0;
    }
}

std::string FixfingersResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersResponse *pp = (FixfingersResponse *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getFinger());
        case 1: {std::stringstream out; out << pp->getSucNode(i); return out.str();}
        default: return "";
    }
}

bool FixfingersResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersResponse *pp = (FixfingersResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setFinger(string2long(value)); return true;
        default: return false;
    }
}

const char *FixfingersResponseDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *FixfingersResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FixfingersResponse *pp = (FixfingersResponse *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSucNode(i)); break;
        default: return NULL;
    }
}

Register_Class(KoordeFindNodeExtMessage);

KoordeFindNodeExtMessage::KoordeFindNodeExtMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->step_var = 0;
}

KoordeFindNodeExtMessage::KoordeFindNodeExtMessage(const KoordeFindNodeExtMessage& other) : cPacket(other)
{
    copy(other);
}

KoordeFindNodeExtMessage::~KoordeFindNodeExtMessage()
{
}

KoordeFindNodeExtMessage& KoordeFindNodeExtMessage::operator=(const KoordeFindNodeExtMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void KoordeFindNodeExtMessage::copy(const KoordeFindNodeExtMessage& other)
{
    this->routeKey_var = other.routeKey_var;
    this->step_var = other.step_var;
}

void KoordeFindNodeExtMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->routeKey_var);
    doPacking(b,this->step_var);
}

void KoordeFindNodeExtMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->routeKey_var);
    doUnpacking(b,this->step_var);
}

OverlayKey& KoordeFindNodeExtMessage::getRouteKey()
{
    return routeKey_var;
}

void KoordeFindNodeExtMessage::setRouteKey(const OverlayKey& routeKey)
{
    this->routeKey_var = routeKey;
}

int KoordeFindNodeExtMessage::getStep() const
{
    return step_var;
}

void KoordeFindNodeExtMessage::setStep(int step)
{
    this->step_var = step;
}

class KoordeFindNodeExtMessageDescriptor : public cClassDescriptor
{
  public:
    KoordeFindNodeExtMessageDescriptor();
    virtual ~KoordeFindNodeExtMessageDescriptor();

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

Register_ClassDescriptor(KoordeFindNodeExtMessageDescriptor);

KoordeFindNodeExtMessageDescriptor::KoordeFindNodeExtMessageDescriptor() : cClassDescriptor("KoordeFindNodeExtMessage", "cPacket")
{
}

KoordeFindNodeExtMessageDescriptor::~KoordeFindNodeExtMessageDescriptor()
{
}

bool KoordeFindNodeExtMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KoordeFindNodeExtMessage *>(obj)!=NULL;
}

const char *KoordeFindNodeExtMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KoordeFindNodeExtMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int KoordeFindNodeExtMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *KoordeFindNodeExtMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "routeKey",
        "step",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int KoordeFindNodeExtMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routeKey")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "step")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *KoordeFindNodeExtMessageDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *KoordeFindNodeExtMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KoordeFindNodeExtMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KoordeFindNodeExtMessage *pp = (KoordeFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string KoordeFindNodeExtMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    KoordeFindNodeExtMessage *pp = (KoordeFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRouteKey(); return out.str();}
        case 1: return long2string(pp->getStep());
        default: return "";
    }
}

bool KoordeFindNodeExtMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KoordeFindNodeExtMessage *pp = (KoordeFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setStep(string2long(value)); return true;
        default: return false;
    }
}

const char *KoordeFindNodeExtMessageDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *KoordeFindNodeExtMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KoordeFindNodeExtMessage *pp = (KoordeFindNodeExtMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRouteKey()); break;
        default: return NULL;
    }
}

Register_Class(DeBruijnCall);

DeBruijnCall::DeBruijnCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

DeBruijnCall::DeBruijnCall(const DeBruijnCall& other) : BaseCallMessage(other)
{
    copy(other);
}

DeBruijnCall::~DeBruijnCall()
{
}

DeBruijnCall& DeBruijnCall::operator=(const DeBruijnCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    copy(other);
    return *this;
}

void DeBruijnCall::copy(const DeBruijnCall& other)
{
    this->destKey_var = other.destKey_var;
}

void DeBruijnCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->destKey_var);
}

void DeBruijnCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->destKey_var);
}

OverlayKey& DeBruijnCall::getDestKey()
{
    return destKey_var;
}

void DeBruijnCall::setDestKey(const OverlayKey& destKey)
{
    this->destKey_var = destKey;
}

class DeBruijnCallDescriptor : public cClassDescriptor
{
  public:
    DeBruijnCallDescriptor();
    virtual ~DeBruijnCallDescriptor();

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

Register_ClassDescriptor(DeBruijnCallDescriptor);

DeBruijnCallDescriptor::DeBruijnCallDescriptor() : cClassDescriptor("DeBruijnCall", "BaseCallMessage")
{
}

DeBruijnCallDescriptor::~DeBruijnCallDescriptor()
{
}

bool DeBruijnCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DeBruijnCall *>(obj)!=NULL;
}

const char *DeBruijnCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DeBruijnCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DeBruijnCallDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DeBruijnCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destKey",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int DeBruijnCallDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destKey")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DeBruijnCallDescriptor::getFieldTypeString(void *object, int field) const
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

const char *DeBruijnCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DeBruijnCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnCall *pp = (DeBruijnCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DeBruijnCallDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnCall *pp = (DeBruijnCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); return out.str();}
        default: return "";
    }
}

bool DeBruijnCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnCall *pp = (DeBruijnCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *DeBruijnCallDescriptor::getFieldStructName(void *object, int field) const
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

void *DeBruijnCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnCall *pp = (DeBruijnCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        default: return NULL;
    }
}

Register_Class(DeBruijnResponse);

DeBruijnResponse::DeBruijnResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->sucNum_var = 0;
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
}

DeBruijnResponse::DeBruijnResponse(const DeBruijnResponse& other) : BaseResponseMessage(other)
{
    sucNode_arraysize = 0;
    this->sucNode_var = 0;
    copy(other);
}

DeBruijnResponse::~DeBruijnResponse()
{
    delete [] sucNode_var;
}

DeBruijnResponse& DeBruijnResponse::operator=(const DeBruijnResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    copy(other);
    return *this;
}

void DeBruijnResponse::copy(const DeBruijnResponse& other)
{
    this->dBNode_var = other.dBNode_var;
    this->sucNum_var = other.sucNum_var;
    delete [] this->sucNode_var;
    this->sucNode_var = (other.sucNode_arraysize==0) ? NULL : new NodeHandle[other.sucNode_arraysize];
    sucNode_arraysize = other.sucNode_arraysize;
    for (unsigned int i=0; i<sucNode_arraysize; i++)
        this->sucNode_var[i] = other.sucNode_var[i];
}

void DeBruijnResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->dBNode_var);
    doPacking(b,this->sucNum_var);
    b->pack(sucNode_arraysize);
    doPacking(b,this->sucNode_var,sucNode_arraysize);
}

void DeBruijnResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->dBNode_var);
    doUnpacking(b,this->sucNum_var);
    delete [] this->sucNode_var;
    b->unpack(sucNode_arraysize);
    if (sucNode_arraysize==0) {
        this->sucNode_var = 0;
    } else {
        this->sucNode_var = new NodeHandle[sucNode_arraysize];
        doUnpacking(b,this->sucNode_var,sucNode_arraysize);
    }
}

NodeHandle& DeBruijnResponse::getDBNode()
{
    return dBNode_var;
}

void DeBruijnResponse::setDBNode(const NodeHandle& dBNode)
{
    this->dBNode_var = dBNode;
}

int DeBruijnResponse::getSucNum() const
{
    return sucNum_var;
}

void DeBruijnResponse::setSucNum(int sucNum)
{
    this->sucNum_var = sucNum;
}

void DeBruijnResponse::setSucNodeArraySize(unsigned int size)
{
    NodeHandle *sucNode_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = sucNode_arraysize < size ? sucNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sucNode_var2[i] = this->sucNode_var[i];
    sucNode_arraysize = size;
    delete [] this->sucNode_var;
    this->sucNode_var = sucNode_var2;
}

unsigned int DeBruijnResponse::getSucNodeArraySize() const
{
    return sucNode_arraysize;
}

NodeHandle& DeBruijnResponse::getSucNode(unsigned int k)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    return sucNode_var[k];
}

void DeBruijnResponse::setSucNode(unsigned int k, const NodeHandle& sucNode)
{
    if (k>=sucNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sucNode_arraysize, k);
    this->sucNode_var[k] = sucNode;
}

class DeBruijnResponseDescriptor : public cClassDescriptor
{
  public:
    DeBruijnResponseDescriptor();
    virtual ~DeBruijnResponseDescriptor();

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

Register_ClassDescriptor(DeBruijnResponseDescriptor);

DeBruijnResponseDescriptor::DeBruijnResponseDescriptor() : cClassDescriptor("DeBruijnResponse", "BaseResponseMessage")
{
}

DeBruijnResponseDescriptor::~DeBruijnResponseDescriptor()
{
}

bool DeBruijnResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DeBruijnResponse *>(obj)!=NULL;
}

const char *DeBruijnResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DeBruijnResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DeBruijnResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DeBruijnResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dBNode",
        "sucNum",
        "sucNode",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int DeBruijnResponseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dBNode")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNum")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sucNode")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DeBruijnResponseDescriptor::getFieldTypeString(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *DeBruijnResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DeBruijnResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnResponse *pp = (DeBruijnResponse *)object; (void)pp;
    switch (field) {
        case 2: return pp->getSucNodeArraySize();
        default: return 0;
    }
}

std::string DeBruijnResponseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnResponse *pp = (DeBruijnResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDBNode(); return out.str();}
        case 1: return long2string(pp->getSucNum());
        case 2: {std::stringstream out; out << pp->getSucNode(i); return out.str();}
        default: return "";
    }
}

bool DeBruijnResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnResponse *pp = (DeBruijnResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setSucNum(string2long(value)); return true;
        default: return false;
    }
}

const char *DeBruijnResponseDescriptor::getFieldStructName(void *object, int field) const
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
        "NodeHandle",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *DeBruijnResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DeBruijnResponse *pp = (DeBruijnResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDBNode()); break;
        case 2: return (void *)(&pp->getSucNode(i)); break;
        default: return NULL;
    }
}


