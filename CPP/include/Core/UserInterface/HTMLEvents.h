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
# ifdef __COMPILING_HTMLEVENTS_CPP__
# define HTMLEVENTS_API XI_EXPORT
# else
# define HTMLEVENTS_API
# endif
#else
# define HTMLEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BrowserCommandInput;
    class HTMLEventArgs;
    class HTMLEventHandler;
}}

namespace adsk { namespace core {

/// A HTMLEvent is fired when triggered from JavaScript code associated with HTML used
/// in a palette.
class HTMLEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(HTMLEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(HTMLEventHandler* handler);

    HTMLEVENTS_API static const char* classType();
    HTMLEVENTS_API const char* objectType() const override;
    HTMLEVENTS_API void* queryInterface(const char* id) const override;
    HTMLEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(HTMLEventHandler* handler) = 0;
    virtual bool remove_raw(HTMLEventHandler* handler) = 0;
};

/// The HTMLEventArgs provides access to the information sent from the JavaScript
/// that's associated with HTML being displayed within a palette.
class HTMLEventArgs : public EventArgs {
public:

    /// The action string sent from the JavaScript associated with HTML displayed
    /// in the palette. The string can represent any type of data in any format but
    /// JSON is commonly used to pass more complex data.
    std::string action() const;

    /// The data string sent from the JavaScript associated with HTML displayed
    /// in the palette. The string can represent any type of data in any format but
    /// JSON is commonly used to pass more complex data.
    std::string data() const;

    /// Set this property to return data back to the JavaScript that's associated with the HTML.
    std::string returnData() const;
    bool returnData(const std::string& value);

    /// When the event is fired from a BrowserCommandInput object, this property returns
    /// the specific BrowserCommandInput that caused the event to fire. In all other cases
    /// this property returns null.
    Ptr<BrowserCommandInput> browserCommandInput() const;

    HTMLEVENTS_API static const char* classType();
    HTMLEVENTS_API const char* objectType() const override;
    HTMLEVENTS_API void* queryInterface(const char* id) const override;
    HTMLEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* action_raw() const = 0;
    virtual char* data_raw() const = 0;
    virtual char* returnData_raw() const = 0;
    virtual bool returnData_raw(const char* value) = 0;
    virtual BrowserCommandInput* browserCommandInput_raw() const = 0;
};

/// The HTMLEventHandler is a client implemented class that can be added as a handler to a HTML
/// event which is triggered by JavaScript that associated with HTML displayed within a palette
/// calling the adsk.fusionSendData function to send data from the HTML back to your add-in.
class HTMLEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    HTMLEVENTS_API virtual void notify(const Ptr<HTMLEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool HTMLEvent::add(HTMLEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool HTMLEvent::remove(HTMLEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::string HTMLEventArgs::action() const
{
    std::string res;

    char* p= action_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string HTMLEventArgs::data() const
{
    std::string res;

    char* p= data_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string HTMLEventArgs::returnData() const
{
    std::string res;

    char* p= returnData_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool HTMLEventArgs::returnData(const std::string& value)
{
    return returnData_raw(value.c_str());
}

inline Ptr<BrowserCommandInput> HTMLEventArgs::browserCommandInput() const
{
    Ptr<BrowserCommandInput> res = browserCommandInput_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef HTMLEVENTS_API