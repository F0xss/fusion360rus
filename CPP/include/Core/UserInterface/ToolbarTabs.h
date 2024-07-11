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
# ifdef __COMPILING_ADSK_CORE_TOOLBARTABS_CPP__
# define ADSK_CORE_TOOLBARTABS_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARTABS_API
# endif
#else
# define ADSK_CORE_TOOLBARTABS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarTab;
}}

namespace adsk { namespace core {

/// Provides access to a set of toolbar tabs.
class ToolbarTabs : public Base {
public:

    /// Returns the specified toolbar tab using an index into the collection.
    /// When iterating by index, the tabs are returned in the same order as they are shown in the user interface.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<ToolbarTab> item(size_t index) const;

    /// Returns the ToolbarTab at the specified ID.
    /// id : The Id of the tab within the collection to return.
    /// Returns the ToolbarTab of the specified id or null if no tab has the specified id.
    Ptr<ToolbarTab> itemById(const std::string& id) const;

    /// Gets the number of ToolbarTabs.
    size_t count() const;

    /// Creates a new ToolbarTab. The tab is initially empty.
    /// This method appends the tab to the end of the collection.
    /// id : The unique id for this tab. The id must be unique with respect to all of the tabs.
    /// name : The displayed name of this tab. This is the name visible in the user interface.
    /// Returns the newly created tab or null in the case the creation failed.
    Ptr<ToolbarTab> add(const std::string& id, const std::string& name);

    typedef ToolbarTab iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_TOOLBARTABS_API static const char* classType();
    ADSK_CORE_TOOLBARTABS_API const char* objectType() const override;
    ADSK_CORE_TOOLBARTABS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARTABS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ToolbarTab* item_raw(size_t index) const = 0;
    virtual ToolbarTab* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ToolbarTab* add_raw(const char* id, const char* name) = 0;
};

// Inline wrappers

inline Ptr<ToolbarTab> ToolbarTabs::item(size_t index) const
{
    Ptr<ToolbarTab> res = item_raw(index);
    return res;
}

inline Ptr<ToolbarTab> ToolbarTabs::itemById(const std::string& id) const
{
    Ptr<ToolbarTab> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ToolbarTabs::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<ToolbarTab> ToolbarTabs::add(const std::string& id, const std::string& name)
{
    Ptr<ToolbarTab> res = add_raw(id.c_str(), name.c_str());
    return res;
}

template <class OutputIterator> inline void ToolbarTabs::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARTABS_API