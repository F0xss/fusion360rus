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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_BOOLEANPROPERTY_CPP__
# define ADSK_CORE_BOOLEANPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_BOOLEANPROPERTY_API
# endif
#else
# define ADSK_CORE_BOOLEANPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A material or appearance property that is a Boolean value.
class BooleanProperty : public Property {
public:

    /// Gets and sets the value of this property.
    bool value() const;
    bool value(bool value);

    ADSK_CORE_BOOLEANPROPERTY_API static const char* classType();
    ADSK_CORE_BOOLEANPROPERTY_API const char* objectType() const override;
    ADSK_CORE_BOOLEANPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BOOLEANPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool value_raw() const = 0;
    virtual bool value_raw(bool value) = 0;
};

// Inline wrappers

inline bool BooleanProperty::value() const
{
    bool res = value_raw();
    return res;
}

inline bool BooleanProperty::value(bool value)
{
    return value_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_BOOLEANPROPERTY_API