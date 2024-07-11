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
#include "../CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_MOUSEEVENTARGS_CPP__
# define ADSK_CORE_MOUSEEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_MOUSEEVENTARGS_API
# endif
#else
# define ADSK_CORE_MOUSEEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point2D;
    class Viewport;
}}

namespace adsk { namespace core {

/// Provides a set of arguments from a firing MouseEvent to a MouseEventHandler's notify callback method.
class MouseEventArgs : public EventArgs {
public:

    /// Gets which mouse button(s) are pressed. The returned value
    /// is bitwise and can indicate that more than one button is pressed.
    MouseButtons button() const;

    /// Gets the number of times the button was pressed and released.
    size_t clicks() const;

    /// Gets a signed count of the number of detents the mouse wheel has rotated.
    int wheelDelta() const;

    /// Gets which modifier keys are currently pressed. The returned value
    /// is bitwise and can indicate that more than one button is pressed.
    KeyboardModifiers keyboardModifiers() const;

    /// Gets the coordinate of the mouse in screen space.
    Ptr<Point2D> position() const;

    /// Gets the coordinate of the mouse in viewport space, if the mouse is
    /// within a viewport. If the mouse is not over a viewport this property will return null.
    Ptr<Point2D> viewportPosition() const;

    /// Returns the viewport where the mouse event occurred, if it was within a viewport.
    /// If the mouse is not over a viewport this property will return null.
    Ptr<Viewport> viewport() const;

    ADSK_CORE_MOUSEEVENTARGS_API static const char* classType();
    ADSK_CORE_MOUSEEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_MOUSEEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MOUSEEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MouseButtons button_raw() const = 0;
    virtual size_t clicks_raw() const = 0;
    virtual int wheelDelta_raw() const = 0;
    virtual KeyboardModifiers keyboardModifiers_raw() const = 0;
    virtual Point2D* position_raw() const = 0;
    virtual Point2D* viewportPosition_raw() const = 0;
    virtual Viewport* viewport_raw() const = 0;
};

// Inline wrappers

inline MouseButtons MouseEventArgs::button() const
{
    MouseButtons res = button_raw();
    return res;
}

inline size_t MouseEventArgs::clicks() const
{
    size_t res = clicks_raw();
    return res;
}

inline int MouseEventArgs::wheelDelta() const
{
    int res = wheelDelta_raw();
    return res;
}

inline KeyboardModifiers MouseEventArgs::keyboardModifiers() const
{
    KeyboardModifiers res = keyboardModifiers_raw();
    return res;
}

inline Ptr<Point2D> MouseEventArgs::position() const
{
    Ptr<Point2D> res = position_raw();
    return res;
}

inline Ptr<Point2D> MouseEventArgs::viewportPosition() const
{
    Ptr<Point2D> res = viewportPosition_raw();
    return res;
}

inline Ptr<Viewport> MouseEventArgs::viewport() const
{
    Ptr<Viewport> res = viewport_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MOUSEEVENTARGS_API