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
# ifdef __COMPILING_ADSK_CORE_KEYBOARDEVENT_CPP__
# define ADSK_CORE_KEYBOARDEVENT_API XI_EXPORT
# else
# define ADSK_CORE_KEYBOARDEVENT_API
# endif
#else
# define ADSK_CORE_KEYBOARDEVENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class KeyboardEventHandler;
}}

namespace adsk { namespace core {

/// An event endpoint that supports the connection to client implemented KeyboardEventHandlers.
class KeyboardEvent : public Event {
public:

    /// Adds an event handler to this event endpoint.
    /// handler : The client implemented KeyboardEventHandler to be called when this event is triggered.
    /// Returns true if the handler was successfully added to the set of event handlers.
    bool add(KeyboardEventHandler* handler);

    /// Removes a handler from this event endpoint.
    /// handler : A KeyboardEventHandler that was previously added to this event with the add method.
    /// Returns true if the handler was found and removed from the set of event handlers.
    bool remove(KeyboardEventHandler* handler);

    ADSK_CORE_KEYBOARDEVENT_API static const char* classType();
    ADSK_CORE_KEYBOARDEVENT_API const char* objectType() const override;
    ADSK_CORE_KEYBOARDEVENT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_KEYBOARDEVENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(KeyboardEventHandler* handler) = 0;
    virtual bool remove_raw(KeyboardEventHandler* handler) = 0;
};

// Inline wrappers

inline bool KeyboardEvent::add(KeyboardEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool KeyboardEvent::remove(KeyboardEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_KEYBOARDEVENT_API