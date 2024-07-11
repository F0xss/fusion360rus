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
# ifdef __COMPILING_ADSK_CORE_PROGRESSDIALOG_CPP__
# define ADSK_CORE_PROGRESSDIALOG_API XI_EXPORT
# else
# define ADSK_CORE_PROGRESSDIALOG_API
# endif
#else
# define ADSK_CORE_PROGRESSDIALOG_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides access to the progress dialog.
class ProgressDialog : public Base {
public:

    /// Displays the progress dialog that includes a progress bar that can be used to display a continually updated
    /// message indicating the progress of a process that will take more than a few seconds.
    /// The progress is determined by comparing the current progress value with the minimum and maximum values.
    /// title : Sets the title for the progress dialog
    /// message : The message to display along with the progress bar. The following symbols can be used
    /// to display values. "%p" is replaced by the percentage completed. "%v" is replaced
    /// by the current value. %m is replaced by the total number of steps. For example, the
    /// message "Processing section %v of %m." will result in the message "Processing section
    /// 1 of 10." to be displayed if the maximum value is 10 and the current value is 1.
    /// minimumValue : The minimum value of the progress bar. This is used along with the maximum value and the
    /// progress value to compute the current percentage complete. This is also the initial
    /// progress value when the progress bar is first displayed.
    /// maximumValue : The maximum value of the progress bar. This is used along with the minimum value and the
    /// progress value to compute the current percentage complete.
    /// delay : Specifies the time interval in seconds to delay displaying the Progress Dialog. This provides a way to hide
    /// the progress dialog before it actually gets displayed, which is useful for cases where the progress of the
    /// operation being tracked completes quickly and there is no need to indicate progress to the user.
    /// Returns true if successful.
    bool show(const std::string& title, const std::string& message, int minimumValue, int maximumValue, int delay = 0);

    /// Hides the progress dialog. This should be used when the process has completed.
    /// Returns true if successful.
    bool hide();

    /// Gets and sets the title of the progress dialog
    std::string title() const;
    bool title(const std::string& value);

    /// Gets and sets the message to display along with the progress bar. The following symbols can be used
    /// to display values. "%p" is replaced by the percentage completed. "%v" is replaced
    /// by the current value. %m is replaced by the total number of steps. For example, the
    /// message "Processing section %v of %m." will result in the message "Processing section
    /// 1 of 10." to be displayed if the maximum value is 10 and the current value is 1.
    /// Specify an empty string ("") for no message to appear along with the progress panel.
    std::string message() const;
    bool message(const std::string& value);

    /// The minimum value of the progress bar. This is used along with the maximum value and the
    /// progress value to compute the current percentage complete. This is also the initial
    /// progress value when the progress bar is first displayed.
    int minimumValue() const;
    bool minimumValue(int value);

    /// The maximum value of the progress bar. This is used along with the minimum value and the
    /// progress value to compute the current percentage complete.
    int maximumValue() const;
    bool maximumValue(int value);

    /// Gets and sets the current progress bar value. Progress is determined based on this value relative to
    /// the minimum and maximum values. This will update the values displayed
    /// in the message string.
    int progressValue() const;
    bool progressValue(int value);

    /// Gets and sets if the cancel button is included in the dialog. This is false by default.
    bool isCancelButtonShown() const;
    bool isCancelButtonShown(bool value);

    /// Indicates if the cancel button was selected the last time the Progress Dialog was shown.
    bool wasCancelled() const;

    /// Sets the text label on the Cancel button. The default text label is "Cancel".
    std::string cancelButtonText() const;
    bool cancelButtonText(const std::string& value);

    /// Gets and sets if the dialog background is translucent. This is false by default
    bool isBackgroundTranslucent() const;
    bool isBackgroundTranslucent(bool value);

    /// Gets if the Progress Dialog is currently being displayed
    bool isShowing() const;

    /// Method that resets the progress bar. The progress bar "rewinds" and shows no progress.
    /// This is the same as setting the progress value to the minimum value.
    /// Returns true if successful
    bool reset();

    ADSK_CORE_PROGRESSDIALOG_API static const char* classType();
    ADSK_CORE_PROGRESSDIALOG_API const char* objectType() const override;
    ADSK_CORE_PROGRESSDIALOG_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PROGRESSDIALOG_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool show_raw(const char* title, const char* message, int minimumValue, int maximumValue, int delay) = 0;
    virtual bool hide_raw() = 0;
    virtual char* title_raw() const = 0;
    virtual bool title_raw(const char* value) = 0;
    virtual char* message_raw() const = 0;
    virtual bool message_raw(const char* value) = 0;
    virtual int minimumValue_raw() const = 0;
    virtual bool minimumValue_raw(int value) = 0;
    virtual int maximumValue_raw() const = 0;
    virtual bool maximumValue_raw(int value) = 0;
    virtual int progressValue_raw() const = 0;
    virtual bool progressValue_raw(int value) = 0;
    virtual bool isCancelButtonShown_raw() const = 0;
    virtual bool isCancelButtonShown_raw(bool value) = 0;
    virtual bool wasCancelled_raw() const = 0;
    virtual char* cancelButtonText_raw() const = 0;
    virtual bool cancelButtonText_raw(const char* value) = 0;
    virtual bool isBackgroundTranslucent_raw() const = 0;
    virtual bool isBackgroundTranslucent_raw(bool value) = 0;
    virtual bool isShowing_raw() const = 0;
    virtual bool reset_raw() = 0;
};

// Inline wrappers

inline bool ProgressDialog::show(const std::string& title, const std::string& message, int minimumValue, int maximumValue, int delay)
{
    bool res = show_raw(title.c_str(), message.c_str(), minimumValue, maximumValue, delay);
    return res;
}

inline bool ProgressDialog::hide()
{
    bool res = hide_raw();
    return res;
}

inline std::string ProgressDialog::title() const
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

inline bool ProgressDialog::title(const std::string& value)
{
    return title_raw(value.c_str());
}

inline std::string ProgressDialog::message() const
{
    std::string res;

    char* p= message_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ProgressDialog::message(const std::string& value)
{
    return message_raw(value.c_str());
}

inline int ProgressDialog::minimumValue() const
{
    int res = minimumValue_raw();
    return res;
}

inline bool ProgressDialog::minimumValue(int value)
{
    return minimumValue_raw(value);
}

inline int ProgressDialog::maximumValue() const
{
    int res = maximumValue_raw();
    return res;
}

inline bool ProgressDialog::maximumValue(int value)
{
    return maximumValue_raw(value);
}

inline int ProgressDialog::progressValue() const
{
    int res = progressValue_raw();
    return res;
}

inline bool ProgressDialog::progressValue(int value)
{
    return progressValue_raw(value);
}

inline bool ProgressDialog::isCancelButtonShown() const
{
    bool res = isCancelButtonShown_raw();
    return res;
}

inline bool ProgressDialog::isCancelButtonShown(bool value)
{
    return isCancelButtonShown_raw(value);
}

inline bool ProgressDialog::wasCancelled() const
{
    bool res = wasCancelled_raw();
    return res;
}

inline std::string ProgressDialog::cancelButtonText() const
{
    std::string res;

    char* p= cancelButtonText_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ProgressDialog::cancelButtonText(const std::string& value)
{
    return cancelButtonText_raw(value.c_str());
}

inline bool ProgressDialog::isBackgroundTranslucent() const
{
    bool res = isBackgroundTranslucent_raw();
    return res;
}

inline bool ProgressDialog::isBackgroundTranslucent(bool value)
{
    return isBackgroundTranslucent_raw(value);
}

inline bool ProgressDialog::isShowing() const
{
    bool res = isShowing_raw();
    return res;
}

inline bool ProgressDialog::reset()
{
    bool res = reset_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PROGRESSDIALOG_API