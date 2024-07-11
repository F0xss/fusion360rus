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
# ifdef __COMPILING_ADSK_CORE_INPUTCHANGEDEVENTARGS_CPP__
# define ADSK_CORE_INPUTCHANGEDEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_INPUTCHANGEDEVENTARGS_API
# endif
#else
# define ADSK_CORE_INPUTCHANGEDEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandInput;
    class CommandInputs;
}}

namespace adsk { namespace core {

/// Provides a set of arguments from a firing InputChangedEvent to a InputEventChangedEventHandler's notify callback method.
class InputChangedEventArgs : public EventArgs {
public:

    /// Returns the command input that has just changed.
    Ptr<CommandInput> input() const;

    /// Returns the collection of command inputs that are associated with the command this event is being fired for.
    Ptr<CommandInputs> inputs() const;

    ADSK_CORE_INPUTCHANGEDEVENTARGS_API static const char* classType();
    ADSK_CORE_INPUTCHANGEDEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_INPUTCHANGEDEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_INPUTCHANGEDEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandInput* input_raw() const = 0;
    virtual CommandInputs* inputs_raw() const = 0;
};

// Inline wrappers

inline Ptr<CommandInput> InputChangedEventArgs::input() const
{
    Ptr<CommandInput> res = input_raw();
    return res;
}

inline Ptr<CommandInputs> InputChangedEventArgs::inputs() const
{
    Ptr<CommandInputs> res = inputs_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_INPUTCHANGEDEVENTARGS_API