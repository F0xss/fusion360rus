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
# ifdef __COMPILING_ADSK_CORE_GENERALPREFERENCES_CPP__
# define ADSK_CORE_GENERALPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_GENERALPREFERENCES_API
# endif
#else
# define ADSK_CORE_GENERALPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides access to the general preferences.
class GeneralPreferences : public Base {
public:

    /// Gets and sets the current language. Setting the language does not
    /// take effect until the next time Fusion 360 is started.
    UserLanguages userLanguage() const;
    bool userLanguage(UserLanguages value);

    /// Gets and sets the length of time, in days, that the offline cache of a document will remain.
    double offlineCachePeriod() const;
    bool offlineCachePeriod(double value);

    /// Gets and sets the graphics driver used to display the graphics.
    GraphicsDrivers graphicsDriver() const;
    bool graphicsDriver(GraphicsDrivers value);

    /// Gets and sets if the file is automatically saved on close.
    bool isAutomaticSaveOnCloseEnabled() const;
    bool isAutomaticSaveOnCloseEnabled(bool value);

    /// Gets and sets if a version of the file is automatically saved using a background thread.
    bool isAutomaticVersioningEnabled() const;
    bool isAutomaticVersioningEnabled(bool value);

    /// Gets and sets the interval, in minutes, for automatic versioning.
    int automateVersioningTimeInterval() const;
    bool automateVersioningTimeInterval(int value);

    /// Gets and sets the default for which direction is considered "up".
    DefaultModelingOrientations defaultModelingOrientation() const;
    bool defaultModelingOrientation(DefaultModelingOrientations value);

    /// Gets and sets if tooltips are shown.
    bool areTooltipsShown() const;
    bool areTooltipsShown(bool value);

    /// Gets and sets if the command prompt is shown.
    bool isCommandPromptShown() const;
    bool isCommandPromptShown(bool value);

    /// Gets and sets if in command tips and tricks are shown.
    bool areTipsAndTricksShown() const;
    bool areTipsAndTricksShown(bool value);

    /// Gets and sets if in command errors and warnings are shown.
    bool areInCommandErrorsAndWarningsShown() const;
    bool areInCommandErrorsAndWarningsShown(bool value);

    /// Gets and sets if Autodesk 360 notifications are shown.
    bool areAutodesk360NotificationsShown() const;
    bool areAutodesk360NotificationsShown(bool value);

    /// Gets and sets if gesture based view navigation is used.
    bool isGestureBasedViewNavigationUsed() const;
    bool isGestureBasedViewNavigationUsed(bool value);

    /// Gets and sets if the direction of the zoom is reversed.
    bool isZoomDirectionReversed() const;
    bool isZoomDirectionReversed(bool value);

    /// Gets and sets if zoom and orbit commands use camera pivot point for transition.
    bool isCameraPivotEnabled() const;
    bool isCameraPivotEnabled(bool value);

    /// Get and sets the type of orbit.
    DefaultOrbits defaultOrbit() const;
    bool defaultOrbit(DefaultOrbits value);

    /// Gets and sets if the creation of launch items should be skipped for live update.
    bool isSkipCreationWhenLiveUpdate() const;
    bool isSkipCreationWhenLiveUpdate(bool value);

    /// Gets and sets if the default measure is shown.
    bool isDefaultMeasureShown() const;
    bool isDefaultMeasureShown(bool value);

    /// Gets and sets how pan, zoom, and orbit should behave
    PanZoomOrbitShortcuts panZoomOrbitShortcuts() const;
    bool panZoomOrbitShortcuts(PanZoomOrbitShortcuts value);

    ADSK_CORE_GENERALPREFERENCES_API static const char* classType();
    ADSK_CORE_GENERALPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_GENERALPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_GENERALPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual UserLanguages userLanguage_raw() const = 0;
    virtual bool userLanguage_raw(UserLanguages value) = 0;
    virtual double offlineCachePeriod_raw() const = 0;
    virtual bool offlineCachePeriod_raw(double value) = 0;
    virtual GraphicsDrivers graphicsDriver_raw() const = 0;
    virtual bool graphicsDriver_raw(GraphicsDrivers value) = 0;
    virtual bool isAutomaticSaveOnCloseEnabled_raw() const = 0;
    virtual bool isAutomaticSaveOnCloseEnabled_raw(bool value) = 0;
    virtual bool isAutomaticVersioningEnabled_raw() const = 0;
    virtual bool isAutomaticVersioningEnabled_raw(bool value) = 0;
    virtual int automateVersioningTimeInterval_raw() const = 0;
    virtual bool automateVersioningTimeInterval_raw(int value) = 0;
    virtual DefaultModelingOrientations defaultModelingOrientation_raw() const = 0;
    virtual bool defaultModelingOrientation_raw(DefaultModelingOrientations value) = 0;
    virtual bool areTooltipsShown_raw() const = 0;
    virtual bool areTooltipsShown_raw(bool value) = 0;
    virtual bool isCommandPromptShown_raw() const = 0;
    virtual bool isCommandPromptShown_raw(bool value) = 0;
    virtual bool areTipsAndTricksShown_raw() const = 0;
    virtual bool areTipsAndTricksShown_raw(bool value) = 0;
    virtual bool areInCommandErrorsAndWarningsShown_raw() const = 0;
    virtual bool areInCommandErrorsAndWarningsShown_raw(bool value) = 0;
    virtual bool areAutodesk360NotificationsShown_raw() const = 0;
    virtual bool areAutodesk360NotificationsShown_raw(bool value) = 0;
    virtual bool isGestureBasedViewNavigationUsed_raw() const = 0;
    virtual bool isGestureBasedViewNavigationUsed_raw(bool value) = 0;
    virtual bool isZoomDirectionReversed_raw() const = 0;
    virtual bool isZoomDirectionReversed_raw(bool value) = 0;
    virtual bool isCameraPivotEnabled_raw() const = 0;
    virtual bool isCameraPivotEnabled_raw(bool value) = 0;
    virtual DefaultOrbits defaultOrbit_raw() const = 0;
    virtual bool defaultOrbit_raw(DefaultOrbits value) = 0;
    virtual bool isSkipCreationWhenLiveUpdate_raw() const = 0;
    virtual bool isSkipCreationWhenLiveUpdate_raw(bool value) = 0;
    virtual bool isDefaultMeasureShown_raw() const = 0;
    virtual bool isDefaultMeasureShown_raw(bool value) = 0;
    virtual PanZoomOrbitShortcuts panZoomOrbitShortcuts_raw() const = 0;
    virtual bool panZoomOrbitShortcuts_raw(PanZoomOrbitShortcuts value) = 0;
};

// Inline wrappers

inline UserLanguages GeneralPreferences::userLanguage() const
{
    UserLanguages res = userLanguage_raw();
    return res;
}

inline bool GeneralPreferences::userLanguage(UserLanguages value)
{
    return userLanguage_raw(value);
}

inline double GeneralPreferences::offlineCachePeriod() const
{
    double res = offlineCachePeriod_raw();
    return res;
}

inline bool GeneralPreferences::offlineCachePeriod(double value)
{
    return offlineCachePeriod_raw(value);
}

inline GraphicsDrivers GeneralPreferences::graphicsDriver() const
{
    GraphicsDrivers res = graphicsDriver_raw();
    return res;
}

inline bool GeneralPreferences::graphicsDriver(GraphicsDrivers value)
{
    return graphicsDriver_raw(value);
}

inline bool GeneralPreferences::isAutomaticSaveOnCloseEnabled() const
{
    bool res = isAutomaticSaveOnCloseEnabled_raw();
    return res;
}

inline bool GeneralPreferences::isAutomaticSaveOnCloseEnabled(bool value)
{
    return isAutomaticSaveOnCloseEnabled_raw(value);
}

inline bool GeneralPreferences::isAutomaticVersioningEnabled() const
{
    bool res = isAutomaticVersioningEnabled_raw();
    return res;
}

inline bool GeneralPreferences::isAutomaticVersioningEnabled(bool value)
{
    return isAutomaticVersioningEnabled_raw(value);
}

inline int GeneralPreferences::automateVersioningTimeInterval() const
{
    int res = automateVersioningTimeInterval_raw();
    return res;
}

inline bool GeneralPreferences::automateVersioningTimeInterval(int value)
{
    return automateVersioningTimeInterval_raw(value);
}

inline DefaultModelingOrientations GeneralPreferences::defaultModelingOrientation() const
{
    DefaultModelingOrientations res = defaultModelingOrientation_raw();
    return res;
}

inline bool GeneralPreferences::defaultModelingOrientation(DefaultModelingOrientations value)
{
    return defaultModelingOrientation_raw(value);
}

inline bool GeneralPreferences::areTooltipsShown() const
{
    bool res = areTooltipsShown_raw();
    return res;
}

inline bool GeneralPreferences::areTooltipsShown(bool value)
{
    return areTooltipsShown_raw(value);
}

inline bool GeneralPreferences::isCommandPromptShown() const
{
    bool res = isCommandPromptShown_raw();
    return res;
}

inline bool GeneralPreferences::isCommandPromptShown(bool value)
{
    return isCommandPromptShown_raw(value);
}

inline bool GeneralPreferences::areTipsAndTricksShown() const
{
    bool res = areTipsAndTricksShown_raw();
    return res;
}

inline bool GeneralPreferences::areTipsAndTricksShown(bool value)
{
    return areTipsAndTricksShown_raw(value);
}

inline bool GeneralPreferences::areInCommandErrorsAndWarningsShown() const
{
    bool res = areInCommandErrorsAndWarningsShown_raw();
    return res;
}

inline bool GeneralPreferences::areInCommandErrorsAndWarningsShown(bool value)
{
    return areInCommandErrorsAndWarningsShown_raw(value);
}

inline bool GeneralPreferences::areAutodesk360NotificationsShown() const
{
    bool res = areAutodesk360NotificationsShown_raw();
    return res;
}

inline bool GeneralPreferences::areAutodesk360NotificationsShown(bool value)
{
    return areAutodesk360NotificationsShown_raw(value);
}

inline bool GeneralPreferences::isGestureBasedViewNavigationUsed() const
{
    bool res = isGestureBasedViewNavigationUsed_raw();
    return res;
}

inline bool GeneralPreferences::isGestureBasedViewNavigationUsed(bool value)
{
    return isGestureBasedViewNavigationUsed_raw(value);
}

inline bool GeneralPreferences::isZoomDirectionReversed() const
{
    bool res = isZoomDirectionReversed_raw();
    return res;
}

inline bool GeneralPreferences::isZoomDirectionReversed(bool value)
{
    return isZoomDirectionReversed_raw(value);
}

inline bool GeneralPreferences::isCameraPivotEnabled() const
{
    bool res = isCameraPivotEnabled_raw();
    return res;
}

inline bool GeneralPreferences::isCameraPivotEnabled(bool value)
{
    return isCameraPivotEnabled_raw(value);
}

inline DefaultOrbits GeneralPreferences::defaultOrbit() const
{
    DefaultOrbits res = defaultOrbit_raw();
    return res;
}

inline bool GeneralPreferences::defaultOrbit(DefaultOrbits value)
{
    return defaultOrbit_raw(value);
}

inline bool GeneralPreferences::isSkipCreationWhenLiveUpdate() const
{
    bool res = isSkipCreationWhenLiveUpdate_raw();
    return res;
}

inline bool GeneralPreferences::isSkipCreationWhenLiveUpdate(bool value)
{
    return isSkipCreationWhenLiveUpdate_raw(value);
}

inline bool GeneralPreferences::isDefaultMeasureShown() const
{
    bool res = isDefaultMeasureShown_raw();
    return res;
}

inline bool GeneralPreferences::isDefaultMeasureShown(bool value)
{
    return isDefaultMeasureShown_raw(value);
}

inline PanZoomOrbitShortcuts GeneralPreferences::panZoomOrbitShortcuts() const
{
    PanZoomOrbitShortcuts res = panZoomOrbitShortcuts_raw();
    return res;
}

inline bool GeneralPreferences::panZoomOrbitShortcuts(PanZoomOrbitShortcuts value)
{
    return panZoomOrbitShortcuts_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_GENERALPREFERENCES_API