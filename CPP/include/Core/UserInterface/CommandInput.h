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
# ifdef __COMPILING_ADSK_CORE_COMMANDINPUT_CPP__
# define ADSK_CORE_COMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDINPUT_API
# endif
#else
# define ADSK_CORE_COMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Command;
    class CommandInputs;
}}

namespace adsk { namespace core {

/// The base class for all command inputs. A CommandInput is used to gather an input value from the user when a command is executed.
class CommandInput : public Base {
public:

    /// Gets the CommandInputs class of the parent, which can be a Command, GroupCommandInput or TabCommandInput.
    Ptr<CommandInputs> commandInputs() const;

    /// Gets the unique identifier for this input in the command's CommandInputs.
    std::string id() const;

    /// Gets the user visible name of this input.
    std::string name() const;

    /// Gets or sets if this input is currently enabled or disabled for user interaction.
    /// 
    /// Currently, the isEnabled property does not disable SelectionCommandInput objects but
    /// instead has the same effect as the SelectionCommandInput.hasFocus property.
    bool isEnabled() const;
    bool isEnabled(bool value);

    /// Gets or sets if this input will be visible to the user.
    /// 
    /// Setting a SelectionCommandInput to be invisible will clear any selections it currently has.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Gets the parent Command.
    Ptr<Command> parentCommand() const;

    /// Gets or sets if this input fills the entire width of the dialog. If
    /// true, the name is ignored and the input control will fill the entire width of the command dialog.
    /// The default value for this property in a new command input if false, or not to fill the width.
    /// This property does not apply to GroupCommandInputs or TabCommandInputs.
    bool isFullWidth() const;
    bool isFullWidth(bool value);

    /// Gets or sets the full filename of the image file (PNG) used for the tool clip.
    /// The tooltip is always shown but as the user hovers over the control it will progressively display
    /// the tool clip and description text.
    std::string toolClipFilename() const;
    bool toolClipFilename(const std::string& value);

    /// Gets or sets the base tooltip string. This is always shown for commands. If the tooltip description
    /// and/or tool clip are also specified then the tooltip will progressively display more information as the
    /// user hovers the mouse over the control.
    std::string tooltip() const;
    bool tooltip(const std::string& value);

    /// Gets or sets additional text to display progressively along with the tooltip. The text for the description
    /// can contain some basic HTML formatting tags to format the tags. For example the br tag can be used to
    /// create multiple paragraphs. The tooltip is always shown but as the user hovers over the control it will
    /// progressively display the tool clip and description text.
    std::string tooltipDescription() const;
    bool tooltipDescription(const std::string& value);

    /// Gets the parent CommandInput if this commandInput is the child of a TabCommandInput or GroupCommandInput.
    /// Returns null if there is no parent.
    Ptr<CommandInput> parentCommandInput() const;

    /// Deletes this Command input.
    /// Returns true if the delete was successful.
    bool deleteMe();

    ADSK_CORE_COMMANDINPUT_API static const char* classType();
    ADSK_CORE_COMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_COMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandInputs* commandInputs_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool isEnabled_raw() const = 0;
    virtual bool isEnabled_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual Command* parentCommand_raw() const = 0;
    virtual bool isFullWidth_raw() const = 0;
    virtual bool isFullWidth_raw(bool value) = 0;
    virtual char* toolClipFilename_raw() const = 0;
    virtual bool toolClipFilename_raw(const char* value) = 0;
    virtual char* tooltip_raw() const = 0;
    virtual bool tooltip_raw(const char* value) = 0;
    virtual char* tooltipDescription_raw() const = 0;
    virtual bool tooltipDescription_raw(const char* value) = 0;
    virtual CommandInput* parentCommandInput_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual void placeholderCommandInput0() {}
    virtual void placeholderCommandInput1() {}
    virtual void placeholderCommandInput2() {}
    virtual void placeholderCommandInput3() {}
    virtual void placeholderCommandInput4() {}
    virtual void placeholderCommandInput5() {}
    virtual void placeholderCommandInput6() {}
    virtual void placeholderCommandInput7() {}
    virtual void placeholderCommandInput8() {}
    virtual void placeholderCommandInput9() {}
    virtual void placeholderCommandInput10() {}
    virtual void placeholderCommandInput11() {}
    virtual void placeholderCommandInput12() {}
    virtual void placeholderCommandInput13() {}
};

// Inline wrappers

inline Ptr<CommandInputs> CommandInput::commandInputs() const
{
    Ptr<CommandInputs> res = commandInputs_raw();
    return res;
}

inline std::string CommandInput::id() const
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

inline std::string CommandInput::name() const
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

inline bool CommandInput::isEnabled() const
{
    bool res = isEnabled_raw();
    return res;
}

inline bool CommandInput::isEnabled(bool value)
{
    return isEnabled_raw(value);
}

inline bool CommandInput::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool CommandInput::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline Ptr<Command> CommandInput::parentCommand() const
{
    Ptr<Command> res = parentCommand_raw();
    return res;
}

inline bool CommandInput::isFullWidth() const
{
    bool res = isFullWidth_raw();
    return res;
}

inline bool CommandInput::isFullWidth(bool value)
{
    return isFullWidth_raw(value);
}

inline std::string CommandInput::toolClipFilename() const
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

inline bool CommandInput::toolClipFilename(const std::string& value)
{
    return toolClipFilename_raw(value.c_str());
}

inline std::string CommandInput::tooltip() const
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

inline bool CommandInput::tooltip(const std::string& value)
{
    return tooltip_raw(value.c_str());
}

inline std::string CommandInput::tooltipDescription() const
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

inline bool CommandInput::tooltipDescription(const std::string& value)
{
    return tooltipDescription_raw(value.c_str());
}

inline Ptr<CommandInput> CommandInput::parentCommandInput() const
{
    Ptr<CommandInput> res = parentCommandInput_raw();
    return res;
}

inline bool CommandInput::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDINPUT_API