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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_SPLITBUTTONCONTROL_CPP__
# define ADSK_CORE_SPLITBUTTONCONTROL_API XI_EXPORT
# else
# define ADSK_CORE_SPLITBUTTONCONTROL_API
# endif
#else
# define ADSK_CORE_SPLITBUTTONCONTROL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandDefinition;
}}

namespace adsk { namespace core {

/// A split button has two active areas that the user can click;
/// the main button portion and the drop-down arrow. Clicking the main button, executes the displayed command.
/// Clicking the drop-down displays the drop-down with additional commands.
class SplitButtonControl : public ToolbarControl {
public:

    /// Gets the command definition that is used as the default command on the main portion of the split button.
    Ptr<CommandDefinition> defaultCommandDefinition() const;

    /// Gets if this button behaves where the last executed command becomes the command on the main portion of the split button.
    bool isLastUsedShown() const;

    /// Gets or sets the command definitions used to define the buttons associated with the split button.
    std::vector<Ptr<CommandDefinition>> additionalDefinitions() const;
    bool additionalDefinitions(const std::vector<Ptr<CommandDefinition>>& value);

    ADSK_CORE_SPLITBUTTONCONTROL_API static const char* classType();
    ADSK_CORE_SPLITBUTTONCONTROL_API const char* objectType() const override;
    ADSK_CORE_SPLITBUTTONCONTROL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SPLITBUTTONCONTROL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandDefinition* defaultCommandDefinition_raw() const = 0;
    virtual bool isLastUsedShown_raw() const = 0;
    virtual CommandDefinition** additionalDefinitions_raw(size_t& return_size) const = 0;
    virtual bool additionalDefinitions_raw(CommandDefinition** value, size_t value_size) = 0;
};

// Inline wrappers

inline Ptr<CommandDefinition> SplitButtonControl::defaultCommandDefinition() const
{
    Ptr<CommandDefinition> res = defaultCommandDefinition_raw();
    return res;
}

inline bool SplitButtonControl::isLastUsedShown() const
{
    bool res = isLastUsedShown_raw();
    return res;
}

inline std::vector<Ptr<CommandDefinition>> SplitButtonControl::additionalDefinitions() const
{
    std::vector<Ptr<CommandDefinition>> res;
    size_t s;

    CommandDefinition** p= additionalDefinitions_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool SplitButtonControl::additionalDefinitions(const std::vector<Ptr<CommandDefinition>>& value)
{
    CommandDefinition** value_ = new CommandDefinition*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = additionalDefinitions_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SPLITBUTTONCONTROL_API