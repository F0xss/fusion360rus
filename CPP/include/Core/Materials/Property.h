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
# ifdef __COMPILING_ADSK_CORE_PROPERTY_CPP__
# define ADSK_CORE_PROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_PROPERTY_API
# endif
#else
# define ADSK_CORE_PROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The base class for the specific property types used by materials and appearances.
class Property : public Base {
public:

    /// Returns the name of this property as seen in the user interface. This name is localized
    /// and can change based on the current language
    std::string name() const;

    /// Indicates if this property is read-only. If True any attempted edits will fail.
    bool isReadOnly() const;

    /// Returns the unique ID of this property.
    std::string id() const;

    /// Returns the parent of this property.
    Ptr<Base> parent() const;

    ADSK_CORE_PROPERTY_API static const char* classType();
    ADSK_CORE_PROPERTY_API const char* objectType() const override;
    ADSK_CORE_PROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool isReadOnly_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual Base* parent_raw() const = 0;
    virtual void placeholderProperty0() {}
    virtual void placeholderProperty1() {}
    virtual void placeholderProperty2() {}
    virtual void placeholderProperty3() {}
    virtual void placeholderProperty4() {}
    virtual void placeholderProperty5() {}
    virtual void placeholderProperty6() {}
    virtual void placeholderProperty7() {}
    virtual void placeholderProperty8() {}
    virtual void placeholderProperty9() {}
    virtual void placeholderProperty10() {}
    virtual void placeholderProperty11() {}
    virtual void placeholderProperty12() {}
    virtual void placeholderProperty13() {}
    virtual void placeholderProperty14() {}
    virtual void placeholderProperty15() {}
    virtual void placeholderProperty16() {}
    virtual void placeholderProperty17() {}
    virtual void placeholderProperty18() {}
    virtual void placeholderProperty19() {}
    virtual void placeholderProperty20() {}
    virtual void placeholderProperty21() {}
    virtual void placeholderProperty22() {}
    virtual void placeholderProperty23() {}
    virtual void placeholderProperty24() {}
    virtual void placeholderProperty25() {}
    virtual void placeholderProperty26() {}
    virtual void placeholderProperty27() {}
};

// Inline wrappers

inline std::string Property::name() const
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

inline bool Property::isReadOnly() const
{
    bool res = isReadOnly_raw();
    return res;
}

inline std::string Property::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<Base> Property::parent() const
{
    Ptr<Base> res = parent_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PROPERTY_API