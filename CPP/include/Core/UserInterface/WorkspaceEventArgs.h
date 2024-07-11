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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_WORKSPACEEVENTARGS_CPP__
# define ADSK_CORE_WORKSPACEEVENTARGS_API XI_EXPORT
# else
# define ADSK_CORE_WORKSPACEEVENTARGS_API
# endif
#else
# define ADSK_CORE_WORKSPACEEVENTARGS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Workspace;
}}

namespace adsk { namespace core {

/// The WorkspaceEventArgs provides information associated with a workspace event.
class WorkspaceEventArgs : public EventArgs {
public:

    /// Provides access to the workspace.
    Ptr<Workspace> workspace() const;

    ADSK_CORE_WORKSPACEEVENTARGS_API static const char* classType();
    ADSK_CORE_WORKSPACEEVENTARGS_API const char* objectType() const override;
    ADSK_CORE_WORKSPACEEVENTARGS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_WORKSPACEEVENTARGS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Workspace* workspace_raw() const = 0;
};

// Inline wrappers

inline Ptr<Workspace> WorkspaceEventArgs::workspace() const
{
    Ptr<Workspace> res = workspace_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_WORKSPACEEVENTARGS_API