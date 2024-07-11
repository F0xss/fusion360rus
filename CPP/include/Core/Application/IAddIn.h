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


// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_IADDIN_CPP__
# define ADSK_CORE_IADDIN_API XI_EXPORT
# else
# define ADSK_CORE_IADDIN_API
# endif
#else
# define ADSK_CORE_IADDIN_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The interface implemented by an add-in.
class IAddIn {
public:

    /// Lets the application do any initialization when it is safe to do so.
    ADSK_CORE_IADDIN_API virtual void onActivate() = 0;

    /// Lets the application do any termination when it is safe to do so.
    /// In general, if the add-in is closing, termination should be minimized.
    ADSK_CORE_IADDIN_API virtual void onDeactivate(bool isAppClosing) = 0;
};

}// namespace core
}// namespace adsk

#undef ADSK_CORE_IADDIN_API