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
# ifdef __COMPILING_ADSK_CORE_FILEDIALOG_CPP__
# define ADSK_CORE_FILEDIALOG_API XI_EXPORT
# else
# define ADSK_CORE_FILEDIALOG_API
# endif
#else
# define ADSK_CORE_FILEDIALOG_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides access to a file dialog. A file dialog can be used to prompt the user
/// for file names to open or save to.
class FileDialog : public Base {
public:

    /// Gets or sets the title displayed on the dialog.
    std::string title() const;
    bool title(const std::string& value);

    /// Gets the filename specified by the user in the dialog. This property is
    /// used after the ShowOpen or ShowSave methods have been called to retrieve
    /// the filename specified by the user. The file name includes both the
    /// file path and the extension.
    /// 
    /// If ShowOpen was used and IsMultiSelectEnabled is true, then this property will
    /// only display the first filename selected and the Filenames property should be
    /// used instead to retrieved the full list. Is ShowSave was used, then only a
    /// single file name is ever returned.
    std::string filename() const;

    /// Gets the filenames specified by the user in the dialog. This property is
    /// used after the ShowOpen or ShowSave methods have been called to retrieve
    /// the filenames specified by the user. Each file name includes both the
    /// file path and the extension.
    /// 
    /// If ShowOpen is used and IsMultiSelectEnabled is true, the user is able to select
    /// more than one file. This property returns all of the files that were selected. If
    /// ShowSave is used or IsMultiSelectEnabled is false then this array will contain
    /// the single file name.
    std::vector<std::string> filenames() const;

    /// Gets or sets the current file name filter string, which determines the choices
    /// that appear in the "Save as file type" or "Files of type" box in the dialog box.
    /// 
    /// For each filtering option, the filter string contains a description of the filter
    /// and the filter pattern as specified in parentheses and separated by semi-colons. Multiple
    /// filters are separated by a double semi-colon. These are illustrated below.
    /// 
    /// The following is an example of a filter string:
    /// 
    ///    Text files (*.txt);;All files (*.*)
    /// 
    /// You can add several filter patterns to a filter by separating the file types with semicolons, for example:
    /// 
    ///    Image Files (*.BMP;*.JPG;*.GIF);;All files (*.*)
    std::string filter() const;
    bool filter(const std::string& value);

    /// Gets or sets the index of the filter currently selected in the file dialog box. Use the FilterIndex
    /// property to set which filtering option is shown first to the user. You can also use the value of
    /// FilterIndex after showing the file dialog to perform special file operations depending upon the filter chosen.
    /// The first item in the filter list is index 0.
    int filterIndex() const;
    bool filterIndex(int value);

    /// Gets or sets the initial directory displayed by the file dialog box.
    std::string initialDirectory() const;
    bool initialDirectory(const std::string& value);

    /// Gets or sets a value indicating whether the dialog box allows multiple files to be selected.
    bool isMultiSelectEnabled() const;
    bool isMultiSelectEnabled(bool value);

    /// Displays a modal open dialog, allowing the user to select one or more files. The return value
    /// can be used to determine if the dialog was canceled without selecting a file. The Filename
    /// and Filenames properties can be used to get the selected files.
    /// Returns an enum value indicating which button was clicked on the dialog.
    DialogResults showOpen();

    /// Displays a modal save dialog, allowing the user to specify a file. The return value
    /// can be used to determine if the dialog was canceled without selecting a file. The Filename
    /// and Filenames properties can be used to get the selected files.
    /// Returns an enum value indicating which button was clicked on the dialog.
    DialogResults showSave();

    /// Gets or sets the initial filename displayed when the dialog is first displayed.
    /// When a new FileDialog object is created this defaults to an empty string so no
    /// initial filename is specified.
    /// 
    /// If the showOpen option is used, the file must
    /// already exist in the directory specified by the initialDirectory property. If
    /// it doesn't exist, the initial filename will not be used.
    std::string initialFilename() const;
    bool initialFilename(const std::string& value);

    ADSK_CORE_FILEDIALOG_API static const char* classType();
    ADSK_CORE_FILEDIALOG_API const char* objectType() const override;
    ADSK_CORE_FILEDIALOG_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FILEDIALOG_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* title_raw() const = 0;
    virtual bool title_raw(const char* value) = 0;
    virtual char* filename_raw() const = 0;
    virtual char** filenames_raw(size_t& return_size) const = 0;
    virtual char* filter_raw() const = 0;
    virtual bool filter_raw(const char* value) = 0;
    virtual int filterIndex_raw() const = 0;
    virtual bool filterIndex_raw(int value) = 0;
    virtual char* initialDirectory_raw() const = 0;
    virtual bool initialDirectory_raw(const char* value) = 0;
    virtual bool isMultiSelectEnabled_raw() const = 0;
    virtual bool isMultiSelectEnabled_raw(bool value) = 0;
    virtual DialogResults showOpen_raw() = 0;
    virtual DialogResults showSave_raw() = 0;
    virtual char* initialFilename_raw() const = 0;
    virtual bool initialFilename_raw(const char* value) = 0;
};

// Inline wrappers

inline std::string FileDialog::title() const
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

inline bool FileDialog::title(const std::string& value)
{
    return title_raw(value.c_str());
}

inline std::string FileDialog::filename() const
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

inline std::vector<std::string> FileDialog::filenames() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= filenames_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(p);
    }
    return res;
}

inline std::string FileDialog::filter() const
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

inline bool FileDialog::filter(const std::string& value)
{
    return filter_raw(value.c_str());
}

inline int FileDialog::filterIndex() const
{
    int res = filterIndex_raw();
    return res;
}

inline bool FileDialog::filterIndex(int value)
{
    return filterIndex_raw(value);
}

inline std::string FileDialog::initialDirectory() const
{
    std::string res;

    char* p= initialDirectory_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool FileDialog::initialDirectory(const std::string& value)
{
    return initialDirectory_raw(value.c_str());
}

inline bool FileDialog::isMultiSelectEnabled() const
{
    bool res = isMultiSelectEnabled_raw();
    return res;
}

inline bool FileDialog::isMultiSelectEnabled(bool value)
{
    return isMultiSelectEnabled_raw(value);
}

inline DialogResults FileDialog::showOpen()
{
    DialogResults res = showOpen_raw();
    return res;
}

inline DialogResults FileDialog::showSave()
{
    DialogResults res = showSave_raw();
    return res;
}

inline std::string FileDialog::initialFilename() const
{
    std::string res;

    char* p= initialFilename_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool FileDialog::initialFilename(const std::string& value)
{
    return initialFilename_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FILEDIALOG_API