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
# ifdef __COMPILING_ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_CPP__
# define ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ListItem;
    class ListItems;
}}

namespace adsk { namespace core {

/// Provides a command input to get the choice from a radio button group from the user.
class RadioButtonGroupCommandInput : public CommandInput {
public:

    /// Returns the ListItems object associated with this radio button group. You use this
    /// object to populate and interact with the items in the radio button group.
    Ptr<ListItems> listItems() const;

    /// Gets and sets the item in the radio button list that is currently selected.
    Ptr<ListItem> selectedItem() const;

    ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ListItems* listItems_raw() const = 0;
    virtual ListItem* selectedItem_raw() const = 0;
};

// Inline wrappers

inline Ptr<ListItems> RadioButtonGroupCommandInput::listItems() const
{
    Ptr<ListItems> res = listItems_raw();
    return res;
}

inline Ptr<ListItem> RadioButtonGroupCommandInput::selectedItem() const
{
    Ptr<ListItem> res = selectedItem_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_RADIOBUTTONGROUPCOMMANDINPUT_API