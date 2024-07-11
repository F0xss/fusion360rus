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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_CAMERAEVENTS_CPP__
# define CAMERAEVENTS_API XI_EXPORT
# else
# define CAMERAEVENTS_API
# endif
#else
# define CAMERAEVENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CameraEventArgs;
    class CameraEventHandler;
    class Viewport;
}}

namespace adsk { namespace core {

/// A CameraEvent represents an event that occurs in reaction to the user manipulating the view.
/// Camera changes happen when user changes the view by rotating, zooming in or out, panning,
/// changing from parallel to perspective, or when the extents of the viewport changes.
class CameraEvent : public Event {
public:

    /// Add a handler to be notified when the event occurs.
    /// handler : The handler object to be called when this event is fired.
    /// Returns true if the addition of the handler was successful.
    bool add(CameraEventHandler* handler);

    /// Removes a handler from the event.
    /// handler : The handler object to be removed from the event.
    /// Returns true if removal of the handler was successful.
    bool remove(CameraEventHandler* handler);

    CAMERAEVENTS_API static const char* classType();
    CAMERAEVENTS_API const char* objectType() const override;
    CAMERAEVENTS_API void* queryInterface(const char* id) const override;
    CAMERAEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool add_raw(CameraEventHandler* handler) = 0;
    virtual bool remove_raw(CameraEventHandler* handler) = 0;
};

/// The CameraEventHandler is a client implemented class that can be added as a handler to an
/// CameraEvent.
class CameraEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    CAMERAEVENTS_API virtual void notify(const Ptr<CameraEventArgs>& eventArgs) = 0;
};

/// The CameraEventArgs provides information associated with a camera change.
/// Camera changes happen when user changes the view by rotating, zooming in or out, panning,
/// changing from parallel to perspective, or when the extents of the viewport changes.
class CameraEventArgs : public EventArgs {
public:

    /// Returns the viewport that the modified camera is associated with.
    Ptr<Viewport> viewport() const;

    CAMERAEVENTS_API static const char* classType();
    CAMERAEVENTS_API const char* objectType() const override;
    CAMERAEVENTS_API void* queryInterface(const char* id) const override;
    CAMERAEVENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Viewport* viewport_raw() const = 0;
};

// Inline wrappers

inline bool CameraEvent::add(CameraEventHandler* handler)
{
    bool res = add_raw(handler);
    return res;
}

inline bool CameraEvent::remove(CameraEventHandler* handler)
{
    bool res = remove_raw(handler);
    return res;
}

inline Ptr<Viewport> CameraEventArgs::viewport() const
{
    Ptr<Viewport> res = viewport_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef CAMERAEVENTS_API