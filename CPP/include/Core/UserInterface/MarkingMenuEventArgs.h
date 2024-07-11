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
#include "../Application/Events.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_MARKINGMENUEVENTARGS_CPP__
# define ADSK_CORE_MARKINGMENUEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_MARKINGMENUEVENTARGS_API
# endif
#else
# define ADSK_CORE_MARKINGMENUEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class LinearMarkingMenu;
    class RadialMarkingMenu;
}}

namespace adsk { namespace core {

/// The MarkingMenuEventArgs provides information associated with the marking and context
/// menu being displayed.
class MarkingMenuEventArgs : public EventArgs {
public:

    /// Provides access to the radial marking menu.
    Ptr<RadialMarkingMenu> radialMarkingMenu() const;

    /// Provides access to the linear marking menu.
    Ptr<LinearMarkingMenu> linearMarkingMenu() const;

    /// Returns the currently selected entities that the user left-clicked over.
    /// These provide the "context" of what should be displayed in the menu. This
    /// can be an empty array in the case where they clicked in a open area within
    /// the graphics window.
    std::vector<Ptr<Base>> selectedEntities() const;

    ADSK_CORE_MARKINGMENUEVENTARGS_API static const char* classType();
    ADSK_CORE_MARKINGMENUEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_MARKINGMENUEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MARKINGMENUEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual RadialMarkingMenu* radialMarkingMenu_raw() const = 0;
    virtual LinearMarkingMenu* linearMarkingMenu_raw() const = 0;
    virtual Base** selectedEntities_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<RadialMarkingMenu> MarkingMenuEventArgs::radialMarkingMenu() const
{
    Ptr<RadialMarkingMenu> res = radialMarkingMenu_raw();
    return res;
}

inline Ptr<LinearMarkingMenu> MarkingMenuEventArgs::linearMarkingMenu() const
{
    Ptr<LinearMarkingMenu> res = linearMarkingMenu_raw();
    return res;
}

inline std::vector<Ptr<Base>> MarkingMenuEventArgs::selectedEntities() const
{
    std::vector<Ptr<Base>> res;
    size_t s;

    Base** p= selectedEntities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MARKINGMENUEVENTARGS_API