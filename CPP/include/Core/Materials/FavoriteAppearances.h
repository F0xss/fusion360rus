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
# ifdef __COMPILING_ADSK_CORE_FAVORITEAPPEARANCES_CPP__
# define ADSK_CORE_FAVORITEAPPEARANCES_API XI_EXPORT
# else
# define ADSK_CORE_FAVORITEAPPEARANCES_API
# endif
#else
# define ADSK_CORE_FAVORITEAPPEARANCES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
}}

namespace adsk { namespace core {

/// Collection of the favorite appearances.
class FavoriteAppearances : public Base {
public:

    /// Returns the specified Appearance using an index into the collection.
    /// index : The index of the appearance to return where the first item in the collection is 0.
    /// Returns the specified appearance or null if an invalid index is specified.
    Ptr<Appearance> item(int index) const;

    /// The number of Appearances in the collection.
    size_t count() const;

    /// Returns the specified appearance using the name as seen in the user interface. This often isn't
    /// a reliable way of accessing a specific appearance because appearances are not required to be unique.
    /// name : The name of the appearance to return,.
    /// Returns the specified appearance or null if there isn't a matching name.
    Ptr<Appearance> itemByName(const std::string& name) const;

    /// Returns the Appearance by it's internal unique ID.
    /// id : The ID of the appearance to return.
    /// Returns the specified appearance or null if there isn't a matching ID.
    Ptr<Appearance> itemById(const std::string& id) const;

    /// Adds an existing appearance to the Favorites list
    /// appearance : The appearance to be added to the favorites list. This can come from a Library or from a Design.
    /// Returns the Appearance added to the favorites list or null if the operation failed.
    Ptr<Appearance> add(const Ptr<Appearance>& appearance);

    typedef Appearance iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_FAVORITEAPPEARANCES_API static const char* classType();
    ADSK_CORE_FAVORITEAPPEARANCES_API const char* objectType() const override;
    ADSK_CORE_FAVORITEAPPEARANCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FAVORITEAPPEARANCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Appearance* item_raw(int index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Appearance* itemByName_raw(const char* name) const = 0;
    virtual Appearance* itemById_raw(const char* id) const = 0;
    virtual Appearance* add_raw(Appearance* appearance) = 0;
};

// Inline wrappers

inline Ptr<Appearance> FavoriteAppearances::item(int index) const
{
    Ptr<Appearance> res = item_raw(index);
    return res;
}

inline size_t FavoriteAppearances::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Appearance> FavoriteAppearances::itemByName(const std::string& name) const
{
    Ptr<Appearance> res = itemByName_raw(name.c_str());
    return res;
}

inline Ptr<Appearance> FavoriteAppearances::itemById(const std::string& id) const
{
    Ptr<Appearance> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<Appearance> FavoriteAppearances::add(const Ptr<Appearance>& appearance)
{
    Ptr<Appearance> res = add_raw(appearance.get());
    return res;
}

template <class OutputIterator> inline void FavoriteAppearances::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FAVORITEAPPEARANCES_API