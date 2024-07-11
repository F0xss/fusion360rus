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
# ifdef __COMPILING_ADSK_CORE_DATAFILEFUTURE_CPP__
# define ADSK_CORE_DATAFILEFUTURE_API XI_EXPORT
# else
# define ADSK_CORE_DATAFILEFUTURE_API
# endif
#else
# define ADSK_CORE_DATAFILEFUTURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
}}

namespace adsk { namespace core {

/// Used to check the state and get back the results of a file upload.
class DataFileFuture : public Base {
public:

    /// Returns the DataFile when the upload is complete (uplodeState returns UploadFinished).
    /// Returns null if the upload is still running or has failed.
    Ptr<DataFile> dataFile() const;

    /// Returns the current state of the upload.
    UploadStates uploadState() const;

    ADSK_CORE_DATAFILEFUTURE_API static const char* classType();
    ADSK_CORE_DATAFILEFUTURE_API const char* objectType() const override;
    ADSK_CORE_DATAFILEFUTURE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAFILEFUTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataFile* dataFile_raw() const = 0;
    virtual UploadStates uploadState_raw() const = 0;
};

// Inline wrappers

inline Ptr<DataFile> DataFileFuture::dataFile() const
{
    Ptr<DataFile> res = dataFile_raw();
    return res;
}

inline UploadStates DataFileFuture::uploadState() const
{
    UploadStates res = uploadState_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAFILEFUTURE_API