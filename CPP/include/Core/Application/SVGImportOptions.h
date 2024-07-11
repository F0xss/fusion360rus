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
#include "ImportOptions.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_SVGIMPORTOPTIONS_CPP__
# define ADSK_CORE_SVGIMPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CORE_SVGIMPORTOPTIONS_API
# endif
#else
# define ADSK_CORE_SVGIMPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace core {

/// Defines that an SVG import is to be done and specifies the various options.
class SVGImportOptions : public ImportOptions {
public:

    /// Gets and sets the transformation matrix that defines the position, orientation, scale, and
    /// mirroring of the imported SVG data relative to the sketch coordinate system.
    /// This property defaults to an identity matrix in a newly created SVGImportOptions object.
    /// 
    /// You can define mirroring (the equivalent of horizontal or vertical flip) in the matrix. Doing
    /// this gives you more explicit control over the results. You can also use the isHorizontalFlip
    /// and isVerticalFlop properties to define the flip. These result in flipping the geometry along
    /// the center of the geometry's bounding box.
    Ptr<Matrix3D> transform() const;
    bool transform(const Ptr<Matrix3D>& value);

    /// Gets and sets if the SVG is flipped along the sketch X axis.
    /// This property defaults to false in a newly created SVGImportOptions object.
    bool isHorizontalFlip() const;
    bool isHorizontalFlip(bool value);

    /// Gets and sets if the SVG is flipped along the sketch Y axis.
    /// This property defaults to false in a newly created SVGImportOptions object.
    bool isVerticalFlip() const;
    bool isVerticalFlip(bool value);

    /// Gets and sets if any spline curves in the SVG should be drawn with their control
    /// point frames. This property defaults to false in a newly created SVGImportOptions object.
    bool isControlPointFrameDisplayed() const;
    bool isControlPointFrameDisplayed(bool value);

    ADSK_CORE_SVGIMPORTOPTIONS_API static const char* classType();
    ADSK_CORE_SVGIMPORTOPTIONS_API const char* objectType() const override;
    ADSK_CORE_SVGIMPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SVGIMPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(Matrix3D* value) = 0;
    virtual bool isHorizontalFlip_raw() const = 0;
    virtual bool isHorizontalFlip_raw(bool value) = 0;
    virtual bool isVerticalFlip_raw() const = 0;
    virtual bool isVerticalFlip_raw(bool value) = 0;
    virtual bool isControlPointFrameDisplayed_raw() const = 0;
    virtual bool isControlPointFrameDisplayed_raw(bool value) = 0;
};

// Inline wrappers

inline Ptr<Matrix3D> SVGImportOptions::transform() const
{
    Ptr<Matrix3D> res = transform_raw();
    return res;
}

inline bool SVGImportOptions::transform(const Ptr<Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline bool SVGImportOptions::isHorizontalFlip() const
{
    bool res = isHorizontalFlip_raw();
    return res;
}

inline bool SVGImportOptions::isHorizontalFlip(bool value)
{
    return isHorizontalFlip_raw(value);
}

inline bool SVGImportOptions::isVerticalFlip() const
{
    bool res = isVerticalFlip_raw();
    return res;
}

inline bool SVGImportOptions::isVerticalFlip(bool value)
{
    return isVerticalFlip_raw(value);
}

inline bool SVGImportOptions::isControlPointFrameDisplayed() const
{
    bool res = isControlPointFrameDisplayed_raw();
    return res;
}

inline bool SVGImportOptions::isControlPointFrameDisplayed(bool value)
{
    return isControlPointFrameDisplayed_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SVGIMPORTOPTIONS_API