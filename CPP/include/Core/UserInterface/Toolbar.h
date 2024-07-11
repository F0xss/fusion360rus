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
# ifdef __COMPILING_ADSK_CORE_TOOLBAR_CPP__
# define ADSK_CORE_TOOLBAR_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBAR_API
# endif
#else
# define ADSK_CORE_TOOLBAR_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarControls;
    class UserInterface;
}}

namespace adsk { namespace core {

/// Provides access to a toolbar in the user interface. A toolbar is a collection of toolbar controls.
class Toolbar : public Base {
public:

    /// Gets the unique ID of the toolbar that can be used programmatically
    /// to find a specific toolbar.
    std::string id() const;

    /// Gets the owning UserInterface object.
    Ptr<UserInterface> parentUserInterface() const;

    /// Gets the controls in this toolbar.
    Ptr<ToolbarControls> controls() const;

    ADSK_CORE_TOOLBAR_API static const char* classType();
    ADSK_CORE_TOOLBAR_API const char* objectType() const override;
    ADSK_CORE_TOOLBAR_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBAR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual UserInterface* parentUserInterface_raw() const = 0;
    virtual ToolbarControls* controls_raw() const = 0;
};

// Inline wrappers

inline std::string Toolbar::id() const
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

inline Ptr<UserInterface> Toolbar::parentUserInterface() const
{
    Ptr<UserInterface> res = parentUserInterface_raw();
    return res;
}

inline Ptr<ToolbarControls> Toolbar::controls() const
{
    Ptr<ToolbarControls> res = controls_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBAR_API