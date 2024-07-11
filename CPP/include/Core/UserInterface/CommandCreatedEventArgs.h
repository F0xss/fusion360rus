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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_COMMANDCREATEDEVENTARGS_CPP__
# define ADSK_CORE_COMMANDCREATEDEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDCREATEDEVENTARGS_API
# endif
#else
# define ADSK_CORE_COMMANDCREATEDEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Command;
}}

namespace adsk { namespace core {

/// Provides data for the CommandCreated event.
class CommandCreatedEventArgs : public EventArgs {
public:

    /// Gets the newly created Command object that allows you to perform an action in response to the control being clicked.
    Ptr<Command> command() const;

    ADSK_CORE_COMMANDCREATEDEVENTARGS_API static const char* classType();
    ADSK_CORE_COMMANDCREATEDEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_COMMANDCREATEDEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDCREATEDEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Command* command_raw() const = 0;
};

// Inline wrappers

inline Ptr<Command> CommandCreatedEventArgs::command() const
{
    Ptr<Command> res = command_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDCREATEDEVENTARGS_API