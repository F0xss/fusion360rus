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
# ifdef __COMPILING_ADSK_CORE_ACTIVESELECTIONEVENTARGS_CPP__
# define ADSK_CORE_ACTIVESELECTIONEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_ACTIVESELECTIONEVENTARGS_API
# endif
#else
# define ADSK_CORE_ACTIVESELECTIONEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Selection;
}}

namespace adsk { namespace core {

/// The ActiveSelectionEventArgs provides information associated with the active selection changing.
/// The event fires whenever the contents of the active selection changes. This occurs as the user
/// selects or unselects entities while using the Fusion 360 Select command. The Select command
/// is the default command that is always running if no other command is active. Pressing Escape
/// terminates the currently active command and starts the Select command. If the Select command is
/// running and you press Escape, it terminates the current Select command and starts a new one.
/// 
/// An array or list of all the currently selected entities is returned. This is the same set of
/// entities accessed through the UserInterface.activeSelection object. An empty array can be returned
/// in the case where the selection has been cleared which can occur by the user unselecting and entity,
/// terminating the select command pressing Escape or running another command or clicking the mouse in
/// an open area of the canvas.
class ActiveSelectionEventArgs : public EventArgs {
public:

    /// The list of all of the current selections. This is the same set of selections accessed through
    /// the UserInterface.activeSelection object. An empty array can be returned
    /// in the case where the selection has been cleared which can occur by the user unselecting and entity,
    /// terminating the select command pressing Escape or running another command or clicking the mouse in
    /// an open area of the canvas.
    std::vector<Ptr<Selection>> currentSelection() const;

    ADSK_CORE_ACTIVESELECTIONEVENTARGS_API static const char* classType();
    ADSK_CORE_ACTIVESELECTIONEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_ACTIVESELECTIONEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ACTIVESELECTIONEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Selection** currentSelection_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline std::vector<Ptr<Selection>> ActiveSelectionEventArgs::currentSelection() const
{
    std::vector<Ptr<Selection>> res;
    size_t s;

    Selection** p= currentSelection_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ACTIVESELECTIONEVENTARGS_API