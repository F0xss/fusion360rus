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
# ifdef __COMPILING_ADSK_CORE_BOOLVALUECOMMANDINPUT_CPP__
# define ADSK_CORE_BOOLVALUECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_BOOLVALUECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_BOOLVALUECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get a boolean value from the user. This is represented
/// in the user interface as either a button or a check box.
class BoolValueCommandInput : public CommandInput {
public:

    /// Gets or sets the state of this input. If it's being displayed as a check box a value of true indicates the input is checked.
    /// If it's being displayed as a button, a value of true indicates the button is currently depressed.
    bool value() const;
    bool value(bool value);

    /// Gets and sets the folder that contains the image to display on the button. Text
    /// can also be displayed, which is specified using the text property.
    std::string resourceFolder() const;
    bool resourceFolder(const std::string& value);

    /// Indicates if this is being shown as a button or check box.
    bool isCheckBox() const;

    /// Gets and sets text to be displayed on the button. If the resourceFolder
    /// is not specified then the button will be displayed with only text. If
    /// text and the resource folder are specified then both the icon and text
    /// will be displayed.
    std::string text() const;
    bool text(const std::string& value);

    ADSK_CORE_BOOLVALUECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_BOOLVALUECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_BOOLVALUECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BOOLVALUECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool value_raw() const = 0;
    virtual bool value_raw(bool value) = 0;
    virtual char* resourceFolder_raw() const = 0;
    virtual bool resourceFolder_raw(const char* value) = 0;
    virtual bool isCheckBox_raw() const = 0;
    virtual char* text_raw() const = 0;
    virtual bool text_raw(const char* value) = 0;
};

// Inline wrappers

inline bool BoolValueCommandInput::value() const
{
    bool res = value_raw();
    return res;
}

inline bool BoolValueCommandInput::value(bool value)
{
    return value_raw(value);
}

inline std::string BoolValueCommandInput::resourceFolder() const
{
    std::string res;

    char* p= resourceFolder_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool BoolValueCommandInput::resourceFolder(const std::string& value)
{
    return resourceFolder_raw(value.c_str());
}

inline bool BoolValueCommandInput::isCheckBox() const
{
    bool res = isCheckBox_raw();
    return res;
}

inline std::string BoolValueCommandInput::text() const
{
    std::string res;

    char* p= text_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool BoolValueCommandInput::text(const std::string& value)
{
    return text_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_BOOLVALUECOMMANDINPUT_API