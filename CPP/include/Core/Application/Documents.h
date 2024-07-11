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
# ifdef __COMPILING_ADSK_CORE_DOCUMENTS_CPP__
# define ADSK_CORE_DOCUMENTS_API XI_EXPORT
# else
# define ADSK_CORE_DOCUMENTS_API
# endif
#else
# define ADSK_CORE_DOCUMENTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
    class Document;
    class NamedValues;
}}

namespace adsk { namespace core {

/// The Documents object provides access to all of the currently open documents and
/// provides methods to create and open documents.
class Documents : public Base {
public:

    /// Creates and opens a new document of the specified type.
    /// documentType : A value from the DocumentTypes enum that specifies the type of document to create.
    /// visible : Optional argument specifying is the document should be visible or not. Currently, documents can only
    /// be created visibly so this argument must always be true.
    /// options : Various options that are supported that are specific to the document type. See the documentation
    /// for the DocumentTypes enum for information about the options supported for the various types.
    /// Returns the created document
    Ptr<Document> add(DocumentTypes documentType, bool visible = true, const Ptr<NamedValues>& options = NULL);

    /// Function that returns the specified document using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Document> item(size_t index) const;

    /// Returns the number of currently open documents. This includes documents that are
    /// visible and invisible.
    size_t count() const;

    /// Opens an item that has previously been saved.
    /// dataFile : The item to open.
    /// visible : Specifies if the document should be opened visibly or not.
    /// Returns the open document or null if the open failed.
    Ptr<Document> open(const Ptr<DataFile>& dataFile, bool visible = true);

    typedef Document iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_DOCUMENTS_API static const char* classType();
    ADSK_CORE_DOCUMENTS_API const char* objectType() const override;
    ADSK_CORE_DOCUMENTS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DOCUMENTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Document* add_raw(DocumentTypes documentType, bool visible, NamedValues* options) = 0;
    virtual Document* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Document* open_raw(DataFile* dataFile, bool visible) = 0;
};

// Inline wrappers

inline Ptr<Document> Documents::add(DocumentTypes documentType, bool visible, const Ptr<NamedValues>& options)
{
    Ptr<Document> res = add_raw(documentType, visible, options.get());
    return res;
}

inline Ptr<Document> Documents::item(size_t index) const
{
    Ptr<Document> res = item_raw(index);
    return res;
}

inline size_t Documents::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Document> Documents::open(const Ptr<DataFile>& dataFile, bool visible)
{
    Ptr<Document> res = open_raw(dataFile.get(), visible);
    return res;
}

template <class OutputIterator> inline void Documents::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DOCUMENTS_API