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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_LINEARMARKINGMENU_CPP__
# define ADSK_CORE_LINEARMARKINGMENU_API XI_EXPORT
# else
# define ADSK_CORE_LINEARMARKINGMENU_API
# endif
#else
# define ADSK_CORE_LINEARMARKINGMENU_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarControls;
}}

namespace adsk { namespace core {

/// Represents the linear marking menu which is the vertical menu that's displayed when the user right-clicks
/// within Fusion 360. This supports customizing the contents of the context menu.
class LinearMarkingMenu : public Base {
public:

    /// Return the collection of top-level controls in the context menu. It's possible to have
    /// drop-down controls (fly-outs) that provide access to additional controls. You can
    /// remove and add controls to customize the contents of the context menu.
    Ptr<ToolbarControls> controls() const;

    /// Completely clears the contents of the context menu. If left in this state, the
    /// context menu will not be displayed.
    /// Returns true if the clear was successful.
    bool clear();

    ADSK_CORE_LINEARMARKINGMENU_API static const char* classType();
    ADSK_CORE_LINEARMARKINGMENU_API const char* objectType() const override;
    ADSK_CORE_LINEARMARKINGMENU_API void* queryInterface(const char* id) const override;
    ADSK_CORE_LINEARMARKINGMENU_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ToolbarControls* controls_raw() const = 0;
    virtual bool clear_raw() = 0;
};

// Inline wrappers

inline Ptr<ToolbarControls> LinearMarkingMenu::controls() const
{
    Ptr<ToolbarControls> res = controls_raw();
    return res;
}

inline bool LinearMarkingMenu::clear()
{
    bool res = clear_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_LINEARMARKINGMENU_API