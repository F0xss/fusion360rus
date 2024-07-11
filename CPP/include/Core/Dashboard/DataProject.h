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
# ifdef __COMPILING_ADSK_CORE_DATAPROJECT_CPP__
# define ADSK_CORE_DATAPROJECT_API XI_EXPORT
# else
# define ADSK_CORE_DATAPROJECT_API
# endif
#else
# define ADSK_CORE_DATAPROJECT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFolder;
    class DataHub;
}}

namespace adsk { namespace core {

/// Represents the master branch project within a hub.
class DataProject : public Base {
public:

    /// Gets and sets the name of the project.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the project's root folder. This provides access to all of the
    /// folders and the files in the top level of the project.
    Ptr<DataFolder> rootFolder() const;

    /// Returns the unique ID for this project. This is the same id used in the
    /// Forge Data Management API in an unencoded form and will look something like
    /// this: "a.45637".
    std::string id() const;

    /// Returns the parent DataHub of this project.
    Ptr<DataHub> parentHub() const;

    ADSK_CORE_DATAPROJECT_API static const char* classType();
    ADSK_CORE_DATAPROJECT_API const char* objectType() const override;
    ADSK_CORE_DATAPROJECT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAPROJECT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual DataFolder* rootFolder_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual DataHub* parentHub_raw() const = 0;
    virtual bool name__raw(const char* value) = 0;
};

// Inline wrappers

inline std::string DataProject::name() const
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

inline bool DataProject::name(const std::string& value)
{
    return name__raw(value.c_str());
}

inline Ptr<DataFolder> DataProject::rootFolder() const
{
    Ptr<DataFolder> res = rootFolder_raw();
    return res;
}

inline std::string DataProject::id() const
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

inline Ptr<DataHub> DataProject::parentHub() const
{
    Ptr<DataHub> res = parentHub_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAPROJECT_API