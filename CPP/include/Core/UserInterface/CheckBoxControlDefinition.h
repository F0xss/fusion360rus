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
#include "ControlDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_CHECKBOXCONTROLDEFINITION_CPP__
# define ADSK_CORE_CHECKBOXCONTROLDEFINITION_API XI_EXPORT
# else
# define ADSK_CORE_CHECKBOXCONTROLDEFINITION_API
# endif
#else
# define ADSK_CORE_CHECKBOXCONTROLDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Represents the information used to define a check box. This isn't the visible check box control but
/// is the information needed to create a check box control and fully defines a check box except for
/// it's position within the user interface.
class CheckBoxControlDefinition : public ControlDefinition {
public:

    /// Gets or sets whether the check box is checked. Changing this will result in changing any
    /// associated controls and will execute the associated command.
    bool isChecked() const;
    bool isChecked(bool value);

    ADSK_CORE_CHECKBOXCONTROLDEFINITION_API static const char* classType();
    ADSK_CORE_CHECKBOXCONTROLDEFINITION_API const char* objectType() const override;
    ADSK_CORE_CHECKBOXCONTROLDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CHECKBOXCONTROLDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isChecked_raw() const = 0;
    virtual bool isChecked_raw(bool value) = 0;
};

// Inline wrappers

inline bool CheckBoxControlDefinition::isChecked() const
{
    bool res = isChecked_raw();
    return res;
}

inline bool CheckBoxControlDefinition::isChecked(bool value)
{
    return isChecked_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CHECKBOXCONTROLDEFINITION_API