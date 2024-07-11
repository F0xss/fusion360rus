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
# ifdef __COMPILING_ADSK_CORE_TOOLBARS_CPP__
# define ADSK_CORE_TOOLBARS_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARS_API
# endif
#else
# define ADSK_CORE_TOOLBARS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Toolbar;
}}

namespace adsk { namespace core {

/// Provides access to the toolbars. These are currently the right and left QAT's and the NavBar.
class Toolbars : public Base {
public:

    /// Returns the specified toolbar using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Toolbar> item(size_t index) const;

    /// Returns the Toolbar of the specified ID.
    /// id : The Id of the toolbar to return.
    /// Returns the toolbar with the specified ID or null if there's not a toolbar with the specified ID.
    Ptr<Toolbar> itemById(const std::string& id) const;

    /// Gets the number of Toolbar objects in the collection.
    size_t count() const;

    typedef Toolbar iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_TOOLBARS_API static const char* classType();
    ADSK_CORE_TOOLBARS_API const char* objectType() const override;
    ADSK_CORE_TOOLBARS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Toolbar* item_raw(size_t index) const = 0;
    virtual Toolbar* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<Toolbar> Toolbars::item(size_t index) const
{
    Ptr<Toolbar> res = item_raw(index);
    return res;
}

inline Ptr<Toolbar> Toolbars::itemById(const std::string& id) const
{
    Ptr<Toolbar> res = itemById_raw(id.c_str());
    return res;
}

inline size_t Toolbars::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Toolbars::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARS_API