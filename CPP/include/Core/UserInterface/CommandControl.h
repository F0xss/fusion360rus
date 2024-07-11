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
#include "ToolbarControl.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_COMMANDCONTROL_CPP__
# define ADSK_CORE_COMMANDCONTROL_API XI_EXPORT
# else
# define ADSK_CORE_COMMANDCONTROL_API
# endif
#else
# define ADSK_CORE_COMMANDCONTROL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandDefinition;
}}

namespace adsk { namespace core {

/// Represents a button, check box, or radio control list in a panel, toolbar, or drop-down.
class CommandControl : public ToolbarControl {
public:

    /// Gets the command definition associated with this button. The command definition defines
    /// all of the resource information used to display this button and receives the event when the button is clicked.
    Ptr<CommandDefinition> commandDefinition() const;

    /// Gets or sets if this command has been promoted to the parent panel.
    /// This property is ignored in the case where this control isn't in a panel.
    bool isPromoted() const;
    bool isPromoted(bool value);

    /// Gets or sets if this command is a default command in the panel.
    /// This defines the default state of the panel if the UI is reset.
    /// This property is ignored in the case where this control isn't in a panel.
    bool isPromotedByDefault() const;
    bool isPromotedByDefault(bool value);

    ADSK_CORE_COMMANDCONTROL_API static const char* classType();
    ADSK_CORE_COMMANDCONTROL_API const char* objectType() const override;
    ADSK_CORE_COMMANDCONTROL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COMMANDCONTROL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandDefinition* commandDefinition_raw() const = 0;
    virtual bool isPromoted_raw() const = 0;
    virtual bool isPromoted_raw(bool value) = 0;
    virtual bool isPromotedByDefault_raw() const = 0;
    virtual bool isPromotedByDefault_raw(bool value) = 0;
};

// Inline wrappers

inline Ptr<CommandDefinition> CommandControl::commandDefinition() const
{
    Ptr<CommandDefinition> res = commandDefinition_raw();
    return res;
}

inline bool CommandControl::isPromoted() const
{
    bool res = isPromoted_raw();
    return res;
}

inline bool CommandControl::isPromoted(bool value)
{
    return isPromoted_raw(value);
}

inline bool CommandControl::isPromotedByDefault() const
{
    bool res = isPromotedByDefault_raw();
    return res;
}

inline bool CommandControl::isPromotedByDefault(bool value)
{
    return isPromotedByDefault_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COMMANDCONTROL_API