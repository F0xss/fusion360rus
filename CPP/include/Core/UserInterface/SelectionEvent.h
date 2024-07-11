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
# ifdef __COMPILING_ADSK_CORE_SELECTIONEVENT_CPP__
# define ADSK_CORE_SELECTIONEVENT_API XI_EXPORT
# else
# define ADSK_CORE_SELECTIONEVENT_API
# endif
#else
# define ADSK_CORE_SELECTIONEVENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class SelectionCommandInput;
    class SelectionEventHandler;
}}

namespace adsk { namespace core {

/// An event endpoint that supports the connection to client implemented SelectionEventHandlers.
class SelectionEvent : public Event {
public:

    /// Adds an event handler to this event endpoint.
    /// handler : The client implemented SelectionEventHandler to be called when this event is triggered.
    /// Returns true if the handler was successfully added to the set of event handlers.
    bool add(SelectionEventHandler* handler);

    /// Removes a handler from this event endpoint.
    /// handler : A SelectionEventHandler that was previously added to this event with the add method.
    /// Returns true if the handler was found and removed from the set of event handlers.
    bool remove(SelectionEventHandler* handler);

    /// Returns the SelectionCommandInput that is currently active in the command dialog and
    /// that the user is selecting entities for. This can be used to determine which set of
    /// rules you want to apply to determine if the current entity is selectable or not.
    Ptr<SelectionCommandInput> activeInput() const;

    ADSK_CORE_SELECTIONEVENT_API static const char* classType();
    ADSK_CORE_SELECTIONEVENT_API const char* objectType() const override;
    ADSK_CORE_SELECTIONEVENT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTIONEVENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(SelectionEventHandler* handler) = 0;
    virtual bool remove_raw(SelectionEventHandler* handler) = 0;
    virtual SelectionCommandInput* activeInput_raw() const = 0;
};

// Inline wrappers

inline bool SelectionEvent::add(SelectionEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool SelectionEvent::remove(SelectionEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline Ptr<SelectionCommandInput> SelectionEvent::activeInput() const
{
    Ptr<SelectionCommandInput> res = activeInput_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTIONEVENT_API