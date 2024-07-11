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
# ifdef __COMPILING_ADSK_CORE_DATAFILE_CPP__
# define ADSK_CORE_DATAFILE_API XI_EXPORT
# else
# define ADSK_CORE_DATAFILE_API
# endif
#else
# define ADSK_CORE_DATAFILE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataEventHandler;
    class DataFiles;
    class DataFolder;
    class DataProject;
    class User;
}}

namespace adsk { namespace core {

/// A data file in a data folder.
class DataFile : public Base {
public:

    /// Gets and sets the displayed name of this item.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the description information associated with this item.
    std::string description() const;

    /// Returns the parent folder this item is contained within.
    Ptr<DataFolder> parentFolder() const;

    /// Returns the parent project that this item is in.
    Ptr<DataProject> parentProject() const;

    /// Returns the unique ID for this DataFile. This is the same id used in the
    /// Forge Data Management API for an Item and is in the unencoded form and will
    /// look similar to this: "urn:adsk.wipprod:dm.lineage:hC6k4hndRWaeIVhIjvHu8w"
    std::string id() const;

    /// Gets the version number of this DataFile.
    int versionNumber() const;

    /// Gets the other version of this item.
    Ptr<DataFiles> versions() const;

    /// Gets the latest version number for this DataFile.
    int latestVersionNumber() const;

    /// Returns the latest version of the DataFile. It can return a reference
    /// to the same DataFile is this DataFile is the latest version.
    Ptr<DataFile> latestVersion() const;

    /// Deletes this DataFile. This can fail if this file is referenced by another file or is currently open.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    /// Moves this DataFile to the specified folder.
    /// targetFolder : The folder to move this DataFile to.
    /// Returns true if the move was successful.
    bool move(const Ptr<DataFolder>& targetFolder);

    /// Copies this DataFile to the specified folder.
    /// targetFolder : The folder to copy this DataFile to.
    /// Returns the copied DataFile if the copy was successful.
    Ptr<DataFile> copy(const Ptr<DataFolder>& targetFolder);

    /// Promotes this version to be the latest version. If this is the latest version, nothing happens.
    /// Returns true if successful.
    bool promote();

    /// Gets the file extension for this data file. The file type can be inferred from this.
    std::string fileExtension() const;

    /// Gets if this DataFile is currently in use (opened for edit) by any other user.
    bool isInUse() const;

    /// Returns the array of users that are currently using (have open for edit) this data file.
    std::vector<Ptr<User>> inUseBy() const;

    /// Returns the User that created this data file.
    Ptr<User> createdBy() const;

    /// Returns the User that last updated this data file
    Ptr<User> lastUpdatedBy() const;

    /// Gets if this datafile has Children (referenced components) that are out of date (not the latest version).
    bool hasOutofDateChildReferences() const;

    /// Gets if this datafile has children, (i.e. a Fusion 360 Design containing referenced components).
    bool hasChildReferences() const;

    /// Gets if this datafile has parents, (i.e. this is a child being referenced in another Fusion 360 design).
    bool hasParentReferences() const;

    /// Returns a collection of DataFiles that are the children (referenced designs) this datafile references.
    Ptr<DataFiles> childReferences() const;

    /// Returns a collection DataFiles collection that are the parents (designs that reference) this datafile.
    Ptr<DataFiles> parentReferences() const;

    /// Returns a short url of this data file which can be shared with others.
    std::string publicLink() const;

    /// Returns the date when this data file was created as UNIX epoch time. UNIX epoch time
    /// is the number of seconds since January 1, 1970 (midnight UTC/GMT).
    /// 
    /// In Python you can import the standard time module to work with UNIX epoch time.
    /// 
    /// In C++ you can use functions in time.h and std::chrono to work with UNIX epoch time.
    size_t dateCreated() const;

    /// Returns the version ID for this DataFile. This is the same id used in the
    /// Forge Data Management API for an Item and is in the unencoded form and will
    /// look similar to this: "urn:adsk.wipqa:fs.file:vf.W3syIw1lQAW-5vWObMdYnA?version=2"
    std::string versionId() const;

    /// Gets if this file is currently read-only or not. A file can be read-only for various
    /// reasons. For example, if you are running with a "Fusion 360 for Personal Use license" and
    /// have not designate the file to be editable or if someone else is editing the file.
    bool isReadOnly() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Retrieve the PIM data JSON for the assembly.
    /// noTraverse : If false, traverse across referenced documents, otherwise do not.
    /// 
    std::string assemblyPIMData(bool noTraverse = false);

    /// Performs a synchronous or asynchronous download of this DataFile. Only DataFiles that represent
    /// non-Fusion data can be downloaded. For example, this will work for TXT or XLS files but will
    /// fail for F3D files.
    /// 
    /// When using this in its synchronous mode, Fusion is frozen during the download and the call will not
    /// return until the download is complete or has failed. When using this in its asynchronous mode,
    /// calling this method will start the download process and the call return before the download is
    /// complete. The event on the provided handler will be called notifying you when the download is complete.
    /// path : The full path and optionally the filename used on the local file system for the file. If the path
    /// doesn't exist it will be created. If only a path is specified, the name and file extension associated
    /// with the DataFile is used for the filename. You can also specify the full path, including the filename.
    /// handler : If you want to do an asynchronous download, provide the handler object to be called when this operation
    /// is complete. To call the method synchronously, set this argument to null/None.
    /// Returns True in synchronous mode if successful. Returns True in asynchronous mode if the download was successfully started.
    bool download(const std::string& path, DataEventHandler* handler);

    /// Refreshes the data associated with a DataFile object to be up to date with the associated cloud data.
    /// The DataFile returned by the API reflects the local representation of the DataFile as used by the Data Panel.
    /// This is method is only useful in very limited cases and should rarely be used. In most cases the local
    /// representation will match the actual data on the cloud. In rare occasions where Fusion was offline while
    /// the cloud processing of DataFile is completed or the DataFile is not in the folder shown in the Data Panel.
    /// Getting a DataFileFolder contents forces an update of the local data for all of the data files it contains
    /// so they will all be up to date.
    /// handler : If you want to do an asynchronous refresh, provide the handler object to be called when this operation
    /// is complete. To call the method synchronously, set this argument to null/None.
    /// Returns True in synchronous mode if successful. Returns True in asynchronous mode if the refresh was successfully started.
    bool refresh(DataEventHandler* handler);

    /// Returns if the DataFile is fully processed. This is especially useful when a new file is being saved or uploaded.
    /// The initial call to save or upload the file returns when the process has started but processing continues on the cloud.
    /// This property will return true when all of the processing has been completed and all information related to
    /// the Datafile is now available.
    bool isComplete() const;

    ADSK_CORE_DATAFILE_API static const char* classType();
    ADSK_CORE_DATAFILE_API const char* objectType() const override;
    ADSK_CORE_DATAFILE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATAFILE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* description_raw() const = 0;
    virtual DataFolder* parentFolder_raw() const = 0;
    virtual DataProject* parentProject_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual bool name__raw(const char* value) = 0;
    virtual int versionNumber_raw() const = 0;
    virtual DataFiles* versions_raw() const = 0;
    virtual int latestVersionNumber_raw() const = 0;
    virtual DataFile* latestVersion_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool move_raw(DataFolder* targetFolder) = 0;
    virtual DataFile* copy_raw(DataFolder* targetFolder) = 0;
    virtual bool promote_raw() = 0;
    virtual char* fileExtension_raw() const = 0;
    virtual bool isInUse_raw() const = 0;
    virtual User** inUseBy_raw(size_t& return_size) const = 0;
    virtual User* createdBy_raw() const = 0;
    virtual User* lastUpdatedBy_raw() const = 0;
    virtual bool hasOutofDateChildReferences_raw() const = 0;
    virtual bool hasChildReferences_raw() const = 0;
    virtual bool hasParentReferences_raw() const = 0;
    virtual DataFiles* childReferences_raw() const = 0;
    virtual DataFiles* parentReferences_raw() const = 0;
    virtual char* publicLink_raw() const = 0;
    virtual size_t dateCreated_raw() const = 0;
    virtual char* versionId_raw() const = 0;
    virtual bool isReadOnly_raw() const = 0;
    virtual char* assemblyPIMData_raw(bool noTraverse) = 0;
    virtual bool download_raw(const char* path, DataEventHandler* handler) = 0;
    virtual bool refresh_raw(DataEventHandler* handler) = 0;
    virtual bool isComplete_raw() const = 0;
};

// Inline wrappers

inline std::string DataFile::name() const
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

inline bool DataFile::name(const std::string& value)
{
    return name__raw(value.c_str());
}

inline std::string DataFile::description() const
{
    std::string res;

    char* p= description_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<DataFolder> DataFile::parentFolder() const
{
    Ptr<DataFolder> res = parentFolder_raw();
    return res;
}

inline Ptr<DataProject> DataFile::parentProject() const
{
    Ptr<DataProject> res = parentProject_raw();
    return res;
}

inline std::string DataFile::id() const
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

inline int DataFile::versionNumber() const
{
    int res = versionNumber_raw();
    return res;
}

inline Ptr<DataFiles> DataFile::versions() const
{
    Ptr<DataFiles> res = versions_raw();
    return res;
}

inline int DataFile::latestVersionNumber() const
{
    int res = latestVersionNumber_raw();
    return res;
}

inline Ptr<DataFile> DataFile::latestVersion() const
{
    Ptr<DataFile> res = latestVersion_raw();
    return res;
}

inline bool DataFile::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool DataFile::move(const Ptr<DataFolder>& targetFolder)
{
    bool res = move_raw(targetFolder.get());
    return res;
}

inline Ptr<DataFile> DataFile::copy(const Ptr<DataFolder>& targetFolder)
{
    Ptr<DataFile> res = copy_raw(targetFolder.get());
    return res;
}

inline bool DataFile::promote()
{
    bool res = promote_raw();
    return res;
}

inline std::string DataFile::fileExtension() const
{
    std::string res;

    char* p= fileExtension_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DataFile::isInUse() const
{
    bool res = isInUse_raw();
    return res;
}

inline std::vector<Ptr<User>> DataFile::inUseBy() const
{
    std::vector<Ptr<User>> res;
    size_t s;

    User** p= inUseBy_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<User> DataFile::createdBy() const
{
    Ptr<User> res = createdBy_raw();
    return res;
}

inline Ptr<User> DataFile::lastUpdatedBy() const
{
    Ptr<User> res = lastUpdatedBy_raw();
    return res;
}

inline bool DataFile::hasOutofDateChildReferences() const
{
    bool res = hasOutofDateChildReferences_raw();
    return res;
}

inline bool DataFile::hasChildReferences() const
{
    bool res = hasChildReferences_raw();
    return res;
}

inline bool DataFile::hasParentReferences() const
{
    bool res = hasParentReferences_raw();
    return res;
}

inline Ptr<DataFiles> DataFile::childReferences() const
{
    Ptr<DataFiles> res = childReferences_raw();
    return res;
}

inline Ptr<DataFiles> DataFile::parentReferences() const
{
    Ptr<DataFiles> res = parentReferences_raw();
    return res;
}

inline std::string DataFile::publicLink() const
{
    std::string res;

    char* p= publicLink_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline size_t DataFile::dateCreated() const
{
    size_t res = dateCreated_raw();
    return res;
}

inline std::string DataFile::versionId() const
{
    std::string res;

    char* p= versionId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DataFile::isReadOnly() const
{
    bool res = isReadOnly_raw();
    return res;
}

inline std::string DataFile::assemblyPIMData(bool noTraverse)
{
    std::string res;

    char* p= assemblyPIMData_raw(noTraverse);
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DataFile::download(const std::string& path, DataEventHandler* handler)
{
    bool res = download_raw(path.c_str(), handler);
    return res;
}

inline bool DataFile::refresh(DataEventHandler* handler)
{
    bool res = refresh_raw(handler);
    return res;
}

inline bool DataFile::isComplete() const
{
    bool res = isComplete_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATAFILE_API