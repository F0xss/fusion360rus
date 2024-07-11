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
#include "CommandInput.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_BROWSERCOMMANDINPUT_CPP__
# define ADSK_CORE_BROWSERCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_BROWSERCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_BROWSERCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Browser command inputs behave as a browser where you can define HTML to be displayed within the
/// area occupied by the command input.
class BrowserCommandInput : public CommandInput {
public:

    /// Gets and sets the URL to the HTML file currently being displayed. This can be local or on the web.
    std::string htmlFileURL() const;
    bool htmlFileURL(const std::string& value);

    /// Gets and sets the minimum height of the browser within the command dialog in pixels. As the user resizes the dialog, the area taken
    /// up by the browser will shrink and grow to fit within the defined space. It will never shrink to be less than the
    /// minimum height or expand to be larger than the maximum height. If the dialog can't fit the browser at the minimum size
    /// a scroll bar will appear for the dialog to allow the user to scroll to access all the inputs in the dialog.
    int minimumHeight() const;
    bool minimumHeight(int value);

    /// Gets and sets the maximum height of the browser within the command dialog, in pixels. As the user resizes
    /// the dialog, the area taken up by the browser will shrink and grow to fit within the defined space. It will never
    /// shrink to be less than the minimum height or expand to be larger than the maximum height. If the content displayed
    /// within the browser does not fit within the current area, a scroll bar will appear to allow the user to scroll to see
    /// the entire browser content. The default value of zero sets no maximum height, so the browser will expand to the maximum
    /// extent available.
    int maximumHeight() const;
    bool maximumHeight(int value);

    /// Sends a string to the JavaScript associated with the loaded HTML.
    /// action : The "action" string to pass to the JavaScript associated with the HTML. This string can be
    /// anything but will typically be JSON formatted information.
    /// data : The "data" string to pass to the JavaScript associated with the HTML. This string can be
    /// anything but will typically be JSON formatted information.
    /// This API call is asynchronous and true is returned if the send was successful. Any response from
    /// the JavaScript response will be returned through the incomingFromHTML event using the data field of
    /// the provided HTMLEvent object where the action property is "response".
    bool sendInfoToHTML(const std::string& action, const std::string& data);

    ADSK_CORE_BROWSERCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_BROWSERCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_BROWSERCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BROWSERCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* htmlFileURL_raw() const = 0;
    virtual bool htmlFileURL_raw(const char* value) = 0;
    virtual int minimumHeight_raw() const = 0;
    virtual bool minimumHeight_raw(int value) = 0;
    virtual int maximumHeight_raw() const = 0;
    virtual bool maximumHeight_raw(int value) = 0;
    virtual bool sendInfoToHTML_raw(const char* action, const char* data) = 0;
};

// Inline wrappers

inline std::string BrowserCommandInput::htmlFileURL() const
{
    std::string res;

    char* p= htmlFileURL_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool BrowserCommandInput::htmlFileURL(const std::string& value)
{
    return htmlFileURL_raw(value.c_str());
}

inline int BrowserCommandInput::minimumHeight() const
{
    int res = minimumHeight_raw();
    return res;
}

inline bool BrowserCommandInput::minimumHeight(int value)
{
    return minimumHeight_raw(value);
}

inline int BrowserCommandInput::maximumHeight() const
{
    int res = maximumHeight_raw();
    return res;
}

inline bool BrowserCommandInput::maximumHeight(int value)
{
    return maximumHeight_raw(value);
}

inline bool BrowserCommandInput::sendInfoToHTML(const std::string& action, const std::string& data)
{
    bool res = sendInfoToHTML_raw(action.c_str(), data.c_str());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_BROWSERCOMMANDINPUT_API