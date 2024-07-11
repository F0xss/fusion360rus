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
# ifdef __COMPILING_ADSK_CORE_IMPORTMANAGER_CPP__
# define ADSK_CORE_IMPORTMANAGER_API XI_EXPORT
# else
# define ADSK_CORE_IMPORTMANAGER_API
# endif
#else
# define ADSK_CORE_IMPORTMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Document;
    class DXF2DImportOptions;
    class FusionArchiveImportOptions;
    class IGESImportOptions;
    class ImportOptions;
    class ObjectCollection;
    class SATImportOptions;
    class SMTImportOptions;
    class STEPImportOptions;
    class SVGImportOptions;
}}

namespace adsk { namespace core {

/// Provides access to functionality to support importing various modeling formats into Fusion 360.
class ImportManager : public Base {
public:

    /// Creates an IGESImportOptions object that is used to import a design from IGES format. Creation
    /// of the IGESImportOptions object does not perform the import. You must pass this object to one of the
    /// ImportManager import methods to perform the import. The IGESImportOptions supports any available
    /// options when importing from IGES format.
    /// filename : The filename or URL of the IGES file to be imported.
    /// The created IGESImportOptions object or null if the creation failed.
    Ptr<IGESImportOptions> createIGESImportOptions(const std::string& filename);

    /// Creates an STEPImportOptions object that's used to import a design from STEP format. Creation
    /// of the STEPImportOptions object does not perform the import. You must pass this object to one of the
    /// ImportManager import methods to perform the import. The STEPImportOptions supports any available
    /// options when importing from STEP format.
    /// filename : The filename or URL of the STEP file to be imported.
    /// The created STEPImportOptions object or null if the creation failed.
    Ptr<STEPImportOptions> createSTEPImportOptions(const std::string& filename);

    /// Creates an SATImportOptions object that's used to import a design from SAT format. Creation
    /// of the SATImportOptions object does not perform the import. You must pass this object to one of the
    /// ImportManager import methods to perform the import. The SATImportOptions supports any available
    /// options when importing from SAT format.
    /// filename : The filename or URL of the SAT file to be imported.
    /// The created SATImportOptions object or null if the creation failed.
    Ptr<SATImportOptions> createSATImportOptions(const std::string& filename);

    /// Creates an SMTImportOptions object that's used to import a design from SMT format. Creation
    /// of the SMTImportOptions object does not perform the import. You must pass this object to one of the
    /// ImportManager import methods to perform the import. The SMTImportOptions supports any available
    /// options when importing from SMT format.
    /// filename : The filename or URL of the SMT file to be imported.
    /// The created SMTImportOptions object or null if the creation failed.
    Ptr<SMTImportOptions> createSMTImportOptions(const std::string& filename);

    /// Creates an FusionArchiveImportOptions object that is used to import a design from a Fusion 360 archive format. Creation
    /// of the FusionArchiveImportOptions object does not perform the import. You must pass this object to one of the
    /// ImportManager import methods to perform the import. The FusionArchiveImportOptions supports any available
    /// options when importing from Fusion 360 archive format.
    /// filename : The filename or URL of the Fusion 360 archive file to be imported.
    /// .f3z files and .f3d files containing externally referenced designs are currently not supported.
    /// The created FusionArchiveImportOptions object or null if the creation failed.
    Ptr<FusionArchiveImportOptions> createFusionArchiveImportOptions(const std::string& filename);

    /// Executes the import operation to import a file (of the format specified by the input ImportOptions object)
    /// to a new document.
    /// 
    /// This method does not support the DXF2DImportOptions or SVGImportOptions objects. Use ImportToTarget or
    /// ImportToTarget2 for those types.
    /// importOptions : An ImportOptions object that is created using one of the create methods on the ImportManager object. This
    /// defines the type of file and any available options supported for that file type.
    /// Returns the newly created Document object or null if the creation failed.
    /// A new unnamed, unsaved document will be opened in Fusion 360 as a result.
    Ptr<Document> importToNewDocument(const Ptr<ImportOptions>& importOptions);

    /// Executes the import operation to import a file (of the format specified by the input ImportOptions object)
    /// into an existing component in an existing design.
    /// importOptions : An ImportOptions object that is created using one of the create methods on the ImportManager object. This
    /// defines the type of file and any available options supported for that file type.
    /// Supplying a DXF2DImportOptions object will result in the creation of one or more sketches
    /// (depending on the layers in the DXF file) in the target component.
    /// target : For most import types this will be a Component. For SVGImportOptions this is the sketch you want to
    /// import the SVG data into.
    /// Returns true if the import was successful.
    bool importToTarget(const Ptr<ImportOptions>& importOptions, const Ptr<Base>& target);

    /// Creates a DXF2DImportOptions object that is used to import 2D data to create sketches. Creation
    /// of the createDXF2DImportOptions object does not perform the import. You must pass this object to the
    /// ImportManager.importToTarget method to perform the import. The sketches created as a result of
    /// the import are available through the 'results' property of the DXF2DImportOptions.
    /// filename : The filename of the DXF file to be imported.
    /// planarEntity : The construction plane or planar face that defines the plane that the resulting sketches will
    /// be created on.
    /// The created DXF2DImportOptions object or null if the creation failed.
    Ptr<DXF2DImportOptions> createDXF2DImportOptions(const std::string& filename, const Ptr<Base>& planarEntity);

    /// Executes the import operation to import a file (of the format specified by the input ImportOptions object)
    /// into an existing component in an existing design and returns the imported objects.
    /// importOptions : An ImportOptions object that is created using one of the create methods on the ImportManager object. This
    /// defines the type of file and any available options supported for that file type.
    /// Supplying a DXF2DImportOptions object will result in the creation of one or more sketches
    /// (depending on the layers in the DXF file) in the target component.
    /// target : For most import types this will be a Component. For SVGImportOptions this is the sketch you want to
    /// import the SVG data into.
    /// Returns an ObjectCollection containing the results of whatever was created as a result of the import.
    /// null is returned in the case of failure.
    Ptr<ObjectCollection> importToTarget2(const Ptr<ImportOptions>& importOptions, const Ptr<Base>& target);

    /// Creates a SVGImportOptions object that is used to import SVG data into a sketch. Creation
    /// of the SVGImportOptions object does not perform the import. You must pass this object to the
    /// importToTarget or importToTarget2 methods to perform the import and provide the sketch you want
    /// to import to as the target.
    /// fullFilename : The full filename, including the path, of the SVG file.
    /// The created SVGImportOptions object or null if the creation failed.
    Ptr<SVGImportOptions> createSVGImportOptions(const std::string& fullFilename);

    ADSK_CORE_IMPORTMANAGER_API static const char* classType();
    ADSK_CORE_IMPORTMANAGER_API const char* objectType() const override;
    ADSK_CORE_IMPORTMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_IMPORTMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual IGESImportOptions* createIGESImportOptions_raw(const char* filename) = 0;
    virtual STEPImportOptions* createSTEPImportOptions_raw(const char* filename) = 0;
    virtual SATImportOptions* createSATImportOptions_raw(const char* filename) = 0;
    virtual SMTImportOptions* createSMTImportOptions_raw(const char* filename) = 0;
    virtual FusionArchiveImportOptions* createFusionArchiveImportOptions_raw(const char* filename) = 0;
    virtual Document* importToNewDocument_raw(ImportOptions* importOptions) = 0;
    virtual bool importToTarget_raw(ImportOptions* importOptions, Base* target) = 0;
    virtual DXF2DImportOptions* createDXF2DImportOptions_raw(const char* filename, Base* planarEntity) = 0;
    virtual ObjectCollection* importToTarget2_raw(ImportOptions* importOptions, Base* target) = 0;
    virtual SVGImportOptions* createSVGImportOptions_raw(const char* fullFilename) = 0;
};

// Inline wrappers

inline Ptr<IGESImportOptions> ImportManager::createIGESImportOptions(const std::string& filename)
{
    Ptr<IGESImportOptions> res = createIGESImportOptions_raw(filename.c_str());
    return res;
}

inline Ptr<STEPImportOptions> ImportManager::createSTEPImportOptions(const std::string& filename)
{
    Ptr<STEPImportOptions> res = createSTEPImportOptions_raw(filename.c_str());
    return res;
}

inline Ptr<SATImportOptions> ImportManager::createSATImportOptions(const std::string& filename)
{
    Ptr<SATImportOptions> res = createSATImportOptions_raw(filename.c_str());
    return res;
}

inline Ptr<SMTImportOptions> ImportManager::createSMTImportOptions(const std::string& filename)
{
    Ptr<SMTImportOptions> res = createSMTImportOptions_raw(filename.c_str());
    return res;
}

inline Ptr<FusionArchiveImportOptions> ImportManager::createFusionArchiveImportOptions(const std::string& filename)
{
    Ptr<FusionArchiveImportOptions> res = createFusionArchiveImportOptions_raw(filename.c_str());
    return res;
}

inline Ptr<Document> ImportManager::importToNewDocument(const Ptr<ImportOptions>& importOptions)
{
    Ptr<Document> res = importToNewDocument_raw(importOptions.get());
    return res;
}

inline bool ImportManager::importToTarget(const Ptr<ImportOptions>& importOptions, const Ptr<Base>& target)
{
    bool res = importToTarget_raw(importOptions.get(), target.get());
    return res;
}

inline Ptr<DXF2DImportOptions> ImportManager::createDXF2DImportOptions(const std::string& filename, const Ptr<Base>& planarEntity)
{
    Ptr<DXF2DImportOptions> res = createDXF2DImportOptions_raw(filename.c_str(), planarEntity.get());
    return res;
}

inline Ptr<ObjectCollection> ImportManager::importToTarget2(const Ptr<ImportOptions>& importOptions, const Ptr<Base>& target)
{
    Ptr<ObjectCollection> res = importToTarget2_raw(importOptions.get(), target.get());
    return res;
}

inline Ptr<SVGImportOptions> ImportManager::createSVGImportOptions(const std::string& fullFilename)
{
    Ptr<SVGImportOptions> res = createSVGImportOptions_raw(fullFilename.c_str());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_IMPORTMANAGER_API