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
#include "../Application/EventHandler.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_MOUSEEVENTHANDLER_CPP__
# define ADSK_CORE_MOUSEEVENTHANDLER_API XI_EXPORT
# else
# define ADSK_CORE_MOUSEEVENTHANDLER_API
# endif
#else
# define ADSK_CORE_MOUSEEVENTHANDLER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class MouseEventArgs;
}}

namespace adsk { namespace core {

/// An event handler base class that a client derives from to handle events triggered by a MouseEvent.
/// A client implemented instance of this class can be added to a MouseEvent to receive these event notifications.
class MouseEventHandler : public EventHandler {
public:

    /// This notify member is called when an event is triggered from any event that this handler has been added to.
    /// eventArgs : The arguments object with details about this event and the firing MouseEvent.
    ADSK_CORE_MOUSEEVENTHANDLER_API virtual void notify(const Ptr<MouseEventArgs>& eventArgs) = 0;
};

}// namespace core
}// namespace adsk

#undef ADSK_CORE_MOUSEEVENTHANDLER_API