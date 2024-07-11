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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_WORKSPACEEVENT_CPP__
# define ADSK_CORE_WORKSPACEEVENT_API XI_EXPORT
# else
# define ADSK_CORE_WORKSPACEEVENT_API
# endif
#else
# define ADSK_CORE_WORKSPACEEVENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class WorkspaceEventHandler;
}}

namespace adsk { namespace core {

/// A WorkspaceEvent represents a workspace related event. For example, workspaceActivate or workspaceDeactivate.
class WorkspaceEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(WorkspaceEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(WorkspaceEventHandler* handler);

    ADSK_CORE_WORKSPACEEVENT_API static const char* classType();
    ADSK_CORE_WORKSPACEEVENT_API const char* objectType() const override;
    ADSK_CORE_WORKSPACEEVENT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_WORKSPACEEVENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(WorkspaceEventHandler* handler) = 0;
    virtual bool remove_raw(WorkspaceEventHandler* handler) = 0;
};

// Inline wrappers

inline bool WorkspaceEvent::add(WorkspaceEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool WorkspaceEvent::remove(WorkspaceEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_WORKSPACEEVENT_API