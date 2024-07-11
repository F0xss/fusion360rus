//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2016 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once

// THIS CLASS IS USED BY AN API CLIENT

#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
#  define XI_SCRIPTHANDLER_API XI_EXPORT
#else
# define XI_SCRIPTHANDLER_API XI_IMPORT
#endif


namespace adsk { namespace core {

class ScriptHandler
{
public:
    XI_SCRIPTHANDLER_API virtual bool run() = 0;
};
}// namespace adsk
}// namespace core

#undef XI_SCRIPTHANDLER_API
