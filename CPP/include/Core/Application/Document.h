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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DOCUMENT_CPP__
# define ADSK_CORE_DOCUMENT_API XI_EXPORT
# else
# define ADSK_CORE_DOCUMENT_API
# endif
#else
# define ADSK_CORE_DOCUMENT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Application;
    class Attributes;
    class DataFile;
    class DataFolder;
    class DocumentReferences;
    class Products;
}}

namespace adsk { namespace core {

/// Object that represents an open document. This is the base class for all document types.
class Document : public Base {
public:

    /// Causes this document to become the active document in the user interface.
    /// Returns true if the activation was successful.
    bool activate();

    /// This property gets and sets the name of the document. You can only set the
    /// name of a document before the document is saved for the first time. You can
    /// use the isSaved property to determine this. If the document has not been
    /// saved and the name is changed, the specified name will be the default name
    /// shown in the Save dialog, which the user can modify before saving the document.
    /// 
    /// If the file has been saved, this property behaves as read-only. Setting the
    /// name will fail because the name is controlled by the DataFile associated
    /// with this document. However, you can edit the name of the DataFile, which
    /// you can obtain by using the dataFile property of the document.
    std::string name() const;
    bool name(const std::string& value);

    /// Closes this document.
    /// saveChanges : This argument defines what the behavior of the close is when the document
    /// has been modified. If the document hasn't been modified then this argument
    /// is ignored and the document is closed. If the document has been modified
    /// and this argument is false then Fusion 360 will close the document and lose
    /// any changes. If the document has been modified and this argument is true then
    /// it will prompt the user if they want to save the changes or not, just the same
    /// as if the user was to interactively close the document.
    /// Returns true if closing the document was successful.
    bool close(bool saveChanges);

    /// Property that indicates if the document has been modified since it was last saved.
    bool isModified() const;

    /// Property that indicates if this document has been saved or not. The initial save of
    /// a document requires that the name and location be specified and requires the saveAs method
    /// to be used. If the document has been saved then the save method can be used to save changes made.
    bool isSaved() const;

    /// Saves a version of the current document. You must use the SaveAs method the first
    /// time a document is saved. You can determine if a document has been saved by checking
    /// the value of the isSaved property.
    /// description : The version description for this document
    /// Returns true if saving the document was successful.
    bool save(const std::string& description) const;

    /// Returns the parent Application object.
    Ptr<Application> parent() const;

    /// Performs a Save As on this document. This saves the currently open document to the specified
    /// location and this document becomes the saved document. If this is a new document that has
    /// never been saved you must use the SaveAs method in order to specify the location and name. You
    /// can determine if the document has been saved by checking the value of the isSaved property.
    /// name : The name to use for this document. If this is an empty string, Fusion 360 will use the default name
    /// assigned when the document was created.
    /// dataFolder : The data folder to save this document to.
    /// description : The description string of the document. This can be an empty string.
    /// tag : The tag string of the document. This can be an empty string.
    /// Returns true if the save as was successful.
    bool saveAs(const std::string& name, const Ptr<DataFolder>& dataFolder, const std::string& description, const std::string& tag) const;

    /// Returns the products associated with this document.
    Ptr<Products> products() const;

    /// Gets if this document is the active document in the user interface.
    bool isActive() const;

    /// Gets if a currently open document is open as visible.
    bool isVisible() const;

    /// Returns the collection of attributes associated with this document.
    Ptr<Attributes> attributes() const;

    /// Gets the DataFile that represents this document in A360.
    Ptr<DataFile> dataFile() const;

    /// Returns the Fusion 360 version this document was last saved with.
    std::string version() const;

    /// Returns a collection containing the documents directly referenced
    /// by this document.
    Ptr<DocumentReferences> documentReferences() const;

    /// Indicates if any references in the assembly are out of date. This is the API
    /// equivalent to the "Out of Date" notification displayed in the Quick Access Toolbar.
    bool isUpToDate() const;

    /// Returns a collection containing all of the documents referenced directly
    /// by this document and those referenced by all sub-assemblies.
    Ptr<DocumentReferences> allDocumentReferences() const;

    /// Returns the creation ID of this document. When a new document is created, Fusion assigns it a
    /// creation ID that will remain constant for the life of the document. The ID that is assigned is unique.
    /// However, it's possible that more than one document can have the same ID. This happens in the case
    /// where a document is copied. In this case a new document is created but an existing document is copied.
    /// It's only when a new document is created that a creation ID is generated and assigned.
    /// 
    /// Using this ID can be useful in cases where the save of a new document is started and you can use
    /// this ID to match the completion of the save operation on the cloud to the original document.
    std::string creationId() const;

    /// Updates all out of date references. This is equivalent to clicking the "Out of Date"
    /// button in the Quick Access Toolbar to update all out of date references.
    bool updateAllReferences();

    ADSK_CORE_DOCUMENT_API static const char* classType();
    ADSK_CORE_DOCUMENT_API const char* objectType() const override;
    ADSK_CORE_DOCUMENT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DOCUMENT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool activate_raw() = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool close_raw(bool saveChanges) = 0;
    virtual bool isModified_raw() const = 0;
    virtual bool isSaved_raw() const = 0;
    virtual bool save_raw(const char* description) const = 0;
    virtual Application* parent_raw() const = 0;
    virtual bool saveAs_raw(const char* name, DataFolder* dataFolder, const char* description, const char* tag) const = 0;
    virtual Products* products_raw() const = 0;
    virtual bool isActive_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual Attributes* attributes_raw() const = 0;
    virtual DataFile* dataFile_raw() const = 0;
    virtual char* version_raw() const = 0;
    virtual DocumentReferences* documentReferences_raw() const = 0;
    virtual bool isUpToDate_raw() const = 0;
    virtual DocumentReferences* allDocumentReferences_raw() const = 0;
    virtual char* creationId_raw() const = 0;
    virtual bool updateAllReferences_raw() = 0;
    virtual void placeholderDocument0() {}
    virtual void placeholderDocument1() {}
    virtual void placeholderDocument2() {}
    virtual void placeholderDocument3() {}
    virtual void placeholderDocument4() {}
    virtual void placeholderDocument5() {}
    virtual void placeholderDocument6() {}
    virtual void placeholderDocument7() {}
    virtual void placeholderDocument8() {}
    virtual void placeholderDocument9() {}
    virtual void placeholderDocument10() {}
    virtual void placeholderDocument11() {}
    virtual void placeholderDocument12() {}
    virtual void placeholderDocument13() {}
    virtual void placeholderDocument14() {}
    virtual void placeholderDocument15() {}
    virtual void placeholderDocument16() {}
    virtual void placeholderDocument17() {}
    virtual void placeholderDocument18() {}
    virtual void placeholderDocument19() {}
    virtual void placeholderDocument20() {}
    virtual void placeholderDocument21() {}
    virtual void placeholderDocument22() {}
    virtual void placeholderDocument23() {}
    virtual void placeholderDocument24() {}
    virtual void placeholderDocument25() {}
    virtual void placeholderDocument26() {}
    virtual void placeholderDocument27() {}
    virtual void placeholderDocument28() {}
    virtual void placeholderDocument29() {}
    virtual void placeholderDocument30() {}
    virtual void placeholderDocument31() {}
    virtual void placeholderDocument32() {}
    virtual void placeholderDocument33() {}
    virtual void placeholderDocument34() {}
    virtual void placeholderDocument35() {}
    virtual void placeholderDocument36() {}
    virtual void placeholderDocument37() {}
    virtual void placeholderDocument38() {}
    virtual void placeholderDocument39() {}
    virtual void placeholderDocument40() {}
    virtual void placeholderDocument41() {}
    virtual void placeholderDocument42() {}
    virtual void placeholderDocument43() {}
};

// Inline wrappers

inline bool Document::activate()
{
    bool res = activate_raw();
    return res;
}

inline std::string Document::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Document::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool Document::close(bool saveChanges)
{
    bool res = close_raw(saveChanges);
    return res;
}

inline bool Document::isModified() const
{
    bool res = isModified_raw();
    return res;
}

inline bool Document::isSaved() const
{
    bool res = isSaved_raw();
    return res;
}

inline bool Document::save(const std::string& description) const
{
    bool res = save_raw(description.c_str());
    return res;
}

inline Ptr<Application> Document::parent() const
{
    Ptr<Application> res = parent_raw();
    return res;
}

inline bool Document::saveAs(const std::string& name, const Ptr<DataFolder>& dataFolder, const std::string& description, const std::string& tag) const
{
    bool res = saveAs_raw(name.c_str(), dataFolder.get(), description.c_str(), tag.c_str());
    return res;
}

inline Ptr<Products> Document::products() const
{
    Ptr<Products> res = products_raw();
    return res;
}

inline bool Document::isActive() const
{
    bool res = isActive_raw();
    return res;
}

inline bool Document::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline Ptr<Attributes> Document::attributes() const
{
    Ptr<Attributes> res = attributes_raw();
    return res;
}

inline Ptr<DataFile> Document::dataFile() const
{
    Ptr<DataFile> res = dataFile_raw();
    return res;
}

inline std::string Document::version() const
{
    std::string res;

    char* p= version_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<DocumentReferences> Document::documentReferences() const
{
    Ptr<DocumentReferences> res = documentReferences_raw();
    return res;
}

inline bool Document::isUpToDate() const
{
    bool res = isUpToDate_raw();
    return res;
}

inline Ptr<DocumentReferences> Document::allDocumentReferences() const
{
    Ptr<DocumentReferences> res = allDocumentReferences_raw();
    return res;
}

inline std::string Document::creationId() const
{
    std::string res;

    char* p= creationId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Document::updateAllReferences()
{
    bool res = updateAllReferences_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DOCUMENT_API