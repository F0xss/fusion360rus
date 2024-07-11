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
# ifdef __COMPILING_ADSK_CORE_COMMANDCREATEDEVENTHANDLER_CPP__
# define ADSK_CORE_COMMANDCREATEDEVENTHANDLER_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDCREATEDEVENTHANDLER_API
# endif
#else
# define ADSK_CORE_COMMANDCREATEDEVENTHANDLER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandCreatedEventArgs;
}}

namespace adsk { namespace core {

/// Class that contains the call back function that is called when the CommandCreated event is fired.
class CommandCreatedEventHandler : public EventHandler {
public:

    /// This notify member is called when an event is triggered from any event that this handler has been added to.
    /// eventArgs : The arguments object with details about this event and the firing CommandEvent.
    ADSK_CORE_COMMANDCREATEDEVENTHANDLER_API virtual void notify(const Ptr<CommandCreatedEventArgs>& eventArgs) = 0;
};

}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDCREATEDEVENTHANDLER_API