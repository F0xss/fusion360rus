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
# ifdef __COMPILING_ADSK_CORE_WORKSPACE_CPP__
# define ADSK_CORE_WORKSPACE_API XI_EXPORT
# else
# define ADSK_CORE_WORKSPACE_API
# endif
#else
# define ADSK_CORE_WORKSPACE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarPanels;
    class ToolbarTabs;
}}

namespace adsk { namespace core {

/// A Workspace provides access to a set of panels, which contain commands that
/// are relevant for that particular workspace. The user can switch from one
/// workspace to another in a product (e.g. switch from Model to Sculpt in Fusion 360).
class Workspace : public Base {
public:

    /// Gets the unique Id of the workspace that can be used programmatically
    /// to find a specific workspace. It is not affected by the current
    /// language.
    std::string id() const;

    /// Gets if the workspace is currently active - i.e. displayed
    bool isActive() const;

    /// Gets if this workspace is native to Fusion 360 or was created via the API.
    bool isNative() const;

    /// Gets the visible name of the workspace as seen in the user interface.
    /// This is the localized name.
    std::string name() const;

    /// Gets the collection containing the panels associated with this workspace.
    /// It's through this collection that you can add new toolbar panels.
    Ptr<ToolbarPanels> toolbarPanels() const;

    /// Gets or sets the resource folder.
    std::string resourceFolder() const;
    bool resourceFolder(const std::string& value);

    /// Activate the workspace (assuming it is valid to do so - a SIM workspace can't
    /// be activated if Fusion 360 is the active product).
    /// Boolean return that indicates if the activation was successful or not.
    bool activate();

    /// Deletes this workspace. Only a workspace added by the API can be deleted, (IsNative is false).
    /// Boolean return that indicates if the deletion was successful or not.
    bool deleteMe();

    /// Returns the name of the product this workspace is associated with.
    std::string productType() const;

    /// Gets or sets the full filename of the image file (PNG) used for the tool clip.
    /// the tool clip is the image shown when the user hovers the mouse over the workspace name in the workspace drop-down.
    std::string toolClipFilename() const;
    bool toolClipFilename(const std::string& value);

    /// Gets or sets the tooltip text displayed for the workspace. This is the first line of text shown when the
    /// user hovers over the workspace name in the Fusion 360 toolbar drop-down. This is typically the name of the
    /// workspace. This is different from the name in the that the name is a short name shown in the drop-down.
    /// The tooltip is only shown when the user hovers over the name and box appears providing more information
    /// about the workspace. For example, the name of the model workspace is "Model" and the tooltip is "Model Workspace".
    std::string tooltip() const;
    bool tooltip(const std::string& value);

    /// Gets or sets the tooltip description displayed for the workspace. The tooltip description is a longer
    /// description of the workspace and is only displayed when the user hovers over the workspace name in
    /// the Fusion 360 toolbar drop-down. The pop-up dialog that appears contains the tooltip, the tooltip
    /// description, and the tool clip which is a picture.
    std::string tooltipDescription() const;
    bool tooltipDescription(const std::string& value);

    /// Gets the collection containing the tabs associated with this workspace.
    Ptr<ToolbarTabs> toolbarTabs() const;

    ADSK_CORE_WORKSPACE_API static const char* classType();
    ADSK_CORE_WORKSPACE_API const char* objectType() const override;
    ADSK_CORE_WORKSPACE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_WORKSPACE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool isNative_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual ToolbarPanels* toolbarPanels_raw() const = 0;
    virtual char* resourceFolder_raw() const = 0;
    virtual bool resourceFolder_raw(const char* value) = 0;
    virtual bool activate_raw() = 0;
    virtual bool deleteMe_raw() = 0;
    virtual char* productType_raw() const = 0;
    virtual char* toolClipFilename_raw() const = 0;
    virtual bool toolClipFilename_raw(const char* value) = 0;
    virtual char* tooltip_raw() const = 0;
    virtual bool tooltip_raw(const char* value) = 0;
    virtual char* tooltipDescription_raw() const = 0;
    virtual bool tooltipDescription_raw(const char* value) = 0;
    virtual ToolbarTabs* toolbarTabs_raw() const = 0;
};

// Inline wrappers

inline std::string Workspace::id() const
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

inline bool Workspace::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool Workspace::isNative() const
{
    bool res = isNative_raw();
    return res;
}

inline std::string Workspace::name() const
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

inline Ptr<ToolbarPanels> Workspace::toolbarPanels() const
{
    Ptr<ToolbarPanels> res = toolbarPanels_raw();
    return res;
}

inline std::string Workspace::resourceFolder() const
{
    std::string res;

    char* p= resourceFolder_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Workspace::resourceFolder(const std::string& value)
{
    return resourceFolder_raw(value.c_str());
}

inline bool Workspace::activate()
{
    bool res = activate_raw();
    return res;
}

inline bool Workspace::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline std::string Workspace::productType() const
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

inline std::string Workspace::toolClipFilename() const
{
    std::string res;

    char* p= toolClipFilename_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Workspace::toolClipFilename(const std::string& value)
{
    return toolClipFilename_raw(value.c_str());
}

inline std::string Workspace::tooltip() const
{
    std::string res;

    char* p= tooltip_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Workspace::tooltip(const std::string& value)
{
    return tooltip_raw(value.c_str());
}

inline std::string Workspace::tooltipDescription() const
{
    std::string res;

    char* p= tooltipDescription_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Workspace::tooltipDescription(const std::string& value)
{
    return tooltipDescription_raw(value.c_str());
}

inline Ptr<ToolbarTabs> Workspace::toolbarTabs() const
{
    Ptr<ToolbarTabs> res = toolbarTabs_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_WORKSPACE_API