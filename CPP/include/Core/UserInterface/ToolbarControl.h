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
# ifdef __COMPILING_ADSK_CORE_TOOLBARCONTROL_CPP__
# define ADSK_CORE_TOOLBARCONTROL_API XI_EXPORT
# else
# define ADSK_CORE_TOOLBARCONTROL_API
# endif
#else
# define ADSK_CORE_TOOLBARCONTROL_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The base class for all toolbar controls.
class ToolbarControl : public Base {
public:

    /// Gets the unique ID of this control. The ID is unique with respect to the other
    /// controls within the same panel, toolbar, or drop-down control.
    std::string id() const;

    /// Gets the position of this control within the list of controls within the panel, toolbar, or drop-down control.
    size_t index() const;

    /// Gets or sets if this control is currently visible.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Gets the Parent object. When associated with a toolbar (right or left QAT or the NavBar) this
    /// returns the parent Toolbar object. When associated with a panel it returns the parent ToolbarPanel object.
    /// When associated with a control (DropDownControl) it returns the parent control.
    Ptr<Base> parent() const;

    /// Deletes the ToolbarControl
    /// Returns a boolean indicating if the deletion was successful.
    bool deleteMe();

    ADSK_CORE_TOOLBARCONTROL_API static const char* classType();
    ADSK_CORE_TOOLBARCONTROL_API const char* objectType() const override;
    ADSK_CORE_TOOLBARCONTROL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TOOLBARCONTROL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual size_t index_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual Base* parent_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual void placeholderToolbarControl0() {}
    virtual void placeholderToolbarControl1() {}
    virtual void placeholderToolbarControl2() {}
    virtual void placeholderToolbarControl3() {}
    virtual void placeholderToolbarControl4() {}
    virtual void placeholderToolbarControl5() {}
    virtual void placeholderToolbarControl6() {}
    virtual void placeholderToolbarControl7() {}
    virtual void placeholderToolbarControl8() {}
    virtual void placeholderToolbarControl9() {}
    virtual void placeholderToolbarControl10() {}
    virtual void placeholderToolbarControl11() {}
    virtual void placeholderToolbarControl12() {}
    virtual void placeholderToolbarControl13() {}
    virtual void placeholderToolbarControl14() {}
    virtual void placeholderToolbarControl15() {}
    virtual void placeholderToolbarControl16() {}
    virtual void placeholderToolbarControl17() {}
    virtual void placeholderToolbarControl18() {}
    virtual void placeholderToolbarControl19() {}
    virtual void placeholderToolbarControl20() {}
    virtual void placeholderToolbarControl21() {}
    virtual void placeholderToolbarControl22() {}
    virtual void placeholderToolbarControl23() {}
    virtual void placeholderToolbarControl24() {}
    virtual void placeholderToolbarControl25() {}
    virtual void placeholderToolbarControl26() {}
    virtual void placeholderToolbarControl27() {}
    virtual void placeholderToolbarControl28() {}
    virtual void placeholderToolbarControl29() {}
    virtual void placeholderToolbarControl30() {}
    virtual void placeholderToolbarControl31() {}
    virtual void placeholderToolbarControl32() {}
    virtual void placeholderToolbarControl33() {}
    virtual void placeholderToolbarControl34() {}
    virtual void placeholderToolbarControl35() {}
    virtual void placeholderToolbarControl36() {}
    virtual void placeholderToolbarControl37() {}
    virtual void placeholderToolbarControl38() {}
    virtual void placeholderToolbarControl39() {}
    virtual void placeholderToolbarControl40() {}
    virtual void placeholderToolbarControl41() {}
    virtual void placeholderToolbarControl42() {}
    virtual void placeholderToolbarControl43() {}
    virtual void placeholderToolbarControl44() {}
    virtual void placeholderToolbarControl45() {}
    virtual void placeholderToolbarControl46() {}
    virtual void placeholderToolbarControl47() {}
    virtual void placeholderToolbarControl48() {}
    virtual void placeholderToolbarControl49() {}
    virtual void placeholderToolbarControl50() {}
    virtual void placeholderToolbarControl51() {}
    virtual void placeholderToolbarControl52() {}
    virtual void placeholderToolbarControl53() {}
    virtual void placeholderToolbarControl54() {}
    virtual void placeholderToolbarControl55() {}
    virtual void placeholderToolbarControl56() {}
    virtual void placeholderToolbarControl57() {}
};

// Inline wrappers

inline std::string ToolbarControl::id() const
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

inline size_t ToolbarControl::index() const
{
    size_t res = index_raw();
    return res;
}

inline bool ToolbarControl::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool ToolbarControl::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline Ptr<Base> ToolbarControl::parent() const
{
    Ptr<Base> res = parent_raw();
    return res;
}

inline bool ToolbarControl::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TOOLBARCONTROL_API