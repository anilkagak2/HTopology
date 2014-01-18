//
// Generated file, do not edit! Created by opp_msgc 4.3 from common/TreeManagementMessage.msg.
//

#ifndef _TREEMANAGEMENTMESSAGE_M_H_
#define _TREEMANAGEMENTMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include <vector>

#include <NodeHandle.h>
#include <TransportAddress.h>
#include <CommonMessages_m.h>

#include <CoordDataContainer.h>
#include <SimpleCoordDataContainer.h>
#include <RegionDataContainer.h>
#include <AreaDataContainer.h>


static const int NODECOUNT_L = 8;

#define TREETESTSTRATEGYCALL_L(msg) NODECOUNT_L

#define PARENTREQUESTCALL_L(msg) BASECALL_L(msg)
#define PARENTREQUESTRESPONSE_L(msg) BASERESPONSE_L(msg) 

#define CHILDRELEASECALL_L(msg) BASECALL_L(msg)
#define CHILDRELEASERESPONSE_L(msg) BASERESPONSE_L(msg)

#define CHILDCHECKCALL_L(msg) BASECALL_L(msg)
#define CHILDCHECKRESPONSE_L(msg) BASERESPONSE_L(msg)

#define TREEAPPCALL_L(msg) BASECALL_L(msg)
#define TREEAPPRESPONSE_L(msg) BASERESPONSE_L(msg)

#define GLOBALVIEWBUILDERCALL_L(msg) TREEAPPCALL_L(msg)
#define GLOBALVIEWBUILDERRESPONSE_L(msg) TREEAPPRESPONSE_L(msg)

#define SENDCOORDINATESCALL_L(msg) (GLOBALVIEWBUILDERCALL_L(msg) + msg->getCoordData().getBitLength()) 
#define SENDALLSTRATEGYCALL_L(msg) SENDCOORDINATESCALL_L(msg)
#define REMOVERANDOMSTRATEGYCALL_L(msg) SENDCOORDINATESCALL_L(msg)
#define REGIONSSTRATEGYCALL_L(msg) (GLOBALVIEWBUILDERCALL_L(msg) + msg->getRegionData().getBitLength())
#define SIMPLECOORDSTRATEGYCALL_L(msg) (GLOBALVIEWBUILDERCALL_L(msg) + msg->getCoordData().getBitLength())
// }}



/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ParentRequestCall extends BaseCallMessage 
 * {
 *     OverlayKey domainKey;
 * }
 * </pre>
 */
class ParentRequestCall : public ::BaseCallMessage
{
  protected:
    OverlayKey domainKey_var;

  private:
    void copy(const ParentRequestCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ParentRequestCall&);

  public:
    ParentRequestCall(const char *name=NULL, int kind=0);
    ParentRequestCall(const ParentRequestCall& other);
    virtual ~ParentRequestCall();
    ParentRequestCall& operator=(const ParentRequestCall& other);
    virtual ParentRequestCall *dup() const {return new ParentRequestCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OverlayKey& getDomainKey();
    virtual const OverlayKey& getDomainKey() const {return const_cast<ParentRequestCall*>(this)->getDomainKey();}
    virtual void setDomainKey(const OverlayKey& domainKey);
};

inline void doPacking(cCommBuffer *b, ParentRequestCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ParentRequestCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ParentRequestResponse extends BaseResponseMessage 
 * {
 * }
 * </pre>
 */
class ParentRequestResponse : public ::BaseResponseMessage
{
  protected:

  private:
    void copy(const ParentRequestResponse& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ParentRequestResponse&);

  public:
    ParentRequestResponse(const char *name=NULL, int kind=0);
    ParentRequestResponse(const ParentRequestResponse& other);
    virtual ~ParentRequestResponse();
    ParentRequestResponse& operator=(const ParentRequestResponse& other);
    virtual ParentRequestResponse *dup() const {return new ParentRequestResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, ParentRequestResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ParentRequestResponse& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet TreeAppCall extends BaseCallMessage
 * {
 * }
 * </pre>
 */
class TreeAppCall : public ::BaseCallMessage
{
  protected:

  private:
    void copy(const TreeAppCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TreeAppCall&);

  public:
    TreeAppCall(const char *name=NULL, int kind=0);
    TreeAppCall(const TreeAppCall& other);
    virtual ~TreeAppCall();
    TreeAppCall& operator=(const TreeAppCall& other);
    virtual TreeAppCall *dup() const {return new TreeAppCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, TreeAppCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TreeAppCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet TreeAppResponse extends BaseResponseMessage
 * {
 * }
 * </pre>
 */
class TreeAppResponse : public ::BaseResponseMessage
{
  protected:

  private:
    void copy(const TreeAppResponse& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TreeAppResponse&);

  public:
    TreeAppResponse(const char *name=NULL, int kind=0);
    TreeAppResponse(const TreeAppResponse& other);
    virtual ~TreeAppResponse();
    TreeAppResponse& operator=(const TreeAppResponse& other);
    virtual TreeAppResponse *dup() const {return new TreeAppResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, TreeAppResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TreeAppResponse& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet GlobalViewBuilderCall extends TreeAppCall 
 * {
 * }
 * </pre>
 */
class GlobalViewBuilderCall : public ::TreeAppCall
{
  protected:

  private:
    void copy(const GlobalViewBuilderCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GlobalViewBuilderCall&);

  public:
    GlobalViewBuilderCall(const char *name=NULL, int kind=0);
    GlobalViewBuilderCall(const GlobalViewBuilderCall& other);
    virtual ~GlobalViewBuilderCall();
    GlobalViewBuilderCall& operator=(const GlobalViewBuilderCall& other);
    virtual GlobalViewBuilderCall *dup() const {return new GlobalViewBuilderCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, GlobalViewBuilderCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GlobalViewBuilderCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet GlobalViewBuilderResponse extends TreeAppResponse
 * {
 * }
 * </pre>
 */
class GlobalViewBuilderResponse : public ::TreeAppResponse
{
  protected:

  private:
    void copy(const GlobalViewBuilderResponse& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GlobalViewBuilderResponse&);

  public:
    GlobalViewBuilderResponse(const char *name=NULL, int kind=0);
    GlobalViewBuilderResponse(const GlobalViewBuilderResponse& other);
    virtual ~GlobalViewBuilderResponse();
    GlobalViewBuilderResponse& operator=(const GlobalViewBuilderResponse& other);
    virtual GlobalViewBuilderResponse *dup() const {return new GlobalViewBuilderResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, GlobalViewBuilderResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GlobalViewBuilderResponse& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ChildReleaseCall extends BaseCallMessage 
 * {
 *     
 * }
 * </pre>
 */
class ChildReleaseCall : public ::BaseCallMessage
{
  protected:

  private:
    void copy(const ChildReleaseCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ChildReleaseCall&);

  public:
    ChildReleaseCall(const char *name=NULL, int kind=0);
    ChildReleaseCall(const ChildReleaseCall& other);
    virtual ~ChildReleaseCall();
    ChildReleaseCall& operator=(const ChildReleaseCall& other);
    virtual ChildReleaseCall *dup() const {return new ChildReleaseCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, ChildReleaseCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ChildReleaseCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ChildReleaseResponse extends BaseResponseMessage 
 * {
 *     
 * }
 * </pre>
 */
class ChildReleaseResponse : public ::BaseResponseMessage
{
  protected:

  private:
    void copy(const ChildReleaseResponse& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ChildReleaseResponse&);

  public:
    ChildReleaseResponse(const char *name=NULL, int kind=0);
    ChildReleaseResponse(const ChildReleaseResponse& other);
    virtual ~ChildReleaseResponse();
    ChildReleaseResponse& operator=(const ChildReleaseResponse& other);
    virtual ChildReleaseResponse *dup() const {return new ChildReleaseResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, ChildReleaseResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ChildReleaseResponse& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ChildCheckCall extends BaseCallMessage 
 * {
 *     
 * }
 * </pre>
 */
class ChildCheckCall : public ::BaseCallMessage
{
  protected:

  private:
    void copy(const ChildCheckCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ChildCheckCall&);

  public:
    ChildCheckCall(const char *name=NULL, int kind=0);
    ChildCheckCall(const ChildCheckCall& other);
    virtual ~ChildCheckCall();
    ChildCheckCall& operator=(const ChildCheckCall& other);
    virtual ChildCheckCall *dup() const {return new ChildCheckCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, ChildCheckCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ChildCheckCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ChildCheckResponse extends BaseResponseMessage 
 * {
 *     
 * }
 * </pre>
 */
class ChildCheckResponse : public ::BaseResponseMessage
{
  protected:

  private:
    void copy(const ChildCheckResponse& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ChildCheckResponse&);

  public:
    ChildCheckResponse(const char *name=NULL, int kind=0);
    ChildCheckResponse(const ChildCheckResponse& other);
    virtual ~ChildCheckResponse();
    ChildCheckResponse& operator=(const ChildCheckResponse& other);
    virtual ChildCheckResponse *dup() const {return new ChildCheckResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, ChildCheckResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ChildCheckResponse& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet SendCoordinatesCall extends GlobalViewBuilderCall 
 * {
 *     CoordDataContainer coordData;
 * }
 * </pre>
 */
class SendCoordinatesCall : public ::GlobalViewBuilderCall
{
  protected:
    CoordDataContainer coordData_var;

  private:
    void copy(const SendCoordinatesCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SendCoordinatesCall&);

  public:
    SendCoordinatesCall(const char *name=NULL, int kind=0);
    SendCoordinatesCall(const SendCoordinatesCall& other);
    virtual ~SendCoordinatesCall();
    SendCoordinatesCall& operator=(const SendCoordinatesCall& other);
    virtual SendCoordinatesCall *dup() const {return new SendCoordinatesCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual CoordDataContainer& getCoordData();
    virtual const CoordDataContainer& getCoordData() const {return const_cast<SendCoordinatesCall*>(this)->getCoordData();}
    virtual void setCoordData(const CoordDataContainer& coordData);
};

inline void doPacking(cCommBuffer *b, SendCoordinatesCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SendCoordinatesCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet SendAllStrategyCall extends GlobalViewBuilderCall 
 * {
 *     CoordDataContainer coordData;
 * }
 * </pre>
 */
class SendAllStrategyCall : public ::GlobalViewBuilderCall
{
  protected:
    CoordDataContainer coordData_var;

  private:
    void copy(const SendAllStrategyCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SendAllStrategyCall&);

  public:
    SendAllStrategyCall(const char *name=NULL, int kind=0);
    SendAllStrategyCall(const SendAllStrategyCall& other);
    virtual ~SendAllStrategyCall();
    SendAllStrategyCall& operator=(const SendAllStrategyCall& other);
    virtual SendAllStrategyCall *dup() const {return new SendAllStrategyCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual CoordDataContainer& getCoordData();
    virtual const CoordDataContainer& getCoordData() const {return const_cast<SendAllStrategyCall*>(this)->getCoordData();}
    virtual void setCoordData(const CoordDataContainer& coordData);
};

inline void doPacking(cCommBuffer *b, SendAllStrategyCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SendAllStrategyCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet RemoveRandomStrategyCall extends GlobalViewBuilderCall 
 * { 
 *     CoordDataContainer coordData;
 * }
 * </pre>
 */
class RemoveRandomStrategyCall : public ::GlobalViewBuilderCall
{
  protected:
    CoordDataContainer coordData_var;

  private:
    void copy(const RemoveRandomStrategyCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RemoveRandomStrategyCall&);

  public:
    RemoveRandomStrategyCall(const char *name=NULL, int kind=0);
    RemoveRandomStrategyCall(const RemoveRandomStrategyCall& other);
    virtual ~RemoveRandomStrategyCall();
    RemoveRandomStrategyCall& operator=(const RemoveRandomStrategyCall& other);
    virtual RemoveRandomStrategyCall *dup() const {return new RemoveRandomStrategyCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual CoordDataContainer& getCoordData();
    virtual const CoordDataContainer& getCoordData() const {return const_cast<RemoveRandomStrategyCall*>(this)->getCoordData();}
    virtual void setCoordData(const CoordDataContainer& coordData);
};

inline void doPacking(cCommBuffer *b, RemoveRandomStrategyCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RemoveRandomStrategyCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet TreeTestStrategyCall extends GlobalViewBuilderCall 
 * {
 *     int nodeCount;
 * }
 * </pre>
 */
class TreeTestStrategyCall : public ::GlobalViewBuilderCall
{
  protected:
    int nodeCount_var;

  private:
    void copy(const TreeTestStrategyCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TreeTestStrategyCall&);

  public:
    TreeTestStrategyCall(const char *name=NULL, int kind=0);
    TreeTestStrategyCall(const TreeTestStrategyCall& other);
    virtual ~TreeTestStrategyCall();
    TreeTestStrategyCall& operator=(const TreeTestStrategyCall& other);
    virtual TreeTestStrategyCall *dup() const {return new TreeTestStrategyCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getNodeCount() const;
    virtual void setNodeCount(int nodeCount);
};

inline void doPacking(cCommBuffer *b, TreeTestStrategyCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TreeTestStrategyCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet RegionsStrategyCall extends GlobalViewBuilderCall 
 * {
 *     RegionDataContainer regionData;
 * }
 * </pre>
 */
class RegionsStrategyCall : public ::GlobalViewBuilderCall
{
  protected:
    RegionDataContainer regionData_var;

  private:
    void copy(const RegionsStrategyCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RegionsStrategyCall&);

  public:
    RegionsStrategyCall(const char *name=NULL, int kind=0);
    RegionsStrategyCall(const RegionsStrategyCall& other);
    virtual ~RegionsStrategyCall();
    RegionsStrategyCall& operator=(const RegionsStrategyCall& other);
    virtual RegionsStrategyCall *dup() const {return new RegionsStrategyCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual RegionDataContainer& getRegionData();
    virtual const RegionDataContainer& getRegionData() const {return const_cast<RegionsStrategyCall*>(this)->getRegionData();}
    virtual void setRegionData(const RegionDataContainer& regionData);
};

inline void doPacking(cCommBuffer *b, RegionsStrategyCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RegionsStrategyCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet SimpleCoordStrategyCall extends GlobalViewBuilderCall 
 * {
 *     SimpleCoordDataContainer coordData;
 * }
 * </pre>
 */
class SimpleCoordStrategyCall : public ::GlobalViewBuilderCall
{
  protected:
    SimpleCoordDataContainer coordData_var;

  private:
    void copy(const SimpleCoordStrategyCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SimpleCoordStrategyCall&);

  public:
    SimpleCoordStrategyCall(const char *name=NULL, int kind=0);
    SimpleCoordStrategyCall(const SimpleCoordStrategyCall& other);
    virtual ~SimpleCoordStrategyCall();
    SimpleCoordStrategyCall& operator=(const SimpleCoordStrategyCall& other);
    virtual SimpleCoordStrategyCall *dup() const {return new SimpleCoordStrategyCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual SimpleCoordDataContainer& getCoordData();
    virtual const SimpleCoordDataContainer& getCoordData() const {return const_cast<SimpleCoordStrategyCall*>(this)->getCoordData();}
    virtual void setCoordData(const SimpleCoordDataContainer& coordData);
};

inline void doPacking(cCommBuffer *b, SimpleCoordStrategyCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SimpleCoordStrategyCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet AreaDataCall extends GlobalViewBuilderCall 
 * {
 *     AreaDataContainer areaData;
 * }
 * </pre>
 */
class AreaDataCall : public ::GlobalViewBuilderCall
{
  protected:
    AreaDataContainer areaData_var;

  private:
    void copy(const AreaDataCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AreaDataCall&);

  public:
    AreaDataCall(const char *name=NULL, int kind=0);
    AreaDataCall(const AreaDataCall& other);
    virtual ~AreaDataCall();
    AreaDataCall& operator=(const AreaDataCall& other);
    virtual AreaDataCall *dup() const {return new AreaDataCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AreaDataContainer& getAreaData();
    virtual const AreaDataContainer& getAreaData() const {return const_cast<AreaDataCall*>(this)->getAreaData();}
    virtual void setAreaData(const AreaDataContainer& areaData);
};

inline void doPacking(cCommBuffer *b, AreaDataCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, AreaDataCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet CapReqCall extends BaseCallMessage
 * {
 *     
 * }
 * </pre>
 */
class CapReqCall : public ::BaseCallMessage
{
  protected:

  private:
    void copy(const CapReqCall& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CapReqCall&);

  public:
    CapReqCall(const char *name=NULL, int kind=0);
    CapReqCall(const CapReqCall& other);
    virtual ~CapReqCall();
    CapReqCall& operator=(const CapReqCall& other);
    virtual CapReqCall *dup() const {return new CapReqCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, CapReqCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, CapReqCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/TreeManagementMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet CapReqResponse extends BaseResponseMessage
 * {
 *     AreaDataContainer areaData;
 * }
 * </pre>
 */
class CapReqResponse : public ::BaseResponseMessage
{
  protected:
    AreaDataContainer areaData_var;

  private:
    void copy(const CapReqResponse& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CapReqResponse&);

  public:
    CapReqResponse(const char *name=NULL, int kind=0);
    CapReqResponse(const CapReqResponse& other);
    virtual ~CapReqResponse();
    CapReqResponse& operator=(const CapReqResponse& other);
    virtual CapReqResponse *dup() const {return new CapReqResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual AreaDataContainer& getAreaData();
    virtual const AreaDataContainer& getAreaData() const {return const_cast<CapReqResponse*>(this)->getAreaData();}
    virtual void setAreaData(const AreaDataContainer& areaData);
};

inline void doPacking(cCommBuffer *b, CapReqResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, CapReqResponse& obj) {obj.parsimUnpack(b);}


#endif // _TREEMANAGEMENTMESSAGE_M_H_
