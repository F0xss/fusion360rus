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
# ifdef __COMPILING_ADSK_CORE_MATERIALS_CPP__
# define ADSK_CORE_MATERIALS_API XI_EXPORT
# else
# define ADSK_CORE_MATERIALS_API
# endif
#else
# define ADSK_CORE_MATERIALS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Material;
}}

namespace adsk { namespace core {

/// Collection of materials within a Library or Design.
class Materials : public Base {
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

    /// Add a Material to a Design by copying an existing Material from Favorites, a Library or from the
    /// Materials stored in the Design. This method currently only applies to the Materials collection from a Design and
    /// cannot be used to copy a Material to a library.
    /// materialToCopy : The Material you want to copy. The Material to copy can be from Favorites, a Library or from the
    /// materials stored in the Design.
    /// name : The Material name to apply to the copy.
    /// Returns the newly created Material or null if the copy operation failed.
    Ptr<Material> addByCopy(const Ptr<Material>& materialToCopy, const std::string& name);

    typedef Material iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_MATERIALS_API static const char* classType();
    ADSK_CORE_MATERIALS_API const char* objectType() const override;
    ADSK_CORE_MATERIALS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATERIALS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Material* item_raw(int index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Material* itemByName_raw(const char* name) const = 0;
    virtual Material* itemById_raw(const char* id) const = 0;
    virtual Material* addByCopy_raw(Material* materialToCopy, const char* name) = 0;
};

// Inline wrappers

inline Ptr<Material> Materials::item(int index) const
{
    Ptr<Material> res = item_raw(index);
    return res;
}

inline size_t Materials::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Material> Materials::itemByName(const std::string& name) const
{
    Ptr<Material> res = itemByName_raw(name.c_str());
    return res;
}

inline Ptr<Material> Materials::itemById(const std::string& id) const
{
    Ptr<Material> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<Material> Materials::addByCopy(const Ptr<Material>& materialToCopy, const std::string& name)
{
    Ptr<Material> res = addByCopy_raw(materialToCopy.get(), name.c_str());
    return res;
}

template <class OutputIterator> inline void Materials::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATERIALS_API