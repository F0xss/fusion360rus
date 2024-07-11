//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2023 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Events.h"
#include "EventHandler.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_APPLICATIONEVENTS_CPP__
# define APPLICATIONEVENTS_API XI_EXPORT
# else
# define APPLICATIONEVENTS_API
# endif
#else
# define APPLICATIONEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ApplicationEventArgs;
    class ApplicationEventHandler;
}}

namespace adsk { namespace core {

/// An ApplicationEvent represents a Fusion 360 application related event. For example, startupCompleted or OnlineStatusChanged
class ApplicationEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(ApplicationEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(ApplicationEventHandler* handler);

    APPLICATIONEVENTS_API static const char* classType();
    APPLICATIONEVENTS_API const char* objectType() const override;
    APPLICATIONEVENTS_API void* queryInterface(const char* id) const override;
    APPLICATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(ApplicationEventHandler* handler) = 0;
    virtual bool remove_raw(ApplicationEventHandler* handler) = 0;
};

/// The ApplicationEventArgs provides information associated with an application event.
/// Note that some properties are not available on every event
class ApplicationEventArgs : public EventArgs {
public:

    /// Gets and sets if Fusion 360 is offline or not.
    bool isOffLine() const;
    bool isOffLine(bool value);

    /// Gets if the client computer has access to the Internet.
    bool hasInternetAccess() const;

    APPLICATIONEVENTS_API static const char* classType();
    APPLICATIONEVENTS_API const char* objectType() const override;
    APPLICATIONEVENTS_API void* queryInterface(const char* id) const override;
    APPLICATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isOffLine_raw() const = 0;
    virtual bool isOffLine_raw(bool value) = 0;
    virtual bool hasInternetAccess_raw() const = 0;
};

/// The ApplicationEventHandler is a client implemented class that can be added as a handler to an
/// ApplicationEvent.
class ApplicationEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    APPLICATIONEVENTS_API virtual void notify(const Ptr<ApplicationEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool ApplicationEvent::add(ApplicationEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool ApplicationEvent::remove(ApplicationEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline bool ApplicationEventArgs::isOffLine() const
{
    bool res = isOffLine_raw();
    return res;
}

inline bool ApplicationEventArgs::isOffLine(bool value)
{
    return isOffLine_raw(value);
}

inline bool ApplicationEventArgs::hasInternetAccess() const
{
    bool res = hasInternetAccess_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef APPLICATIONEVENTS_API