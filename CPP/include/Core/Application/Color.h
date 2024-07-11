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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_COLOR_CPP__
# define ADSK_CORE_COLOR_API XI_EXPORT
# else
# define ADSK_CORE_COLOR_API
# endif
#else
# define ADSK_CORE_COLOR_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The Color class wraps all of the information that defines a simple color.
class Color : public Base {
public:

    /// Gets and sets the red component of the color. The value can be 0 to 255.
    short red() const;
    bool red(short value);

    /// Gets and sets the green component of the color. The value can be 0 to 255.
    short green() const;
    bool green(short value);

    /// Gets and sets the blue component of the color. The value can be 0 to 255.
    short blue() const;
    bool blue(short value);

    /// Gets and sets the opacity of the color. The value can be 0 to 255.
    short opacity() const;
    bool opacity(short value);

    /// Gets all of the information defining this color.
    /// red : The red component of the color. The value can be 0 to 255.
    /// green : The green component of the color. The value can be 0 to 255.
    /// blue : The blue component of the color. The value can be 0 to 255.
    /// opacity : The opacity of the color. The value can be 0 to 255. A value of 255 indicates
    /// it is completely opaque.
    /// Returns true if getting the color information was successful.
    bool getColor(short& red, short& green, short& blue, short& opacity) const;

    /// Sets all of the color information.
    /// red : The red component of the color. The value can be 0 to 255.
    /// green : The green component of the color. The value can be 0 to 255.
    /// blue : The blue component of the color. The value can be 0 to 255.
    /// opacity : The opacity of the color. The value can be 0 to 255. A value of 255 indicates
    /// it is completely opaque. Depending on where the color is used, the opacity
    /// value may be ignored.
    /// Returns true if setting the color information was successful.
    bool setColor(short red, short green, short blue, short opacity);

    /// Creates a new color.
    /// red : The red component of the color. The value can be 0 to 255.
    /// green : The green component of the color. The value can be 0 to 255.
    /// blue : The blue component of the color. The value can be 0 to 255.
    /// opacity : The opacity of the color. The value can be 0 to 255.
    /// Returns the newly created color or null if the creation failed.
    static Ptr<Color> create(short red, short green, short blue, short opacity);

    ADSK_CORE_COLOR_API static const char* classType();
    ADSK_CORE_COLOR_API const char* objectType() const override;
    ADSK_CORE_COLOR_API void* queryInterface(const char* id) const override;
    ADSK_CORE_COLOR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual short red_raw() const = 0;
    virtual bool red_raw(short value) = 0;
    virtual short green_raw() const = 0;
    virtual bool green_raw(short value) = 0;
    virtual short blue_raw() const = 0;
    virtual bool blue_raw(short value) = 0;
    virtual short opacity_raw() const = 0;
    virtual bool opacity_raw(short value) = 0;
    virtual bool getColor_raw(short& red, short& green, short& blue, short& opacity) const = 0;
    virtual bool setColor_raw(short red, short green, short blue, short opacity) = 0;
    ADSK_CORE_COLOR_API static Color* create_raw(short red, short green, short blue, short opacity);
};

// Inline wrappers

inline short Color::red() const
{
    short res = red_raw();
    return res;
}

inline bool Color::red(short value)
{
    return red_raw(value);
}

inline short Color::green() const
{
    short res = green_raw();
    return res;
}

inline bool Color::green(short value)
{
    return green_raw(value);
}

inline short Color::blue() const
{
    short res = blue_raw();
    return res;
}

inline bool Color::blue(short value)
{
    return blue_raw(value);
}

inline short Color::opacity() const
{
    short res = opacity_raw();
    return res;
}

inline bool Color::opacity(short value)
{
    return opacity_raw(value);
}

inline bool Color::getColor(short& red, short& green, short& blue, short& opacity) const
{
    bool res = getColor_raw(red, green, blue, opacity);
    return res;
}

inline bool Color::setColor(short red, short green, short blue, short opacity)
{
    bool res = setColor_raw(red, green, blue, opacity);
    return res;
}

inline Ptr<Color> Color::create(short red, short green, short blue, short opacity)
{
    Ptr<Color> res = create_raw(red, green, blue, opacity);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_COLOR_API