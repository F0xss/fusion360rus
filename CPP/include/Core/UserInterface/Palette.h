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
# ifdef __COMPILING_ADSK_CORE_PALETTE_CPP__
# define ADSK_CORE_PALETTE_API XI_EXPORT
# else
# define ADSK_CORE_PALETTE_API
# endif
#else
# define ADSK_CORE_PALETTE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class HTMLEvent;
    class NavigationEvent;
    class UserInterfaceGeneralEvent;
}}

namespace adsk { namespace core {

/// A Palette is a floating or docked dialog in Fusion 360. The browser is an
/// example of a built-in palette. The contents of a custom palette are
/// created by displaying an HTML file.
class Palette : public Base {
public:

    /// Gets The unique, language independent, ID of this palette.
    std::string id() const;

    /// Gets and sets whether this palette is currently being displayed in the user interface.
    bool isVisible() const;
    bool isVisible(bool value);

    /// Gets and sets the URL to the HTML file that will be displayed in the palette. This can be a local file or a URL on the web
    /// where the HTML will be read. To avoid reading a file, this can also be the full HTML definition as a string.
    /// 
    /// If you are providing the HTML content as a string, it should begin with the <html> element. Any references made
    /// in the HTML should be to URL's and not local files since the local path is ambiguous.
    std::string htmlFileURL() const;
    bool htmlFileURL(const std::string& value);

    /// Sends the string to the JavaScript associated with the loaded HTML.
    /// action : The "action" string to pass to the JavaScript associated with the HTML. This string can be
    /// anything but will typically be JSON formatted information.
    /// data : The "data" string to pass to the JavaScript associated with the HTML. This string can be
    /// anything but will typically be JSON formatted information.
    /// Returns a string that can be anything that your JavaScript code generates. The JavaScript
    /// should always return some content because an empty string is used to indicate a failure.
    /// 
    /// If useNewWebBrowser flag is set to true while creating the palette control this API call
    /// will be asynchronous and an empty string is returned. Response will come in data field of HTMLEvent with action
    /// equal to 'response'.
    std::string sendInfoToHTML(const std::string& action, const std::string& data);

    /// This event is fired when the JavaScript associated with the HTML calls the
    /// adsk.fusionSendData function. This allows the HTML to communicate with the add-in by
    /// passing information to the add-in.
    Ptr<HTMLEvent> incomingFromHTML() const;

    /// This event is fired when the user clicks the "Close" button on the palette. You can choose
    /// if the "Close" button is available or not when you initially create the palette. When a
    /// palette is closed, it still exists but is change to invisible so you can still interact with it and
    /// retrieve any needed information and can make it visible again. Use the deleteMe method to
    /// delete the palette.
    Ptr<UserInterfaceGeneralEvent> closed() const;

    /// Gets and set the name of the palette as seen in the user interface. The name of native palettes
    /// cannot be set.
    std::string name() const;
    bool name(const std::string& value);

    /// Deletes this palette. Fusion 360 native palettes cannot be deleted. Use the
    /// isNative property to determine if this is a native or API created palette.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Indicates if this is one of the standard Fusion 360 palettes or a custom palette
    /// created through the API. If true, it is a standard Fusion 360 palette and will
    /// have some restrictions on changing its properties and cannot be deleted.
    bool isNative() const;

    /// Defines the docking behavior for this palette. This controls how the user is allowed to dock the palette.
    PaletteDockingOptions dockingOption() const;
    bool dockingOption(PaletteDockingOptions value);

    /// Gets and sets how the palette is currently docked.
    PaletteDockingStates dockingState() const;
    bool dockingState(PaletteDockingStates value);

    /// Gets and sets the width of the palette. Setting this property may not always set the width. Depending on
    /// how the palette is docked or snapped, the width may not be editable.
    int width() const;
    bool width(int value);

    /// Gets and sets the height of the palette. Setting this property may not always set the height. Depending on
    /// how the palette is docked or snapped, the height may not be editable.
    int height() const;
    bool height(int value);

    /// Sets the position of the palette. If the palette is docked or snapped, this will result in changing it
    /// to be floating.
    /// left : The position of the left side of the palette relative to screen space and in pixels. Because palettes can be
    /// positioned outside of the Fusion 360 window, a value of zero indicates the left side of the screen and not the
    /// Fusion 360 window.
    /// top : The position of the top of the palette relative to screen space and in pixels. Because palettes can be
    /// positioned outside of the Fusion 360 window, a value of zero indicates the top of the screen and not the
    /// Fusion 360 window.
    /// Returns true if setting the position was successful.
    bool setPosition(int left, int top);

    /// Sets the size of the palette. This is best used for a floating palette because either the width or
    /// height can be locked when a palette is docked.
    /// width : Specifies the width of the palette. Depending on how the palette is docked or snapped, the width
    /// may not be editable.
    /// height : Specifies the height of the palette. Depending on how the palette is docked or snapped, the height
    /// may not be editable.
    /// Returns true if the sizing was successful. It is still considered a success even if the width or
    /// height could not be changed because of how the palette is docked or snapped.
    bool setSize(int width, int height);

    /// Gets and sets the left side of the palette relative to screen space and in pixels. Because palettes can be
    /// positioned outside of the Fusion 360 window, a value of zero indicates the left side of the screen and not the
    /// Fusion 360 window.
    int left() const;
    bool left(int value);

    /// Gets and sets the top of the palette relative to screen space and in pixels. Because palettes can be
    /// positioned outside of the Fusion 360 window, a value of zero indicates the top of the screen and not the
    /// Fusion 360 window.
    int top() const;
    bool top(int value);

    /// Snaps this palette to another palette.
    /// palette : Specifies the palette to snap to.
    /// snapOption : Specifies how this palette should be snapped to the other palette.
    /// Returns true if the palette was successfully snapped to the other palette.
    bool snapTo(const Ptr<Palette>& palette, PaletteSnapOptions snapOption);

    /// Sets the minimum size of the palette. The user cannot resize it to be smaller than
    /// this size. This does not change the current size of the palette unless the palette
    /// is already smaller than this size.
    /// 
    /// Calling this method and setting the width and height to zero, removes the minimum
    /// size restriction.
    /// width : Specifies the minimum width of the palette.
    /// height : Specifies the minimum height of the palette.
    /// Returns true if setting the minimum size was successful.
    bool setMinimumSize(int width, int height);

    /// Sets the maximum size of the palette. The user cannot resize it to be larger than
    /// this size. This does not change the current size of the palette unless the palette
    /// is already larger than this size.
    /// 
    /// Calling this method and setting the width and height to zero, removes the maximum
    /// size restriction.
    /// width : Specifies the maximum width of the palette.
    /// height : Specifies the maximum height of the palette.
    /// Returns true if setting the maximum size was successful.
    bool setMaximumSize(int width, int height);

    /// This event is fired when a navigation event occurs on the page. This allows the add-in to determine
    /// how this navigation should be handled by the browser.
    Ptr<NavigationEvent> navigatingURL() const;

    ADSK_CORE_PALETTE_API static const char* classType();
    ADSK_CORE_PALETTE_API const char* objectType() const override;
    ADSK_CORE_PALETTE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PALETTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual bool isVisible_raw() const = 0;
    virtual bool isVisible_raw(bool value) = 0;
    virtual char* htmlFileURL_raw() const = 0;
    virtual bool htmlFileURL_raw(const char* value) = 0;
    virtual char* sendInfoToHTML_raw(const char* action, const char* data) = 0;
    virtual HTMLEvent* incomingFromHTML_raw() const = 0;
    virtual UserInterfaceGeneralEvent* closed_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool isNative_raw() const = 0;
    virtual PaletteDockingOptions dockingOption_raw() const = 0;
    virtual bool dockingOption_raw(PaletteDockingOptions value) = 0;
    virtual PaletteDockingStates dockingState_raw() const = 0;
    virtual bool dockingState_raw(PaletteDockingStates value) = 0;
    virtual int width_raw() const = 0;
    virtual bool width_raw(int value) = 0;
    virtual int height_raw() const = 0;
    virtual bool height_raw(int value) = 0;
    virtual bool setPosition_raw(int left, int top) = 0;
    virtual bool setSize_raw(int width, int height) = 0;
    virtual int left_raw() const = 0;
    virtual bool left_raw(int value) = 0;
    virtual int top_raw() const = 0;
    virtual bool top_raw(int value) = 0;
    virtual bool snapTo_raw(Palette* palette, PaletteSnapOptions snapOption) = 0;
    virtual bool setMinimumSize_raw(int width, int height) = 0;
    virtual bool setMaximumSize_raw(int width, int height) = 0;
    virtual NavigationEvent* navigatingURL_raw() const = 0;
    virtual void placeholderPalette0() {}
    virtual void placeholderPalette1() {}
    virtual void placeholderPalette2() {}
    virtual void placeholderPalette3() {}
    virtual void placeholderPalette4() {}
    virtual void placeholderPalette5() {}
    virtual void placeholderPalette6() {}
    virtual void placeholderPalette7() {}
    virtual void placeholderPalette8() {}
    virtual void placeholderPalette9() {}
    virtual void placeholderPalette10() {}
    virtual void placeholderPalette11() {}
    virtual void placeholderPalette12() {}
    virtual void placeholderPalette13() {}
    virtual void placeholderPalette14() {}
    virtual void placeholderPalette15() {}
    virtual void placeholderPalette16() {}
    virtual void placeholderPalette17() {}
    virtual void placeholderPalette18() {}
    virtual void placeholderPalette19() {}
    virtual void placeholderPalette20() {}
    virtual void placeholderPalette21() {}
    virtual void placeholderPalette22() {}
    virtual void placeholderPalette23() {}
    virtual void placeholderPalette24() {}
    virtual void placeholderPalette25() {}
    virtual void placeholderPalette26() {}
    virtual void placeholderPalette27() {}
    virtual void placeholderPalette28() {}
    virtual void placeholderPalette29() {}
    virtual void placeholderPalette30() {}
    virtual void placeholderPalette31() {}
    virtual void placeholderPalette32() {}
    virtual void placeholderPalette33() {}
};

// Inline wrappers

inline std::string Palette::id() const
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

inline bool Palette::isVisible() const
{
    bool res = isVisible_raw();
    return res;
}

inline bool Palette::isVisible(bool value)
{
    return isVisible_raw(value);
}

inline std::string Palette::htmlFileURL() const
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

inline bool Palette::htmlFileURL(const std::string& value)
{
    return htmlFileURL_raw(value.c_str());
}

inline std::string Palette::sendInfoToHTML(const std::string& action, const std::string& data)
{
    std::string res;

    char* p= sendInfoToHTML_raw(action.c_str(), data.c_str());
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<HTMLEvent> Palette::incomingFromHTML() const
{
    Ptr<HTMLEvent> res = incomingFromHTML_raw();
    return res;
}

inline Ptr<UserInterfaceGeneralEvent> Palette::closed() const
{
    Ptr<UserInterfaceGeneralEvent> res = closed_raw();
    return res;
}

inline std::string Palette::name() const
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

inline bool Palette::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline bool Palette::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool Palette::isNative() const
{
    bool res = isNative_raw();
    return res;
}

inline PaletteDockingOptions Palette::dockingOption() const
{
    PaletteDockingOptions res = dockingOption_raw();
    return res;
}

inline bool Palette::dockingOption(PaletteDockingOptions value)
{
    return dockingOption_raw(value);
}

inline PaletteDockingStates Palette::dockingState() const
{
    PaletteDockingStates res = dockingState_raw();
    return res;
}

inline bool Palette::dockingState(PaletteDockingStates value)
{
    return dockingState_raw(value);
}

inline int Palette::width() const
{
    int res = width_raw();
    return res;
}

inline bool Palette::width(int value)
{
    return width_raw(value);
}

inline int Palette::height() const
{
    int res = height_raw();
    return res;
}

inline bool Palette::height(int value)
{
    return height_raw(value);
}

inline bool Palette::setPosition(int left, int top)
{
    bool res = setPosition_raw(left, top);
    return res;
}

inline bool Palette::setSize(int width, int height)
{
    bool res = setSize_raw(width, height);
    return res;
}

inline int Palette::left() const
{
    int res = left_raw();
    return res;
}

inline bool Palette::left(int value)
{
    return left_raw(value);
}

inline int Palette::top() const
{
    int res = top_raw();
    return res;
}

inline bool Palette::top(int value)
{
    return top_raw(value);
}

inline bool Palette::snapTo(const Ptr<Palette>& palette, PaletteSnapOptions snapOption)
{
    bool res = snapTo_raw(palette.get(), snapOption);
    return res;
}

inline bool Palette::setMinimumSize(int width, int height)
{
    bool res = setMinimumSize_raw(width, height);
    return res;
}

inline bool Palette::setMaximumSize(int width, int height)
{
    bool res = setMaximumSize_raw(width, height);
    return res;
}

inline Ptr<NavigationEvent> Palette::navigatingURL() const
{
    Ptr<NavigationEvent> res = navigatingURL_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PALETTE_API