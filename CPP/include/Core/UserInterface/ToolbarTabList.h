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
# ifdef __COMPILING_ADSK_CORE_TOOLBARTABLIST_CPP__
# define ADSK_CORE_TOOLBARTABLIST_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARTABLIST_API
# endif
#else
# define ADSK_CORE_TOOLBARTABLIST_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarTab;
}}

namespace adsk { namespace core {

/// A ToolbarTabList is a list of ToolbarTab objects.
class ToolbarTabList : public Base {
public:

    /// Returns the specified tab using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<ToolbarTab> item(size_t index) const;

    /// Returns the ToolbarTab of the specified ID.
    /// id : The ID of the ToolbarTab to get.
    /// Returns the specified ToolbarTab or null in the case where there isn't a ToolbarTab with the specified ID.
    Ptr<ToolbarTab> itemById(const std::string& id) const;

    /// Gets the number of toolbar tabs in the collection.
    size_t count() const;

    typedef ToolbarTab iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_TOOLBARTABLIST_API static const char* classType();
    ADSK_CORE_TOOLBARTABLIST_API const char* objectType() const override;
    ADSK_CORE_TOOLBARTABLIST_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARTABLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ToolbarTab* item_raw(size_t index) const = 0;
    virtual ToolbarTab* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<ToolbarTab> ToolbarTabList::item(size_t index) const
{
    Ptr<ToolbarTab> res = item_raw(index);
    return res;
}

inline Ptr<ToolbarTab> ToolbarTabList::itemById(const std::string& id) const
{
    Ptr<ToolbarTab> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ToolbarTabList::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ToolbarTabList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARTABLIST_API