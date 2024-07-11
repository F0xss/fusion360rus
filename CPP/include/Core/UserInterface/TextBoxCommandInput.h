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
# ifdef __COMPILING_ADSK_CORE_TEXTBOXCOMMANDINPUT_CPP__
# define ADSK_CORE_TEXTBOXCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_TEXTBOXCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_TEXTBOXCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to interact with a text box.
class TextBoxCommandInput : public CommandInput {
public:

    /// Gets and sets the formatted text displayed in the dialog.
    std::string formattedText() const;
    bool formattedText(const std::string& value);

    /// Gets and sets the text in the text box. This returns the string
    /// as seen in the text box with any formatting stripped out.
    std::string text() const;
    bool text(const std::string& value);

    /// Gets and sets the height of the text box as defined by the number of rows of
    /// text that can be displayed. If the text is larger than will fit in the box
    /// a scroll bar will automatically be displayed.
    int numRows() const;
    bool numRows(int value);

    /// Gets and sets if the text box is read-only or not. If it is read-only the user
    /// cannot edit the text.
    bool isReadOnly() const;
    bool isReadOnly(bool value);

    ADSK_CORE_TEXTBOXCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_TEXTBOXCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_TEXTBOXCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TEXTBOXCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* formattedText_raw() const = 0;
    virtual bool formattedText_raw(const char* value) = 0;
    virtual char* text_raw() const = 0;
    virtual bool text_raw(const char* value) = 0;
    virtual int numRows_raw() const = 0;
    virtual bool numRows_raw(int value) = 0;
    virtual bool isReadOnly_raw() const = 0;
    virtual bool isReadOnly_raw(bool value) = 0;
};

// Inline wrappers

inline std::string TextBoxCommandInput::formattedText() const
{
    std::string res;

    char* p= formattedText_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TextBoxCommandInput::formattedText(const std::string& value)
{
    return formattedText_raw(value.c_str());
}

inline std::string TextBoxCommandInput::text() const
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

inline bool TextBoxCommandInput::text(const std::string& value)
{
    return text_raw(value.c_str());
}

inline int TextBoxCommandInput::numRows() const
{
    int res = numRows_raw();
    return res;
}

inline bool TextBoxCommandInput::numRows(int value)
{
    return numRows_raw(value);
}

inline bool TextBoxCommandInput::isReadOnly() const
{
    bool res = isReadOnly_raw();
    return res;
}

inline bool TextBoxCommandInput::isReadOnly(bool value)
{
    return isReadOnly_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TEXTBOXCOMMANDINPUT_API