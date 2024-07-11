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
# ifdef __COMPILING_ADSK_CORE_DOCUMENTREFERENCES_CPP__
# define ADSK_CORE_DOCUMENTREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_DOCUMENTREFERENCES_API
# endif
#else
# define ADSK_CORE_DOCUMENTREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DocumentReference;
}}

namespace adsk { namespace core {

/// Provides access to the list of documents referenced from a document.
class DocumentReferences : public Base {
public:

    /// Returns the specified DocumentReference.
    /// index : The index of the object to return where the first one in the collection has an index of 0.
    /// Returns the specified DocumentReference or null if an invalid index was specified.
    Ptr<DocumentReference> item(size_t index) const;

    /// The number of DocumentReference objects in this collection.
    size_t count() const;

    typedef DocumentReference iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DOCUMENTREFERENCES_API static const char* classType();
    ADSK_CORE_DOCUMENTREFERENCES_API const char* objectType() const override;
    ADSK_CORE_DOCUMENTREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DOCUMENTREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DocumentReference* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<DocumentReference> DocumentReferences::item(size_t index) const
{
    Ptr<DocumentReference> res = item_raw(index);
    return res;
}

inline size_t DocumentReferences::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void DocumentReferences::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DOCUMENTREFERENCES_API