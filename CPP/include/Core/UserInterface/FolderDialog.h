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
# ifdef __COMPILING_ADSK_CORE_FOLDERDIALOG_CPP__
# define ADSK_CORE_FOLDERDIALOG_API XI_EXPORT
# else
# define ADSK_CORE_FOLDERDIALOG_API
# endif
#else
# define ADSK_CORE_FOLDERDIALOG_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides access to a folder selection dialog to allow the user to select a folder.
class FolderDialog : public Base {
public:

    /// Gets or sets the title displayed on the dialog.
    std::string title() const;
    bool title(const std::string& value);

    /// Gets the folder selected by the user in the dialog. This property is
    /// used after the ShowDialog method has been called to retrieve the folder
    /// specified by the user.
    std::string folder() const;

    /// Gets or sets the initial directory displayed by the file dialog box.
    std::string initialDirectory() const;
    bool initialDirectory(const std::string& value);

    /// Displays a modal dialog allowing the user to select a folder. The return value
    /// can be used to determine if the dialog was canceled without selecting a folder.
    /// the folder property can be used to get the selected folder.
    /// Returns an enum value indicating which button was clicked on the dialog.
    DialogResults showDialog();

    ADSK_CORE_FOLDERDIALOG_API static const char* classType();
    ADSK_CORE_FOLDERDIALOG_API const char* objectType() const override;
    ADSK_CORE_FOLDERDIALOG_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FOLDERDIALOG_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* title_raw() const = 0;
    virtual bool title_raw(const char* value) = 0;
    virtual char* folder_raw() const = 0;
    virtual char* initialDirectory_raw() const = 0;
    virtual bool initialDirectory_raw(const char* value) = 0;
    virtual DialogResults showDialog_raw() = 0;
};

// Inline wrappers

inline std::string FolderDialog::title() const
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

inline bool FolderDialog::title(const std::string& value)
{
    return title_raw(value.c_str());
}

inline std::string FolderDialog::folder() const
{
    std::string res;

    char* p= folder_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string FolderDialog::initialDirectory() const
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

inline bool FolderDialog::initialDirectory(const std::string& value)
{
    return initialDirectory_raw(value.c_str());
}

inline DialogResults FolderDialog::showDialog()
{
    DialogResults res = showDialog_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FOLDERDIALOG_API