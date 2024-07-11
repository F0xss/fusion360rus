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
# ifdef __COMPILING_ADSK_CORE_DATAHUBS_CPP__
# define ADSK_CORE_DATAHUBS_API XI_EXPORT
# else
# define ADSK_CORE_DATAHUBS_API
# endif
#else
# define ADSK_CORE_DATAHUBS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataHub;
}}

namespace adsk { namespace core {

/// Collection object that provides a list of all available hubs.
class DataHubs : public Base {
public:

    /// Returns the specified hub.
    /// index : The index of the hub to return. The first hub in the list has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<DataHub> item(size_t index) const;

    /// The number of hubs in this collection.
    size_t count() const;

    /// Returns the hub specified using the ID of the hub.
    /// id : The ID of the hub to return. This is the same ID used by
    /// the Forge Data Management API.
    /// Returns the hub or null if a hub with the specified ID is not found.
    Ptr<DataHub> itemById(const std::string& id) const;

    /// Get the current list of all hubs.
    /// Returns the current list of all hubs.
    std::vector<Ptr<DataHub>> asArray() const;

    typedef DataHub iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DATAHUBS_API static const char* classType();
    ADSK_CORE_DATAHUBS_API const char* objectType() const override;
    ADSK_CORE_DATAHUBS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAHUBS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataHub* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual DataHub* itemById_raw(const char* id) const = 0;
    virtual DataHub** asArray_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<DataHub> DataHubs::item(size_t index) const
{
    Ptr<DataHub> res = item_raw(index);
    return res;
}

inline size_t DataHubs::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<DataHub> DataHubs::itemById(const std::string& id) const
{
    Ptr<DataHub> res = itemById_raw(id.c_str());
    return res;
}

inline std::vector<Ptr<DataHub>> DataHubs::asArray() const
{
    std::vector<Ptr<DataHub>> res;
    size_t s;

    DataHub** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void DataHubs::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAHUBS_API