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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DROPDOWNCONTROL_CPP__
# define ADSK_CORE_DROPDOWNCONTROL_API XI_EXPORT
# else
# define ADSK_CORE_DROPDOWNCONTROL_API
# endif
#else
# define ADSK_CORE_DROPDOWNCONTROL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ToolbarControls;
}}

namespace adsk { namespace core {

/// Represents a drop-down control.
class DropDownControl : public ToolbarControl {
public:

    /// Gets the associated ToolbarControls collection. Through this you can add additional controls to the drop-down.
    Ptr<ToolbarControls> controls() const;

    /// Gets or sets the resource folder containing the image used for the icon when the drop-down is in a toolbar.
    std::string resourceFolder() const;
    bool resourceFolder(const std::string& value);

    /// Gets or sets the Name displayed for this drop down. This isn't used when the drop-down is in a toolbar because an icon is used in that case.
    std::string name() const;
    bool name(const std::string& value);

    ADSK_CORE_DROPDOWNCONTROL_API static const char* classType();
    ADSK_CORE_DROPDOWNCONTROL_API const char* objectType() const override;
    ADSK_CORE_DROPDOWNCONTROL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DROPDOWNCONTROL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ToolbarControls* controls_raw() const = 0;
    virtual char* resourceFolder_raw() const = 0;
    virtual bool resourceFolder_raw(const char* value) = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
};

// Inline wrappers

inline Ptr<ToolbarControls> DropDownControl::controls() const
{
    Ptr<ToolbarControls> res = controls_raw();
    return res;
}

inline std::string DropDownControl::resourceFolder() const
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

inline bool DropDownControl::resourceFolder(const std::string& value)
{
    return resourceFolder_raw(value.c_str());
}

inline std::string DropDownControl::name() const
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

inline bool DropDownControl::name(const std::string& value)
{
    return name_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DROPDOWNCONTROL_API