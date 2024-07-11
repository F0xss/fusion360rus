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
# ifdef __COMPILING_ADSK_CORE_IMAGECOMMANDINPUT_CPP__
# define ADSK_CORE_IMAGECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_IMAGECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_IMAGECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides an image command input for including an image in a command dialog.
class ImageCommandInput : public CommandInput {
public:

    /// Gets and sets the full path and file name of the image file.
    /// Supported image format is .png
    /// Images are displayed in the command dialog using their actual size.
    std::string imageFile() const;
    bool imageFile(const std::string& value);

    ADSK_CORE_IMAGECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_IMAGECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_IMAGECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_IMAGECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* imageFile_raw() const = 0;
    virtual bool imageFile_raw(const char* value) = 0;
};

// Inline wrappers

inline std::string ImageCommandInput::imageFile() const
{
    std::string res;

    char* p= imageFile_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ImageCommandInput::imageFile(const std::string& value)
{
    return imageFile_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_IMAGECOMMANDINPUT_API