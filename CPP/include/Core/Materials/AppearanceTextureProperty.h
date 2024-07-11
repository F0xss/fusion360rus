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
# ifdef __COMPILING_ADSK_CORE_APPEARANCETEXTUREPROPERTY_CPP__
# define ADSK_CORE_APPEARANCETEXTUREPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_APPEARANCETEXTUREPROPERTY_API
# endif
#else
# define ADSK_CORE_APPEARANCETEXTUREPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class AppearanceTexture;
}}

namespace adsk { namespace core {

/// A texture value property associated with a material or appearance.
class AppearanceTextureProperty : public Property {
public:

    /// Gets and sets this property value.
    Ptr<AppearanceTexture> value() const;
    bool value(const Ptr<AppearanceTexture>& value);

    /// Specifies if this AppearanceTexture is being used. This is the equivalent of the
    /// check box in the Appearance dialog to enable the use of a text for an appearance or not.
    /// if this is False, then the value property should not be used because there isn't an associated.
    /// AppearanceTexture.
    bool isUsed() const;

    ADSK_CORE_APPEARANCETEXTUREPROPERTY_API static const char* classType();
    ADSK_CORE_APPEARANCETEXTUREPROPERTY_API const char* objectType() const override;
    ADSK_CORE_APPEARANCETEXTUREPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_APPEARANCETEXTUREPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual AppearanceTexture* value_raw() const = 0;
    virtual bool value_raw(AppearanceTexture* value) = 0;
    virtual bool isUsed_raw() const = 0;
};

// Inline wrappers

inline Ptr<AppearanceTexture> AppearanceTextureProperty::value() const
{
    Ptr<AppearanceTexture> res = value_raw();
    return res;
}

inline bool AppearanceTextureProperty::value(const Ptr<AppearanceTexture>& value)
{
    return value_raw(value.get());
}

inline bool AppearanceTextureProperty::isUsed() const
{
    bool res = isUsed_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_APPEARANCETEXTUREPROPERTY_API