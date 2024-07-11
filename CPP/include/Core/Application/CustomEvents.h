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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_CUSTOMEVENTS_CPP__
# define CUSTOMEVENTS_API XI_EXPORT
# else
# define CUSTOMEVENTS_API
# endif
#else
# define CUSTOMEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CustomEventArgs;
    class CustomEventHandler;
}}

namespace adsk { namespace core {

/// A CustomEvent is primarily used to send an event from a worker thread you've created back
/// to your add-in, which is running in the primary thread. It's also possible for add-ins to
/// cooperate and another add-in can trigger this event in your add-in by knowing the custom
/// event id.
class CustomEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(CustomEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(CustomEventHandler* handler);

    /// Returns the id that was assigned to this event when it was registered. Each
    /// custom event has it's own unique id.
    std::string eventId() const;

    CUSTOMEVENTS_API static const char* classType();
    CUSTOMEVENTS_API const char* objectType() const override;
    CUSTOMEVENTS_API void* queryInterface(const char* id) const override;
    CUSTOMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(CustomEventHandler* handler) = 0;
    virtual bool remove_raw(CustomEventHandler* handler) = 0;
    virtual char* eventId_raw() const = 0;
};

/// The ApplicationEventArgs provides information associated with an application event.
/// Note that some properties are not available on every event
class CustomEventArgs : public EventArgs {
public:

    /// Information being passed to the add-in in the primary thread from the worker thread
    /// or other add-in.
    std::string additionalInfo() const;

    CUSTOMEVENTS_API static const char* classType();
    CUSTOMEVENTS_API const char* objectType() const override;
    CUSTOMEVENTS_API void* queryInterface(const char* id) const override;
    CUSTOMEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* additionalInfo_raw() const = 0;
};

/// The ApplicationEventHandler is a client implemented class that can be added as a handler to an
/// ApplicationEvent.
class CustomEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    CUSTOMEVENTS_API virtual void notify(const Ptr<CustomEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool CustomEvent::add(CustomEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool CustomEvent::remove(CustomEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::string CustomEvent::eventId() const
{
    std::string res;

    char* p= eventId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string CustomEventArgs::additionalInfo() const
{
    std::string res;

    char* p= additionalInfo_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef CUSTOMEVENTS_API