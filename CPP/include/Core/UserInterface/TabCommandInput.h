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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_TABCOMMANDINPUT_CPP__
# define ADSK_CORE_TABCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_TABCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_TABCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CommandInputs;
}}

namespace adsk { namespace core {

/// Tab command inputs contain a set of command inputs and/or group command inputs/
class TabCommandInput : public CommandInput {
public:

    /// Gets the CommandInputs collection for this TabCommandInput.
    /// Use the add methods on this collection to add child CommandInputs to this Tab in the desired order.
    Ptr<CommandInputs> children() const;

    /// Gets the folder that contains the image for the tab. If no name is specified (no text on tab),
    /// a resourceFolder containing the image to appear on the tab needs to be provided.
    std::string resourceFolder() const;

    /// Gets if this is the currently activated (selected) tab.
    bool isActive() const;

    /// Sets this to be the currently activated (selected) tab.
    /// Returns true if the TabCommandInput was successfully activated.
    bool activate();

    ADSK_CORE_TABCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_TABCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_TABCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TABCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual CommandInputs* children_raw() const = 0;
    virtual char* resourceFolder_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool activate_raw() = 0;
};

// Inline wrappers

inline Ptr<CommandInputs> TabCommandInput::children() const
{
    Ptr<CommandInputs> res = children_raw();
    return res;
}

inline std::string TabCommandInput::resourceFolder() const
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

inline bool TabCommandInput::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool TabCommandInput::activate()
{
    bool res = activate_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TABCOMMANDINPUT_API