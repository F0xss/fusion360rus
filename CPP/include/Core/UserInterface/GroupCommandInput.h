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
#include "CommandInput.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_GROUPCOMMANDINPUT_CPP__
# define ADSK_CORE_GROUPCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_GROUPCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_GROUPCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandInputs;
}}

namespace adsk { namespace core {

/// Group Command inputs organize a set of command inputs into a collapsible
/// list within a command dialog
class GroupCommandInput : public CommandInput {
public:

    /// Gets the CommandInputs collection for this GroupCommandInput.
    /// Use the add methods on this collection to add child CommandInputs to this Group in the desired order.
    Ptr<CommandInputs> children() const;

    /// Gets or sets if this group is expanded.
    /// If this is a sub-group of another group and the isEnabledCheckBoxDisplayed property is set to false
    /// then the isExpanded property must be set to true.
    bool isExpanded() const;
    bool isExpanded(bool value);

    /// Gets or sets if this group has a check-box for enabling/disabling the group.
    /// If this is a sub-group of another group and the isEnabledCheckBoxDisplayed property is set to false
    /// then the isExpanded property must be set to true.
    bool isEnabledCheckBoxDisplayed() const;
    bool isEnabledCheckBoxDisplayed(bool value);

    /// Gets or sets if the enabled check-box is checked or not. This is only
    /// valid when the isEnabledCheckBoxDisplayed property is true.
    bool isEnabledCheckBoxChecked() const;
    bool isEnabledCheckBoxChecked(bool value);

    ADSK_CORE_GROUPCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_GROUPCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_GROUPCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_GROUPCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandInputs* children_raw() const = 0;
    virtual bool isExpanded_raw() const = 0;
    virtual bool isExpanded_raw(bool value) = 0;
    virtual bool isEnabledCheckBoxDisplayed_raw() const = 0;
    virtual bool isEnabledCheckBoxDisplayed_raw(bool value) = 0;
    virtual bool isEnabledCheckBoxChecked_raw() const = 0;
    virtual bool isEnabledCheckBoxChecked_raw(bool value) = 0;
};

// Inline wrappers

inline Ptr<CommandInputs> GroupCommandInput::children() const
{
    Ptr<CommandInputs> res = children_raw();
    return res;
}

inline bool GroupCommandInput::isExpanded() const
{
    bool res = isExpanded_raw();
    return res;
}

inline bool GroupCommandInput::isExpanded(bool value)
{
    return isExpanded_raw(value);
}

inline bool GroupCommandInput::isEnabledCheckBoxDisplayed() const
{
    bool res = isEnabledCheckBoxDisplayed_raw();
    return res;
}

inline bool GroupCommandInput::isEnabledCheckBoxDisplayed(bool value)
{
    return isEnabledCheckBoxDisplayed_raw(value);
}

inline bool GroupCommandInput::isEnabledCheckBoxChecked() const
{
    bool res = isEnabledCheckBoxChecked_raw();
    return res;
}

inline bool GroupCommandInput::isEnabledCheckBoxChecked(bool value)
{
    return isEnabledCheckBoxChecked_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_GROUPCOMMANDINPUT_API