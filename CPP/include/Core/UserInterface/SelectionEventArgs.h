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
#include "../Application/Events.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_SELECTIONEVENTARGS_CPP__
# define ADSK_CORE_SELECTIONEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_SELECTIONEVENTARGS_API
# endif
#else
# define ADSK_CORE_SELECTIONEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Selection;
    class SelectionCommandInput;
}}

namespace adsk { namespace core {

/// Provides a set of arguments from a firing SelectionEvent to a SelectionEventHandler's notify callback method.
class SelectionEventArgs : public EventArgs {
public:

    /// Gets the entity that is valid for selection.
    Ptr<Selection> selection() const;

    /// Gets or sets whether this entity should be made available to be selected.
    /// The value is initialized to true, so doing nothing will result
    /// in the entity being selectable.
    bool isSelectable() const;
    bool isSelectable(bool value);

    /// Gets or sets any additional entities that should be pre-highlighted and selected
    /// if the entity the mouse is over is selected. If you add an entity that is already
    /// selected, it will be unselected. The result of adding additional entities is the
    /// same as if they were selected one at a time by the user and the user can unselect each
    /// entity one at a time by picking it while it's selected.
    /// 
    /// An example of how this might be used is that the user can select a group of
    /// tangentially connected edges by picking a single edge. You can use the
    /// BrepEdge.tangentiallyConnectedEdges to easily find the tangent edges and add them
    /// to the set of additional entities to be selected. These edges are pre-highlighted
    /// and then selected.
    /// 
    /// If you are using this property you need to make sure that the selection
    /// limits for the SelectionCommandInput have been set appropriately. For example, a
    /// newly created SeletionCommandInput is set to only allow the selection of a single
    /// entity. By adding additional entities you'll need more than one entity because the
    /// entire set of entities will be added to the selection. Use the setSelectionLimits
    /// method of the SelectionCommandInput to change the number of allowed selections.
    /// 
    /// The additional entities should all be valid based on the current selection filter.
    Ptr<ObjectCollection> additionalEntities() const;
    bool additionalEntities(const Ptr<ObjectCollection>& value);

    /// Returns the SelectionCommandInput that is currently active in the command dialog and
    /// that the user is selecting entities for. This can be used to determine which set of
    /// rules you want to apply to determine if the current entity is selectable or not.
    Ptr<SelectionCommandInput> activeInput() const;

    ADSK_CORE_SELECTIONEVENTARGS_API static const char* classType();
    ADSK_CORE_SELECTIONEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_SELECTIONEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTIONEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Selection* selection_raw() const = 0;
    virtual bool isSelectable_raw() const = 0;
    virtual bool isSelectable_raw(bool value) = 0;
    virtual ObjectCollection* additionalEntities_raw() const = 0;
    virtual bool additionalEntities_raw(ObjectCollection* value) = 0;
    virtual SelectionCommandInput* activeInput_raw() const = 0;
};

// Inline wrappers

inline Ptr<Selection> SelectionEventArgs::selection() const
{
    Ptr<Selection> res = selection_raw();
    return res;
}

inline bool SelectionEventArgs::isSelectable() const
{
    bool res = isSelectable_raw();
    return res;
}

inline bool SelectionEventArgs::isSelectable(bool value)
{
    return isSelectable_raw(value);
}

inline Ptr<ObjectCollection> SelectionEventArgs::additionalEntities() const
{
    Ptr<ObjectCollection> res = additionalEntities_raw();
    return res;
}

inline bool SelectionEventArgs::additionalEntities(const Ptr<ObjectCollection>& value)
{
    return additionalEntities_raw(value.get());
}

inline Ptr<SelectionCommandInput> SelectionEventArgs::activeInput() const
{
    Ptr<SelectionCommandInput> res = activeInput_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTIONEVENTARGS_API