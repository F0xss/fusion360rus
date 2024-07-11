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
#include "Palette.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_TEXTCOMMANDPALETTE_CPP__
# define ADSK_CORE_TEXTCOMMANDPALETTE_API XI_EXPORT
# else
# define ADSK_CORE_TEXTCOMMANDPALETTE_API
# endif
#else
# define ADSK_CORE_TEXTCOMMANDPALETTE_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Represents the palette that is the Text Command window in Fusion 360.
class TextCommandPalette : public Palette {
public:

    /// Write the specified text to the TEXT COMMAND window.
    /// text : The text to write to the Text Command window.
    /// Returns true if successful.
    bool writeText(const std::string& text);

    ADSK_CORE_TEXTCOMMANDPALETTE_API static const char* classType();
    ADSK_CORE_TEXTCOMMANDPALETTE_API const char* objectType() const override;
    ADSK_CORE_TEXTCOMMANDPALETTE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TEXTCOMMANDPALETTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool writeText_raw(const char* text) = 0;
};

// Inline wrappers

inline bool TextCommandPalette::writeText(const std::string& text)
{
    bool res = writeText_raw(text.c_str());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TEXTCOMMANDPALETTE_API