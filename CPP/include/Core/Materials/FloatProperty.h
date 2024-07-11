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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_FLOATPROPERTY_CPP__
# define ADSK_CORE_FLOATPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_FLOATPROPERTY_API
# endif
#else
# define ADSK_CORE_FLOATPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class AppearanceTexture;
}}

namespace adsk { namespace core {

/// A float or real value property associated with a material or appearance.
class FloatProperty : public Property {
public:

    /// Gets and sets the boolean flag that indicates if the float value has been overridden
    /// using a texture. Setting this property to False will remove the texture so that a float
    /// value is used. Setting this property to True will connect a texture to this float value.
    bool hasConnectedTexture() const;
    bool hasConnectedTexture(bool value);

    /// Gets the associated texture, if one exists. The HasConnectedTexture property controls
    /// if there is an associated texture or not. If it's parent writable you can edit the
    /// texture. If no texture exists, this property will return Nothing.
    Ptr<AppearanceTexture> connectedTexture() const;

    /// Method that returns any limits for the value of this property. The HasLimits property can
    /// be used to see if there are any limits or not.
    /// hasLowLimit : Output Boolean that indicates if there is a low limit or not.
    /// lowLimit : If the hasLowLimit argument is true, this argument returns the low limit.
    /// hasHighLimit : Output Boolean that indicates if there is a high limit or not.
    /// highLimit : If the hasHighLimit argument is true, this argument returns the high limit.
    /// Returns true if the method call was successful.
    bool getLimits(bool& hasLowLimit, double& lowLimit, bool& hasHighLimit, double& highLimit);

    /// Gets the boolean flag that indicates if the value of this property has any limits it must be within to
    /// be valid. If True, use the GetLimits method to get the limit values.
    bool hasLimits() const;

    /// Gets the boolean flag that indicates if this property has multiple values or not.
    bool hasMultipleValues() const;

    /// Gets the boolean flag that indicates that this property represents a percentage value so
    /// the valid values must be in the range of 0.0 to 1.0 unless they’re further limited by
    /// additional limits which can be determined with the HasLimits property.
    bool isPercentage() const;

    /// Gets the units that the value of this property is returned in. The String returned is a
    /// valid Fusion 360 unit string.
    std::string units() const;

    /// Gets and sets this property value. The value of this property should be ignored
    /// if the HasConnectedTexture property is true. Setting this will remove any
    /// associated texture, if there is one.
    double value() const;
    bool value(double value);

    /// Gets and sets the values associated with this property. HasMultipleValues property
    /// indicates if this property will be returning more than one value.
    std::vector<double> values() const;
    bool values(const std::vector<double>& value);

    ADSK_CORE_FLOATPROPERTY_API static const char* classType();
    ADSK_CORE_FLOATPROPERTY_API const char* objectType() const override;
    ADSK_CORE_FLOATPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FLOATPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool hasConnectedTexture_raw() const = 0;
    virtual bool hasConnectedTexture_raw(bool value) = 0;
    virtual AppearanceTexture* connectedTexture_raw() const = 0;
    virtual bool getLimits_raw(bool& hasLowLimit, double& lowLimit, bool& hasHighLimit, double& highLimit) = 0;
    virtual bool hasLimits_raw() const = 0;
    virtual bool hasMultipleValues_raw() const = 0;
    virtual bool isPercentage_raw() const = 0;
    virtual char* units_raw() const = 0;
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual double* values_raw(size_t& return_size) const = 0;
    virtual bool values_raw(const double* value, size_t value_size) = 0;
};

// Inline wrappers

inline bool FloatProperty::hasConnectedTexture() const
{
    bool res = hasConnectedTexture_raw();
    return res;
}

inline bool FloatProperty::hasConnectedTexture(bool value)
{
    return hasConnectedTexture_raw(value);
}

inline Ptr<AppearanceTexture> FloatProperty::connectedTexture() const
{
    Ptr<AppearanceTexture> res = connectedTexture_raw();
    return res;
}

inline bool FloatProperty::getLimits(bool& hasLowLimit, double& lowLimit, bool& hasHighLimit, double& highLimit)
{
    bool res = getLimits_raw(hasLowLimit, lowLimit, hasHighLimit, highLimit);
    return res;
}

inline bool FloatProperty::hasLimits() const
{
    bool res = hasLimits_raw();
    return res;
}

inline bool FloatProperty::hasMultipleValues() const
{
    bool res = hasMultipleValues_raw();
    return res;
}

inline bool FloatProperty::isPercentage() const
{
    bool res = isPercentage_raw();
    return res;
}

inline std::string FloatProperty::units() const
{
    std::string res;

    char* p= units_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline double FloatProperty::value() const
{
    double res = value_raw();
    return res;
}

inline bool FloatProperty::value(double value)
{
    return value_raw(value);
}

inline std::vector<double> FloatProperty::values() const
{
    std::vector<double> res;
    size_t s;

    double* p= values_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool FloatProperty::values(const std::vector<double>& value)
{
    return values_raw(value.empty() ? nullptr : &value[0], value.size());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FLOATPROPERTY_API