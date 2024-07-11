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
# ifdef __COMPILING_ADSK_CORE_DATAHUB_CPP__
# define ADSK_CORE_DATAHUB_API XI_EXPORT
# else
# define ADSK_CORE_DATAHUB_API
# endif
#else
# define ADSK_CORE_DATAHUB_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataProjects;
}}

namespace adsk { namespace core {

/// Represents a hub within the data.
class DataHub : public Base {
public:

    /// Returns the name of the hub.
    std::string name() const;

    /// Returns the projects within this hub.
    Ptr<DataProjects> dataProjects() const;

    /// Gets if this hub is a Personal (PersonalHubType) or Team (TeamHubType) type hub.
    HubTypes hubType() const;

    /// Returns the unique ID for this hub. This is the same id used in the
    /// Forge Data Management API in an unencoded form and will look something like
    /// this: "a.45637".
    std::string id() const;

    ADSK_CORE_DATAHUB_API static const char* classType();
    ADSK_CORE_DATAHUB_API const char* objectType() const override;
    ADSK_CORE_DATAHUB_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAHUB_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual DataProjects* dataProjects_raw() const = 0;
    virtual HubTypes hubType_raw() const = 0;
    virtual char* id_raw() const = 0;
};

// Inline wrappers

inline std::string DataHub::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<DataProjects> DataHub::dataProjects() const
{
    Ptr<DataProjects> res = dataProjects_raw();
    return res;
}

inline HubTypes DataHub::hubType() const
{
    HubTypes res = hubType_raw();
    return res;
}

inline std::string DataHub::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAHUB_API