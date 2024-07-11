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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_STATUS_CPP__
# define ADSK_CORE_STATUS_API XI_EXPORT
# else
# define ADSK_CORE_STATUS_API
# endif
#else
# define ADSK_CORE_STATUS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class StatusMessages;
}}

namespace adsk { namespace core {

/// Used to communicate the current status of an object or operation. This provides the status
/// and any error messages that might accompany an error or warning.
class Status : public Base {
public:

    /// If true, An error occurred that has prevented the operation from successfully completing.
    /// This takes into account all of the child status messages.
    bool isError() const;

    /// If true, the operation has succeeded but with an unusual result.
    /// This takes into account all of the child status messages.
    bool isWarning() const;

    /// If true, the operation was successful without any warnings or errors.
    /// This takes into account all of the child status messages.
    bool isOK() const;

    /// the status messages associated with this status. These messages are displayed to
    /// the user in the alert dialog. Each status message can have children status
    /// messages that will be displayed as a tree structure in the alert dialog.
    Ptr<StatusMessages> statusMessages() const;

    ADSK_CORE_STATUS_API static const char* classType();
    ADSK_CORE_STATUS_API const char* objectType() const override;
    ADSK_CORE_STATUS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_STATUS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isError_raw() const = 0;
    virtual bool isWarning_raw() const = 0;
    virtual bool isOK_raw() const = 0;
    virtual StatusMessages* statusMessages_raw() const = 0;
};

// Inline wrappers

inline bool Status::isError() const
{
    bool res = isError_raw();
    return res;
}

inline bool Status::isWarning() const
{
    bool res = isWarning_raw();
    return res;
}

inline bool Status::isOK() const
{
    bool res = isOK_raw();
    return res;
}

inline Ptr<StatusMessages> Status::statusMessages() const
{
    Ptr<StatusMessages> res = statusMessages_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_STATUS_API