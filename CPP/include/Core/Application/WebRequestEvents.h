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
# ifdef __COMPILING_WEBREQUESTEVENTS_CPP__
# define WEBREQUESTEVENTS_API XI_EXPORT
# else
# define WEBREQUESTEVENTS_API
# endif
#else
# define WEBREQUESTEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class WebRequestEventArgs;
    class WebRequestEventHandler;
}}

namespace adsk { namespace core {

/// A WebRequestEvent represents an event that occurs in reaction to a Fusion 360 protocol handler
/// in a web page. For example, insertedFromURL and openedFromURL
class WebRequestEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(WebRequestEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(WebRequestEventHandler* handler);

    WEBREQUESTEVENTS_API static const char* classType();
    WEBREQUESTEVENTS_API const char* objectType() const override;
    WEBREQUESTEVENTS_API void* queryInterface(const char* id) const override;
    WEBREQUESTEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(WebRequestEventHandler* handler) = 0;
    virtual bool remove_raw(WebRequestEventHandler* handler) = 0;
};

/// The WebRequestEventHandler is a client implemented class that can be added as a handler to an
/// WebRequestEvent.
class WebRequestEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    WEBREQUESTEVENTS_API virtual void notify(const Ptr<WebRequestEventArgs>& eventArgs) = 0;
};

/// The WebRequestEventArgs provides information associated with a web request event. These
/// are events fired as a result of a Fusion 360 protocol handler being invoked from a web page.
/// Note that some properties are not available on every event.
class WebRequestEventArgs : public EventArgs {
public:

    /// Used during the insertingFromURL and openingFromURL events to get or set
    /// if the insert or open should be allowed to continue. This defaults to false,
    /// which will allow the operation to continue as normal.
    /// This property should be ignored for all events besides the insertingFromURL and
    /// openingFromURL events.
    bool isCanceled() const;
    bool isCanceled(bool value);

    /// Returns the value specified as the "file" parameter in the URL.
    std::string file() const;

    /// Returns the value specified as the "properties" parameter in the URL. This
    /// will be decoded and should be in JSON format if it was properly provided
    /// by the web page. It can be an empty string if the "properties" parameter was
    /// not specified in the URL.
    std::string properties() const;

    /// Returns the value specified as the "id" parameter in the URL. This
    /// will be decoded. It can be an empty string if the "id" parameter was
    /// not specified in the URL.
    std::string id() const;

    /// Returns the value specified as the "privateInfo" parameter in the URL. This
    /// will be decoded and can be an empty string if the "privateInfo" parameter was
    /// not specified in the URL.
    std::string privateInfo() const;

    /// Used during the insertedFromURL or openedFromURL events and returns the Document (openedFromURL)
    /// or Occurrence (insertedFromURL) that was just created.
    Ptr<Base> occurrenceOrDocument() const;

    WEBREQUESTEVENTS_API static const char* classType();
    WEBREQUESTEVENTS_API const char* objectType() const override;
    WEBREQUESTEVENTS_API void* queryInterface(const char* id) const override;
    WEBREQUESTEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isCanceled_raw() const = 0;
    virtual bool isCanceled_raw(bool value) = 0;
    virtual char* file_raw() const = 0;
    virtual char* properties_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual char* privateInfo_raw() const = 0;
    virtual Base* occurrenceOrDocument_raw() const = 0;
};

// Inline wrappers

inline bool WebRequestEvent::add(WebRequestEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool WebRequestEvent::remove(WebRequestEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline bool WebRequestEventArgs::isCanceled() const
{
    bool res = isCanceled_raw();
    return res;
}

inline bool WebRequestEventArgs::isCanceled(bool value)
{
    return isCanceled_raw(value);
}

inline std::string WebRequestEventArgs::file() const
{
    std::string res;

    char* p= file_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string WebRequestEventArgs::properties() const
{
    std::string res;

    char* p= properties_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string WebRequestEventArgs::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string WebRequestEventArgs::privateInfo() const
{
    std::string res;

    char* p= privateInfo_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<Base> WebRequestEventArgs::occurrenceOrDocument() const
{
    Ptr<Base> res = occurrenceOrDocument_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef WEBREQUESTEVENTS_API