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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_NETWORKPREFERENCES_CPP__
# define ADSK_CORE_NETWORKPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_NETWORKPREFERENCES_API
# endif
#else
# define ADSK_CORE_NETWORKPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The NetworkPreferences object provides access to network related preferences.
class NetworkPreferences : public Base {
public:

    /// Gets and sets the network proxy setting.
    NetworkProxySettings networkProxySetting() const;
    bool networkProxySetting(NetworkProxySettings value);

    /// Gets and sets the proxy host.
    std::string proxyHost() const;
    bool proxyHost(const std::string& value);

    /// Gets and sets the proxy host.
    int proxyPort() const;
    bool proxyPort(int value);

    ADSK_CORE_NETWORKPREFERENCES_API static const char* classType();
    ADSK_CORE_NETWORKPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_NETWORKPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_NETWORKPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual NetworkProxySettings networkProxySetting_raw() const = 0;
    virtual bool networkProxySetting_raw(NetworkProxySettings value) = 0;
    virtual char* proxyHost_raw() const = 0;
    virtual bool proxyHost_raw(const char* value) = 0;
    virtual int proxyPort_raw() const = 0;
    virtual bool proxyPort_raw(int value) = 0;
};

// Inline wrappers

inline NetworkProxySettings NetworkPreferences::networkProxySetting() const
{
    NetworkProxySettings res = networkProxySetting_raw();
    return res;
}

inline bool NetworkPreferences::networkProxySetting(NetworkProxySettings value)
{
    return networkProxySetting_raw(value);
}

inline std::string NetworkPreferences::proxyHost() const
{
    std::string res;

    char* p= proxyHost_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool NetworkPreferences::proxyHost(const std::string& value)
{
    return proxyHost_raw(value.c_str());
}

inline int NetworkPreferences::proxyPort() const
{
    int res = proxyPort_raw();
    return res;
}

inline bool NetworkPreferences::proxyPort(int value)
{
    return proxyPort_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_NETWORKPREFERENCES_API