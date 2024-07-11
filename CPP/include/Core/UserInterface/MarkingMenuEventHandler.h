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
# ifdef __COMPILING_ADSK_CORE_MARKINGMENUEVENTHANDLER_CPP__
# define ADSK_CORE_MARKINGMENUEVENTHANDLER_API XI_EXPORT
# else
# define ADSK_CORE_MARKINGMENUEVENTHANDLER_API
# endif
#else
# define ADSK_CORE_MARKINGMENUEVENTHANDLER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class MarkingMenuEventArgs;
}}

namespace adsk { namespace core {

/// The MarkingMenuEventHandler is a client implemented class that can be added as a handler to a
/// MarkingMenuEvent.
class MarkingMenuEventHandler : public EventHandler {
public:

    /// The function called by Fusion 360 when the associated event is fired.
    /// eventArgs : Returns an object that provides access to additional information associated with the event.
    ADSK_CORE_MARKINGMENUEVENTHANDLER_API virtual void notify(const Ptr<MarkingMenuEventArgs>& eventArgs) = 0;
};

}// namespace core
}// namespace adsk

#undef ADSK_CORE_MARKINGMENUEVENTHANDLER_API