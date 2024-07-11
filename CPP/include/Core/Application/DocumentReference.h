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
# ifdef __COMPILING_ADSK_CORE_DOCUMENTREFERENCE_CPP__
# define ADSK_CORE_DOCUMENTREFERENCE_API XI_EXPORT
# else
# define ADSK_CORE_DOCUMENTREFERENCE_API
# endif
#else
# define ADSK_CORE_DOCUMENTREFERENCE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
    class Document;
}}

namespace adsk { namespace core {

/// Represents a reference to a document from another document.
class DocumentReference : public Base {
public:

    /// The dataFile on A360 that this object references.
    Ptr<DataFile> dataFile() const;

    /// The document currently open in Fusion 360 that this object references.
    Ptr<Document> referencedDocument() const;

    /// Gets and sets the version of the dataFile on A360 that this document currently represents.
    /// Setting this property will cause all occurrences referencing this document to update to
    /// that version.
    int version() const;
    bool version(int value);

    /// The document that is doing the referencing and owns this reference.
    Ptr<Document> parentDocument() const;

    /// Indicates if this reference is out of date, meaning that the reference
    /// is not referencing the latest version.
    bool isOutOfDate() const;

    /// Updates the reference to use the latest version. This is only useful
    /// when the isOutOfDate property is true.
    /// Returns true if getting the latest version was successful.
    bool getLatestVersion();

    ADSK_CORE_DOCUMENTREFERENCE_API static const char* classType();
    ADSK_CORE_DOCUMENTREFERENCE_API const char* objectType() const override;
    ADSK_CORE_DOCUMENTREFERENCE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DOCUMENTREFERENCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataFile* dataFile_raw() const = 0;
    virtual Document* referencedDocument_raw() const = 0;
    virtual int version_raw() const = 0;
    virtual bool version_raw(int value) = 0;
    virtual Document* parentDocument_raw() const = 0;
    virtual bool isOutOfDate_raw() const = 0;
    virtual bool getLatestVersion_raw() = 0;
};

// Inline wrappers

inline Ptr<DataFile> DocumentReference::dataFile() const
{
    Ptr<DataFile> res = dataFile_raw();
    return res;
}

inline Ptr<Document> DocumentReference::referencedDocument() const
{
    Ptr<Document> res = referencedDocument_raw();
    return res;
}

inline int DocumentReference::version() const
{
    int res = version_raw();
    return res;
}

inline bool DocumentReference::version(int value)
{
    return version_raw(value);
}

inline Ptr<Document> DocumentReference::parentDocument() const
{
    Ptr<Document> res = parentDocument_raw();
    return res;
}

inline bool DocumentReference::isOutOfDate() const
{
    bool res = isOutOfDate_raw();
    return res;
}

inline bool DocumentReference::getLatestVersion()
{
    bool res = getLatestVersion_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DOCUMENTREFERENCE_API