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
# ifdef __COMPILING_ADSK_CORE_LISTITEM_CPP__
# define ADSK_CORE_LISTITEM_API XI_EXPORT
# else
# define ADSK_CORE_LISTITEM_API
# endif
#else
# define ADSK_CORE_LISTITEM_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Represents a single item in a check box list or a drop-down command input.
class ListItem : public Base {
public:

    /// Gets or sets the name of this item as displayed in the list. If
    /// this control is a separator (isSeparator is true) or it's a button row,
    /// setting this property is ignored and getting it will return an empty string.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets or sets the location for the icon file used for this item in the list.
    /// This is the path to a directory that contains the image files associated
    /// with this item. This is only valid when this is a standard list or button row and is
    /// ignored for check box lists, radio control lists, and radio button groups.
    std::string icon() const;
    bool icon(const std::string& value);

    /// Gets or sets whether this item is selected. If the item is
    /// being displayed as a check box, this controls whether it is
    /// checked or not. If it's a drop-down list or button row it controls whether
    /// this is the single selected item. Setting a drop-down list, button row item, or radio button
    /// from a group to be selected will unselect the currently selected item.
    /// For a standard list, this will get or set the single item currently
    /// selected. For a separator, setting this property is ignored and
    /// it will always return false.
    bool isSelected() const;
    bool isSelected(bool value);

    /// Deletes this item from the list. In cases where there is the concept of active item in the
    /// list, like with a DropDownCommandInput, this method will fail if the item you're attempting
    /// to delete is currently active. You need to make another item active first, and then you can
    /// delete the item.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Gets the index position within the list of this item.
    int index() const;

    /// Gets the parent CheckBoxListControlDefinition or object.
    Ptr<Base> parentList() const;

    /// Gets if this control is a separator.
    bool isSeparator() const;

    ADSK_CORE_LISTITEM_API static const char* classType();
    ADSK_CORE_LISTITEM_API const char* objectType() const override;
    ADSK_CORE_LISTITEM_API void* queryInterface(const char* id) const override;
    ADSK_CORE_LISTITEM_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual char* icon_raw() const = 0;
    virtual bool icon_raw(const char* value) = 0;
    virtual bool isSelected_raw() const = 0;
    virtual bool isSelected_raw(bool value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual int index_raw() const = 0;
    virtual Base* parentList_raw() const = 0;
    virtual bool isSeparator_raw() const = 0;
};

// Inline wrappers

inline std::string ListItem::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ListItem::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::string ListItem::icon() const
{
    std::string res;

    char* p= icon_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ListItem::icon(const std::string& value)
{
    return icon_raw(value.c_str());
}

inline bool ListItem::isSelected() const
{
    bool res = isSelected_raw();
    return res;
}

inline bool ListItem::isSelected(bool value)
{
    return isSelected_raw(value);
}

inline bool ListItem::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline int ListItem::index() const
{
    int res = index_raw();
    return res;
}

inline Ptr<Base> ListItem::parentList() const
{
    Ptr<Base> res = parentList_raw();
    return res;
}

inline bool ListItem::isSeparator() const
{
    bool res = isSeparator_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_LISTITEM_API