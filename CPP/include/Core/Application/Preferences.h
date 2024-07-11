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
# ifdef __COMPILING_ADSK_CORE_PREFERENCES_CPP__
# define ADSK_CORE_PREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_PREFERENCES_API
# endif
#else
# define ADSK_CORE_PREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DefaultUnitsPreferencesCollection;
    class GeneralPreferences;
    class GraphicsPreferences;
    class GridPreferences;
    class MaterialPreferences;
    class NetworkPreferences;
    class ProductPreferencesCollection;
    class ProductUsageData;
    class UnitAndValuePreferences;
}}

namespace adsk { namespace core {

/// The Preferences object provides access to the various preference related objects
/// for getting and setting the various preference values.
class Preferences : public Base {
public:

    /// Gets the GeneralPreferences object.
    Ptr<GeneralPreferences> generalPreferences() const;

    /// Gets the MaterialPreferences object.
    Ptr<MaterialPreferences> materialPreferences() const;

    /// Gets the GraphicsPreferences object.
    Ptr<GraphicsPreferences> graphicsPreferences() const;

    /// Gets the NetworkPreferences object.
    Ptr<NetworkPreferences> networkPreferences() const;

    /// Gets the UnitAndValuePreferences object.
    Ptr<UnitAndValuePreferences> unitAndValuePreferences() const;

    /// Gets the DefaultUnitsPreferences object.
    Ptr<DefaultUnitsPreferencesCollection> defaultUnitsPreferences() const;

    /// Gets the ProductPreferences object.
    Ptr<ProductPreferencesCollection> productPreferences() const;

    /// Gets the GridPreferences object.
    Ptr<GridPreferences> gridPreferences() const;

    /// Gets the ProductUsageData object.
    Ptr<ProductUsageData> productUsageData() const;

    ADSK_CORE_PREFERENCES_API static const char* classType();
    ADSK_CORE_PREFERENCES_API const char* objectType() const override;
    ADSK_CORE_PREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual GeneralPreferences* generalPreferences_raw() const = 0;
    virtual MaterialPreferences* materialPreferences_raw() const = 0;
    virtual GraphicsPreferences* graphicsPreferences_raw() const = 0;
    virtual NetworkPreferences* networkPreferences_raw() const = 0;
    virtual UnitAndValuePreferences* unitAndValuePreferences_raw() const = 0;
    virtual DefaultUnitsPreferencesCollection* defaultUnitsPreferences_raw() const = 0;
    virtual ProductPreferencesCollection* productPreferences_raw() const = 0;
    virtual GridPreferences* gridPreferences_raw() const = 0;
    virtual ProductUsageData* productUsageData_raw() const = 0;
};

// Inline wrappers

inline Ptr<GeneralPreferences> Preferences::generalPreferences() const
{
    Ptr<GeneralPreferences> res = generalPreferences_raw();
    return res;
}

inline Ptr<MaterialPreferences> Preferences::materialPreferences() const
{
    Ptr<MaterialPreferences> res = materialPreferences_raw();
    return res;
}

inline Ptr<GraphicsPreferences> Preferences::graphicsPreferences() const
{
    Ptr<GraphicsPreferences> res = graphicsPreferences_raw();
    return res;
}

inline Ptr<NetworkPreferences> Preferences::networkPreferences() const
{
    Ptr<NetworkPreferences> res = networkPreferences_raw();
    return res;
}

inline Ptr<UnitAndValuePreferences> Preferences::unitAndValuePreferences() const
{
    Ptr<UnitAndValuePreferences> res = unitAndValuePreferences_raw();
    return res;
}

inline Ptr<DefaultUnitsPreferencesCollection> Preferences::defaultUnitsPreferences() const
{
    Ptr<DefaultUnitsPreferencesCollection> res = defaultUnitsPreferences_raw();
    return res;
}

inline Ptr<ProductPreferencesCollection> Preferences::productPreferences() const
{
    Ptr<ProductPreferencesCollection> res = productPreferences_raw();
    return res;
}

inline Ptr<GridPreferences> Preferences::gridPreferences() const
{
    Ptr<GridPreferences> res = gridPreferences_raw();
    return res;
}

inline Ptr<ProductUsageData> Preferences::productUsageData() const
{
    Ptr<ProductUsageData> res = productUsageData_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PREFERENCES_API