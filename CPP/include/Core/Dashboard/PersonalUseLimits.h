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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_PERSONALUSELIMITS_CPP__
# define ADSK_CORE_PERSONALUSELIMITS_API XI_EXPORT
# else
# define ADSK_CORE_PERSONALUSELIMITS_API
# endif
#else
# define ADSK_CORE_PERSONALUSELIMITS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
}}

namespace adsk { namespace core {

/// Object that provides information about file limits associated with a "Fusion 360 for Personal Use license".
class PersonalUseLimits : public Base {
public:

    /// Returns the maximum number of documents that can be set by the user
    /// to be editable.
    int maxEditableFileCount() const;

    /// Returns the current number of documents that are set by the user to be editable.
    int editableFileCount() const;

    /// Returns a list of the DataFile objects that have been set by the user to be editable.
    std::vector<Ptr<DataFile>> editableFiles() const;

    ADSK_CORE_PERSONALUSELIMITS_API static const char* classType();
    ADSK_CORE_PERSONALUSELIMITS_API const char* objectType() const override;
    ADSK_CORE_PERSONALUSELIMITS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PERSONALUSELIMITS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int maxEditableFileCount_raw() const = 0;
    virtual int editableFileCount_raw() const = 0;
    virtual DataFile** editableFiles_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline int PersonalUseLimits::maxEditableFileCount() const
{
    int res = maxEditableFileCount_raw();
    return res;
}

inline int PersonalUseLimits::editableFileCount() const
{
    int res = editableFileCount_raw();
    return res;
}

inline std::vector<Ptr<DataFile>> PersonalUseLimits::editableFiles() const
{
    std::vector<Ptr<DataFile>> res;
    size_t s;

    DataFile** p= editableFiles_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PERSONALUSELIMITS_API