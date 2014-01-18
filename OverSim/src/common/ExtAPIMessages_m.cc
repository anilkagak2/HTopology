//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/ExtAPIMessages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ExtAPIMessages_m.h"

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
    cEnum *e = cEnum::find("GIAAppCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("GIAAppCommand"));
    e->insert(GIA_PUT, "GIA_PUT");
    e->insert(GIA_SEARCH, "GIA_SEARCH");
    e->insert(GIA_ANSWER, "GIA_ANSWER");
);

Register_Class(GIASearchAppMessage);

GIASearchAppMessage::GIASearchAppMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->command_var = 0;
}

GIASearchAppMessage::GIASearchAppMessage(const GIASearchAppMessage& other) : cPacket(other)
{
    copy(other);
}

GIASearchAppMessage::~GIASearchAppMessage()
{
}

GIASearchAppMessage& GIASearchAppMessage::operator=(const GIASearchAppMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void GIASearchAppMessage::copy(const GIASearchAppMessage& other)
{
    this->command_var = other.command_var;
}

void GIASearchAppMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->command_var);
}

void GIASearchAppMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->command_var);
}

int GIASearchAppMessage::getCommand() const
{
    return command_var;
}

void GIASearchAppMessage::setCommand(int command)
{
    this->command_var = command;
}

class GIASearchAppMessageDescriptor : public cClassDescriptor
{
  public:
    GIASearchAppMessageDescriptor();
    virtual ~GIASearchAppMessageDescriptor();

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

Register_ClassDescriptor(GIASearchAppMessageDescriptor);

GIASearchAppMessageDescriptor::GIASearchAppMessageDescriptor() : cClassDescriptor("GIASearchAppMessage", "cPacket")
{
}

GIASearchAppMessageDescriptor::~GIASearchAppMessageDescriptor()
{
}

bool GIASearchAppMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GIASearchAppMessage *>(obj)!=NULL;
}

const char *GIASearchAppMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GIASearchAppMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GIASearchAppMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GIASearchAppMessageDescriptor::getFieldName(void *object, int field) const
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

int GIASearchAppMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GIASearchAppMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *GIASearchAppMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "GIAAppCommand";
            return NULL;
        default: return NULL;
    }
}

int GIASearchAppMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GIASearchAppMessage *pp = (GIASearchAppMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GIASearchAppMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GIASearchAppMessage *pp = (GIASearchAppMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        default: return "";
    }
}

bool GIASearchAppMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GIASearchAppMessage *pp = (GIASearchAppMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *GIASearchAppMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *GIASearchAppMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GIASearchAppMessage *pp = (GIASearchAppMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GIAput);

GIAput::GIAput(const char *name, int kind) : GIASearchAppMessage(name,kind)
{
    keys_arraysize = 0;
    this->keys_var = 0;
}

GIAput::GIAput(const GIAput& other) : GIASearchAppMessage(other)
{
    keys_arraysize = 0;
    this->keys_var = 0;
    copy(other);
}

GIAput::~GIAput()
{
    delete [] keys_var;
}

GIAput& GIAput::operator=(const GIAput& other)
{
    if (this==&other) return *this;
    GIASearchAppMessage::operator=(other);
    copy(other);
    return *this;
}

void GIAput::copy(const GIAput& other)
{
    delete [] this->keys_var;
    this->keys_var = (other.keys_arraysize==0) ? NULL : new OverlayKey[other.keys_arraysize];
    keys_arraysize = other.keys_arraysize;
    for (unsigned int i=0; i<keys_arraysize; i++)
        this->keys_var[i] = other.keys_var[i];
}

void GIAput::parsimPack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimPack(b);
    b->pack(keys_arraysize);
    doPacking(b,this->keys_var,keys_arraysize);
}

void GIAput::parsimUnpack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimUnpack(b);
    delete [] this->keys_var;
    b->unpack(keys_arraysize);
    if (keys_arraysize==0) {
        this->keys_var = 0;
    } else {
        this->keys_var = new OverlayKey[keys_arraysize];
        doUnpacking(b,this->keys_var,keys_arraysize);
    }
}

void GIAput::setKeysArraySize(unsigned int size)
{
    OverlayKey *keys_var2 = (size==0) ? NULL : new OverlayKey[size];
    unsigned int sz = keys_arraysize < size ? keys_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        keys_var2[i] = this->keys_var[i];
    keys_arraysize = size;
    delete [] this->keys_var;
    this->keys_var = keys_var2;
}

unsigned int GIAput::getKeysArraySize() const
{
    return keys_arraysize;
}

OverlayKey& GIAput::getKeys(unsigned int k)
{
    if (k>=keys_arraysize) throw cRuntimeError("Array of size %d indexed by %d", keys_arraysize, k);
    return keys_var[k];
}

void GIAput::setKeys(unsigned int k, const OverlayKey& keys)
{
    if (k>=keys_arraysize) throw cRuntimeError("Array of size %d indexed by %d", keys_arraysize, k);
    this->keys_var[k] = keys;
}

class GIAputDescriptor : public cClassDescriptor
{
  public:
    GIAputDescriptor();
    virtual ~GIAputDescriptor();

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

Register_ClassDescriptor(GIAputDescriptor);

GIAputDescriptor::GIAputDescriptor() : cClassDescriptor("GIAput", "GIASearchAppMessage")
{
}

GIAputDescriptor::~GIAputDescriptor()
{
}

bool GIAputDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GIAput *>(obj)!=NULL;
}

const char *GIAputDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GIAputDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GIAputDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GIAputDescriptor::getFieldName(void *object, int field) const
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

int GIAputDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "keys")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GIAputDescriptor::getFieldTypeString(void *object, int field) const
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

const char *GIAputDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GIAputDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GIAput *pp = (GIAput *)object; (void)pp;
    switch (field) {
        case 0: return pp->getKeysArraySize();
        default: return 0;
    }
}

std::string GIAputDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GIAput *pp = (GIAput *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKeys(i); return out.str();}
        default: return "";
    }
}

bool GIAputDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GIAput *pp = (GIAput *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GIAputDescriptor::getFieldStructName(void *object, int field) const
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

void *GIAputDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GIAput *pp = (GIAput *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKeys(i)); break;
        default: return NULL;
    }
}

Register_Class(GIAremove);

GIAremove::GIAremove(const char *name, int kind) : GIASearchAppMessage(name,kind)
{
}

GIAremove::GIAremove(const GIAremove& other) : GIASearchAppMessage(other)
{
    copy(other);
}

GIAremove::~GIAremove()
{
}

GIAremove& GIAremove::operator=(const GIAremove& other)
{
    if (this==&other) return *this;
    GIASearchAppMessage::operator=(other);
    copy(other);
    return *this;
}

void GIAremove::copy(const GIAremove& other)
{
}

void GIAremove::parsimPack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimPack(b);
}

void GIAremove::parsimUnpack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimUnpack(b);
}

class GIAremoveDescriptor : public cClassDescriptor
{
  public:
    GIAremoveDescriptor();
    virtual ~GIAremoveDescriptor();

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

Register_ClassDescriptor(GIAremoveDescriptor);

GIAremoveDescriptor::GIAremoveDescriptor() : cClassDescriptor("GIAremove", "GIASearchAppMessage")
{
}

GIAremoveDescriptor::~GIAremoveDescriptor()
{
}

bool GIAremoveDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GIAremove *>(obj)!=NULL;
}

const char *GIAremoveDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GIAremoveDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int GIAremoveDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *GIAremoveDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int GIAremoveDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GIAremoveDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *GIAremoveDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GIAremoveDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GIAremove *pp = (GIAremove *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GIAremoveDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GIAremove *pp = (GIAremove *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool GIAremoveDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GIAremove *pp = (GIAremove *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GIAremoveDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *GIAremoveDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GIAremove *pp = (GIAremove *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GIAsearch);

GIAsearch::GIAsearch(const char *name, int kind) : GIASearchAppMessage(name,kind)
{
    this->maxResponses_var = 0;
}

GIAsearch::GIAsearch(const GIAsearch& other) : GIASearchAppMessage(other)
{
    copy(other);
}

GIAsearch::~GIAsearch()
{
}

GIAsearch& GIAsearch::operator=(const GIAsearch& other)
{
    if (this==&other) return *this;
    GIASearchAppMessage::operator=(other);
    copy(other);
    return *this;
}

void GIAsearch::copy(const GIAsearch& other)
{
    this->searchKey_var = other.searchKey_var;
    this->maxResponses_var = other.maxResponses_var;
}

void GIAsearch::parsimPack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimPack(b);
    doPacking(b,this->searchKey_var);
    doPacking(b,this->maxResponses_var);
}

void GIAsearch::parsimUnpack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimUnpack(b);
    doUnpacking(b,this->searchKey_var);
    doUnpacking(b,this->maxResponses_var);
}

OverlayKey& GIAsearch::getSearchKey()
{
    return searchKey_var;
}

void GIAsearch::setSearchKey(const OverlayKey& searchKey)
{
    this->searchKey_var = searchKey;
}

int GIAsearch::getMaxResponses() const
{
    return maxResponses_var;
}

void GIAsearch::setMaxResponses(int maxResponses)
{
    this->maxResponses_var = maxResponses;
}

class GIAsearchDescriptor : public cClassDescriptor
{
  public:
    GIAsearchDescriptor();
    virtual ~GIAsearchDescriptor();

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

Register_ClassDescriptor(GIAsearchDescriptor);

GIAsearchDescriptor::GIAsearchDescriptor() : cClassDescriptor("GIAsearch", "GIASearchAppMessage")
{
}

GIAsearchDescriptor::~GIAsearchDescriptor()
{
}

bool GIAsearchDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GIAsearch *>(obj)!=NULL;
}

const char *GIAsearchDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GIAsearchDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int GIAsearchDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GIAsearchDescriptor::getFieldName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int GIAsearchDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "searchKey")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxResponses")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GIAsearchDescriptor::getFieldTypeString(void *object, int field) const
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

const char *GIAsearchDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GIAsearchDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GIAsearch *pp = (GIAsearch *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GIAsearchDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GIAsearch *pp = (GIAsearch *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSearchKey(); return out.str();}
        case 1: return long2string(pp->getMaxResponses());
        default: return "";
    }
}

bool GIAsearchDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GIAsearch *pp = (GIAsearch *)object; (void)pp;
    switch (field) {
        case 1: pp->setMaxResponses(string2long(value)); return true;
        default: return false;
    }
}

const char *GIAsearchDescriptor::getFieldStructName(void *object, int field) const
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

void *GIAsearchDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GIAsearch *pp = (GIAsearch *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSearchKey()); break;
        default: return NULL;
    }
}

Register_Class(GIAanswer);

GIAanswer::GIAanswer(const char *name, int kind) : GIASearchAppMessage(name,kind)
{
}

GIAanswer::GIAanswer(const GIAanswer& other) : GIASearchAppMessage(other)
{
    copy(other);
}

GIAanswer::~GIAanswer()
{
}

GIAanswer& GIAanswer::operator=(const GIAanswer& other)
{
    if (this==&other) return *this;
    GIASearchAppMessage::operator=(other);
    copy(other);
    return *this;
}

void GIAanswer::copy(const GIAanswer& other)
{
    this->searchKey_var = other.searchKey_var;
    this->node_var = other.node_var;
}

void GIAanswer::parsimPack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimPack(b);
    doPacking(b,this->searchKey_var);
    doPacking(b,this->node_var);
}

void GIAanswer::parsimUnpack(cCommBuffer *b)
{
    GIASearchAppMessage::parsimUnpack(b);
    doUnpacking(b,this->searchKey_var);
    doUnpacking(b,this->node_var);
}

OverlayKey& GIAanswer::getSearchKey()
{
    return searchKey_var;
}

void GIAanswer::setSearchKey(const OverlayKey& searchKey)
{
    this->searchKey_var = searchKey;
}

NodeHandle& GIAanswer::getNode()
{
    return node_var;
}

void GIAanswer::setNode(const NodeHandle& node)
{
    this->node_var = node;
}

class GIAanswerDescriptor : public cClassDescriptor
{
  public:
    GIAanswerDescriptor();
    virtual ~GIAanswerDescriptor();

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

Register_ClassDescriptor(GIAanswerDescriptor);

GIAanswerDescriptor::GIAanswerDescriptor() : cClassDescriptor("GIAanswer", "GIASearchAppMessage")
{
}

GIAanswerDescriptor::~GIAanswerDescriptor()
{
}

bool GIAanswerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GIAanswer *>(obj)!=NULL;
}

const char *GIAanswerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GIAanswerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int GIAanswerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GIAanswerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "searchKey",
        "node",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int GIAanswerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "searchKey")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "node")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GIAanswerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "OverlayKey",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *GIAanswerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GIAanswerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GIAanswer *pp = (GIAanswer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GIAanswerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GIAanswer *pp = (GIAanswer *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSearchKey(); return out.str();}
        case 1: {std::stringstream out; out << pp->getNode(); return out.str();}
        default: return "";
    }
}

bool GIAanswerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GIAanswer *pp = (GIAanswer *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GIAanswerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "OverlayKey",
        "NodeHandle",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *GIAanswerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GIAanswer *pp = (GIAanswer *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSearchKey()); break;
        case 1: return (void *)(&pp->getNode()); break;
        default: return NULL;
    }
}


