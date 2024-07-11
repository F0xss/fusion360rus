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
#include "CommandInput.h"
#include "../CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DROPDOWNCOMMANDINPUT_CPP__
# define ADSK_CORE_DROPDOWNCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_DROPDOWNCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_DROPDOWNCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ListItem;
    class ListItems;
}}

namespace adsk { namespace core {

/// Provides a command input to get the choice in a drop-down list from the user.
class DropDownCommandInput : public CommandInput {
public:

    /// Returns the style of drop down this was created as.
    DropDownStyles dropDownStyle() const;

    /// Returns the ListItems object associated with this drop-down. You use this
    /// object to populate and interact with the items in the drop-down.
    Ptr<ListItems> listItems() const;

    /// Gets the item in the list that is currently selected. This can return null in the
    /// case where no item in the list has been selected. This should be ignored
    /// for CheckBoxDropDownStyle style drop-downs because multiple items can be selected
    /// and each LiteItem should be checked individually.
    Ptr<ListItem> selectedItem() const;

    /// Gets or sets the maximum allowed size on screen of the drop down list, measured in items.
    int maxVisibleItems() const;
    bool maxVisibleItems(int value);

    ADSK_CORE_DROPDOWNCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_DROPDOWNCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_DROPDOWNCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DROPDOWNCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DropDownStyles dropDownStyle_raw() const = 0;
    virtual ListItems* listItems_raw() const = 0;
    virtual ListItem* selectedItem_raw() const = 0;
    virtual int maxVisibleItems_raw() const = 0;
    virtual bool maxVisibleItems_raw(int value) = 0;
};

// Inline wrappers

inline DropDownStyles DropDownCommandInput::dropDownStyle() const
{
    DropDownStyles res = dropDownStyle_raw();
    return res;
}

inline Ptr<ListItems> DropDownCommandInput::listItems() const
{
    Ptr<ListItems> res = listItems_raw();
    return res;
}

inline Ptr<ListItem> DropDownCommandInput::selectedItem() const
{
    Ptr<ListItem> res = selectedItem_raw();
    return res;
}

inline int DropDownCommandInput::maxVisibleItems() const
{
    int res = maxVisibleItems_raw();
    return res;
}

inline bool DropDownCommandInput::maxVisibleItems(int value)
{
    return maxVisibleItems_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DROPDOWNCOMMANDINPUT_API