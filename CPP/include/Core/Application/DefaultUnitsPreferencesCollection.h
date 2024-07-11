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
# ifdef __COMPILING_ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_CPP__
# define ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API XI_EXPORT
# else
# define ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API
# endif
#else
# define ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DefaultUnitsPreferences;
}}

namespace adsk { namespace core {

/// A collection that provides access to product specific unit preference objects.
class DefaultUnitsPreferencesCollection : public Base {
public:

    /// Function that returns the specified DefaultUnitPreferences object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<DefaultUnitsPreferences> item(size_t index) const;

    /// Returns the DefaultUnitsPreference object with the specified name.
    /// name : The name of the DefaultUnitsPreference to return.
    /// Returns the DefaultUnitsPreference object or null if if an invalid name was specified.
    Ptr<DefaultUnitsPreferences> itemByName(const std::string& name) const;

    /// Returns the number of DefaultUnitsPreference objects.
    size_t count() const;

    typedef DefaultUnitsPreferences iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API static const char* classType();
    ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API const char* objectType() const override;
    ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DefaultUnitsPreferences* item_raw(size_t index) const = 0;
    virtual DefaultUnitsPreferences* itemByName_raw(const char* name) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<DefaultUnitsPreferences> DefaultUnitsPreferencesCollection::item(size_t index) const
{
    Ptr<DefaultUnitsPreferences> res = item_raw(index);
    return res;
}

inline Ptr<DefaultUnitsPreferences> DefaultUnitsPreferencesCollection::itemByName(const std::string& name) const
{
    Ptr<DefaultUnitsPreferences> res = itemByName_raw(name.c_str());
    return res;
}

inline size_t DefaultUnitsPreferencesCollection::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void DefaultUnitsPreferencesCollection::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DEFAULTUNITSPREFERENCESCOLLECTION_API