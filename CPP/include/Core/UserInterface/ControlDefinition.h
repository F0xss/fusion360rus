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
# ifdef __COMPILING_ADSK_CORE_CONTROLDEFINITION_CPP__
# define ADSK_CORE_CONTROLDEFINITION_API XI_EXPORT
# else
# define ADSK_CORE_CONTROLDEFINITION_API
# endif
#else
# define ADSK_CORE_CONTROLDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The ControlDefinition is the base class for the various types of control definitions.
/// You can use properties on the control definition to define the look and behavior of
/// the control.
class ControlDefinition : public Base {
public:

    /// Gets or sets if this definition is enabled or not. This has the effect of enabling and disabling any associated controls.
    bool isEnabled() const;
    bool isEnabled(bool value);

    /// Gets or sets if this definition is visible or not. This has the effect of making any associated controls visible or invisible in the user interface.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Gets or sets the name for this control. This is the visible name displayed in the user interface.
    std::string name() const;
    bool name(const std::string& value);

    ADSK_CORE_CONTROLDEFINITION_API static const char* classType();
    ADSK_CORE_CONTROLDEFINITION_API const char* objectType() const override;
    ADSK_CORE_CONTROLDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CONTROLDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isEnabled_raw() const = 0;
    virtual bool isEnabled_raw(bool value) = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual void placeholderControlDefinition0() {}
    virtual void placeholderControlDefinition1() {}
    virtual void placeholderControlDefinition2() {}
    virtual void placeholderControlDefinition3() {}
    virtual void placeholderControlDefinition4() {}
    virtual void placeholderControlDefinition5() {}
    virtual void placeholderControlDefinition6() {}
    virtual void placeholderControlDefinition7() {}
    virtual void placeholderControlDefinition8() {}
    virtual void placeholderControlDefinition9() {}
    virtual void placeholderControlDefinition10() {}
    virtual void placeholderControlDefinition11() {}
    virtual void placeholderControlDefinition12() {}
    virtual void placeholderControlDefinition13() {}
    virtual void placeholderControlDefinition14() {}
    virtual void placeholderControlDefinition15() {}
    virtual void placeholderControlDefinition16() {}
    virtual void placeholderControlDefinition17() {}
    virtual void placeholderControlDefinition18() {}
    virtual void placeholderControlDefinition19() {}
    virtual void placeholderControlDefinition20() {}
    virtual void placeholderControlDefinition21() {}
    virtual void placeholderControlDefinition22() {}
    virtual void placeholderControlDefinition23() {}
    virtual void placeholderControlDefinition24() {}
    virtual void placeholderControlDefinition25() {}
    virtual void placeholderControlDefinition26() {}
    virtual void placeholderControlDefinition27() {}
    virtual void placeholderControlDefinition28() {}
    virtual void placeholderControlDefinition29() {}
    virtual void placeholderControlDefinition30() {}
    virtual void placeholderControlDefinition31() {}
    virtual void placeholderControlDefinition32() {}
    virtual void placeholderControlDefinition33() {}
    virtual void placeholderControlDefinition34() {}
    virtual void placeholderControlDefinition35() {}
    virtual void placeholderControlDefinition36() {}
    virtual void placeholderControlDefinition37() {}
    virtual void placeholderControlDefinition38() {}
    virtual void placeholderControlDefinition39() {}
    virtual void placeholderControlDefinition40() {}
    virtual void placeholderControlDefinition41() {}
    virtual void placeholderControlDefinition42() {}
    virtual void placeholderControlDefinition43() {}
    virtual void placeholderControlDefinition44() {}
    virtual void placeholderControlDefinition45() {}
    virtual void placeholderControlDefinition46() {}
    virtual void placeholderControlDefinition47() {}
    virtual void placeholderControlDefinition48() {}
    virtual void placeholderControlDefinition49() {}
    virtual void placeholderControlDefinition50() {}
    virtual void placeholderControlDefinition51() {}
    virtual void placeholderControlDefinition52() {}
    virtual void placeholderControlDefinition53() {}
    virtual void placeholderControlDefinition54() {}
    virtual void placeholderControlDefinition55() {}
    virtual void placeholderControlDefinition56() {}
    virtual void placeholderControlDefinition57() {}
};

// Inline wrappers

inline bool ControlDefinition::isEnabled() const
{
    bool res = isEnabled_raw();
    return res;
}

inline bool ControlDefinition::isEnabled(bool value)
{
    return isEnabled_raw(value);
}

inline bool ControlDefinition::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool ControlDefinition::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline std::string ControlDefinition::name() const
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

inline bool ControlDefinition::name(const std::string& value)
{
    return name_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CONTROLDEFINITION_API