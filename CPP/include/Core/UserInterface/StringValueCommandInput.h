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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_STRINGVALUECOMMANDINPUT_CPP__
# define ADSK_CORE_STRINGVALUECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_STRINGVALUECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_STRINGVALUECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get a string value from the user.
class StringValueCommandInput : public CommandInput {
public:

    /// Gets or sets the value of this input.
    std::string value() const;
    bool value(const std::string& value);

    /// Gets or sets if this string input behaves as a password field.
    /// This defaults to false for a newly created StringValueCommandInput.
    /// If true, dots are displayed instead of the actual characters but
    /// the value property will get and set the actual string.
    bool isPassword() const;
    bool isPassword(bool value);

    /// Gets and sets if the string value is read-only or not. If it is read-only the user
    /// cannot edit the text. This property is initialized to False for a newly created
    /// StringValueCommandInput object.
    bool isReadOnly() const;
    bool isReadOnly(bool value);

    /// Specifies if the current value shown is valid or not. Any string is valid for a
    /// StringValueCommandInput, but you many have some criteria that the string needs
    /// to meet for it to be valid in your application. You use the command's validateInputs
    /// event to verify that inputs are valid and control whether the "OK" button is enabled
    /// or not, and you can also set this property on specific StringValueCommandInputs objects
    /// to indicate to the user that a specific value is not correct. When this property is
    /// true, Fusion 360 will change the color of the text to red to indicate to the user there is
    /// a problem.
    bool isValueError() const;
    bool isValueError(bool value);

    ADSK_CORE_STRINGVALUECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_STRINGVALUECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_STRINGVALUECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_STRINGVALUECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
    virtual bool isPassword_raw() const = 0;
    virtual bool isPassword_raw(bool value) = 0;
    virtual bool isReadOnly_raw() const = 0;
    virtual bool isReadOnly_raw(bool value) = 0;
    virtual bool isValueError_raw() const = 0;
    virtual bool isValueError_raw(bool value) = 0;
};

// Inline wrappers

inline std::string StringValueCommandInput::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool StringValueCommandInput::value(const std::string& value)
{
    return value_raw(value.c_str());
}

inline bool StringValueCommandInput::isPassword() const
{
    bool res = isPassword_raw();
    return res;
}

inline bool StringValueCommandInput::isPassword(bool value)
{
    return isPassword_raw(value);
}

inline bool StringValueCommandInput::isReadOnly() const
{
    bool res = isReadOnly_raw();
    return res;
}

inline bool StringValueCommandInput::isReadOnly(bool value)
{
    return isReadOnly_raw(value);
}

inline bool StringValueCommandInput::isValueError() const
{
    bool res = isValueError_raw();
    return res;
}

inline bool StringValueCommandInput::isValueError(bool value)
{
    return isValueError_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_STRINGVALUECOMMANDINPUT_API