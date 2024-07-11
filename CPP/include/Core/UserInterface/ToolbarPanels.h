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
# ifdef __COMPILING_ADSK_CORE_TOOLBARPANELS_CPP__
# define ADSK_CORE_TOOLBARPANELS_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARPANELS_API
# endif
#else
# define ADSK_CORE_TOOLBARPANELS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarPanel;
}}

namespace adsk { namespace core {

/// Provides access to a set of toolbar panels. Many toolbar panels exist and their
/// visibility is determined by the active workspace. A panel can be associated with one
/// or more workspaces and when the associated workspace is active, the panel is made visible.
/// 
/// This collection is associated with a workspace and possibly a tab in the toolbar for that workspace.
/// If this collection is from a toolbar tab, the collection order is the left-to-right order
/// of panels in the toolbar tab.
class ToolbarPanels : public Base {
public:

    /// Creates a new ToolbarPanel. The panel is initially empty.
    /// Use the associated ToolbarControls collection to add buttons.
    /// 
    /// If this collection is associated with a tab, the new panel will be added to that tab.
    /// If this collection is not associated with a tab, the new panel will be added to the end of the "Tools" Tab.
    /// A "Tools" tab will be created for you if it does not currently exist for this collection's workspace.
    /// id : The unique id for this panel. The id must be unique with respect to all of the panels.
    /// name : The displayed name of this panel. This is the name visible in the user interface.
    /// positionID : Specifies the id of the panel to position this panel relative to.
    /// Not setting this value indicates that the panel will be created at the end of all other panels. The isBefore
    /// parameter specifies whether to place the panel before or after this panel.
    /// isBefore : Specifies whether to place the panel before or after the panel specified by the positionID argument.
    /// This argument is ignored is positionID is not specified
    /// Returns the newly created panel or null in the case the creation failed.
    Ptr<ToolbarPanel> add(const std::string& id, const std::string& name, const std::string& positionID = "", bool isBefore = true);

    /// Returns the specified toolbar panel using an index into the collection.
    /// When iterating by index, the panels are returned in the same order as they are shown in the user interface.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<ToolbarPanel> item(size_t index) const;

    /// Returns the ToolbarPanel at the specified ID.
    /// id : The Id of the panel within the collection to return.
    /// Returns the ToolbarPanel of the specified id or null no panel has the specified id.
    Ptr<ToolbarPanel> itemById(const std::string& id) const;

    /// Gets the number of ToolbarPanels.
    size_t count() const;

    typedef ToolbarPanel iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_TOOLBARPANELS_API static const char* classType();
    ADSK_CORE_TOOLBARPANELS_API const char* objectType() const override;
    ADSK_CORE_TOOLBARPANELS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARPANELS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ToolbarPanel* add_raw(const char* id, const char* name, const char* positionID, bool isBefore) = 0;
    virtual ToolbarPanel* item_raw(size_t index) const = 0;
    virtual ToolbarPanel* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<ToolbarPanel> ToolbarPanels::add(const std::string& id, const std::string& name, const std::string& positionID, bool isBefore)
{
    Ptr<ToolbarPanel> res = add_raw(id.c_str(), name.c_str(), positionID.c_str(), isBefore);
    return res;
}

inline Ptr<ToolbarPanel> ToolbarPanels::item(size_t index) const
{
    Ptr<ToolbarPanel> res = item_raw(index);
    return res;
}

inline Ptr<ToolbarPanel> ToolbarPanels::itemById(const std::string& id) const
{
    Ptr<ToolbarPanel> res = itemById_raw(id.c_str());
    return res;
}

inline size_t ToolbarPanels::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void ToolbarPanels::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARPANELS_API