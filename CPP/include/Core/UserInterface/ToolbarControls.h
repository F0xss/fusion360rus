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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_TOOLBARCONTROLS_CPP__
# define ADSK_CORE_TOOLBARCONTROLS_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARCONTROLS_API
# endif
#else
# define ADSK_CORE_TOOLBARCONTROLS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandControl;
    class CommandDefinition;
    class DropDownControl;
    class SeparatorControl;
    class SplitButtonControl;
    class ToolbarControl;
}}

namespace adsk { namespace core {

/// ToolbarControls is a collection of ToolbarControl objects displayed in a toolbar or menu.
class ToolbarControls : public Base {
public:

    /// Gets the number of controls in the collection.
    size_t count() const;

    /// Returns the ToolbarControl at the specified index.
    /// When iterating by index, the controls are returned
    /// in the same order as they are shown in the user interface.
    /// index : The index of the control within the collection to return. The first item in the
    /// collection has in index of 0.
    /// Returns the ToolbarControl at the specified index or null if an invalid index was specified.
    Ptr<ToolbarControl> item(size_t index) const;

    /// Returns the ToolbarControl at the specified ID.
    /// id : The ID of the control within the collection to return.
    /// Returns the ToolbarControl with the specified ID or null if no control has this ID.
    Ptr<ToolbarControl> itemById(const std::string& id) const;

    /// Adds a button to the controls in the toolbar, panel, or drop-down. The ID of the created
    /// command control is inherited from the associated command definition.
    /// commandDefinition : The associated CommandDefinition that defines the resources and receives events related to this control.
    /// positionID : Specifies the reference id of the control to position this control relative to.
    /// Not setting this value indicates that the control will be created at the end of all other controls in toolbar. The isBefore
    /// parameter specifies whether to place the control before or after the reference control.
    /// isBefore : Specifies whether to place the control before or after the reference control specified by the positionID parameter.
    /// This argument is ignored is positionID is not specified.
    /// Returns the newly created CommandControl object or null if the creation fails.
    Ptr<CommandControl> addCommand(const Ptr<CommandDefinition>& commandDefinition, const std::string& positionID = "", bool isBefore = true);

    /// Adds a drop-down to the controls in the toolbar, panel, or drop-down. When the drop-down is initially created it will be empty.
    /// you can get the associated ToolbarControls object from the DropDownControl to add additional controls to the drop-down.
    /// text : The text displayed for the drop-down in a menu. For a drop-down in a toolbar this argument is ignored
    /// because an icon is used.
    /// resourceFolder : The resource folder containing the image used for the icon when the drop-down is in a toolbar.
    /// id : Optional unique ID for the control. It must be unique with respect to other controls in this collection.
    /// If the default empty string is provided, Fusion 360 will create a unique ID.
    /// positionID : Specifies the reference id of the control to position this control relative to.
    /// Not setting this value indicates that the control will be created at the end of all other controls in toolbar. The isBefore
    /// parameter specifies whether to place the control before or after the reference control.
    /// isBefore : Specifies whether to place the control before or after the reference control specified by the positionID parameter.
    /// This argument is ignored is positionID is not specified.
    /// Returns the newly created DropDownControl object or null if the creation fails.
    Ptr<DropDownControl> addDropDown(const std::string& text, const std::string& resourceFolder, const std::string& id = "", const std::string& positionID = "", bool isBefore = true);

    /// Adds a separator to the controls in the toolbar, panel, or drop-down.
    /// id : Optional unique ID for the control. It must be unique with respect to other controls in this collection.
    /// If the default empty string is provided, Fusion 360 will create a unique ID.
    /// positionID : Specifies the reference id of the control to position this separator control relative to.
    /// Not setting this value indicates that the separator control will be created at the end of all other controls in toolbar.
    /// The isBefore parameter specifies whether to place the control before or after the reference control.
    /// isBefore : Specifies whether to place the separator control before or after the reference control specified by the positionID parameter.
    /// This argument is ignored is positionID is not specified.
    /// Returns the newly created separator controls or null if the creation fails.
    Ptr<SeparatorControl> addSeparator(const std::string& id = "", const std::string& positionID = "", bool isBefore = true);

    /// Adds a split button to the controls in a toolbar. A split button has two active areas that the user can click;
    /// the main button portion and the drop-down arrow. Clicking the main button, executes the displayed command.
    /// Clicking the drop-down displays the drop-down with additional commands.
    /// 
    /// The split button itself does not fire any events, but the buttons within it will fire events to their associated
    /// command definitions.
    /// defaultDefinition : A command definition that will be used to create the main button. A button will also be created in the drop-down
    /// for this definition.
    /// additionalDefinitions : An array of command definitions that will be used to create the buttons on the drop-down.
    /// showLastUsed : Specifies if the split button should have the behavior where the command shown on the main button changes
    /// to the last executed command.
    /// id : Optional unique ID for the control. It must be unique with respect to other controls in this collection.
    /// If the default empty string is provided, Fusion 360 will create a unique ID.
    /// positionID : Specifies the reference id of the control to position this control relative to.
    /// Not setting this value indicates that the control will be created at the end of all other controls in toolbar. The isBefore
    /// parameter specifies whether to place the control before or after the reference control.
    /// isBefore : Specifies whether to place the control before or after the reference control specified by the positionID parameter.
    /// This argument is ignored is positionID is not specified
    /// Returns the newly created SplitButtonControl object or null if the creation fails.
    Ptr<SplitButtonControl> addSplitButton(const Ptr<CommandDefinition>& defaultDefinition, const std::vector<Ptr<CommandDefinition>>& additionalDefinitions, bool showLastUsed, const std::string& id = "", const std::string& positionID = "", bool isBefore = true);

    typedef ToolbarControl iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_TOOLBARCONTROLS_API static const char* classType();
    ADSK_CORE_TOOLBARCONTROLS_API const char* objectType() const override;
    ADSK_CORE_TOOLBARCONTROLS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARCONTROLS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual ToolbarControl* item_raw(size_t index) const = 0;
    virtual ToolbarControl* itemById_raw(const char* id) const = 0;
    virtual CommandControl* addCommand_raw(CommandDefinition* commandDefinition, const char* positionID, bool isBefore) = 0;
    virtual DropDownControl* addDropDown_raw(const char* text, const char* resourceFolder, const char* id, const char* positionID, bool isBefore) = 0;
    virtual SeparatorControl* addSeparator_raw(const char* id, const char* positionID, bool isBefore) = 0;
    virtual SplitButtonControl* addSplitButton_raw(CommandDefinition* defaultDefinition, CommandDefinition** additionalDefinitions, size_t additionalDefinitions_size, bool showLastUsed, const char* id, const char* positionID, bool isBefore) = 0;
};

// Inline wrappers

inline size_t ToolbarControls::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<ToolbarControl> ToolbarControls::item(size_t index) const
{
    Ptr<ToolbarControl> res = item_raw(index);
    return res;
}

inline Ptr<ToolbarControl> ToolbarControls::itemById(const std::string& id) const
{
    Ptr<ToolbarControl> res = itemById_raw(id.c_str());
    return res;
}

inline Ptr<CommandControl> ToolbarControls::addCommand(const Ptr<CommandDefinition>& commandDefinition, const std::string& positionID, bool isBefore)
{
    Ptr<CommandControl> res = addCommand_raw(commandDefinition.get(), positionID.c_str(), isBefore);
    return res;
}

inline Ptr<DropDownControl> ToolbarControls::addDropDown(const std::string& text, const std::string& resourceFolder, const std::string& id, const std::string& positionID, bool isBefore)
{
    Ptr<DropDownControl> res = addDropDown_raw(text.c_str(), resourceFolder.c_str(), id.c_str(), positionID.c_str(), isBefore);
    return res;
}

inline Ptr<SeparatorControl> ToolbarControls::addSeparator(const std::string& id, const std::string& positionID, bool isBefore)
{
    Ptr<SeparatorControl> res = addSeparator_raw(id.c_str(), positionID.c_str(), isBefore);
    return res;
}

inline Ptr<SplitButtonControl> ToolbarControls::addSplitButton(const Ptr<CommandDefinition>& defaultDefinition, const std::vector<Ptr<CommandDefinition>>& additionalDefinitions, bool showLastUsed, const std::string& id, const std::string& positionID, bool isBefore)
{
    CommandDefinition** additionalDefinitions_ = new CommandDefinition*[additionalDefinitions.size()];
    for(size_t i=0; i<additionalDefinitions.size(); ++i)
        additionalDefinitions_[i] = additionalDefinitions[i].get();

    Ptr<SplitButtonControl> res = addSplitButton_raw(defaultDefinition.get(), additionalDefinitions_, additionalDefinitions.size(), showLastUsed, id.c_str(), positionID.c_str(), isBefore);
    delete[] additionalDefinitions_;
    return res;
}

template <class OutputIterator> inline void ToolbarControls::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARCONTROLS_API