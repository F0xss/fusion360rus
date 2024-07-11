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
# ifdef __COMPILING_ADSK_CORE_TOOLBARPANEL_CPP__
# define ADSK_CORE_TOOLBARPANEL_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARPANEL_API
# endif
#else
# define ADSK_CORE_TOOLBARPANEL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class ToolbarControlList;
    class ToolbarControls;
    class UserInterface;
}}

namespace adsk { namespace core {

/// Toolbar panels are the panels shown in the command toolbar.
class ToolbarPanel : public Base {
public:

    /// Gets The unique, language independent, ID of this panel.
    std::string id() const;

    /// Gets the position this panel is in within the toolbar.
    /// The first panel is at position 0. This value is with respect
    /// to the complete list of panels so this value could be outside
    /// of the expected range if you have a collection of panels
    /// associated with a workspace, which is a subset of the entire
    /// list of panels.
    size_t index() const;

    /// Gets whether this panel is currently being displayed in the user interface.
    /// Visibility of a panel is controlled by it being associated with the currently
    /// active workspace.
    bool isVisible() const;

    /// Gets the name of the panel as seen in the user interface.
    std::string name() const;

    /// Deletes this toolbar panel.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Gets the controls associated with this panel. These are all in the panel's
    /// drop-down (assuming their visible property is true) and are selectively shown
    /// within the panel.
    Ptr<ToolbarControls> controls() const;

    /// Gets the parent UserInterface object.
    Ptr<UserInterface> parentUserInterface() const;

    /// Gets the controls in the panel that have been promoted. Promoted
    /// controls are the controls that are displayed within the panel.
    Ptr<ToolbarControlList> promotedControls() const;

    /// Gets or sets the set of workspaces that this panel is displayed for.
    Ptr<ObjectCollection> relatedWorkspaces() const;
    bool relatedWorkspaces(const Ptr<ObjectCollection>& value);

    /// Returns the name of the product this toolbar panel is associated with.
    std::string productType() const;

    /// Gets the position this panel is in within the toolbar tab.
    /// The first panel in the tab is at position 0.
    /// Returns the index value of the panel within the tab.
    size_t indexWithinTab(const std::string& tabId) const;

    ADSK_CORE_TOOLBARPANEL_API static const char* classType();
    ADSK_CORE_TOOLBARPANEL_API const char* objectType() const override;
    ADSK_CORE_TOOLBARPANEL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARPANEL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual size_t index_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual ToolbarControls* controls_raw() const = 0;
    virtual UserInterface* parentUserInterface_raw() const = 0;
    virtual ToolbarControlList* promotedControls_raw() const = 0;
    virtual ObjectCollection* relatedWorkspaces_raw() const = 0;
    virtual bool relatedWorkspaces_raw(ObjectCollection* value) = 0;
    virtual char* productType_raw() const = 0;
    virtual size_t indexWithinTab_raw(const char* tabId) const = 0;
};

// Inline wrappers

inline std::string ToolbarPanel::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline size_t ToolbarPanel::index() const
{
    size_t res = index_raw();
    return res;
}

inline bool ToolbarPanel::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline std::string ToolbarPanel::name() const
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

inline bool ToolbarPanel::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline Ptr<ToolbarControls> ToolbarPanel::controls() const
{
    Ptr<ToolbarControls> res = controls_raw();
    return res;
}

inline Ptr<UserInterface> ToolbarPanel::parentUserInterface() const
{
    Ptr<UserInterface> res = parentUserInterface_raw();
    return res;
}

inline Ptr<ToolbarControlList> ToolbarPanel::promotedControls() const
{
    Ptr<ToolbarControlList> res = promotedControls_raw();
    return res;
}

inline Ptr<ObjectCollection> ToolbarPanel::relatedWorkspaces() const
{
    Ptr<ObjectCollection> res = relatedWorkspaces_raw();
    return res;
}

inline bool ToolbarPanel::relatedWorkspaces(const Ptr<ObjectCollection>& value)
{
    return relatedWorkspaces_raw(value.get());
}

inline std::string ToolbarPanel::productType() const
{
    std::string res;

    char* p= productType_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline size_t ToolbarPanel::indexWithinTab(const std::string& tabId) const
{
    size_t res = indexWithinTab_raw(tabId.c_str());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARPANEL_API