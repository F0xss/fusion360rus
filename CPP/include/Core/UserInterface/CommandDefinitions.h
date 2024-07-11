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
# ifdef __COMPILING_ADSK_CORE_COMMANDDEFINITIONS_CPP__
# define ADSK_CORE_COMMANDDEFINITIONS_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDDEFINITIONS_API
# endif
#else
# define ADSK_CORE_COMMANDDEFINITIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandDefinition;
}}

namespace adsk { namespace core {

/// Provides access to all of the available command definitions. This is all those created via
/// the API but also includes the command definitions defined by Fusion 360 for the native commands.
class CommandDefinitions : public Base {
public:

    /// Creates a new command definition that can be used to create a button control and handle the response when the button is clicked.
    /// id : The unique identifier for this command definition. It must be unique with respect to all other command definitions and is
    /// limited to the following set of characters, [A-Z][a-z][0-9] and _.
    /// name : The name displayed in the UI for the associated button control.
    /// tooltip : The full description of the command as seen in the extended tooltip in the user interface.
    /// Using the returned CommandDefinition you can also optionally set the toolClipFilename property
    /// to show an image the extended tooltip.
    /// 
    /// The width of all tooltips is limited to 300 pixels. Word wrapping is enabled, so Fusion will automatically
    /// break the line and flow your text to the next line. However, if you include a long word that exceeds
    /// 300 pixels, it doesn't wrap and the right portion will be clipped. This is common when displaying paths
    /// or URL's. If a single word is longer than 300 pixels there are a couple of options to avoid the clipping.
    /// 
    /// The first option is to insert one or more zero width space characters within the word to define where the
    /// word should be broken. The UNICODE character '\u200b' defines a zero width space. This is not displayed is only used
    /// to designate a possible break point.
    /// 
    /// The second option is to shorten the word by removing a section. For example, if the word is a full path to a
    /// file and a portion of the path is common you can remove that portion and replace it with the ellipsis character
    /// to indicate there is some missing text. There is a single UNICODE character you can use the ellipsis. It is '\u2026'.
    /// resourceFolder : Specifies the folder where the resources for this command are located. These are various sizes and styles of PNG
    /// files that are used for the button image. To fully support all potential options you should create files with
    /// the following names and sizes: 16x16.png , 32x32.png, 64x64.png (used for high-res displays), 16x16-dark.png, 32x32-dark.png, 64x64-dark.png
    /// The dark images are used when the command is highlighted and can contain lighter lines to contrast better with the blue highlighting. If
    /// you don't provide dark images Fusion 360 will use the regular images when highlighting the button.
    /// 
    /// This is an optional argument and if not provided a default icon will be used.
    /// Returns the created CommandDefinition object or null if the creation failed.
    Ptr<CommandDefinition> addButtonDefinition(const std::string& id, const std::string& name, const std::string& tooltip, const std::string& resourceFolder = "");

    /// Creates a new command definition that can be used to create a single check box control and handle the response when the check box is clicked.
    /// id : The unique identifier for this command definition. It must be unique with respect to all other command definitions and is
    /// limited to the following set of characters, [A-Z][a-z][0-9] and _.
    /// name : The name displayed in the UI for the associated check box control.
    /// tooltip : The full description of the command as seen in the extended tooltip in the user interface.
    /// Using the returned CommandDefinition you can also optionally set the toolClipFilename property
    /// to show an image the extended tooltip.
    /// 
    /// The width of all tooltips is limited to 300 pixels. Word wrapping is enabled, so Fusion will automatically
    /// break the line and flow your text to the next line. However, if you include a long word that exceeds
    /// 300 pixels, it doesn't wrap and the right portion will be clipped. This is common when displaying paths
    /// or URL's. If a single word is longer than 300 pixels there are a couple of options to avoid the clipping.
    /// 
    /// The first option is to insert one or more zero width space characters within the word to define where the
    /// word should be broken. The UNICODE character '\u200b' defines a zero width space. This is not displayed is only used
    /// to designate a possible break point.
    /// 
    /// The second option is to shorten the word by removing a section. For example, if the word is a full path to a
    /// file and a portion of the path is common you can remove that portion and replace it with the ellipsis character
    /// to indicate there is some missing text. There is a single UNICODE character you can use the ellipsis. It is '\u2026'.
    /// isChecked : Indicates if the initial state of the check box.
    /// Returns the created CommandDefinition object or null if the creation failed.
    Ptr<CommandDefinition> addCheckBoxDefinition(const std::string& id, const std::string& name, const std::string& tooltip, bool isChecked);

    /// Creates a new command definition that can be used to create a list of check boxes, radio buttons, or text with an icon within a pop-up.
    /// 
    /// When the list is of check boxes any combinations of items in the list can be checked. The drop-down also remains displayed allowing the user to
    /// check and uncheck multiple items however a CommandCreated event is fired for every change.
    /// 
    /// When the list is of radio buttons or a list of text items, only one item in the list can be selected at a time.
    /// When an item is selected the drop-down is immediately dismissed.
    /// 
    /// The items in the list and their initial state are defined using functionality on the associated ListControlDefinition, which is
    /// accessible through the returned CommandDefinition.
    /// id : The unique identifier for this command definition. It must be unique with respect to all other command definitions and is
    /// limited to the following set of characters, [A-Z][a-z][0-9] and _.
    /// name : The name displayed in the UI for the associated selected check box list control.
    /// listControlDisplayType : Specifies the type of controls to be displayed within the list.
    /// resourceFolder : The folder containing any resources used for items in this list.
    /// Returns the created CommandDefinition object or null if the creation failed.
    Ptr<CommandDefinition> addListDefinition(const std::string& id, const std::string& name, ListControlDisplayTypes listControlDisplayType, const std::string& resourceFolder = "");

    /// Returns the CommandDefinition at the specified index.
    /// index : The index of the command definition within the collection to return. The first item in the
    /// collection has in index of 0.
    /// Returns the CommandDefinition at the specified index or null if an invalid index is specified.
    Ptr<CommandDefinition> item(size_t index) const;

    /// Returns the CommandDefinition that has the specified ID.
    /// id : The ID of the command definition to return.
    /// Returns the CommandDefinition with the specified ID or null if there isn't a command definition with that ID.
    Ptr<CommandDefinition> itemById(const std::string& id) const;

    /// Gets the number of command definitions.
    size_t count() const;

    typedef CommandDefinition iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_COMMANDDEFINITIONS_API static const char* classType();
    ADSK_CORE_COMMANDDEFINITIONS_API const char* objectType() const override;
    ADSK_CORE_COMMANDDEFINITIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDDEFINITIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandDefinition* addButtonDefinition_raw(const char* id, const char* name, const char* tooltip, const char* resourceFolder) = 0;
    virtual CommandDefinition* addCheckBoxDefinition_raw(const char* id, const char* name, const char* tooltip, bool isChecked) = 0;
    virtual CommandDefinition* addListDefinition_raw(const char* id, const char* name, ListControlDisplayTypes listControlDisplayType, const char* resourceFolder) = 0;
    virtual CommandDefinition* item_raw(size_t index) const = 0;
    virtual CommandDefinition* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<CommandDefinition> CommandDefinitions::addButtonDefinition(const std::string& id, const std::string& name, const std::string& tooltip, const std::string& resourceFolder)
{
    Ptr<CommandDefinition> res = addButtonDefinition_raw(id.c_str(), name.c_str(), tooltip.c_str(), resourceFolder.c_str());
    return res;
}

inline Ptr<CommandDefinition> CommandDefinitions::addCheckBoxDefinition(const std::string& id, const std::string& name, const std::string& tooltip, bool isChecked)
{
    Ptr<CommandDefinition> res = addCheckBoxDefinition_raw(id.c_str(), name.c_str(), tooltip.c_str(), isChecked);
    return res;
}

inline Ptr<CommandDefinition> CommandDefinitions::addListDefinition(const std::string& id, const std::string& name, ListControlDisplayTypes listControlDisplayType, const std::string& resourceFolder)
{
    Ptr<CommandDefinition> res = addListDefinition_raw(id.c_str(), name.c_str(), listControlDisplayType, resourceFolder.c_str());
    return res;
}

inline Ptr<CommandDefinition> CommandDefinitions::item(size_t index) const
{
    Ptr<CommandDefinition> res = item_raw(index);
    return res;
}

inline Ptr<CommandDefinition> CommandDefinitions::itemById(const std::string& id) const
{
    Ptr<CommandDefinition> res = itemById_raw(id.c_str());
    return res;
}

inline size_t CommandDefinitions::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void CommandDefinitions::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDDEFINITIONS_API