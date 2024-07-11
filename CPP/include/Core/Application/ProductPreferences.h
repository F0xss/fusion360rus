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
# ifdef __COMPILING_ADSK_CORE_PRODUCTPREFERENCES_CPP__
# define ADSK_CORE_PRODUCTPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_PRODUCTPREFERENCES_API
# endif
#else
# define ADSK_CORE_PRODUCTPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The base class for the general product preferences. There is a derived class
/// for each product where the specific preference values are exposed.
class ProductPreferences : public Base {
public:

    /// Returns the name of this ProductPreferences object.
    std::string name() const;

    ADSK_CORE_PRODUCTPREFERENCES_API static const char* classType();
    ADSK_CORE_PRODUCTPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_PRODUCTPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PRODUCTPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual void placeholderProductPreferences0() {}
    virtual void placeholderProductPreferences1() {}
    virtual void placeholderProductPreferences2() {}
    virtual void placeholderProductPreferences3() {}
    virtual void placeholderProductPreferences4() {}
    virtual void placeholderProductPreferences5() {}
    virtual void placeholderProductPreferences6() {}
    virtual void placeholderProductPreferences7() {}
    virtual void placeholderProductPreferences8() {}
    virtual void placeholderProductPreferences9() {}
    virtual void placeholderProductPreferences10() {}
    virtual void placeholderProductPreferences11() {}
    virtual void placeholderProductPreferences12() {}
    virtual void placeholderProductPreferences13() {}
    virtual void placeholderProductPreferences14() {}
    virtual void placeholderProductPreferences15() {}
    virtual void placeholderProductPreferences16() {}
    virtual void placeholderProductPreferences17() {}
    virtual void placeholderProductPreferences18() {}
    virtual void placeholderProductPreferences19() {}
    virtual void placeholderProductPreferences20() {}
    virtual void placeholderProductPreferences21() {}
    virtual void placeholderProductPreferences22() {}
    virtual void placeholderProductPreferences23() {}
    virtual void placeholderProductPreferences24() {}
    virtual void placeholderProductPreferences25() {}
    virtual void placeholderProductPreferences26() {}
    virtual void placeholderProductPreferences27() {}
    virtual void placeholderProductPreferences28() {}
    virtual void placeholderProductPreferences29() {}
    virtual void placeholderProductPreferences30() {}
};

// Inline wrappers

inline std::string ProductPreferences::name() const
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

#undef ADSK_CORE_PRODUCTPREFERENCES_API