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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_BUTTONROWCOMMANDINPUT_CPP__
# define ADSK_CORE_BUTTONROWCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_BUTTONROWCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_BUTTONROWCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ListItem;
    class ListItems;
}}

namespace adsk { namespace core {

/// Provides a command input to get a selection of a single button from a row of buttons.
class ButtonRowCommandInput : public CommandInput {
public:

    /// Returns if this button row can have multiple items selected at once or not.
    /// If True, multiple buttons can be selected at once. If False only one button
    /// can be selected and selecting another button unselects the one currently selected.
    bool isMultiSelectEnabled() const;

    /// Returns the ListItems object associated with this button row. You use this
    /// object to populate and interact with the buttons in the row. When adding items
    /// to a ButtonRowCommandInput, icons are required.
    Ptr<ListItems> listItems() const;

    /// Gets the button in the row that is currently selected. This can return null in the
    /// case where no button in the row has been selected.
    Ptr<ListItem> selectedItem() const;

    ADSK_CORE_BUTTONROWCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_BUTTONROWCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_BUTTONROWCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BUTTONROWCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isMultiSelectEnabled_raw() const = 0;
    virtual ListItems* listItems_raw() const = 0;
    virtual ListItem* selectedItem_raw() const = 0;
};

// Inline wrappers

inline bool ButtonRowCommandInput::isMultiSelectEnabled() const
{
    bool res = isMultiSelectEnabled_raw();
    return res;
}

inline Ptr<ListItems> ButtonRowCommandInput::listItems() const
{
    Ptr<ListItems> res = listItems_raw();
    return res;
}

inline Ptr<ListItem> ButtonRowCommandInput::selectedItem() const
{
    Ptr<ListItem> res = selectedItem_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_BUTTONROWCOMMANDINPUT_API