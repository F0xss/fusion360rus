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
#include "../Base.h"
#include "../CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_GRIDPREFERENCES_CPP__
# define ADSK_CORE_GRIDPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_GRIDPREFERENCES_API
# endif
#else
# define ADSK_CORE_GRIDPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The GridPreferences object provides access to grid related preferences.
class GridPreferences : public Base {
public:

    /// Gets and sets if the layout grid lock is enabled.
    bool isLayoutGridLockEnabled() const;
    bool isLayoutGridLockEnabled(bool value);

    ADSK_CORE_GRIDPREFERENCES_API static const char* classType();
    ADSK_CORE_GRIDPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_GRIDPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_GRIDPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isLayoutGridLockEnabled_raw() const = 0;
    virtual bool isLayoutGridLockEnabled_raw(bool value) = 0;
};

// Inline wrappers

inline bool GridPreferences::isLayoutGridLockEnabled() const
{
    bool res = isLayoutGridLockEnabled_raw();
    return res;
}

inline bool GridPreferences::isLayoutGridLockEnabled(bool value)
{
    return isLayoutGridLockEnabled_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_GRIDPREFERENCES_API