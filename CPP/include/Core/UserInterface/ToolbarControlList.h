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
# ifdef __COMPILING_ADSK_CORE_TOOLBARCONTROLLIST_CPP__
# define ADSK_CORE_TOOLBARCONTROLLIST_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARCONTROLLIST_API
# endif
#else
# define ADSK_CORE_TOOLBARCONTROLLIST_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarControl;
}}

namespace adsk { namespace core {

/// Provides access to a list of toolbar controls.
class ToolbarControlList : public Base {
public:

    /// Returns the ToolbarControl at the specified index.
    /// When iterating by index, the controls are returned
    /// in the same order as they are shown in the user interface.
    /// index : The index of the control within the collection to return. The first item in the
    /// collection has in index of 0.
    /// Returns the ToolbarControl at the specified index or null if an invalid index was specified.
    Ptr<ToolbarControl> item(size_t index) const;

    /// Returns the ToolbarControl at the specified ID.
    /// id : The ID of the control within the collection to return.
    /// Returns the ToolbarControl with the specified ID or null if no control has this ID.
    Ptr<ToolbarControl> itemById(const std::string& id) const;

    /// Gets the number of toolbar controls.
    size_t count() const;

    typedef ToolbarControl iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_TOOLBARCONTROLLIST_API static const char* classType();
    ADSK_CORE_TOOLBARCONTROLLIST_API const char* objectType() const override;
    ADSK_CORE_TOOLBARCONTROLLIST_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARCONTROLLIST_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ToolbarControl* item_raw(size_t index) const = 0;
    virtual ToolbarControl* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<ToolbarControl> ToolbarControlList::item(size_t index) const
{
    Ptr<ToolbarControl> res = item_raw(index);
    return res;
}

inline Ptr<ToolbarControl> ToolbarControlList::itemById(const std::string& id) const
{
    Ptr<ToolbarControl> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ToolbarControlList::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ToolbarControlList::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARCONTROLLIST_API