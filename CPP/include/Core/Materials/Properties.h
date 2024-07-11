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
# ifdef __COMPILING_ADSK_CORE_PROPERTIES_CPP__
# define ADSK_CORE_PROPERTIES_API XI_EXPORT
# else
# define ADSK_CORE_PROPERTIES_API
# endif
#else
# define ADSK_CORE_PROPERTIES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Property;
}}

namespace adsk { namespace core {

/// A collection of properties that are associated with a material or appearance.
class Properties : public Base {
public:

    /// Returns the specified property from the collection using an index into the collection.
    /// index : The index of the property within the collection where the first item is 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Property> item(int index) const;

    /// Returns the specified property from the collection using the unique ID of the property.
    /// id : The unique ID of the property.
    /// Returns the specified property or null if the ID doesn't match a property within the collection.
    Ptr<Property> itemById(const std::string& id) const;

    /// Returns the specified Property using the name of the property.
    /// name : The name of the property to return. This is the name as seen in the user interface.
    /// Returns the specified property or null if the name doesn't match a property within the collection.
    Ptr<Property> itemByName(const std::string& name) const;

    /// Returns the number of properties within the collection.
    size_t count() const;

    typedef Property iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_PROPERTIES_API static const char* classType();
    ADSK_CORE_PROPERTIES_API const char* objectType() const override;
    ADSK_CORE_PROPERTIES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PROPERTIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Property* item_raw(int index) const = 0;
    virtual Property* itemById_raw(const char* id) const = 0;
    virtual Property* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<Property> Properties::item(int index) const
{
    Ptr<Property> res = item_raw(index);
    return res;
}

inline Ptr<Property> Properties::itemById(const std::string& id) const
{
    Ptr<Property> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<Property> Properties::itemByName(const std::string& name) const
{
    Ptr<Property> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t Properties::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Properties::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PROPERTIES_API