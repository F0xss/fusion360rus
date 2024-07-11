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
# ifdef __COMPILING_ADSK_CORE_VALIDATEINPUTSEVENTARGS_CPP__
# define ADSK_CORE_VALIDATEINPUTSEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_VALIDATEINPUTSEVENTARGS_API
# endif
#else
# define ADSK_CORE_VALIDATEINPUTSEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandInputs;
}}

namespace adsk { namespace core {

/// Provides a set of arguments from a firing ValidateInputsEvent to a ValidateInputsEventHandler's notify callback method.
class ValidateInputsEventArgs : public EventArgs {
public:

    /// Used with AreInputsValid event to specify if the all of the inputs for the
    /// command are valid or not. If you set this to false, indicating they are not
    /// valid, the OK button for the dialog is disabled forcing the user to correct
    /// the inputs before continuing. If you set this to true the OK button will be
    /// enabled, as long as the inputs satisfy their own requirements. For example,
    /// if a SelectionCommandInput is defined to have at minimum number of entities
    /// selected, that requirement must be met, or if a ValueCommandInput has an invalid
    /// value specified, the OK button will still be disabled.
    bool areInputsValid() const;
    bool areInputsValid(bool value);

    /// Returns the collection of command inputs that are associated with the command this event is being fired for.
    Ptr<CommandInputs> inputs() const;

    ADSK_CORE_VALIDATEINPUTSEVENTARGS_API static const char* classType();
    ADSK_CORE_VALIDATEINPUTSEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_VALIDATEINPUTSEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VALIDATEINPUTSEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool areInputsValid_raw() const = 0;
    virtual bool areInputsValid_raw(bool value) = 0;
    virtual CommandInputs* inputs_raw() const = 0;
};

// Inline wrappers

inline bool ValidateInputsEventArgs::areInputsValid() const
{
    bool res = areInputsValid_raw();
    return res;
}

inline bool ValidateInputsEventArgs::areInputsValid(bool value)
{
    return areInputsValid_raw(value);
}

inline Ptr<CommandInputs> ValidateInputsEventArgs::inputs() const
{
    Ptr<CommandInputs> res = inputs_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VALIDATEINPUTSEVENTARGS_API