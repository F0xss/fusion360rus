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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DEFAULTUNITSPREFERENCES_CPP__
# define ADSK_CORE_DEFAULTUNITSPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_DEFAULTUNITSPREFERENCES_API
# endif
#else
# define ADSK_CORE_DEFAULTUNITSPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The base class for the default units preference. There is a derived class
/// supported by each product where the specific preference values are exposed.
class DefaultUnitsPreferences : public Base {
public:

    /// Returns the name of this DefaultUnitPreferences object.
    std::string name() const;

    ADSK_CORE_DEFAULTUNITSPREFERENCES_API static const char* classType();
    ADSK_CORE_DEFAULTUNITSPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_DEFAULTUNITSPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DEFAULTUNITSPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual void placeholderDefaultUnitsPreferences0() {}
    virtual void placeholderDefaultUnitsPreferences1() {}
    virtual void placeholderDefaultUnitsPreferences2() {}
    virtual void placeholderDefaultUnitsPreferences3() {}
    virtual void placeholderDefaultUnitsPreferences4() {}
    virtual void placeholderDefaultUnitsPreferences5() {}
    virtual void placeholderDefaultUnitsPreferences6() {}
    virtual void placeholderDefaultUnitsPreferences7() {}
    virtual void placeholderDefaultUnitsPreferences8() {}
    virtual void placeholderDefaultUnitsPreferences9() {}
    virtual void placeholderDefaultUnitsPreferences10() {}
    virtual void placeholderDefaultUnitsPreferences11() {}
    virtual void placeholderDefaultUnitsPreferences12() {}
    virtual void placeholderDefaultUnitsPreferences13() {}
    virtual void placeholderDefaultUnitsPreferences14() {}
    virtual void placeholderDefaultUnitsPreferences15() {}
    virtual void placeholderDefaultUnitsPreferences16() {}
    virtual void placeholderDefaultUnitsPreferences17() {}
    virtual void placeholderDefaultUnitsPreferences18() {}
    virtual void placeholderDefaultUnitsPreferences19() {}
    virtual void placeholderDefaultUnitsPreferences20() {}
    virtual void placeholderDefaultUnitsPreferences21() {}
    virtual void placeholderDefaultUnitsPreferences22() {}
    virtual void placeholderDefaultUnitsPreferences23() {}
    virtual void placeholderDefaultUnitsPreferences24() {}
    virtual void placeholderDefaultUnitsPreferences25() {}
    virtual void placeholderDefaultUnitsPreferences26() {}
    virtual void placeholderDefaultUnitsPreferences27() {}
    virtual void placeholderDefaultUnitsPreferences28() {}
    virtual void placeholderDefaultUnitsPreferences29() {}
    virtual void placeholderDefaultUnitsPreferences30() {}
};

// Inline wrappers

inline std::string DefaultUnitsPreferences::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DEFAULTUNITSPREFERENCES_API