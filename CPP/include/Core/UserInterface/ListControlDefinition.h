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
#include "ControlDefinition.h"
#include "../CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_LISTCONTROLDEFINITION_CPP__
# define ADSK_CORE_LISTCONTROLDEFINITION_API XI_EXPORT
# else
# define ADSK_CORE_LISTCONTROLDEFINITION_API
# endif
#else
# define ADSK_CORE_LISTCONTROLDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ListItem;
    class ListItems;
}}

namespace adsk { namespace core {

/// Represents the information used to define a list of check boxes, radio buttons, or text with icons. This class
/// isn't the visible list control but is the information needed to create a list control and fully defines a list except for
/// it's position within the user interface.
class ListControlDefinition : public ControlDefinition {
public:

    /// Gets the associated ListControlItems collection through which you can add and modify items in the list.
    Ptr<ListItems> listItems() const;

    /// Gets how this list control will be displayed; as a standard list, a list of check boxes, or a list of radio buttons.
    ListControlDisplayTypes listControlDisplayType() const;

    /// Gets the item in the list that was last selected. This can return null
    /// in the case where this control is displayed as a list of check boxes and there hasn't
    /// been any interaction by the end-user. In the case of a list of check boxes, this returns
    /// the item that was last clicked by the user, whether it was to check or uncheck the item.
    /// In the case of a list of radio buttons, this always returns the item that is currently selected.
    Ptr<ListItem> lastSelected() const;

    ADSK_CORE_LISTCONTROLDEFINITION_API static const char* classType();
    ADSK_CORE_LISTCONTROLDEFINITION_API const char* objectType() const override;
    ADSK_CORE_LISTCONTROLDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_LISTCONTROLDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ListItems* listItems_raw() const = 0;
    virtual ListControlDisplayTypes listControlDisplayType_raw() const = 0;
    virtual ListItem* lastSelected_raw() const = 0;
};

// Inline wrappers

inline Ptr<ListItems> ListControlDefinition::listItems() const
{
    Ptr<ListItems> res = listItems_raw();
    return res;
}

inline ListControlDisplayTypes ListControlDefinition::listControlDisplayType() const
{
    ListControlDisplayTypes res = listControlDisplayType_raw();
    return res;
}

inline Ptr<ListItem> ListControlDefinition::lastSelected() const
{
    Ptr<ListItem> res = lastSelected_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_LISTCONTROLDEFINITION_API