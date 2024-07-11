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
# ifdef __COMPILING_ADSK_CORE_LISTITEMS_CPP__
# define ADSK_CORE_LISTITEMS_API XI_EXPORT
# else
# define ADSK_CORE_LISTITEMS_API
# endif
#else
# define ADSK_CORE_LISTITEMS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ListItem;
}}

namespace adsk { namespace core {

/// Provides access to the list of items in a check box list. This object supports the ability to add
/// items to the list and iterate through the existing items.
class ListItems : public Base {
public:

    /// Adds a new item to the list.
    /// name : The name of this item as it is displayed in the list.
    /// isSelected : Sets whether this item is selected or not. If this list is associated with a control
    /// or input that can only have one item selected any other selected items will be unselected
    /// and this one will be the only selected item.
    /// icon : The path to the folder containing the image files to use for the icon. This is an optional
    /// argument but is required in the case of ButtonRowCommandInput objects. It is optional in
    /// the case of a DropDownCommandInput whose style is LabeledIconDropDownStyle and for
    /// ListControlType whose type is not RadioButtonListType. In other cases it is not used and
    /// is ignored.
    /// beforeIndex : The position of the item within the list. This value indicates the index of the current
    /// item to insert this new item just before. For example, a value of 0 will insert it before
    /// the first item in the list. An index of -1 will position the button at the bottom of the list.
    /// Returns the new ListControlItem or null in the case of a failure.
    Ptr<ListItem> add(const std::string& name, bool isSelected, const std::string& icon = "", int beforeIndex = -1);

    /// Adds a separator to the list. This is not supported for button rows.
    /// beforeIndex : The position of the item within the list. This value indicates the index of the current
    /// item to insert this new item just before. For example, a value of 0 will insert it before
    /// the first item in the list. An index of -1 will position the button at the bottom of the list.
    /// Returns the new ListControlItem or null in the case of a failure.
    Ptr<ListItem> addSeparator(int beforeIndex);

    /// Returns the specified check box list item using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<ListItem> item(size_t index) const;

    /// Gets the number of items in the collection.
    size_t count() const;

    /// Clears all of the items from the list.
    /// Returns true if successful.
    bool clear();

    typedef ListItem iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_LISTITEMS_API static const char* classType();
    ADSK_CORE_LISTITEMS_API const char* objectType() const override;
    ADSK_CORE_LISTITEMS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_LISTITEMS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ListItem* add_raw(const char* name, bool isSelected, const char* icon, int beforeIndex) = 0;
    virtual ListItem* addSeparator_raw(int beforeIndex) = 0;
    virtual ListItem* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool clear_raw() = 0;
};

// Inline wrappers

inline Ptr<ListItem> ListItems::add(const std::string& name, bool isSelected, const std::string& icon, int beforeIndex)
{
    Ptr<ListItem> res = add_raw(name.c_str(), isSelected, icon.c_str(), beforeIndex);
    return res;
}

inline Ptr<ListItem> ListItems::addSeparator(int beforeIndex)
{
    Ptr<ListItem> res = addSeparator_raw(beforeIndex);
    return res;
}

inline Ptr<ListItem> ListItems::item(size_t index) const
{
    Ptr<ListItem> res = item_raw(index);
    return res;
}

inline size_t ListItems::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool ListItems::clear()
{
    bool res = clear_raw();
    return res;
}

template <class OutputIterator> inline void ListItems::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_LISTITEMS_API