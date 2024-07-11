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
# ifdef __COMPILING_ADSK_CORE_GRAPHICSPREFERENCES_CPP__
# define ADSK_CORE_GRAPHICSPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_GRAPHICSPREFERENCES_API
# endif
#else
# define ADSK_CORE_GRAPHICSPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The GraphicsPreferences object provides access to the various graphics related preferences.
class GraphicsPreferences : public Base {
public:

    /// Gets and sets the minimum frames per second.
    double minimumFramesPerSecond() const;
    bool minimumFramesPerSecond(double value);

    /// Gets and sets the style of display to use for selections.
    SelectionDisplayStyles selectionDisplayStyle() const;
    bool selectionDisplayStyle(SelectionDisplayStyles value);

    /// Gets and sets the style of display for degraded selections.
    DegradedSelectionDisplayStyles degradedSelectionDisplayStyle() const;
    bool degradedSelectionDisplayStyle(DegradedSelectionDisplayStyles value);

    /// Gets and sets the style of display for transparency effects.
    TransparencyDisplayEffects transparencyEffects() const;
    bool transparencyEffects(TransparencyDisplayEffects value);

    /// Gets and sets if automatically disable or degrade visual effects to keep the video memory pressure under a safe threshold.
    bool autoThrottleEffects() const;
    bool autoThrottleEffects(bool value);

    /// Gets and sets the dimming percentage to use for hidden edges.
    /// the value is a percentage expressed by a value between 0 and 100.
    int hiddenEdgeDimming() const;
    bool hiddenEdgeDimming(int value);

    /// Gets and sets whether the bump effect is enabled when supported by the Wood (Solid)
    /// and the graphics driver.
    bool isWoodBumpEnabled() const;
    bool isWoodBumpEnabled(bool value);

    /// Gets and sets if effects should be temporarily disabled
    /// during navigation to maintain the frame rate.
    bool isLimitEffectsDuringNavigation() const;
    bool isLimitEffectsDuringNavigation(bool value);

    /// Gets and sets whether the surface normal display is disabled.
    int isSurfaceNormalDisplayDisabled() const;
    bool isSurfaceNormalDisplayDisabled(int value);

    ADSK_CORE_GRAPHICSPREFERENCES_API static const char* classType();
    ADSK_CORE_GRAPHICSPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_GRAPHICSPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_GRAPHICSPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double minimumFramesPerSecond_raw() const = 0;
    virtual bool minimumFramesPerSecond_raw(double value) = 0;
    virtual SelectionDisplayStyles selectionDisplayStyle_raw() const = 0;
    virtual bool selectionDisplayStyle_raw(SelectionDisplayStyles value) = 0;
    virtual DegradedSelectionDisplayStyles degradedSelectionDisplayStyle_raw() const = 0;
    virtual bool degradedSelectionDisplayStyle_raw(DegradedSelectionDisplayStyles value) = 0;
    virtual TransparencyDisplayEffects transparencyEffects_raw() const = 0;
    virtual bool transparencyEffects_raw(TransparencyDisplayEffects value) = 0;
    virtual bool autoThrottleEffects_raw() const = 0;
    virtual bool autoThrottleEffects_raw(bool value) = 0;
    virtual int hiddenEdgeDimming_raw() const = 0;
    virtual bool hiddenEdgeDimming_raw(int value) = 0;
    virtual bool isWoodBumpEnabled_raw() const = 0;
    virtual bool isWoodBumpEnabled_raw(bool value) = 0;
    virtual bool isLimitEffectsDuringNavigation_raw() const = 0;
    virtual bool isLimitEffectsDuringNavigation_raw(bool value) = 0;
    virtual int isSurfaceNormalDisplayDisabled_raw() const = 0;
    virtual bool isSurfaceNormalDisplayDisabled_raw(int value) = 0;
};

// Inline wrappers

inline double GraphicsPreferences::minimumFramesPerSecond() const
{
    double res = minimumFramesPerSecond_raw();
    return res;
}

inline bool GraphicsPreferences::minimumFramesPerSecond(double value)
{
    return minimumFramesPerSecond_raw(value);
}

inline SelectionDisplayStyles GraphicsPreferences::selectionDisplayStyle() const
{
    SelectionDisplayStyles res = selectionDisplayStyle_raw();
    return res;
}

inline bool GraphicsPreferences::selectionDisplayStyle(SelectionDisplayStyles value)
{
    return selectionDisplayStyle_raw(value);
}

inline DegradedSelectionDisplayStyles GraphicsPreferences::degradedSelectionDisplayStyle() const
{
    DegradedSelectionDisplayStyles res = degradedSelectionDisplayStyle_raw();
    return res;
}

inline bool GraphicsPreferences::degradedSelectionDisplayStyle(DegradedSelectionDisplayStyles value)
{
    return degradedSelectionDisplayStyle_raw(value);
}

inline TransparencyDisplayEffects GraphicsPreferences::transparencyEffects() const
{
    TransparencyDisplayEffects res = transparencyEffects_raw();
    return res;
}

inline bool GraphicsPreferences::transparencyEffects(TransparencyDisplayEffects value)
{
    return transparencyEffects_raw(value);
}

inline bool GraphicsPreferences::autoThrottleEffects() const
{
    bool res = autoThrottleEffects_raw();
    return res;
}

inline bool GraphicsPreferences::autoThrottleEffects(bool value)
{
    return autoThrottleEffects_raw(value);
}

inline int GraphicsPreferences::hiddenEdgeDimming() const
{
    int res = hiddenEdgeDimming_raw();
    return res;
}

inline bool GraphicsPreferences::hiddenEdgeDimming(int value)
{
    return hiddenEdgeDimming_raw(value);
}

inline bool GraphicsPreferences::isWoodBumpEnabled() const
{
    bool res = isWoodBumpEnabled_raw();
    return res;
}

inline bool GraphicsPreferences::isWoodBumpEnabled(bool value)
{
    return isWoodBumpEnabled_raw(value);
}

inline bool GraphicsPreferences::isLimitEffectsDuringNavigation() const
{
    bool res = isLimitEffectsDuringNavigation_raw();
    return res;
}

inline bool GraphicsPreferences::isLimitEffectsDuringNavigation(bool value)
{
    return isLimitEffectsDuringNavigation_raw(value);
}

inline int GraphicsPreferences::isSurfaceNormalDisplayDisabled() const
{
    int res = isSurfaceNormalDisplayDisabled_raw();
    return res;
}

inline bool GraphicsPreferences::isSurfaceNormalDisplayDisabled(int value)
{
    return isSurfaceNormalDisplayDisabled_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_GRAPHICSPREFERENCES_API