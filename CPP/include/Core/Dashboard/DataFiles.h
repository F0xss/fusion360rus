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
# ifdef __COMPILING_ADSK_CORE_DATAFILES_CPP__
# define ADSK_CORE_DATAFILES_API XI_EXPORT
# else
# define ADSK_CORE_DATAFILES_API
# endif
#else
# define ADSK_CORE_DATAFILES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
}}

namespace adsk { namespace core {

/// Returns the items within a folder. This includes everything in a folder except for other folders.
class DataFiles : public Base {
public:

    /// Returns the specified data file.
    /// index : The index of the file to return. The first file in the list has an index of 0.
    /// Returns the specified file or null if an invalid index was specified.
    Ptr<DataFile> item(size_t index) const;

    /// The number of data items in this collection.
    size_t count() const;

    /// Returns the file specified using the ID or version ID of the file.
    /// id : The ID or version ID of the file to return. This is the same ID used by
    /// the Forge Data Management API.
    /// Returns the file or null if a file with the specified ID is not found.
    Ptr<DataFile> itemById(const std::string& id) const;

    /// Get the current list of all files.
    /// Returns the current list of all files.
    std::vector<Ptr<DataFile>> asArray() const;

    typedef DataFile iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DATAFILES_API static const char* classType();
    ADSK_CORE_DATAFILES_API const char* objectType() const override;
    ADSK_CORE_DATAFILES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAFILES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataFile* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual DataFile* itemById_raw(const char* id) const = 0;
    virtual DataFile** asArray_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<DataFile> DataFiles::item(size_t index) const
{
    Ptr<DataFile> res = item_raw(index);
    return res;
}

inline size_t DataFiles::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<DataFile> DataFiles::itemById(const std::string& id) const
{
    Ptr<DataFile> res = itemById_raw(id.c_str());
    return res;
}

inline std::vector<Ptr<DataFile>> DataFiles::asArray() const
{
    std::vector<Ptr<DataFile>> res;
    size_t s;

    DataFile** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void DataFiles::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAFILES_API