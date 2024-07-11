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
# ifdef __COMPILING_ADSK_CORE_USERINTERFACE_CPP__
# define ADSK_CORE_USERINTERFACE_API XI_EXPORT
# else
# define ADSK_CORE_USERINTERFACE_API
# endif
#else
# define ADSK_CORE_USERINTERFACE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ActiveSelectionEvent;
    class ApplicationCommandEvent;
    class CloudFileDialog;
    class CommandDefinitions;
    class FileDialog;
    class FolderDialog;
    class MarkingMenuEvent;
    class Palettes;
    class ProgressDialog;
    class Selection;
    class Selections;
    class ToolbarPanelList;
    class Toolbars;
    class ToolbarTabList;
    class Workspace;
    class WorkspaceEvent;
    class WorkspaceList;
    class Workspaces;
}}

namespace adsk { namespace core {

/// Provides access to the user-interface related objects and functionality.
class UserInterface : public Base {
public:

    /// Display a modal message box with the provided text.
    /// text : The message text to display in the dialog.
    /// title : If the optional title argument is provided, it sets the title for the dialog, otherwise the default product name is used.
    /// buttons : The optional buttons array can be used to specify which buttons to display on the dialog.
    /// The first button provided is the default action.
    /// If buttons are not specified, the dialog will default to a single OK button.
    /// icon : The optional icon argument can be used to specify which icon to display, otherwise the default of no icon is used.
    /// The button pressed to dismiss the dialog is returned.
    DialogResults messageBox(const std::string& text, const std::string& title = "", MessageBoxButtonTypes buttons = adsk::core::OKButtonType, MessageBoxIconTypes icon = adsk::core::NoIconIconType) const;

    /// Displays a modal dialog to get string input from the user.
    /// prompt : The message text to display in the dialog.
    /// cancelled : Indicates if the dialog was canceled.
    /// title : Sets the title for the dialog if specified, otherwise the default product name is used.
    /// defaultValue : The default string that's shown when the dialog is initially displayed, otherwise the input box is empty.
    /// Returns the string entered by the user but because the user can click Cancel, the canceled argument should be tested before using the string.
    std::string inputBox(const std::string& prompt, bool& cancelled, const std::string& title = "", const std::string& defaultValue = "");

    /// Supports the selection of a single entity. This provides a simple way to prompt the user for
    /// for a selection in a script. If you need more control over the selection a command should be
    /// created and a SelectionCommandInput used.
    /// prompt : The prompt displayed to the user during the selection.
    /// filter : 
    /// A string defining the types of entities valid for selection. The valid list of selection filters can be found here: <a href="SelectionFilters_UM.htm">Selection Filters</a>.
    /// You can combine multiple types by using a comma delimiter. For example, the string "PlanarFaces,ConstructionPlanes" will allow the selection of either a planar face or a construction plane.
    /// 
    /// Returns a Selection object that provides access the selected entity through it's "entity" property
    /// along with the location in space where the entity was selected. Asserts if the selection is aborted.
    Ptr<Selection> selectEntity(const std::string& prompt, const std::string& filter);

    /// Creates a new FileDialog object which provides the ability to show a standard file selection dialog
    /// to the user.
    /// Returns the created FileDialog object that you can use to define the contents of and display a standard file dialog.
    Ptr<FileDialog> createFileDialog();

    /// Gets the current set of selected objects.
    Ptr<Selections> activeSelections() const;

    /// Gets the active workspace. The active workspace is the one currently active in the user interface.
    /// This can be null if there is no active product.
    Ptr<Workspace> activeWorkspace() const;

    /// Gets all of the command definitions currently defined. This is all
    /// command definitions both internal and those defined through the API.
    Ptr<CommandDefinitions> commandDefinitions() const;

    /// Gets a collection that provides access to the toolbars. This includes
    /// the left and right QAT, and the Navbar.
    Ptr<Toolbars> toolbars() const;

    /// Gets all of the workspaces currently available.
    Ptr<Workspaces> workspaces() const;

    /// Returns all of the workspaces associated with the specified product.
    /// productType : The name of the product that you want the associated workspaces for. The full list
    /// of available products can be obtained by using the Application.supportedProductTypes property.
    /// Returns a list of the associated work spaces.
    Ptr<WorkspaceList> workspacesByProductType(const std::string& productType) const;

    /// Gets all of the toolbar panels. This returns all of the panels
    /// available, regardless of which workspace or product they're associated with.
    Ptr<ToolbarPanelList> allToolbarPanels() const;

    /// The workspacePreActivate event fires at the VERY start of a workspace being activated.
    /// The client can add or remove WorkspaceEventHandlers from the WorkspaceEvent.
    Ptr<WorkspaceEvent> workspacePreActivate() const;

    /// The workspaceActivated event fires at the VERY end of a workspace being activated.
    /// The client can add or remove WorkspaceEventHandlers from the WorkspaceEvent.
    Ptr<WorkspaceEvent> workspaceActivated() const;

    /// The workspacePreDeactivate event fires at the VERY start of a workspace being deactivated.
    /// The client can add or remove WorkspaceEventHandlers from the WorkspaceEvent.
    Ptr<WorkspaceEvent> workspacePreDeactivate() const;

    /// The workspaceDeactivated event fires at the VERY end of a workspace being deactivated.
    /// The client can add or remove WorkspaceEventHandlers from the WorkspaceEvent.
    Ptr<WorkspaceEvent> workspaceDeactivated() const;

    /// Gets all of the toolbar panels associated with the specified product.
    /// productType : The name of the product that you want the associated workspaces for. The full list
    /// of available products can be obtained by using the Application.supportedProductTypes property.
    /// Returns a list of the toolbars associated with the specified product.
    Ptr<ToolbarPanelList> toolbarPanelsByProductType(const std::string& productType) const;

    /// Gets the id of the command definition from the active command (the one that is currently running)
    std::string activeCommand() const;

    /// Method that causes the currently active (running) command to be terminated
    /// Returns true if terminating the active command was successful.
    bool terminateActiveCommand();

    /// The commandStarting event fires when a request for a command to be executed has been
    /// received but before the command is executed. Through this event, it's possible to
    /// cancel the command from being executed.
    Ptr<ApplicationCommandEvent> commandStarting() const;

    /// The commandCreated event fires immediately after the command is created.
    Ptr<ApplicationCommandEvent> commandCreated() const;

    /// Gets an event that is fired when a command is terminated.
    Ptr<ApplicationCommandEvent> commandTerminated() const;

    /// Creates a new ProgressDialog object that you can use to display and control a progress dialog.
    /// Returns the created ProgressDialog object that you can use to define the contents of and display a progress dialog.
    Ptr<ProgressDialog> createProgressDialog();

    /// The markingMenuDisplaying event fires just before the marking menu and context menus are displayed. The
    /// marking menu is the round menu displayed when the user right-clicks the mouse within Fusion 360. The context
    /// menu is the vertical menu displayed. The event provides both the marking menu and the context menu so you
    /// can examine and edit the contents of either one or both of them before they are displayed. Fusion 360 will then
    /// display the marking and context menu that you've customized. If either one is empty it will not be displayed.
    Ptr<MarkingMenuEvent> markingMenuDisplaying() const;

    /// Returns the collection object that provides access to all of the existing
    /// palettes and provides the functionality to create new custom palettes.
    Ptr<Palettes> palettes() const;

    /// Creates a new FolderDialog object which provides the ability to show a standard folder selection dialog
    /// to the user.
    /// Returns the created FolderDialog object that you can use to define the contents of and display a standard folder dialog.
    Ptr<FolderDialog> createFolderDialog();

    /// Gets all of the toolbar tabs. This returns all of the tabs
    /// available, regardless of which workspace or product they're associated with.
    Ptr<ToolbarTabList> allToolbarTabs() const;

    /// Gets all of the toolbar tabs associated with the specified product.
    /// productType : The name of the product that you want the associated tabs for. The full list
    /// of available products can be obtained by using the Application.supportedProductTypes property.
    /// Returns a list of the tabs associated with the specified product.
    Ptr<ToolbarTabList> toolbarTabsByProductType(const std::string& productType) const;

    /// Returns true if Tabbed Toolbars are being used.
    /// Returns true if using Tabbed Toolbars.
    bool isTabbedToolbarUI() const;

    /// This event fires whenever the contents of the active selection changes. This occurs as the user
    /// selects or unselects entities while using the Fusion 360 Select command. The Select command
    /// is the default command that is always running if no other command is active. Pressing Escape
    /// terminates the currently active command and starts the Select command. If the Select command is
    /// running and you press Escape, it terminates the current Select command and starts a new one.
    /// 
    /// This event is only associated with the selection associated with the Select command and does not
    /// fire when any other command is running. The event fires when there is any change to the active
    /// selection, including when the selection is cleared when the Select command is terminated. It is
    /// also fired when the user clicks in an open area of the canvas to clear the current selection.
    Ptr<ActiveSelectionEvent> activeSelectionChanged() const;

    /// Get the localized text for a specific application text string. The strings used by Fusion are
    /// stored in localized XML files that are installed with Fusion. On Windows, you can find them here:
    /// 
    /// %LocalAppData%\Autodesk\webdeploy\production\VERSION_CODE\StringTable
    /// 
    /// And on Mac, you can find them here:
    /// 
    /// ~/Library/Application Support/Autodesk/webdeploy/production/VERSION_CODE/Autodesk Fusion 360.app/Contents/Libraries/Neutron/StringTable
    /// 
    /// There is a folder for each language that Fusion supports, and the strings for that language are defined
    /// in files within that folder. Fusion will use the language specified by the user in their preferences.
    /// module : The module name. This is the same as the StringTable .xml filename without the .xml extension and
    /// without the version number. For example, the file NaFusionUI10.xml contains many of the strings used
    /// for Fusion's modeling commands. When specifying the module, this is specified as "NaFusionUI".
    /// id : The id of the text. This is the same as the 'commandName' field in the StringTable .xml file.
    /// defaultValue : A default string value to return if the module or string id is not found in the current locale.
    /// The localized string or the defaultValue if one is not found.
    std::string getText(const std::string& module, const std::string& id, const std::string& defaultValue) const;

    /// Creates a new CloudFileDialog object which provides the ability to show a file selection dialog
    /// to the user that allows them to choose a file from Fusion Team.
    /// Returns the created CloudFileDialog object that you can use to define the contents of and display a standard file dialog.
    Ptr<CloudFileDialog> createCloudFileDialog();

    ADSK_CORE_USERINTERFACE_API static const char* classType();
    ADSK_CORE_USERINTERFACE_API const char* objectType() const override;
    ADSK_CORE_USERINTERFACE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_USERINTERFACE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DialogResults messageBox_raw(const char* text, const char* title, MessageBoxButtonTypes buttons, MessageBoxIconTypes icon) const = 0;
    virtual char* inputBox_raw(const char* prompt, bool& cancelled, const char* title, const char* defaultValue) = 0;
    virtual Selection* selectEntity_raw(const char* prompt, const char* filter) = 0;
    virtual FileDialog* createFileDialog_raw() = 0;
    virtual Selections* activeSelections_raw() const = 0;
    virtual Workspace* activeWorkspace_raw() const = 0;
    virtual CommandDefinitions* commandDefinitions_raw() const = 0;
    virtual Toolbars* toolbars_raw() const = 0;
    virtual Workspaces* workspaces_raw() const = 0;
    virtual WorkspaceList* workspacesByProductType_raw(const char* productType) const = 0;
    virtual ToolbarPanelList* allToolbarPanels_raw() const = 0;
    virtual WorkspaceEvent* workspacePreActivate_raw() const = 0;
    virtual WorkspaceEvent* workspaceActivated_raw() const = 0;
    virtual WorkspaceEvent* workspacePreDeactivate_raw() const = 0;
    virtual WorkspaceEvent* workspaceDeactivated_raw() const = 0;
    virtual ToolbarPanelList* toolbarPanelsByProductType_raw(const char* productType) const = 0;
    virtual char* activeCommand_raw() const = 0;
    virtual bool terminateActiveCommand_raw() = 0;
    virtual ApplicationCommandEvent* commandStarting_raw() const = 0;
    virtual ApplicationCommandEvent* commandCreated_raw() const = 0;
    virtual ApplicationCommandEvent* commandTerminated_raw() const = 0;
    virtual ProgressDialog* createProgressDialog_raw() = 0;
    virtual MarkingMenuEvent* markingMenuDisplaying_raw() const = 0;
    virtual Palettes* palettes_raw() const = 0;
    virtual FolderDialog* createFolderDialog_raw() = 0;
    virtual ToolbarTabList* allToolbarTabs_raw() const = 0;
    virtual ToolbarTabList* toolbarTabsByProductType_raw(const char* productType) const = 0;
    virtual bool isTabbedToolbarUI_raw() const = 0;
    virtual ActiveSelectionEvent* activeSelectionChanged_raw() const = 0;
    virtual char* getText_raw(const char* module, const char* id, const char* defaultValue) const = 0;
    virtual CloudFileDialog* createCloudFileDialog_raw() = 0;
};

// Inline wrappers

inline DialogResults UserInterface::messageBox(const std::string& text, const std::string& title, MessageBoxButtonTypes buttons, MessageBoxIconTypes icon) const
{
    DialogResults res = messageBox_raw(text.c_str(), title.c_str(), buttons, icon);
    return res;
}

inline std::string UserInterface::inputBox(const std::string& prompt, bool& cancelled, const std::string& title, const std::string& defaultValue)
{
    std::string res;

    char* p= inputBox_raw(prompt.c_str(), cancelled, title.c_str(), defaultValue.c_str());
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<Selection> UserInterface::selectEntity(const std::string& prompt, const std::string& filter)
{
    Ptr<Selection> res = selectEntity_raw(prompt.c_str(), filter.c_str());
    return res;
}

inline Ptr<FileDialog> UserInterface::createFileDialog()
{
    Ptr<FileDialog> res = createFileDialog_raw();
    return res;
}

inline Ptr<Selections> UserInterface::activeSelections() const
{
    Ptr<Selections> res = activeSelections_raw();
    return res;
}

inline Ptr<Workspace> UserInterface::activeWorkspace() const
{
    Ptr<Workspace> res = activeWorkspace_raw();
    return res;
}

inline Ptr<CommandDefinitions> UserInterface::commandDefinitions() const
{
    Ptr<CommandDefinitions> res = commandDefinitions_raw();
    return res;
}

inline Ptr<Toolbars> UserInterface::toolbars() const
{
    Ptr<Toolbars> res = toolbars_raw();
    return res;
}

inline Ptr<Workspaces> UserInterface::workspaces() const
{
    Ptr<Workspaces> res = workspaces_raw();
    return res;
}

inline Ptr<WorkspaceList> UserInterface::workspacesByProductType(const std::string& productType) const
{
    Ptr<WorkspaceList> res = workspacesByProductType_raw(productType.c_str());
    return res;
}

inline Ptr<ToolbarPanelList> UserInterface::allToolbarPanels() const
{
    Ptr<ToolbarPanelList> res = allToolbarPanels_raw();
    return res;
}

inline Ptr<WorkspaceEvent> UserInterface::workspacePreActivate() const
{
    Ptr<WorkspaceEvent> res = workspacePreActivate_raw();
    return res;
}

inline Ptr<WorkspaceEvent> UserInterface::workspaceActivated() const
{
    Ptr<WorkspaceEvent> res = workspaceActivated_raw();
    return res;
}

inline Ptr<WorkspaceEvent> UserInterface::workspacePreDeactivate() const
{
    Ptr<WorkspaceEvent> res = workspacePreDeactivate_raw();
    return res;
}

inline Ptr<WorkspaceEvent> UserInterface::workspaceDeactivated() const
{
    Ptr<WorkspaceEvent> res = workspaceDeactivated_raw();
    return res;
}

inline Ptr<ToolbarPanelList> UserInterface::toolbarPanelsByProductType(const std::string& productType) const
{
    Ptr<ToolbarPanelList> res = toolbarPanelsByProductType_raw(productType.c_str());
    return res;
}

inline std::string UserInterface::activeCommand() const
{
    std::string res;

    char* p= activeCommand_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool UserInterface::terminateActiveCommand()
{
    bool res = terminateActiveCommand_raw();
    return res;
}

inline Ptr<ApplicationCommandEvent> UserInterface::commandStarting() const
{
    Ptr<ApplicationCommandEvent> res = commandStarting_raw();
    return res;
}

inline Ptr<ApplicationCommandEvent> UserInterface::commandCreated() const
{
    Ptr<ApplicationCommandEvent> res = commandCreated_raw();
    return res;
}

inline Ptr<ApplicationCommandEvent> UserInterface::commandTerminated() const
{
    Ptr<ApplicationCommandEvent> res = commandTerminated_raw();
    return res;
}

inline Ptr<ProgressDialog> UserInterface::createProgressDialog()
{
    Ptr<ProgressDialog> res = createProgressDialog_raw();
    return res;
}

inline Ptr<MarkingMenuEvent> UserInterface::markingMenuDisplaying() const
{
    Ptr<MarkingMenuEvent> res = markingMenuDisplaying_raw();
    return res;
}

inline Ptr<Palettes> UserInterface::palettes() const
{
    Ptr<Palettes> res = palettes_raw();
    return res;
}

inline Ptr<FolderDialog> UserInterface::createFolderDialog()
{
    Ptr<FolderDialog> res = createFolderDialog_raw();
    return res;
}

inline Ptr<ToolbarTabList> UserInterface::allToolbarTabs() const
{
    Ptr<ToolbarTabList> res = allToolbarTabs_raw();
    return res;
}

inline Ptr<ToolbarTabList> UserInterface::toolbarTabsByProductType(const std::string& productType) const
{
    Ptr<ToolbarTabList> res = toolbarTabsByProductType_raw(productType.c_str());
    return res;
}

inline bool UserInterface::isTabbedToolbarUI() const
{
    bool res = isTabbedToolbarUI_raw();
    return res;
}

inline Ptr<ActiveSelectionEvent> UserInterface::activeSelectionChanged() const
{
    Ptr<ActiveSelectionEvent> res = activeSelectionChanged_raw();
    return res;
}

inline std::string UserInterface::getText(const std::string& module, const std::string& id, const std::string& defaultValue) const
{
    std::string res;

    char* p= getText_raw(module.c_str(), id.c_str(), defaultValue.c_str());
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<CloudFileDialog> UserInterface::createCloudFileDialog()
{
    Ptr<CloudFileDialog> res = createCloudFileDialog_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_USERINTERFACE_API