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
# ifdef __COMPILING_ADSK_CORE_VALIDATEINPUTSEVENT_CPP__
# define ADSK_CORE_VALIDATEINPUTSEVENT_API XI_EXPORT
# else
# define ADSK_CORE_VALIDATEINPUTSEVENT_API
# endif
#else
# define ADSK_CORE_VALIDATEINPUTSEVENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValidateInputsEventHandler;
}}

namespace adsk { namespace core {

/// An event endpoint that supports the connection to client implemented ValidateInputsEventHandlers.
class ValidateInputsEvent : public Event {
public:

    /// Adds an event handler to this event endpoint.
    /// handler : The client implemented ValidateInputsEventHandler to be called when this event is triggered.
    /// Returns true if the handler was successfully added to the set of event handlers.
    bool add(ValidateInputsEventHandler* handler);

    /// Removes a handler from this event endpoint.
    /// handler : A ValidateInputsEventHandler that was previously added to this event with the add method.
    /// Returns true if the handler was found and removed from the set of event handlers.
    bool remove(ValidateInputsEventHandler* handler);

    ADSK_CORE_VALIDATEINPUTSEVENT_API static const char* classType();
    ADSK_CORE_VALIDATEINPUTSEVENT_API const char* objectType() const override;
    ADSK_CORE_VALIDATEINPUTSEVENT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VALIDATEINPUTSEVENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(ValidateInputsEventHandler* handler) = 0;
    virtual bool remove_raw(ValidateInputsEventHandler* handler) = 0;
};

// Inline wrappers

inline bool ValidateInputsEvent::add(ValidateInputsEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool ValidateInputsEvent::remove(ValidateInputsEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VALIDATEINPUTSEVENT_API