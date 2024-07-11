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
# ifdef __COMPILING_ADSK_CORE_FAVORITEMATERIALS_CPP__
# define ADSK_CORE_FAVORITEMATERIALS_API XI_EXPORT
# else
# define ADSK_CORE_FAVORITEMATERIALS_API
# endif
#else
# define ADSK_CORE_FAVORITEMATERIALS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Material;
}}

namespace adsk { namespace core {

/// Collection of the favorite materials.
class FavoriteMaterials : public Base {
public:

    /// Returns the specified Material using an index into the collection.
    /// index : The index of the material to return where the first item in the collection is 0.
    /// Returns the specified material or null if an invalid index is specified.
    Ptr<Material> item(int index) const;

    /// The number of Materials in the collection.
    size_t count() const;

    /// Returns the specified Material using the name as seen in the user interface. This often isn't
    /// a reliable way of accessing a specific material because materials are not required to be unique.
    /// name : The name of the material to return,.
    /// Returns the specified material or null if there isn't a matching name.
    Ptr<Material> itemByName(const std::string& name) const;

    /// Returns the Material by it's internal unique ID.
    /// id : The ID of the material to return.
    /// Returns the specified material or null if there isn't a matching ID.
    Ptr<Material> itemById(const std::string& id) const;

    /// Adds an existing material to the Favorites list
    /// material : The material to be added to the favorites list. This can come from a Library or from a Design.
    /// Returns the Material added to the favorites list or null if the operation failed.
    Ptr<Material> add(const Ptr<Material>& material);

    typedef Material iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_FAVORITEMATERIALS_API static const char* classType();
    ADSK_CORE_FAVORITEMATERIALS_API const char* objectType() const override;
    ADSK_CORE_FAVORITEMATERIALS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FAVORITEMATERIALS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Material* item_raw(int index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Material* itemByName_raw(const char* name) const = 0;
    virtual Material* itemById_raw(const char* id) const = 0;
    virtual Material* add_raw(Material* material) = 0;
};

// Inline wrappers

inline Ptr<Material> FavoriteMaterials::item(int index) const
{
    Ptr<Material> res = item_raw(index);
    return res;
}

inline size_t FavoriteMaterials::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Material> FavoriteMaterials::itemByName(const std::string& name) const
{
    Ptr<Material> res = itemByName_raw(name.c_str());
    return res;
}

inline Ptr<Material> FavoriteMaterials::itemById(const std::string& id) const
{
    Ptr<Material> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<Material> FavoriteMaterials::add(const Ptr<Material>& material)
{
    Ptr<Material> res = add_raw(material.get());
    return res;
}

template <class OutputIterator> inline void FavoriteMaterials::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FAVORITEMATERIALS_API