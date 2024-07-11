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
# ifdef __COMPILING_ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_CPP__
# define ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API
# endif
#else
# define ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandDefinition;
}}

namespace adsk { namespace core {

/// Provides a set of arguments from a firing ApplicationCommandEvent to an ApplicationCommandEventHandler's
/// notify callback method.
class ApplicationCommandEventArgs : public EventArgs {
public:

    /// Returns the CommandDefinition object for the command the event is being fired for.
    Ptr<CommandDefinition> commandDefinition() const;

    /// Returns the unique id of the command the event if being fired for.
    std::string commandId() const;

    /// Used during the commandStarting event to get or set if the command should
    /// be allowed to continue executing or be canceled. This defaults to false,
    /// which will allow the command to execute. Setting this to true will cancel
    /// the command and not begin the execution.
    /// This property should be ignored for all events besides the commandStarting event.
    bool isCanceled() const;
    bool isCanceled(bool value);

    /// Returns the reason the command is being terminated.
    /// This property should be ignored for all events besides the commandTerminated event.
    CommandTerminationReason terminationReason() const;

    ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API static const char* classType();
    ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandDefinition* commandDefinition_raw() const = 0;
    virtual char* commandId_raw() const = 0;
    virtual bool isCanceled_raw() const = 0;
    virtual bool isCanceled_raw(bool value) = 0;
    virtual CommandTerminationReason terminationReason_raw() const = 0;
};

// Inline wrappers

inline Ptr<CommandDefinition> ApplicationCommandEventArgs::commandDefinition() const
{
    Ptr<CommandDefinition> res = commandDefinition_raw();
    return res;
}

inline std::string ApplicationCommandEventArgs::commandId() const
{
    std::string res;

    char* p= commandId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ApplicationCommandEventArgs::isCanceled() const
{
    bool res = isCanceled_raw();
    return res;
}

inline bool ApplicationCommandEventArgs::isCanceled(bool value)
{
    return isCanceled_raw(value);
}

inline CommandTerminationReason ApplicationCommandEventArgs::terminationReason() const
{
    CommandTerminationReason res = terminationReason_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_APPLICATIONCOMMANDEVENTARGS_API