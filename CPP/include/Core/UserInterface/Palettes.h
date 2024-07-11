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
# ifdef __COMPILING_ADSK_CORE_PALETTES_CPP__
# define ADSK_CORE_PALETTES_API XI_EXPORT
# else
# define ADSK_CORE_PALETTES_API
# endif
#else
# define ADSK_CORE_PALETTES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Palette;
}}

namespace adsk { namespace core {

/// Provides access to a set of palettes, which are docked or floating windows that display HTML.
class Palettes : public Base {
public:

    /// Creates a new Palette.
    /// id : The unique id for this palette. The id must be unique with respect to all of the palettes.
    /// name : The displayed name of this palette. This is the name visible in the user interface.
    /// htmlFileURL : Specifies the URL to the HTML file that will be displayed in the palette. This can be a local file or on the web.
    /// isVisible : Specifies if the palette is initially visible or not. It's useful to create it invisibly, change other desired
    /// properties and then use the isVisible property to finally make it visible to the user.
    /// showCloseButton : Specifies if a "Close" button should be displayed on the palette to allow the user to easily close it.
    /// isResizable : Specifies if the palette can be resized by the user or not.
    /// width : Specifies the width of the palette in pixels. If no width is specified a default width will be used.
    /// height : Specifies the height of the palette in pixels. If no height is specified a default height will be used.
    /// useNewWebBrowser : Specifies if you want to use the old or new web browser. A palette is essentially a dialog that hosts
    /// a web browser. To support this type of functionality, Fusion has used CEF (Chromium Embedded Framework).
    /// Fusion is in the process of switching to the Qt Web Browser wherever an embedded browser is needed in the product.
    /// As this transition occurs, Fusion is supporting both web browsers. This argument is optional and defaults
    /// to False, which means the palette will behave as before and use the CEF browser. Setting the argument to
    /// True will cause the palette to use the new QT Web Browser.
    /// 
    /// When Fusion completes the transition to the QT Web Browser, support for the CEF browser will be removed from Fusion,
    /// and you will always get a QT Web Browser regardless of how the argument is set. Because of this, it is highly
    /// recommended you set this argument to true to use the new browser because when support for the CEF browser is removed
    /// you will automatically be forced to use the QT Web Browser.
    /// 
    /// This argument is no longer used because the new QT Web Browser is always used regardless of this parameter's value.
    /// Returns the newly created palette or null in the case the creation failed.
    Ptr<Palette> add(const std::string& id, const std::string& name, const std::string& htmlFileURL, bool isVisible, bool showCloseButton, bool isResizable, int width = 200, int height = 200, bool useNewWebBrowser = true);

    /// Returns the specified palette using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Palette> item(size_t index) const;

    /// Returns the palette at the specified ID.
    /// id : The Id of the palette within the collection to return.
    /// Returns the palette of the specified id or null if no palette has the specified id.
    Ptr<Palette> itemById(const std::string& id) const;

    /// Gets the number of Palettes.
    size_t count() const;

    /// Creates a new Palette.
    /// id : The unique id for this palette. The id must be unique with respect to all of the palettes.
    /// name : The displayed name of this palette. This is the name visible in the user interface.
    /// htmlFileURL : Specifies the URL to the HTML file that will be displayed in the palette. This can be a local file or a URL on the web
    /// where the HTML will be read. To avoid reading a file, this can also be the full HTML definition as a string.
    /// 
    /// If you are providing the HTML content as a string, it should begin with the <html> element. Any references made
    /// in the HTML should be to URL's and not local files since the local path is ambiguous.
    /// isVisible : Specifies if the palette is initially visible or not. It's useful to create it invisibly, change other desired
    /// properties and then use the isVisible property to finally make it visible to the user.
    /// showCloseButton : Specifies if a "Close" button should be displayed on the palette to allow the user to easily close it.
    /// isResizable : Specifies if the palette can be resized by the user or not.
    /// width : Specifies the width of the palette in pixels. If no width is specified a default width will be used.
    /// height : Specifies the height of the palette in pixels. If no height is specified a default height will be used.
    /// Returns the newly created palette or null in the case the creation failed.
    Ptr<Palette> add2(const std::string& id, const std::string& name, const std::string& htmlFileURL, bool isVisible, bool showCloseButton, bool isResizable, int width = 200, int height = 200);

    typedef Palette iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_PALETTES_API static const char* classType();
    ADSK_CORE_PALETTES_API const char* objectType() const override;
    ADSK_CORE_PALETTES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PALETTES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Palette* add_raw(const char* id, const char* name, const char* htmlFileURL, bool isVisible, bool showCloseButton, bool isResizable, int width, int height, bool useNewWebBrowser) = 0;
    virtual Palette* item_raw(size_t index) const = 0;
    virtual Palette* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Palette* add2_raw(const char* id, const char* name, const char* htmlFileURL, bool isVisible, bool showCloseButton, bool isResizable, int width, int height) = 0;
};

// Inline wrappers

inline Ptr<Palette> Palettes::add(const std::string& id, const std::string& name, const std::string& htmlFileURL, bool isVisible, bool showCloseButton, bool isResizable, int width, int height, bool useNewWebBrowser)
{
    Ptr<Palette> res = add_raw(id.c_str(), name.c_str(), htmlFileURL.c_str(), isVisible, showCloseButton, isResizable, width, height, useNewWebBrowser);
    return res;
}

inline Ptr<Palette> Palettes::item(size_t index) const
{
    Ptr<Palette> res = item_raw(index);
    return res;
}

inline Ptr<Palette> Palettes::itemById(const std::string& id) const
{
    Ptr<Palette> res = itemById_raw(id.c_str());
    return res;
}

inline size_t Palettes::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Palette> Palettes::add2(const std::string& id, const std::string& name, const std::string& htmlFileURL, bool isVisible, bool showCloseButton, bool isResizable, int width, int height)
{
    Ptr<Palette> res = add2_raw(id.c_str(), name.c_str(), htmlFileURL.c_str(), isVisible, showCloseButton, isResizable, width, height);
    return res;
}

template <class OutputIterator> inline void Palettes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PALETTES_API