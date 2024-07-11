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
# ifdef __COMPILING_ADSK_CORE_DATA_CPP__
# define ADSK_CORE_DATA_API XI_EXPORT
# else
# define ADSK_CORE_DATA_API
# endif
#else
# define ADSK_CORE_DATA_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
    class DataFolder;
    class DataHub;
    class DataHubs;
    class DataProject;
    class DataProjects;
    class PersonalUseLimits;
}}

namespace adsk { namespace core {

/// The Data class provides access to data files
class Data : public Base {
public:

    /// Gets and sets the active DataProject. This is the project currently displayed in the Fusion 360 Data Panel.
    Ptr<DataProject> activeProject() const;
    bool activeProject(const Ptr<DataProject>& value);

    /// Gets the collection of DataProjects associated with the active Hub.
    Ptr<DataProjects> dataProjects() const;

    /// Returns a collection of accessible hubs for the current user. A DataHub represents an A360 Team or Personal hub.
    Ptr<DataHubs> dataHubs() const;

    /// Gets the active DataHub.
    Ptr<DataHub> activeHub() const;
    bool activeHub(const Ptr<DataHub>& value);

    /// Refreshes the contents of the data panel to ensure what is displayed reflects the latest state.
    /// Returns true if the refresh was successful.
    bool refreshDataPanel();

    /// Gets and sets if the data panel is visible within Fusion 360.
    bool isDataPanelVisible() const;
    bool isDataPanelVisible(bool value);

    /// Returns the DataFile identified by the input id. This can fail is there isn't a DataFile identified
    /// with the specified id or if the current user doesn't have privileges to access the file.
    /// id : The full id of the file will be something similar to that shown below. The version argument can be
    /// omitted which will result in getting the latest version.
    /// 
    /// urn:adsk.wipprod:fs.file:vf.NazykCYLRWKZ5tpzJtEQ1A?version=3
    /// 
    /// This is also the same id that you'll obtain if you use the Forge Data Management API.
    /// Returns a DataFile if one was found matching the input id or null if one was not found or you don't
    /// have privileges to access it. You can use the Application.getLastError method to determine the reason
    /// for the failure.
    Ptr<DataFile> findFileById(const std::string& id) const;

    /// If the user is running with a "Fusion 360 for Personal Use license", this property
    /// will return a peronalUseLimits object which provides information about
    /// file limits associated with the license. If the user is running with any other
    /// license type, this property will return null.
    Ptr<PersonalUseLimits> personalUseLimits() const;

    /// !!!!! Warning !!!!!
    /// ! This is hidden and not officially supported
    /// !!!!! Warning !!!!!
    /// 
    /// Returns the Id of the currently active space collection.
    std::string activeSpaceCollectionId() const;

    /// Gets the active DataFolder as seen in the Fusion 360 Data Panel.
    Ptr<DataFolder> activeFolder() const;

    ADSK_CORE_DATA_API static const char* classType();
    ADSK_CORE_DATA_API const char* objectType() const override;
    ADSK_CORE_DATA_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DATA_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual DataProject* activeProject_raw() const = 0;
    virtual bool activeProject_raw(DataProject* value) = 0;
    virtual DataProjects* dataProjects_raw() const = 0;
    virtual DataHubs* dataHubs_raw() const = 0;
    virtual DataHub* activeHub_raw() const = 0;
    virtual bool activeHub_raw(DataHub* value) = 0;
    virtual bool refreshDataPanel_raw() = 0;
    virtual bool isDataPanelVisible_raw() const = 0;
    virtual bool isDataPanelVisible_raw(bool value) = 0;
    virtual DataFile* findFileById_raw(const char* id) const = 0;
    virtual PersonalUseLimits* personalUseLimits_raw() const = 0;
    virtual char* activeSpaceCollectionId_raw() const = 0;
    virtual DataFolder* activeFolder_raw() const = 0;
};

// Inline wrappers

inline Ptr<DataProject> Data::activeProject() const
{
    Ptr<DataProject> res = activeProject_raw();
    return res;
}

inline bool Data::activeProject(const Ptr<DataProject>& value)
{
    return activeProject_raw(value.get());
}

inline Ptr<DataProjects> Data::dataProjects() const
{
    Ptr<DataProjects> res = dataProjects_raw();
    return res;
}

inline Ptr<DataHubs> Data::dataHubs() const
{
    Ptr<DataHubs> res = dataHubs_raw();
    return res;
}

inline Ptr<DataHub> Data::activeHub() const
{
    Ptr<DataHub> res = activeHub_raw();
    return res;
}

inline bool Data::activeHub(const Ptr<DataHub>& value)
{
    return activeHub_raw(value.get());
}

inline bool Data::refreshDataPanel()
{
    bool res = refreshDataPanel_raw();
    return res;
}

inline bool Data::isDataPanelVisible() const
{
    bool res = isDataPanelVisible_raw();
    return res;
}

inline bool Data::isDataPanelVisible(bool value)
{
    return isDataPanelVisible_raw(value);
}

inline Ptr<DataFile> Data::findFileById(const std::string& id) const
{
    Ptr<DataFile> res = findFileById_raw(id.c_str());
    return res;
}

inline Ptr<PersonalUseLimits> Data::personalUseLimits() const
{
    Ptr<PersonalUseLimits> res = personalUseLimits_raw();
    return res;
}

inline std::string Data::activeSpaceCollectionId() const
{
    std::string res;

    char* p= activeSpaceCollectionId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<DataFolder> Data::activeFolder() const
{
    Ptr<DataFolder> res = activeFolder_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DATA_API