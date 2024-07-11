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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_NAVIGATIONEVENTS_CPP__
# define NAVIGATIONEVENTS_API XI_EXPORT
# else
# define NAVIGATIONEVENTS_API
# endif
#else
# define NAVIGATIONEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BrowserCommandInput;
    class NavigationEventArgs;
    class NavigationEventHandler;
}}

namespace adsk { namespace core {

/// A NavigationEvent is fired when a link is navigated on the page in a palette.
class NavigationEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(NavigationEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(NavigationEventHandler* handler);

    NAVIGATIONEVENTS_API static const char* classType();
    NAVIGATIONEVENTS_API const char* objectType() const override;
    NAVIGATIONEVENTS_API void* queryInterface(const char* id) const override;
    NAVIGATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(NavigationEventHandler* handler) = 0;
    virtual bool remove_raw(NavigationEventHandler* handler) = 0;
};

/// The NavigationEventArgs provides access to the information sent from the browser
/// within a palette on a navigation event.
class NavigationEventArgs : public EventArgs {
public:

    /// The URL that is being navigated to.
    std::string navigationURL() const;
    bool navigationURL(const std::string& value);

    /// If True, the URL will be navigated to in an external browser by the operating system.
    /// If False, the default value, the URL will be navigated to in the palette's browser.
    bool launchExternally() const;
    bool launchExternally(bool value);

    /// If True, the default handling of this navigation event will not continue.
    /// If False, the default value, the default handling of this navigation event will continue.
    bool preventDefault() const;
    bool preventDefault(bool value);

    /// When the event is fired from a BrowserCommandInput object, this property returns
    /// the specific BrowserCommandInput that caused the event to fire. In all other cases
    /// this property returns null.
    Ptr<BrowserCommandInput> browserCommandInput() const;

    NAVIGATIONEVENTS_API static const char* classType();
    NAVIGATIONEVENTS_API const char* objectType() const override;
    NAVIGATIONEVENTS_API void* queryInterface(const char* id) const override;
    NAVIGATIONEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* navigationURL_raw() const = 0;
    virtual bool navigationURL_raw(const char* value) = 0;
    virtual bool launchExternally_raw() const = 0;
    virtual bool launchExternally_raw(bool value) = 0;
    virtual bool preventDefault_raw() const = 0;
    virtual bool preventDefault_raw(bool value) = 0;
    virtual BrowserCommandInput* browserCommandInput_raw() const = 0;
};

/// The NavigationEventHandler is a client implemented class that can be added as a handler to a Navigation
/// event which is triggered by the browser within a palette.
class NavigationEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    NAVIGATIONEVENTS_API virtual void notify(const Ptr<NavigationEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool NavigationEvent::add(NavigationEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool NavigationEvent::remove(NavigationEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::string NavigationEventArgs::navigationURL() const
{
    std::string res;

    char* p= navigationURL_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool NavigationEventArgs::navigationURL(const std::string& value)
{
    return navigationURL_raw(value.c_str());
}

inline bool NavigationEventArgs::launchExternally() const
{
    bool res = launchExternally_raw();
    return res;
}

inline bool NavigationEventArgs::launchExternally(bool value)
{
    return launchExternally_raw(value);
}

inline bool NavigationEventArgs::preventDefault() const
{
    bool res = preventDefault_raw();
    return res;
}

inline bool NavigationEventArgs::preventDefault(bool value)
{
    return preventDefault_raw(value);
}

inline Ptr<BrowserCommandInput> NavigationEventArgs::browserCommandInput() const
{
    Ptr<BrowserCommandInput> res = browserCommandInput_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef NAVIGATIONEVENTS_API