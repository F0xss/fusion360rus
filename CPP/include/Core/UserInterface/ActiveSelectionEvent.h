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
# ifdef __COMPILING_ADSK_CORE_ACTIVESELECTIONEVENT_CPP__
# define ADSK_CORE_ACTIVESELECTIONEVENT_API XI_EXPORT
# else
# define ADSK_CORE_ACTIVESELECTIONEVENT_API
# endif
#else
# define ADSK_CORE_ACTIVESELECTIONEVENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ActiveSelectionEventHandler;
}}

namespace adsk { namespace core {

/// This event fires whenever the contents of the active selection changes. This occurs as the user
/// selects or unselects entities while using the Fusion 360 Select command. The Select command
/// is the default command that is always running if no other command is active. Pressing Escape
/// terminates the currently active command and starts the Select command. If the Select command is
/// running and you press Escape, it terminates the current Select command and starts a new one.
/// 
/// This event is only associated with the selection associated with the Select command and does not
/// fire when any other command is running. The event fires when there is any change to the active
/// selection, including when the selection is cleared when the Select command is terminated. It is
/// also fired when the user clicks in an open area of the canvas to clear the current selection.
class ActiveSelectionEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(ActiveSelectionEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(ActiveSelectionEventHandler* handler);

    ADSK_CORE_ACTIVESELECTIONEVENT_API static const char* classType();
    ADSK_CORE_ACTIVESELECTIONEVENT_API const char* objectType() const override;
    ADSK_CORE_ACTIVESELECTIONEVENT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ACTIVESELECTIONEVENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(ActiveSelectionEventHandler* handler) = 0;
    virtual bool remove_raw(ActiveSelectionEventHandler* handler) = 0;
};

// Inline wrappers

inline bool ActiveSelectionEvent::add(ActiveSelectionEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool ActiveSelectionEvent::remove(ActiveSelectionEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ACTIVESELECTIONEVENT_API