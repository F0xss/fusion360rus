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
# ifdef __COMPILING_ADSK_CORE_TOOLBARTAB_CPP__
# define ADSK_CORE_TOOLBARTAB_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARTAB_API
# endif
#else
# define ADSK_CORE_TOOLBARTAB_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarPanels;
    class UserInterface;
}}

namespace adsk { namespace core {

/// Toolbar tabs are the tabs shown in the command toolbar.
class ToolbarTab : public Base {
public:

    /// Gets The unique, language independent, ID of this tab.
    std::string id() const;

    /// Gets the position this tab is in within the toolbar.
    /// The first tab is at position 0. This value is with respect
    /// to the complete list of tabs so this value could be outside
    /// of the expected range if you have a collection of tabs
    /// associated with a workspace, which is a subset of the entire
    /// list of tabs.
    size_t index() const;

    /// Gets whether this tab is currently being displayed in the user interface.
    bool isVisible() const;

    /// Gets the name of the tab as seen in the user interface.
    std::string name() const;

    /// Gets the collection containing the panels associated with this tab.
    /// It's through this collection that you can add new toolbar panels.
    Ptr<ToolbarPanels> toolbarPanels() const;

    /// Gets the parent UserInterface object.
    Ptr<UserInterface> parentUserInterface() const;

    /// Returns the name of the product this toolbar tab is associated with.
    std::string productType() const;

    /// Gets if this toolbar tab is currently active - i.e. displayed.
    bool isActive() const;

    /// Activate this toolbar tab.
    /// Boolean return that indicates if the activation was successful or not.
    bool activate();

    /// Gets if this tab is native to Fusion 360 or was created via the API.
    bool isNative() const;

    /// Deletes this tab. Fusion 360 native tabs cannot be deleted. Use the
    /// isNative property to determine if this is a native or API created tab.
    /// Returns true if the delete was successful.
    bool deleteMe();

    ADSK_CORE_TOOLBARTAB_API static const char* classType();
    ADSK_CORE_TOOLBARTAB_API const char* objectType() const override;
    ADSK_CORE_TOOLBARTAB_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARTAB_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual size_t index_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual ToolbarPanels* toolbarPanels_raw() const = 0;
    virtual UserInterface* parentUserInterface_raw() const = 0;
    virtual char* productType_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
    virtual bool isNative_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline std::string ToolbarTab::id() const
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

inline size_t ToolbarTab::index() const
{
    size_t res = index_raw();
    return res;
}

inline bool ToolbarTab::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline std::string ToolbarTab::name() const
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

inline Ptr<ToolbarPanels> ToolbarTab::toolbarPanels() const
{
    Ptr<ToolbarPanels> res = toolbarPanels_raw();
    return res;
}

inline Ptr<UserInterface> ToolbarTab::parentUserInterface() const
{
    Ptr<UserInterface> res = parentUserInterface_raw();
    return res;
}

inline std::string ToolbarTab::productType() const
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

inline bool ToolbarTab::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool ToolbarTab::activate()
{
    bool res = activate_raw();
    return res;
}

inline bool ToolbarTab::isNative() const
{
    bool res = isNative_raw();
    return res;
}

inline bool ToolbarTab::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARTAB_API