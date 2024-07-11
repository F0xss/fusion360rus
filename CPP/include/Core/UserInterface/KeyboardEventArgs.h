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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_KEYBOARDEVENTARGS_CPP__
# define ADSK_CORE_KEYBOARDEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_KEYBOARDEVENTARGS_API
# endif
#else
# define ADSK_CORE_KEYBOARDEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a set of arguments from a firing KeyboardEvent to a KeyboardEventHandler's notify callback method.
class KeyboardEventArgs : public EventArgs {
public:

    /// Gets the set of keyboard modifiers that were active. The value is the Boolean
    /// combination of KeyboardModifiers values.
    int modifierMask() const;

    /// Gets the keyboard key.
    KeyCodes keyCode() const;

    ADSK_CORE_KEYBOARDEVENTARGS_API static const char* classType();
    ADSK_CORE_KEYBOARDEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_KEYBOARDEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_KEYBOARDEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int modifierMask_raw() const = 0;
    virtual KeyCodes keyCode_raw() const = 0;
};

// Inline wrappers

inline int KeyboardEventArgs::modifierMask() const
{
    int res = modifierMask_raw();
    return res;
}

inline KeyCodes KeyboardEventArgs::keyCode() const
{
    KeyCodes res = keyCode_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_KEYBOARDEVENTARGS_API