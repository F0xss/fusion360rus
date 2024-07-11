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
#include "../Base.h"
#include "../CoreTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_EVENTS_CPP__
# define EVENTS_API XI_EXPORT
# else
# define EVENTS_API
# endif
#else
# define EVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Objects can have several Event properties that fire when
/// some 'event' occurs. Clients can attach EventHandlers
/// to one or more Events and they get notified when the 'event' occurs.
/// 
/// This is a base class - classes like DocumentEvent add type safety
/// (i.e. only allow the correct type of handler to be added to them).
class Event : public Base {
public:

    /// The name of the event - e.g. "DocumentOpening"
    std::string name() const;

    /// The object that is firing the event. For example, in the case of a command
    /// input event this will return the command.
    Ptr<Base> sender() const;

    EVENTS_API static const char* classType();
    EVENTS_API const char* objectType() const override;
    EVENTS_API void* queryInterface(const char* id) const override;
    EVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual Base* sender_raw() const = 0;
    virtual void placeholderEvent0() {}
    virtual void placeholderEvent1() {}
    virtual void placeholderEvent2() {}
    virtual void placeholderEvent3() {}
    virtual void placeholderEvent4() {}
    virtual void placeholderEvent5() {}
    virtual void placeholderEvent6() {}
    virtual void placeholderEvent7() {}
    virtual void placeholderEvent8() {}
    virtual void placeholderEvent9() {}
    virtual void placeholderEvent10() {}
    virtual void placeholderEvent11() {}
    virtual void placeholderEvent12() {}
    virtual void placeholderEvent13() {}
    virtual void placeholderEvent14() {}
    virtual void placeholderEvent15() {}
    virtual void placeholderEvent16() {}
    virtual void placeholderEvent17() {}
    virtual void placeholderEvent18() {}
    virtual void placeholderEvent19() {}
    virtual void placeholderEvent20() {}
    virtual void placeholderEvent21() {}
    virtual void placeholderEvent22() {}
    virtual void placeholderEvent23() {}
    virtual void placeholderEvent24() {}
    virtual void placeholderEvent25() {}
    virtual void placeholderEvent26() {}
    virtual void placeholderEvent27() {}
    virtual void placeholderEvent28() {}
    virtual void placeholderEvent29() {}
};

/// When an event handler is called, it is passed
/// an EventArgs object that describes the 'event'.
/// This is a base class - classes like DocumentEventArgs add more information on
/// the 'event'.
class EventArgs : public Base {
public:

    /// The event that the firing is in response to.
    Ptr<Event> firingEvent() const;

    EVENTS_API static const char* classType();
    EVENTS_API const char* objectType() const override;
    EVENTS_API void* queryInterface(const char* id) const override;
    EVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Event* firingEvent_raw() const = 0;
    virtual void placeholderEventArgs0() {}
    virtual void placeholderEventArgs1() {}
    virtual void placeholderEventArgs2() {}
    virtual void placeholderEventArgs3() {}
    virtual void placeholderEventArgs4() {}
    virtual void placeholderEventArgs5() {}
    virtual void placeholderEventArgs6() {}
    virtual void placeholderEventArgs7() {}
    virtual void placeholderEventArgs8() {}
    virtual void placeholderEventArgs9() {}
    virtual void placeholderEventArgs10() {}
    virtual void placeholderEventArgs11() {}
    virtual void placeholderEventArgs12() {}
    virtual void placeholderEventArgs13() {}
    virtual void placeholderEventArgs14() {}
    virtual void placeholderEventArgs15() {}
    virtual void placeholderEventArgs16() {}
    virtual void placeholderEventArgs17() {}
    virtual void placeholderEventArgs18() {}
    virtual void placeholderEventArgs19() {}
    virtual void placeholderEventArgs20() {}
    virtual void placeholderEventArgs21() {}
    virtual void placeholderEventArgs22() {}
    virtual void placeholderEventArgs23() {}
    virtual void placeholderEventArgs24() {}
    virtual void placeholderEventArgs25() {}
    virtual void placeholderEventArgs26() {}
    virtual void placeholderEventArgs27() {}
    virtual void placeholderEventArgs28() {}
    virtual void placeholderEventArgs29() {}
    virtual void placeholderEventArgs30() {}
};

// Inline wrappers

inline std::string Event::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<Base> Event::sender() const
{
    Ptr<Base> res = sender_raw();
    return res;
}

inline Ptr<Event> EventArgs::firingEvent() const
{
    Ptr<Event> res = firingEvent_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef EVENTS_API