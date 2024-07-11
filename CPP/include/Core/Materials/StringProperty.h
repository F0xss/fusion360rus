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
#include "Property.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_STRINGPROPERTY_CPP__
# define ADSK_CORE_STRINGPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_STRINGPROPERTY_API
# endif
#else
# define ADSK_CORE_STRINGPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A string value property associated with a material or appearance.
class StringProperty : public Property {
public:

    /// Gets and sets the property value.
    std::string value() const;
    bool value(const std::string& value);

    ADSK_CORE_STRINGPROPERTY_API static const char* classType();
    ADSK_CORE_STRINGPROPERTY_API const char* objectType() const override;
    ADSK_CORE_STRINGPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_STRINGPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
};

// Inline wrappers

inline std::string StringProperty::value() const
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

inline bool StringProperty::value(const std::string& value)
{
    return value_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_STRINGPROPERTY_API