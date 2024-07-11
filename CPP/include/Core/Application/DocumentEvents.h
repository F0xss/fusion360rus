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
# ifdef __COMPILING_DOCUMENTEVENTS_CPP__
# define DOCUMENTEVENTS_API XI_EXPORT
# else
# define DOCUMENTEVENTS_API
# endif
#else
# define DOCUMENTEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Document;
    class DocumentEventArgs;
    class DocumentEventHandler;
}}

namespace adsk { namespace core {

/// A DocumentEvent represents a document related event. For example, DocumentOpening or DocumentOpened.
class DocumentEvent : public Event {
public:

    /// Add a handler to be notified when the file event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(DocumentEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(DocumentEventHandler* handler);

    DOCUMENTEVENTS_API static const char* classType();
    DOCUMENTEVENTS_API const char* objectType() const override;
    DOCUMENTEVENTS_API void* queryInterface(const char* id) const override;
    DOCUMENTEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(DocumentEventHandler* handler) = 0;
    virtual bool remove_raw(DocumentEventHandler* handler) = 0;
};

/// The DocumentEventArgs provides information associated with a document event.
/// Note that some properties are not available on every event
/// - for example, the Document is not available on the DocumentOpening event because
/// the Document is not yet available.
class DocumentEventArgs : public EventArgs {
public:

    /// Provides access to the document that is open. Can be null in the case
    /// where the event is fired before the document has been opened or after it has been closed.
    Ptr<Document> document() const;

    /// The full path to the file.
    std::string fullPath() const;

    /// Gets and sets if the operation for this event is to be cancelled.
    /// The description of the reason for cancelling the operation can be set
    /// with the cancelReason property.
    /// This is only supported for the documentSaving event.
    bool isOperationCancelled() const;
    bool isOperationCancelled(bool value);

    /// Gets and sets the description of the reason why the operation is being cancelled.
    /// This property is only used if isOperationCancelled is set to true.
    std::string cancelReason() const;
    bool cancelReason(const std::string& value);

    DOCUMENTEVENTS_API static const char* classType();
    DOCUMENTEVENTS_API const char* objectType() const override;
    DOCUMENTEVENTS_API void* queryInterface(const char* id) const override;
    DOCUMENTEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Document* document_raw() const = 0;
    virtual char* fullPath_raw() const = 0;
    virtual bool isOperationCancelled_raw() const = 0;
    virtual bool isOperationCancelled_raw(bool value) = 0;
    virtual char* cancelReason_raw() const = 0;
    virtual bool cancelReason_raw(const char* value) = 0;
};

/// The DocumentEventHandler is a client implemented class that can be added as a handler to a
/// DocumentEvent.
class DocumentEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    DOCUMENTEVENTS_API virtual void notify(const Ptr<DocumentEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool DocumentEvent::add(DocumentEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool DocumentEvent::remove(DocumentEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline Ptr<Document> DocumentEventArgs::document() const
{
    Ptr<Document> res = document_raw();
    return res;
}

inline std::string DocumentEventArgs::fullPath() const
{
    std::string res;

    char* p= fullPath_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DocumentEventArgs::isOperationCancelled() const
{
    bool res = isOperationCancelled_raw();
    return res;
}

inline bool DocumentEventArgs::isOperationCancelled(bool value)
{
    return isOperationCancelled_raw(value);
}

inline std::string DocumentEventArgs::cancelReason() const
{
    std::string res;

    char* p= cancelReason_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DocumentEventArgs::cancelReason(const std::string& value)
{
    return cancelReason_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef DOCUMENTEVENTS_API