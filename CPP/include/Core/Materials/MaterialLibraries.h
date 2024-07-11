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
# ifdef __COMPILING_ADSK_CORE_MATERIALLIBRARIES_CPP__
# define ADSK_CORE_MATERIALLIBRARIES_API XI_EXPORT
# else
# define ADSK_CORE_MATERIALLIBRARIES_API
# endif
#else
# define ADSK_CORE_MATERIALLIBRARIES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class MaterialLibrary;
}}

namespace adsk { namespace core {

/// The MaterialLibraries collection object provides access to
/// currently loaded Material and Appearance libraries
class MaterialLibraries : public Base {
public:

    /// Method that returns the specified Material Library using an index into the collection.
    /// index : The index of the item within the collection. The first item has an index of 0.
    /// Returns the specified material library or null if an invalid index was specified.
    Ptr<MaterialLibrary> item(int index) const;

    /// The number of Material Libraries in the collection.
    size_t count() const;

    /// Returns the specified Material Library using the name as seen in the user interface.
    /// name : The name of the library to return.
    /// Returns the specified material library or null if there's no match on the name.
    Ptr<MaterialLibrary> itemByName(const std::string& name) const;

    /// Returns the Material Library at the specified ID.
    /// id : The ID of the library to return.
    /// Returns the specified material library or null if there's no match on the ID.
    Ptr<MaterialLibrary> itemById(const std::string& id) const;

    /// Loads the specified existing local material library. Fusion 360 remembers which libraries have
    /// been loaded from one session to the next so you should check to see if the local library
    /// is already loaded or not before loading it again.
    /// filename : The full filename of the .adsklib material file.
    /// Returns the MaterialLibrary object representing the opened library or null in the case of failure.
    Ptr<MaterialLibrary> load(const std::string& filename);

    typedef MaterialLibrary iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_MATERIALLIBRARIES_API static const char* classType();
    ADSK_CORE_MATERIALLIBRARIES_API const char* objectType() const override;
    ADSK_CORE_MATERIALLIBRARIES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATERIALLIBRARIES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual MaterialLibrary* item_raw(int index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual MaterialLibrary* itemByName_raw(const char* name) const = 0;
    virtual MaterialLibrary* itemById_raw(const char* id) const = 0;
    virtual MaterialLibrary* load_raw(const char* filename) = 0;
};

// Inline wrappers

inline Ptr<MaterialLibrary> MaterialLibraries::item(int index) const
{
    Ptr<MaterialLibrary> res = item_raw(index);
    return res;
}

inline size_t MaterialLibraries::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<MaterialLibrary> MaterialLibraries::itemByName(const std::string& name) const
{
    Ptr<MaterialLibrary> res = itemByName_raw(name.c_str());
    return res;
}

inline Ptr<MaterialLibrary> MaterialLibraries::itemById(const std::string& id) const
{
    Ptr<MaterialLibrary> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<MaterialLibrary> MaterialLibraries::load(const std::string& filename)
{
    Ptr<MaterialLibrary> res = load_raw(filename.c_str());
    return res;
}

template <class OutputIterator> inline void MaterialLibraries::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATERIALLIBRARIES_API