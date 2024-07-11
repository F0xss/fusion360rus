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
# ifdef __COMPILING_DATAEVENTS_CPP__
# define DATAEVENTS_API XI_EXPORT
# else
# define DATAEVENTS_API
# endif
#else
# define DATAEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataEventArgs;
    class DataEventHandler;
    class DataFile;
    class Status;
}}

namespace adsk { namespace core {

/// A Data event is an event associated with operations on Data items.
class DataEvent : public Event {
public:

    /// Add a handler to be notified when the data event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(DataEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(DataEventHandler* handler);

    DATAEVENTS_API static const char* classType();
    DATAEVENTS_API const char* objectType() const override;
    DATAEVENTS_API void* queryInterface(const char* id) const override;
    DATAEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(DataEventHandler* handler) = 0;
    virtual bool remove_raw(DataEventHandler* handler) = 0;
};

/// The DataEventArgs provides information associated with a data event.
/// Note that some properties are not available on every event.
class DataEventArgs : public EventArgs {
public:

    /// Gets the filename associated with the operation. If there isn't an associated
    /// filename, an empty string is returned. For a download operation, this will
    /// be the full filename of the downloaded file.
    std::string filename() const;

    /// Gets the DataFile object associated with this event. If there isn't
    /// a DataFile associated with the event, this property will return null.
    Ptr<DataFile> file() const;

    /// Returns a Status object that provides additional information about the
    /// success or failure of the operation.
    Ptr<Status> status() const;

    DATAEVENTS_API static const char* classType();
    DATAEVENTS_API const char* objectType() const override;
    DATAEVENTS_API void* queryInterface(const char* id) const override;
    DATAEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* filename_raw() const = 0;
    virtual DataFile* file_raw() const = 0;
    virtual Status* status_raw() const = 0;
};

/// The DataEventHandler is a client implemented class that can be added as a handler to a
/// DataEvent.
class DataEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    DATAEVENTS_API virtual void notify(const Ptr<DataEventArgs>& eventArgs) = 0;
};

// Inline wrappers

inline bool DataEvent::add(DataEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool DataEvent::remove(DataEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline std::string DataEventArgs::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<DataFile> DataEventArgs::file() const
{
    Ptr<DataFile> res = file_raw();
    return res;
}

inline Ptr<Status> DataEventArgs::status() const
{
    Ptr<Status> res = status_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef DATAEVENTS_API