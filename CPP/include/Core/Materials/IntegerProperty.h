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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_INTEGERPROPERTY_CPP__
# define ADSK_CORE_INTEGERPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_INTEGERPROPERTY_API
# endif
#else
# define ADSK_CORE_INTEGERPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// An integer value property associated with a material or appearance.
class IntegerProperty : public Property {
public:

    /// Method that returns any limits for the value of this property. The HasLimits property can
    /// be used to see if there are any limits or not.
    /// hasLowLimit : Output Boolean that indicates if there is a low limit or not.
    /// lowLimit : If the hasLowLimit argument is true, this argument returns the low limit.
    /// hasHighLimit : Output Boolean that indicates if there is a high limit or not.
    /// highLimit : If the hasHighLimit argument is true, this argument returns the high limit.
    /// Returns true if the method call was successful.
    bool getLimits(bool& hasLowLimit, int& lowLimit, bool& hasHighLimit, int& highLimit);

    /// Gets the boolean flag that indicates if the value of this property has any limits it must
    /// be within to be valid. If True, use the GetLimits method to get the limit values.
    bool hasLimits() const;

    /// Gets the boolean flag that indicates if this property has multiple values or not.
    bool hasMultipleValues() const;

    /// Gets and sets this property value. The value of this property should be ignored
    /// if the HasConnectedTexture property is true. Setting this will remove any
    /// associated texture, if there is one.
    int value() const;
    bool value(int value);

    /// Gets and sets the values associated with this property. HasMultipleValues property
    /// indicates if this property will be returning more than one value.
    std::vector<int> values() const;
    bool values(const std::vector<int>& value);

    ADSK_CORE_INTEGERPROPERTY_API static const char* classType();
    ADSK_CORE_INTEGERPROPERTY_API const char* objectType() const override;
    ADSK_CORE_INTEGERPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_INTEGERPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool getLimits_raw(bool& hasLowLimit, int& lowLimit, bool& hasHighLimit, int& highLimit) = 0;
    virtual bool hasLimits_raw() const = 0;
    virtual bool hasMultipleValues_raw() const = 0;
    virtual int value_raw() const = 0;
    virtual bool value_raw(int value) = 0;
    virtual int* values_raw(size_t& return_size) const = 0;
    virtual bool values_raw(const int* value, size_t value_size) = 0;
};

// Inline wrappers

inline bool IntegerProperty::getLimits(bool& hasLowLimit, int& lowLimit, bool& hasHighLimit, int& highLimit)
{
    bool res = getLimits_raw(hasLowLimit, lowLimit, hasHighLimit, highLimit);
    return res;
}

inline bool IntegerProperty::hasLimits() const
{
    bool res = hasLimits_raw();
    return res;
}

inline bool IntegerProperty::hasMultipleValues() const
{
    bool res = hasMultipleValues_raw();
    return res;
}

inline int IntegerProperty::value() const
{
    int res = value_raw();
    return res;
}

inline bool IntegerProperty::value(int value)
{
    return value_raw(value);
}

inline std::vector<int> IntegerProperty::values() const
{
    std::vector<int> res;
    size_t s;

    int* p= values_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool IntegerProperty::values(const std::vector<int>& value)
{
    return values_raw(value.empty() ? nullptr : &value[0], value.size());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_INTEGERPROPERTY_API