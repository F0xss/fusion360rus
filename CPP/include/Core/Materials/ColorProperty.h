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
# ifdef __COMPILING_ADSK_CORE_COLORPROPERTY_CPP__
# define ADSK_CORE_COLORPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_COLORPROPERTY_API
# endif
#else
# define ADSK_CORE_COLORPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class AppearanceTexture;
    class Color;
}}

namespace adsk { namespace core {

/// A color property associated with an appearance.
class ColorProperty : public Property {
public:

    /// Gets the associated texture, if one exists. The HasConnectedTexture property controls
    /// if there is an associated texture or not. If the parent is writable you can edit the
    /// texture. If no texture exists, this property will return null.
    Ptr<AppearanceTexture> connectedTexture() const;

    /// Specifies if this color is specified using a simple color or a texture. If this returns true
    /// the color is defined using a texture. If the parent is writable, this property can be set to
    /// true to change the definition from a simple color to a texture. You can then use the ConnectedTexture
    /// property to get the associated texture and modify it.
    bool hasConnectedTexture() const;
    bool hasConnectedTexture(bool value);

    /// Indicates if this property has multiple values or not.
    bool hasMultipleValues() const;

    /// Gets and sets this property value if there is a color and not a texture defining
    /// this color . If a texture is used, this property returns null. Setting this property
    /// when a texture is used removes the texture and changes the color definition to a simple color.
    Ptr<Color> value() const;
    bool value(const Ptr<Color>& value);

    /// Gets and sets the values associated with this property. The HasMultipleValues property
    /// indicates if this property will be returning more than one value.
    std::vector<Ptr<Color>> values() const;
    bool values(const std::vector<Ptr<Color>>& value);

    ADSK_CORE_COLORPROPERTY_API static const char* classType();
    ADSK_CORE_COLORPROPERTY_API const char* objectType() const override;
    ADSK_CORE_COLORPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COLORPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AppearanceTexture* connectedTexture_raw() const = 0;
    virtual bool hasConnectedTexture_raw() const = 0;
    virtual bool hasConnectedTexture_raw(bool value) = 0;
    virtual bool hasMultipleValues_raw() const = 0;
    virtual Color* value_raw() const = 0;
    virtual bool value_raw(Color* value) = 0;
    virtual Color** values_raw(size_t& return_size) const = 0;
    virtual bool values_raw(Color** value, size_t value_size) = 0;
};

// Inline wrappers

inline Ptr<AppearanceTexture> ColorProperty::connectedTexture() const
{
    Ptr<AppearanceTexture> res = connectedTexture_raw();
    return res;
}

inline bool ColorProperty::hasConnectedTexture() const
{
    bool res = hasConnectedTexture_raw();
    return res;
}

inline bool ColorProperty::hasConnectedTexture(bool value)
{
    return hasConnectedTexture_raw(value);
}

inline bool ColorProperty::hasMultipleValues() const
{
    bool res = hasMultipleValues_raw();
    return res;
}

inline Ptr<Color> ColorProperty::value() const
{
    Ptr<Color> res = value_raw();
    return res;
}

inline bool ColorProperty::value(const Ptr<Color>& value)
{
    return value_raw(value.get());
}

inline std::vector<Ptr<Color>> ColorProperty::values() const
{
    std::vector<Ptr<Color>> res;
    size_t s;

    Color** p= values_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool ColorProperty::values(const std::vector<Ptr<Color>>& value)
{
    Color** value_ = new Color*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = values_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COLORPROPERTY_API