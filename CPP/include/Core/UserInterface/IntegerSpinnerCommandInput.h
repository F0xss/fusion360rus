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
#include "CommandInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_CPP__
# define ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get the value of a spinner from the user, the value type is integer.
class IntegerSpinnerCommandInput : public CommandInput {
public:

    /// Gets and sets the value associated with this input.
    int value() const;
    bool value(int value);

    /// Gets the minimum allowed value of the spinner.
    int minimumValue() const;

    /// Gets the maximum allowed value of the spinner.
    int maximumValue() const;

    /// Gets the spin step. The value should be more than zero. This is the amount the spinner will advance
    /// when the user clicks the spin button beside the value.
    size_t spinStep() const;

    ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int value_raw() const = 0;
    virtual int minimumValue_raw() const = 0;
    virtual int maximumValue_raw() const = 0;
    virtual size_t spinStep_raw() const = 0;
    virtual bool value__raw(int value) = 0;
};

// Inline wrappers

inline int IntegerSpinnerCommandInput::value() const
{
    int res = value_raw();
    return res;
}

inline bool IntegerSpinnerCommandInput::value(int value)
{
    return value__raw(value);
}

inline int IntegerSpinnerCommandInput::minimumValue() const
{
    int res = minimumValue_raw();
    return res;
}

inline int IntegerSpinnerCommandInput::maximumValue() const
{
    int res = maximumValue_raw();
    return res;
}

inline size_t IntegerSpinnerCommandInput::spinStep() const
{
    size_t res = spinStep_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_INTEGERSPINNERCOMMANDINPUT_API