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
# ifdef __COMPILING_ADSK_CORE_MATERIALPREFERENCES_CPP__
# define ADSK_CORE_MATERIALPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_MATERIALPREFERENCES_API
# endif
#else
# define ADSK_CORE_MATERIALPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
    class Material;
}}

namespace adsk { namespace core {

/// Provides access to the material related preferences.
class MaterialPreferences : public Base {
public:

    /// Gets and sets the default material.
    Ptr<Material> defaultMaterial() const;
    bool defaultMaterial(const Ptr<Material>& value);

    /// Gets and sets an appearance override.
    /// This property return null indicating that there is no override, or be set to null to remove
    /// the current appearance override.
    Ptr<Appearance> appearanceOverride() const;
    bool appearanceOverride(const Ptr<Appearance>& value);

    ADSK_CORE_MATERIALPREFERENCES_API static const char* classType();
    ADSK_CORE_MATERIALPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_MATERIALPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATERIALPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Material* defaultMaterial_raw() const = 0;
    virtual bool defaultMaterial_raw(Material* value) = 0;
    virtual Appearance* appearanceOverride_raw() const = 0;
    virtual bool appearanceOverride_raw(Appearance* value) = 0;
};

// Inline wrappers

inline Ptr<Material> MaterialPreferences::defaultMaterial() const
{
    Ptr<Material> res = defaultMaterial_raw();
    return res;
}

inline bool MaterialPreferences::defaultMaterial(const Ptr<Material>& value)
{
    return defaultMaterial_raw(value.get());
}

inline Ptr<Appearance> MaterialPreferences::appearanceOverride() const
{
    Ptr<Appearance> res = appearanceOverride_raw();
    return res;
}

inline bool MaterialPreferences::appearanceOverride(const Ptr<Appearance>& value)
{
    return appearanceOverride_raw(value.get());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATERIALPREFERENCES_API