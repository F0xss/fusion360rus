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
# ifdef __COMPILING_ADSK_CORE_BUTTONCONTROLDEFINITION_CPP__
# define ADSK_CORE_BUTTONCONTROLDEFINITION_API XI_EXPORT
# else
# define ADSK_CORE_BUTTONCONTROLDEFINITION_API
# endif
#else
# define ADSK_CORE_BUTTONCONTROLDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Represents the information used to define a button. This isn't the visible button control but
/// is the information needed to create a button control and fully defines a button except for
/// it's position within the user interface.
class ButtonControlDefinition : public ControlDefinition {
public:

    ADSK_CORE_BUTTONCONTROLDEFINITION_API static const char* classType();
    ADSK_CORE_BUTTONCONTROLDEFINITION_API const char* objectType() const override;
    ADSK_CORE_BUTTONCONTROLDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BUTTONCONTROLDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace core
}// namespace adsk

#undef ADSK_CORE_BUTTONCONTROLDEFINITION_API