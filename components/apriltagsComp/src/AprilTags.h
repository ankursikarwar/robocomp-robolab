// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `AprilTags.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef ____AprilTags_h__
#define ____AprilTags_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <JointMotor.h>
#include <GenericBase.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace RoboCompAprilTags
{

class AprilTags;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompAprilTags::AprilTags>&);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompAprilTags::AprilTags*);

}

}

namespace RoboCompAprilTags
{

class AprilTags;
bool operator==(const AprilTags&, const AprilTags&);
bool operator<(const AprilTags&, const AprilTags&);
::Ice::Object* upCast(::RoboCompAprilTags::AprilTags*);
typedef ::IceInternal::Handle< ::RoboCompAprilTags::AprilTags> AprilTagsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompAprilTags::AprilTags> AprilTagsPrx;
void __patch(AprilTagsPtr&, const ::Ice::ObjectPtr&);

}

namespace RoboCompAprilTags
{

struct tag
{
    ::Ice::Int id;
    ::Ice::Float tx;
    ::Ice::Float ty;
    ::Ice::Float tz;
    ::Ice::Float rx;
    ::Ice::Float ry;
    ::Ice::Float rz;
    ::std::string cameraId;

    bool operator==(const tag& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(id != __rhs.id)
        {
            return false;
        }
        if(tx != __rhs.tx)
        {
            return false;
        }
        if(ty != __rhs.ty)
        {
            return false;
        }
        if(tz != __rhs.tz)
        {
            return false;
        }
        if(rx != __rhs.rx)
        {
            return false;
        }
        if(ry != __rhs.ry)
        {
            return false;
        }
        if(rz != __rhs.rz)
        {
            return false;
        }
        if(cameraId != __rhs.cameraId)
        {
            return false;
        }
        return true;
    }

    bool operator<(const tag& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(id < __rhs.id)
        {
            return true;
        }
        else if(__rhs.id < id)
        {
            return false;
        }
        if(tx < __rhs.tx)
        {
            return true;
        }
        else if(__rhs.tx < tx)
        {
            return false;
        }
        if(ty < __rhs.ty)
        {
            return true;
        }
        else if(__rhs.ty < ty)
        {
            return false;
        }
        if(tz < __rhs.tz)
        {
            return true;
        }
        else if(__rhs.tz < tz)
        {
            return false;
        }
        if(rx < __rhs.rx)
        {
            return true;
        }
        else if(__rhs.rx < rx)
        {
            return false;
        }
        if(ry < __rhs.ry)
        {
            return true;
        }
        else if(__rhs.ry < ry)
        {
            return false;
        }
        if(rz < __rhs.rz)
        {
            return true;
        }
        else if(__rhs.rz < rz)
        {
            return false;
        }
        if(cameraId < __rhs.cameraId)
        {
            return true;
        }
        else if(__rhs.cameraId < cameraId)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const tag& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const tag& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const tag& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const tag& __rhs) const
    {
        return !operator<(__rhs);
    }
};

typedef ::std::vector< ::RoboCompAprilTags::tag> tagsList;

}

namespace Ice
{
template<>
struct StreamableTraits< ::RoboCompAprilTags::tag>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 29;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::RoboCompAprilTags::tag, S>
{
    static void write(S* __os, const ::RoboCompAprilTags::tag& v)
    {
        __os->write(v.id);
        __os->write(v.tx);
        __os->write(v.ty);
        __os->write(v.tz);
        __os->write(v.rx);
        __os->write(v.ry);
        __os->write(v.rz);
        __os->write(v.cameraId);
    }
};

template<class S>
struct StreamReader< ::RoboCompAprilTags::tag, S>
{
    static void read(S* __is, ::RoboCompAprilTags::tag& v)
    {
        __is->read(v.id);
        __is->read(v.tx);
        __is->read(v.ty);
        __is->read(v.tz);
        __is->read(v.rx);
        __is->read(v.ry);
        __is->read(v.rz);
        __is->read(v.cameraId);
    }
};

}

namespace RoboCompAprilTags
{

class Callback_AprilTags_newAprilTag_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_AprilTags_newAprilTag_Base> Callback_AprilTags_newAprilTagPtr;

class Callback_AprilTags_newAprilTagAndPose_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_AprilTags_newAprilTagAndPose_Base> Callback_AprilTags_newAprilTagAndPosePtr;

}

namespace IceProxy
{

namespace RoboCompAprilTags
{

class AprilTags : virtual public ::IceProxy::Ice::Object
{
public:

    void newAprilTag(const ::RoboCompAprilTags::tagsList& tags)
    {
        newAprilTag(tags, 0);
    }
    void newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::Context& __ctx)
    {
        newAprilTag(tags, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_newAprilTag(tags, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_newAprilTag(tags, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_newAprilTag(tags, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_newAprilTag(tags, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags)
    {
        return begin_newAprilTag(tags, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::Context& __ctx)
    {
        return begin_newAprilTag(tags, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTag(tags, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTag(tags, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompAprilTags::Callback_AprilTags_newAprilTagPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTag(tags, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList& tags, const ::Ice::Context& __ctx, const ::RoboCompAprilTags::Callback_AprilTags_newAprilTagPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTag(tags, &__ctx, __del, __cookie);
    }

    void end_newAprilTag(const ::Ice::AsyncResultPtr&);
    
private:

    void newAprilTag(const ::RoboCompAprilTags::tagsList&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_newAprilTag(const ::RoboCompAprilTags::tagsList&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState)
    {
        newAprilTagAndPose(tags, bState, hState, 0);
    }
    void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::Context& __ctx)
    {
        newAprilTagAndPose(tags, bState, hState, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_newAprilTagAndPose(tags, bState, hState, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_newAprilTagAndPose(tags, bState, hState, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_newAprilTagAndPose(tags, bState, hState, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_newAprilTagAndPose(tags, bState, hState, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState)
    {
        return begin_newAprilTagAndPose(tags, bState, hState, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::Context& __ctx)
    {
        return begin_newAprilTagAndPose(tags, bState, hState, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTagAndPose(tags, bState, hState, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTagAndPose(tags, bState, hState, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::RoboCompAprilTags::Callback_AprilTags_newAprilTagAndPosePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTagAndPose(tags, bState, hState, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList& tags, const ::RoboCompGenericBase::TBaseState& bState, const ::RoboCompJointMotor::MotorStateMap& hState, const ::Ice::Context& __ctx, const ::RoboCompAprilTags::Callback_AprilTags_newAprilTagAndPosePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_newAprilTagAndPose(tags, bState, hState, &__ctx, __del, __cookie);
    }

    void end_newAprilTagAndPose(const ::Ice::AsyncResultPtr&);
    
private:

    void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList&, const ::RoboCompGenericBase::TBaseState&, const ::RoboCompJointMotor::MotorStateMap&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_newAprilTagAndPose(const ::RoboCompAprilTags::tagsList&, const ::RoboCompGenericBase::TBaseState&, const ::RoboCompJointMotor::MotorStateMap&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<AprilTags> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_secure(bool __secure) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_twoway() const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_oneway() const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_batchOneway() const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_datagram() const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_batchDatagram() const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_compress(bool __compress) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_timeout(int __timeout) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<AprilTags> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<AprilTags*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace RoboCompAprilTags
{

class AprilTags : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void newAprilTag(const ::RoboCompAprilTags::tagsList&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList&, const ::RoboCompGenericBase::TBaseState&, const ::RoboCompJointMotor::MotorStateMap&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace RoboCompAprilTags
{

class AprilTags : virtual public ::IceDelegate::RoboCompAprilTags::AprilTags,
                  virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void newAprilTag(const ::RoboCompAprilTags::tagsList&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList&, const ::RoboCompGenericBase::TBaseState&, const ::RoboCompJointMotor::MotorStateMap&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace RoboCompAprilTags
{

class AprilTags : virtual public ::IceDelegate::RoboCompAprilTags::AprilTags,
                  virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void newAprilTag(const ::RoboCompAprilTags::tagsList&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList&, const ::RoboCompGenericBase::TBaseState&, const ::RoboCompJointMotor::MotorStateMap&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace RoboCompAprilTags
{

class AprilTags : virtual public ::Ice::Object
{
public:

    typedef AprilTagsPrx ProxyType;
    typedef AprilTagsPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void newAprilTag(const ::RoboCompAprilTags::tagsList&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___newAprilTag(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void newAprilTagAndPose(const ::RoboCompAprilTags::tagsList&, const ::RoboCompGenericBase::TBaseState&, const ::RoboCompJointMotor::MotorStateMap&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___newAprilTagAndPose(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const AprilTags& l, const AprilTags& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const AprilTags& l, const AprilTags& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace RoboCompAprilTags
{

template<class T>
class CallbackNC_AprilTags_newAprilTag : public Callback_AprilTags_newAprilTag_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_AprilTags_newAprilTag(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTag<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTag<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTag<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTag<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_AprilTags_newAprilTag : public Callback_AprilTags_newAprilTag_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_AprilTags_newAprilTag(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTag<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTag<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTag<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_AprilTags_newAprilTagPtr
newCallback_AprilTags_newAprilTag(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTag<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_AprilTags_newAprilTagAndPose : public Callback_AprilTags_newAprilTagAndPose_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_AprilTags_newAprilTagAndPose(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTagAndPose<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTagAndPose<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTagAndPose<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_AprilTags_newAprilTagAndPose<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_AprilTags_newAprilTagAndPose : public Callback_AprilTags_newAprilTagAndPose_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_AprilTags_newAprilTagAndPose(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTagAndPose<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTagAndPose<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTagAndPose<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_AprilTags_newAprilTagAndPosePtr
newCallback_AprilTags_newAprilTagAndPose(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_AprilTags_newAprilTagAndPose<T, CT>(instance, 0, excb, sentcb);
}

}

#endif
