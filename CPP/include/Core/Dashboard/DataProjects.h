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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DATAPROJECTS_CPP__
# define ADSK_CORE_DATAPROJECTS_API XI_EXPORT
# else
# define ADSK_CORE_DATAPROJECTS_API
# endif
#else
# define ADSK_CORE_DATAPROJECTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataProject;
}}

namespace adsk { namespace core {

/// Collection object that provides a list of all available projects.
class DataProjects : public Base {
public:

    /// Returns the specified project.
    /// index : The index of the project to return. The first project in the list has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<DataProject> item(size_t index) const;

    /// The number of projects in this collection.
    size_t count() const;

    /// Creates a new project in the parent hub.
    /// name : The name of the project. This is the name visible to the user.
    /// purpose : Optional description of the purpose of the project. An empty string can be used to not specify a purpose.
    /// contributors : Optional list of contributors where the list consists of email addresses separated by a comma.
    /// An empty string can be used to not specify any contributors.
    /// Returns the created DataProject object or null if the creation failed.
    Ptr<DataProject> add(const std::string& name, const std::string& purpose = "", const std::string& contributors = "");

    /// Returns the project specified using the ID of the project.
    /// id : The ID of the project to return. This is the same ID used by
    /// the Forge Data Management API.
    /// Returns the project or null if a project with the specified ID is not found.
    Ptr<DataProject> itemById(const std::string& id) const;

    /// Get the current list of all projects.
    /// Returns the current list of all projects.
    std::vector<Ptr<DataProject>> asArray() const;

    typedef DataProject iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DATAPROJECTS_API static const char* classType();
    ADSK_CORE_DATAPROJECTS_API const char* objectType() const override;
    ADSK_CORE_DATAPROJECTS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAPROJECTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataProject* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual DataProject* add_raw(const char* name, const char* purpose, const char* contributors) = 0;
    virtual DataProject* itemById_raw(const char* id) const = 0;
    virtual DataProject** asArray_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<DataProject> DataProjects::item(size_t index) const
{
    Ptr<DataProject> res = item_raw(index);
    return res;
}

inline size_t DataProjects::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<DataProject> DataProjects::add(const std::string& name, const std::string& purpose, const std::string& contributors)
{
    Ptr<DataProject> res = add_raw(name.c_str(), purpose.c_str(), contributors.c_str());
    return res;
}

inline Ptr<DataProject> DataProjects::itemById(const std::string& id) const
{
    Ptr<DataProject> res = itemById_raw(id.c_str());
    return res;
}

inline std::vector<Ptr<DataProject>> DataProjects::asArray() const
{
    std::vector<Ptr<DataProject>> res;
    size_t s;

    DataProject** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void DataProjects::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAPROJECTS_API