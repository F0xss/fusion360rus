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
# ifdef __COMPILING_ADSK_CORE_DATAFOLDERS_CPP__
# define ADSK_CORE_DATAFOLDERS_API XI_EXPORT
# else
# define ADSK_CORE_DATAFOLDERS_API
# endif
#else
# define ADSK_CORE_DATAFOLDERS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFolder;
}}

namespace adsk { namespace core {

/// Collection object the provides a list of data folders.
class DataFolders : public Base {
public:

    /// Returns the specified folder.
    /// index : The index of the folder to return. The first folder in the list has an index of 0.
    /// Returns the item or null if an invalid index was specified.
    Ptr<DataFolder> item(size_t index) const;

    /// Returns the folder specified using the name of the folder.
    /// name : The name of the folder to return.
    /// Returns the folder or null if a folder of the specified name is not found.
    Ptr<DataFolder> itemByName(const std::string& name) const;

    /// The number of folders in this collection.
    size_t count() const;

    /// Returns the folder specified using the ID of the folder.
    /// id : The ID of the folder to return. This is the same ID used by
    /// the Forge Data Management API.
    /// Returns the folder or null if a folder with the specified ID is not found.
    Ptr<DataFolder> itemById(const std::string& id) const;

    /// Creates a new folder within the parent folder.
    /// name : The name of the folder. This must be unique with respect to the other folders within the parent folder.
    /// Returns the created DataFolder or null if the creation failed.
    Ptr<DataFolder> add(const std::string& name);

    /// Get the current list of all folders.
    /// Returns the current list of all folders.
    std::vector<Ptr<DataFolder>> asArray() const;

    typedef DataFolder iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DATAFOLDERS_API static const char* classType();
    ADSK_CORE_DATAFOLDERS_API const char* objectType() const override;
    ADSK_CORE_DATAFOLDERS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAFOLDERS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataFolder* item_raw(size_t index) const = 0;
    virtual DataFolder* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
    virtual DataFolder* itemById_raw(const char* id) const = 0;
    virtual DataFolder* add_raw(const char* name) = 0;
    virtual DataFolder** asArray_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<DataFolder> DataFolders::item(size_t index) const
{
    Ptr<DataFolder> res = item_raw(index);
    return res;
}

inline Ptr<DataFolder> DataFolders::itemByName(const std::string& name) const
{
    Ptr<DataFolder> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t DataFolders::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<DataFolder> DataFolders::itemById(const std::string& id) const
{
    Ptr<DataFolder> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<DataFolder> DataFolders::add(const std::string& name)
{
    Ptr<DataFolder> res = add_raw(name.c_str());
    return res;
}

inline std::vector<Ptr<DataFolder>> DataFolders::asArray() const
{
    std::vector<Ptr<DataFolder>> res;
    size_t s;

    DataFolder** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void DataFolders::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAFOLDERS_API