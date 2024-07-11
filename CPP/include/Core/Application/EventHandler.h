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
#include "../Base.h"

// THIS CLASS IS USED BY AN API CLIENT

#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_XI_IEVENTHANDLER_CPP__
#  define XI_IEVENTHANDLER_API XI_EXPORT
# else
#  define XI_IEVENTHANDLER_API
# endif
#else
# define XI_IEVENTHANDLER_API XI_IMPORT
#endif


namespace adsk { 
namespace core {

// An EventHandler is a client derived object. 
// However, we provide a base class so that, when it destructs, we will disconnect it from events
// to avoid any crashes.
class XI_IEVENTHANDLER_API EventHandler
{
public:
	// An Event Handler can be attached to several events.
	// When it destructs, we will disconnect it from events
	// to avoid any crashes.
	EventHandler();
	virtual ~EventHandler();

	// So XLayer can add its semantics to this class.
	static const char* classType();
	void* impl() const;

private:

	virtual void placeholderEventHandler0() {}
	virtual void placeholderEventHandler1() {}
	virtual void placeholderEventHandler2() {}
	virtual void placeholderEventHandler3() {}
	virtual void placeholderEventHandler4() {}
	virtual void placeholderEventHandler5() {}
	virtual void placeholderEventHandler6() {}
	virtual void placeholderEventHandler7() {}
	virtual void placeholderEventHandler8() {}
	virtual void placeholderEventHandler9() {}
	virtual void placeholderEventHandler10() {}
	virtual void placeholderEventHandler11() {}
	virtual void placeholderEventHandler12() {}
	virtual void placeholderEventHandler13() {}
	virtual void placeholderEventHandler14() {}
	virtual void placeholderEventHandler15() {}

	// Opaque impl class that lives in XLayer, so we can execute code on deletion.
	void* m_pImpl;
};

}

}

#undef XI_IEVENTHANDLER_API
