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
# ifdef __COMPILING_ADSK_CORE_CLOUDFILEDIALOG_CPP__
# define ADSK_CORE_CLOUDFILEDIALOG_API XI_EXPORT
# else
# define ADSK_CORE_CLOUDFILEDIALOG_API
# endif
#else
# define ADSK_CORE_CLOUDFILEDIALOG_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class DataFile;
    class DataFolder;
}}

namespace adsk { namespace core {

/// Provides access to a cloud file dialog. A cloud file dialog can be used to prompt the user
/// to select a location and file on Fusion Team.
class CloudFileDialog : public Base {
public:

    /// Gets or sets the title displayed on the dialog.
    std::string title() const;
    bool title(const std::string& value);

    /// Gets the DataFile selected by the user in the dialog. This property is
    /// used after the ShowOpen method has been called to retrieve
    /// the filename specified by the user.
    /// 
    /// If ShowOpen was used and isMultiSelectEnabled is true, then this property will
    /// only display the first DataFile selected and the dataFiles property should be
    /// used instead to retrieved the full list. If ShowSave was used, then only a
    /// single DataFile is ever returned.
    Ptr<DataFile> dataFile() const;

    /// Gets the DataFiles specified by the user in the dialog. This property is
    /// used after the ShowOpen method has been called to retrieve the DataFiles
    /// specified by the user.
    /// 
    /// If ShowOpen is used and isMultiSelectEnabled is true, the user is able to select
    /// more than one file. This property returns all of the files that were selected.
    std::vector<Ptr<DataFile>> dataFiles() const;

    /// Gets or sets the current file type filter. This controls the types of files displayed in
    /// the dialog. The filter consists of file extensions separated by a semi-colon. The string
    /// below is an example of the filter used by Fusion for the Open command.
    /// 
    /// "f3d;f2d;f2t;fbrd;fsch;flbr;fprj;prt;par;sldprt;sldasm;ipt;iam;stp;ste;step"
    /// 
    /// An empty string indicates that no filter should be used and all files in the current
    /// DataFolder should be displayed.
    std::string filter() const;
    bool filter(const std::string& value);

    /// Gets or sets the initial DataFolder displayed in the dialog. The DataFolder should be in current project.
    /// If null, this defaults to the DataFolder that is currently active in the Data Panel.
    /// 
    /// When using the showSave method, use this property to get the DataFolder that the user specified.
    Ptr<DataFolder> dataFolder() const;
    bool dataFolder(const Ptr<DataFolder>& value);

    /// Gets and sets the filename when using the showSave method. If you set this value before using the
    /// showSave method, this will display the filename as the default in the dialog, but the user can
    /// change it. The default is an empty string, which indicates there is not an initial filename.
    /// 
    /// After calling the showSave method, use this property to get the filename the user specified. You
    /// can use this in combination with the dataFolder property to know where the user has specified
    /// to save the file.
    std::string filename() const;
    bool filename(const std::string& value);

    /// Gets or sets a value indicating whether the dialog allows multiple files to be selected. This
    /// defaults to False when a new CloudFileDialog is created. It is only used when using the showOpen method.
    bool isMultiSelectEnabled() const;
    bool isMultiSelectEnabled(bool value);

    /// Displays a modal open dialog, allowing the user to select one or more files. The return value
    /// can be used to determine if the dialog was canceled without selecting a file. The dataFile
    /// and dataFiles properties can be used to get the selected files.
    /// Returns an enum value indicating which button was clicked on the dialog.
    DialogResults showOpen();

    /// Displays a modal save dialog, allowing the user to specify a file. The return value
    /// can be used to determine if the dialog was canceled without giving a filename. The filename
    /// property can be used to get that file.
    /// Returns an enum value indicating which button was clicked on the dialog.
    DialogResults showSave();

    ADSK_CORE_CLOUDFILEDIALOG_API static const char* classType();
    ADSK_CORE_CLOUDFILEDIALOG_API const char* objectType() const override;
    ADSK_CORE_CLOUDFILEDIALOG_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CLOUDFILEDIALOG_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* title_raw() const = 0;
    virtual bool title_raw(const char* value) = 0;
    virtual DataFile* dataFile_raw() const = 0;
    virtual DataFile** dataFiles_raw(size_t& return_size) const = 0;
    virtual char* filter_raw() const = 0;
    virtual bool filter_raw(const char* value) = 0;
    virtual DataFolder* dataFolder_raw() const = 0;
    virtual bool dataFolder_raw(DataFolder* value) = 0;
    virtual char* filename_raw() const = 0;
    virtual bool filename_raw(const char* value) = 0;
    virtual bool isMultiSelectEnabled_raw() const = 0;
    virtual bool isMultiSelectEnabled_raw(bool value) = 0;
    virtual DialogResults showOpen_raw() = 0;
    virtual DialogResults showSave_raw() = 0;
};

// Inline wrappers

inline std::string CloudFileDialog::title() const
{
    std::string res;

    char* p= title_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool CloudFileDialog::title(const std::string& value)
{
    return title_raw(value.c_str());
}

inline Ptr<DataFile> CloudFileDialog::dataFile() const
{
    Ptr<DataFile> res = dataFile_raw();
    return res;
}

inline std::vector<Ptr<DataFile>> CloudFileDialog::dataFiles() const
{
    std::vector<Ptr<DataFile>> res;
    size_t s;

    DataFile** p= dataFiles_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline std::string CloudFileDialog::filter() const
{
    std::string res;

    char* p= filter_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool CloudFileDialog::filter(const std::string& value)
{
    return filter_raw(value.c_str());
}

inline Ptr<DataFolder> CloudFileDialog::dataFolder() const
{
    Ptr<DataFolder> res = dataFolder_raw();
    return res;
}

inline bool CloudFileDialog::dataFolder(const Ptr<DataFolder>& value)
{
    return dataFolder_raw(value.get());
}

inline std::string CloudFileDialog::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool CloudFileDialog::filename(const std::string& value)
{
    return filename_raw(value.c_str());
}

inline bool CloudFileDialog::isMultiSelectEnabled() const
{
    bool res = isMultiSelectEnabled_raw();
    return res;
}

inline bool CloudFileDialog::isMultiSelectEnabled(bool value)
{
    return isMultiSelectEnabled_raw(value);
}

inline DialogResults CloudFileDialog::showOpen()
{
    DialogResults res = showOpen_raw();
    return res;
}

inline DialogResults CloudFileDialog::showSave()
{
    DialogResults res = showSave_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CLOUDFILEDIALOG_API