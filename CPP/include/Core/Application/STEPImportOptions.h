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
#include "ImportOptions.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_STEPIMPORTOPTIONS_CPP__
# define ADSK_CORE_STEPIMPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CORE_STEPIMPORTOPTIONS_API
# endif
#else
# define ADSK_CORE_STEPIMPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Defines that a STEP import is to be done and specifies the various options.
class STEPImportOptions : public ImportOptions {
public:

    ADSK_CORE_STEPIMPORTOPTIONS_API static const char* classType();
    ADSK_CORE_STEPIMPORTOPTIONS_API const char* objectType() const override;
    ADSK_CORE_STEPIMPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_STEPIMPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface

};

// Inline wrappers


}// namespace core
}// namespace adsk

#undef ADSK_CORE_STEPIMPORTOPTIONS_API