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
# ifdef __COMPILING_ADSK_CORE_COMMANDDEFINITION_CPP__
# define ADSK_CORE_COMMANDDEFINITION_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDDEFINITION_API
# endif
#else
# define ADSK_CORE_COMMANDDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandCreatedEvent;
    class ControlDefinition;
    class NamedValues;
}}

namespace adsk { namespace core {

/// The CommandDefinition is the base class of the various types of commands. Command types are based
/// on the type of control used to execute them in the user-interface. For example, most commands will
/// use a ButtonDefinition since they're executed using a button in the user-interface. A command definition
/// contains the information that defines the user-interface. For example, the name and icon. The command
/// definition and also gets the notification when the user interacts with the associated control.
class CommandDefinition : public Base {
public:

    /// Executes this command definition. This is the same as the user clicking
    /// a button that is associated with this command definition.
    /// input : A list of named values that will provide input to the command. The values supported are unique for each command.
    /// and not all commands support input values.
    /// Returns true or false indicating if the execution was successful.
    bool execute(const Ptr<NamedValues>& input = NULL) const;

    /// This event is fired when the associated control is manipulated by the user. A new Command object
    /// is created and passed back through this event which you can then use to interact with the user
    /// to get any input the command requires.
    Ptr<CommandCreatedEvent> commandCreated() const;

    /// Deletes this command definition. This is only valid for API created command definitions
    /// and will fail if the isNative property is true.
    /// Returns true or false indicating if the deletion was successful.
    bool deleteMe();

    /// Gets if this is a native command definition. If True then there
    /// are limitations to edits that can be done on the command definition.
    /// For example a native command definition cannot be deleted.
    bool isNative() const;

    /// Gets the unique id for this command definition. This is guaranteed to be unique with
    /// respect to all other command definitions.
    std::string id() const;

    /// Gets or sets the full filename of the image file (PNG) used for the tool clip.
    /// The tooltip is always shown but as the user hovers over the control it will progressively display the tool clip along with the tooltip text.
    std::string toolClipFilename() const;
    bool toolClipFilename(const std::string& value);

    /// Gets or sets the tooltip string. This is always shown for commands. If the tooltip description and/or tool clip are also specified then
    /// the tooltip will progressively display more information as the user hovers the mouse over the control.
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
    /// 
    std::string tooltip() const;
    bool tooltip(const std::string& value);

    /// Gets or sets the directory that contains any additional files associated with this command.
    /// These are typically the image files that will be used for a button and the
    /// HTML files for a tool clip or helps and tips.
    std::string resourceFolder() const;
    bool resourceFolder(const std::string& value);

    /// Gets the ControlDefinition associated with this command. The control definition
    /// defines the type of control that can exist in the user interface to execute this command.
    /// You can use properties on the control definition to define the look and behavior of
    /// the control.
    Ptr<ControlDefinition> controlDefinition() const;

    /// Gets or sets the visible name of the command when seen in the user interface.
    std::string name() const;
    bool name(const std::string& value);

    ADSK_CORE_COMMANDDEFINITION_API static const char* classType();
    ADSK_CORE_COMMANDDEFINITION_API const char* objectType() const override;
    ADSK_CORE_COMMANDDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool execute_raw(NamedValues* input) const = 0;
    virtual CommandCreatedEvent* commandCreated_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isNative_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual char* toolClipFilename_raw() const = 0;
    virtual bool toolClipFilename_raw(const char* value) = 0;
    virtual char* tooltip_raw() const = 0;
    virtual bool tooltip_raw(const char* value) = 0;
    virtual char* resourceFolder_raw() const = 0;
    virtual bool resourceFolder_raw(const char* value) = 0;
    virtual ControlDefinition* controlDefinition_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
};

// Inline wrappers

inline bool CommandDefinition::execute(const Ptr<NamedValues>& input) const
{
    bool res = execute_raw(input.get());
    return res;
}

inline Ptr<CommandCreatedEvent> CommandDefinition::commandCreated() const
{
    Ptr<CommandCreatedEvent> res = commandCreated_raw();
    return res;
}

inline bool CommandDefinition::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool CommandDefinition::isNative() const
{
    bool res = isNative_raw();
    return res;
}

inline std::string CommandDefinition::id() const
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

inline std::string CommandDefinition::toolClipFilename() const
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

inline bool CommandDefinition::toolClipFilename(const std::string& value)
{
    return toolClipFilename_raw(value.c_str());
}

inline std::string CommandDefinition::tooltip() const
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

inline bool CommandDefinition::tooltip(const std::string& value)
{
    return tooltip_raw(value.c_str());
}

inline std::string CommandDefinition::resourceFolder() const
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

inline bool CommandDefinition::resourceFolder(const std::string& value)
{
    return resourceFolder_raw(value.c_str());
}

inline Ptr<ControlDefinition> CommandDefinition::controlDefinition() const
{
    Ptr<ControlDefinition> res = controlDefinition_raw();
    return res;
}

inline std::string CommandDefinition::name() const
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

inline bool CommandDefinition::name(const std::string& value)
{
    return name_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDDEFINITION_API