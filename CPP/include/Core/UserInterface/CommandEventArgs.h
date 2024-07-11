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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_COMMANDEVENTARGS_CPP__
# define ADSK_CORE_COMMANDEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDEVENTARGS_API
# endif
#else
# define ADSK_CORE_COMMANDEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Command;
}}

namespace adsk { namespace core {

/// Provides a set of arguments from a firing CommandEvent to a CommandEventHandler's notify callback method.
class CommandEventArgs : public EventArgs {
public:

    /// Gets the Command object.
    Ptr<Command> command() const;

    /// Used during the execute event to get or set that the execute operations failed
    /// and the commands transaction should be aborted.
    /// This property should be ignored for all events besides the Execute event.
    bool executeFailed() const;
    bool executeFailed(bool value);

    /// Used during the execute event to get or set a description of an execute failure.
    /// This property should be ignored for all events besides the Execute event.
    std::string executeFailedMessage() const;
    bool executeFailedMessage(const std::string& value);

    /// Used during the commandStarting event to get or set that the result of preview is valid
    /// and the command can reuse the result when OK is hit.
    /// This property should be ignored for all events besides the executePreview event.
    bool isValidResult() const;
    bool isValidResult(bool value);

    /// Gets the termination reason of the command. It's only valid on the destroy event.
    CommandTerminationReason terminationReason() const;

    ADSK_CORE_COMMANDEVENTARGS_API static const char* classType();
    ADSK_CORE_COMMANDEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_COMMANDEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Command* command_raw() const = 0;
    virtual bool executeFailed_raw() const = 0;
    virtual bool executeFailed_raw(bool value) = 0;
    virtual char* executeFailedMessage_raw() const = 0;
    virtual bool executeFailedMessage_raw(const char* value) = 0;
    virtual bool isValidResult_raw() const = 0;
    virtual bool isValidResult_raw(bool value) = 0;
    virtual CommandTerminationReason terminationReason_raw() const = 0;
};

// Inline wrappers

inline Ptr<Command> CommandEventArgs::command() const
{
    Ptr<Command> res = command_raw();
    return res;
}

inline bool CommandEventArgs::executeFailed() const
{
    bool res = executeFailed_raw();
    return res;
}

inline bool CommandEventArgs::executeFailed(bool value)
{
    return executeFailed_raw(value);
}

inline std::string CommandEventArgs::executeFailedMessage() const
{
    std::string res;

    char* p= executeFailedMessage_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool CommandEventArgs::executeFailedMessage(const std::string& value)
{
    return executeFailedMessage_raw(value.c_str());
}

inline bool CommandEventArgs::isValidResult() const
{
    bool res = isValidResult_raw();
    return res;
}

inline bool CommandEventArgs::isValidResult(bool value)
{
    return isValidResult_raw(value);
}

inline CommandTerminationReason CommandEventArgs::terminationReason() const
{
    CommandTerminationReason res = terminationReason_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDEVENTARGS_API