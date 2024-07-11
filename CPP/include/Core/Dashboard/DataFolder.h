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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DATAFOLDER_CPP__
# define ADSK_CORE_DATAFOLDER_API XI_EXPORT
# else
# define ADSK_CORE_DATAFOLDER_API
# endif
#else
# define ADSK_CORE_DATAFOLDER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFileFuture;
    class DataFiles;
    class DataFolders;
    class DataProject;
}}

namespace adsk { namespace core {

/// A data folder that contains a collection of data items.
class DataFolder : public Base {
public:

    /// Gets and sets the displayed name of this folder.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns a collection containing all of the items within this folder, excluding folders.
    /// Use the dataFolders property to get the folders.
    Ptr<DataFiles> dataFiles() const;

    /// Returns a collection containing all of the folders within this folder.
    Ptr<DataFolders> dataFolders() const;

    /// Returns the parent folder this folder is contained within. Returns null
    /// if this is the project's root folder.
    Ptr<DataFolder> parentFolder() const;

    /// Returns the parent project that owns this folder.
    Ptr<DataProject> parentProject() const;

    /// Indicates if this folder is the root folder within the parent project.
    bool isRoot() const;

    /// Uploads a single file to this directory.
    /// filename : The full filename of the file to upload.
    /// The upload process is asynchronous which means that this method
    /// will return before the upload process had completed. The returned
    /// DataFileFuture object can be used to check on the current state of the
    /// upload to determine if it is still uploading, is complete, or has failed.
    /// If it is complete the final DataFinal can be retrieved through the
    /// DataFileFuture object.
    Ptr<DataFileFuture> uploadFile(const std::string& filename);

    /// Uploads a set of files that represent an assembly There should only
    /// be a single top-level assembly file but there can be any number of other
    /// files that represent subassemblies.
    /// filenames : An array of strings that contains the list of all of the files that
    /// are part of the assembly. The name of the the top-level assembly file
    /// must be the first file in the array.
    /// The upload process is asynchronous which means that this method
    /// will return before the upload process had completed. The returned
    /// DataFileFuture object can be used to check on the current state of the
    /// upload to determine if it is still uploading, is complete, or has failed.
    /// If it is complete the final DataFinal can be retrieved through the
    /// DataFileFuture object.
    Ptr<DataFileFuture> uploadAssembly(const std::vector<std::string>& filenames);

    /// Deletes this folder item.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Returns the unique ID for this folder. This is the same id used in the
    /// Forge Data Management API.
    std::string id() const;

    ADSK_CORE_DATAFOLDER_API static const char* classType();
    ADSK_CORE_DATAFOLDER_API const char* objectType() const override;
    ADSK_CORE_DATAFOLDER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAFOLDER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual DataFiles* dataFiles_raw() const = 0;
    virtual DataFolders* dataFolders_raw() const = 0;
    virtual DataFolder* parentFolder_raw() const = 0;
    virtual DataProject* parentProject_raw() const = 0;
    virtual bool isRoot_raw() const = 0;
    virtual DataFileFuture* uploadFile_raw(const char* filename) = 0;
    virtual DataFileFuture* uploadAssembly_raw(const char** filenames, size_t filenames_size) = 0;
    virtual bool name__raw(const char* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual char* id_raw() const = 0;
};

// Inline wrappers

inline std::string DataFolder::name() const
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

inline bool DataFolder::name(const std::string& value)
{
    return name__raw(value.c_str());
}

inline Ptr<DataFiles> DataFolder::dataFiles() const
{
    Ptr<DataFiles> res = dataFiles_raw();
    return res;
}

inline Ptr<DataFolders> DataFolder::dataFolders() const
{
    Ptr<DataFolders> res = dataFolders_raw();
    return res;
}

inline Ptr<DataFolder> DataFolder::parentFolder() const
{
    Ptr<DataFolder> res = parentFolder_raw();
    return res;
}

inline Ptr<DataProject> DataFolder::parentProject() const
{
    Ptr<DataProject> res = parentProject_raw();
    return res;
}

inline bool DataFolder::isRoot() const
{
    bool res = isRoot_raw();
    return res;
}

inline Ptr<DataFileFuture> DataFolder::uploadFile(const std::string& filename)
{
    Ptr<DataFileFuture> res = uploadFile_raw(filename.c_str());
    return res;
}

inline Ptr<DataFileFuture> DataFolder::uploadAssembly(const std::vector<std::string>& filenames)
{
    const char** filenames_ = filenames.empty() ? nullptr : (new const char*[filenames.size()]);
    for(size_t i = 0; i < filenames.size(); ++i)
    {
        filenames_[i] = filenames[i].c_str();
    }

    Ptr<DataFileFuture> res = uploadAssembly_raw(filenames_, filenames.size());
    delete[] filenames_;
    return res;
}

inline bool DataFolder::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline std::string DataFolder::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAFOLDER_API