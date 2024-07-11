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
#include "../Application/Events.h"
#include "../Application/EventHandler.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_USERINTERFACEGENERALEVENTS_CPP__
# define USERINTERFACEGENERALEVENTS_API XI_EXPORT
# else
# define USERINTERFACEGENERALEVENTS_API
# endif
#else
# define USERINTERFACEGENERALEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class UserInterfaceGeneralEventArgs;
    class UserInterfaceGeneralEventHandler;
}}

namespace adsk { namespace core {

/// A UserInterfaceGeneralEvent is used for user-interface related events that don't
/// require any additional information beyond getting the event itself.
class UserInterfaceGeneralEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(UserInterfaceGeneralEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(UserInterfaceGeneralEventHandler* handler);

    USERINTERFACEGENERALEVENTS_API static const char* classType();
    USERINTERFACEGENERALEVENTS_API const char* objectType() const override;
    USERINTERFACEGENERALEVENTS_API void* queryInterface(const char* id) const override;
    USERINTERFACEGENERALEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(UserInterfaceGeneralEventHandler* handler) = 0;
    virtual bool remove_raw(UserInterfaceGeneralEventHandler* handler) = 0;
};

/// The UserInterfaceGeneralEventArgs is passed when a UserInterfaceGeneralEvent is fired.
class UserInterfaceGeneralEventArgs : public EventArgs {
public:

    USERINTERFACEGENERALEVENTS_API static const char* classType();
    USERINTERFACEGENERALEVENTS_API const char* objectType() const override;
    USERINTERFACEGENERALEVENTS_API void* queryInterface(const char* id) const override;
    USERINTERFACEGENERALEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

/// The UserInterfaceGeneralEventHandler is a client implemented class that can be
/// added as a handler to a UserInterfaceGeneralEvent event and which is triggered when the event is fired.
class UserInterfaceGeneralEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    USERINTERFACEGENERALEVENTS_API virtual void notify(const Ptr<UserInterfaceGeneralEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool UserInterfaceGeneralEvent::add(UserInterfaceGeneralEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool UserInterfaceGeneralEvent::remove(UserInterfaceGeneralEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}
}// namespace core
}// namespace adsk

#undef USERINTERFACEGENERALEVENTS_API