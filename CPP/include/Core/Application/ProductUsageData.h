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
# ifdef __COMPILING_ADSK_CORE_PRODUCTUSAGEDATA_CPP__
# define ADSK_CORE_PRODUCTUSAGEDATA_API XI_EXPORT
# else
# define ADSK_CORE_PRODUCTUSAGEDATA_API
# endif
#else
# define ADSK_CORE_PRODUCTUSAGEDATA_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides access to the product usage data settings.
class ProductUsageData : public Base {
public:

    /// Gets and sets if data can be collected to help improve the products
    /// and services that Autodesk provides. This is the preference setting
    /// titled "Help develop our products and services".
    bool isTrackingToImproveSoftwareEnabled() const;
    bool isTrackingToImproveSoftwareEnabled(bool value);

    /// Gets and sets if data can be collected to improve communications. This is
    /// the preferences setting titled "Customize our messaging".
    bool isTrackingToImproveCommunicationEnabled() const;
    bool isTrackingToImproveCommunicationEnabled(bool value);

    /// Gets and sets if Google Analytics tracking is enabled.
    bool isGoogleAnalyticsTrackingEnabled() const;
    bool isGoogleAnalyticsTrackingEnabled(bool value);

    /// Gets and sets if data can be collected to enable the Learning Panel
    /// to show information based on the current context.
    bool isLearningPanelContextEnabled() const;
    bool isLearningPanelContextEnabled(bool value);

    ADSK_CORE_PRODUCTUSAGEDATA_API static const char* classType();
    ADSK_CORE_PRODUCTUSAGEDATA_API const char* objectType() const override;
    ADSK_CORE_PRODUCTUSAGEDATA_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PRODUCTUSAGEDATA_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isTrackingToImproveSoftwareEnabled_raw() const = 0;
    virtual bool isTrackingToImproveSoftwareEnabled_raw(bool value) = 0;
    virtual bool isTrackingToImproveCommunicationEnabled_raw() const = 0;
    virtual bool isTrackingToImproveCommunicationEnabled_raw(bool value) = 0;
    virtual bool isGoogleAnalyticsTrackingEnabled_raw() const = 0;
    virtual bool isGoogleAnalyticsTrackingEnabled_raw(bool value) = 0;
    virtual bool isLearningPanelContextEnabled_raw() const = 0;
    virtual bool isLearningPanelContextEnabled_raw(bool value) = 0;
};

// Inline wrappers

inline bool ProductUsageData::isTrackingToImproveSoftwareEnabled() const
{
    bool res = isTrackingToImproveSoftwareEnabled_raw();
    return res;
}

inline bool ProductUsageData::isTrackingToImproveSoftwareEnabled(bool value)
{
    return isTrackingToImproveSoftwareEnabled_raw(value);
}

inline bool ProductUsageData::isTrackingToImproveCommunicationEnabled() const
{
    bool res = isTrackingToImproveCommunicationEnabled_raw();
    return res;
}

inline bool ProductUsageData::isTrackingToImproveCommunicationEnabled(bool value)
{
    return isTrackingToImproveCommunicationEnabled_raw(value);
}

inline bool ProductUsageData::isGoogleAnalyticsTrackingEnabled() const
{
    bool res = isGoogleAnalyticsTrackingEnabled_raw();
    return res;
}

inline bool ProductUsageData::isGoogleAnalyticsTrackingEnabled(bool value)
{
    return isGoogleAnalyticsTrackingEnabled_raw(value);
}

inline bool ProductUsageData::isLearningPanelContextEnabled() const
{
    bool res = isLearningPanelContextEnabled_raw();
    return res;
}

inline bool ProductUsageData::isLearningPanelContextEnabled(bool value)
{
    return isLearningPanelContextEnabled_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PRODUCTUSAGEDATA_API