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
#include "Curve2D.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_ELLIPSE2D_CPP__
# define ADSK_CORE_ELLIPSE2D_API XI_EXPORT
# else
# define ADSK_CORE_ELLIPSE2D_API
# endif
#else
# define ADSK_CORE_ELLIPSE2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve2D;
    class Point2D;
    class Vector2D;
}}

namespace adsk { namespace core {

/// Transient 2D ellipse. A transient ellipse is not displayed or saved in a document.
/// Transient 2D ellipses are used as a wrapper to work with raw 2D ellipse information.
/// They are created statically using the create method of the Ellipse2D class.
class Ellipse2D : public Curve2D {
public:

    /// Creates a transient 2D ellipse by specifying a center position, major and minor axes,
    /// and major and minor radii.
    /// center : A Point2D object that defines the center of the ellipse.
    /// majorAxis : The major axis of the ellipse
    /// majorRadius : The major radius of the of the ellipse.
    /// minorRadius : The minor radius of the of the ellipse.
    /// Returns the new Ellipse 2D object or null if the creation failed.
    static Ptr<Ellipse2D> create(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius);

    /// Gets and sets the center position of the ellipse.
    Ptr<Point2D> center() const;
    bool center(const Ptr<Point2D>& value);

    /// Gets and sets the major axis of the ellipse.
    Ptr<Vector2D> majorAxis() const;
    bool majorAxis(const Ptr<Vector2D>& value);

    /// Gets and sets the major radius of the ellipse.
    double majorRadius() const;
    bool majorRadius(double value);

    /// Gets and sets the minor radius of the ellipse.
    double minorRadius() const;
    bool minorRadius(double value);

    /// Creates and returns a copy of this Ellipse2D object.
    /// Returns a new Ellipse2D object that is a copy of this Ellipse2D object.
    Ptr<Ellipse2D> copy() const;

    /// Gets all of the data defining the ellipse.
    /// center : The output center point of the ellipse.
    /// majorAxis : The output major axis of the ellipse.
    /// majorRadius : The output major radius of the of the ellipse.
    /// minorRadius : The output minor radius of the of the ellipse.
    /// Returns true if successful.
    bool getData(Ptr<Point2D>& center, Ptr<Vector2D>& majorAxis, double& majorRadius, double& minorRadius) const;

    /// Sets all of the data defining the ellipse.
    /// center : A Point2D object that defines the center of the ellipse.
    /// majorAxis : The major axis of the ellipse.
    /// majorRadius : The major radius of the of the ellipse.
    /// minorRadius : The minor radius of the of the ellipse.
    /// Returns true if redefining the ellipse is successful.
    bool set(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius);

    /// Returns a NURBS curve that is geometrically identical to the ellipse.
    Ptr<NurbsCurve2D> asNurbsCurve() const;

    ADSK_CORE_ELLIPSE2D_API static const char* classType();
    ADSK_CORE_ELLIPSE2D_API const char* objectType() const override;
    ADSK_CORE_ELLIPSE2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ELLIPSE2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ELLIPSE2D_API static Ellipse2D* create_raw(Point2D* center, Vector2D* majorAxis, double majorRadius, double minorRadius);
    virtual Point2D* center_raw() const = 0;
    virtual bool center_raw(Point2D* value) = 0;
    virtual Vector2D* majorAxis_raw() const = 0;
    virtual bool majorAxis_raw(Vector2D* value) = 0;
    virtual double majorRadius_raw() const = 0;
    virtual bool majorRadius_raw(double value) = 0;
    virtual double minorRadius_raw() const = 0;
    virtual bool minorRadius_raw(double value) = 0;
    virtual Ellipse2D* copy_raw() const = 0;
    virtual bool getData_raw(Point2D*& center, Vector2D*& majorAxis, double& majorRadius, double& minorRadius) const = 0;
    virtual bool set_raw(Point2D* center, Vector2D* majorAxis, double majorRadius, double minorRadius) = 0;
    virtual NurbsCurve2D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Ellipse2D> Ellipse2D::create(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius)
{
    Ptr<Ellipse2D> res = create_raw(center.get(), majorAxis.get(), majorRadius, minorRadius);
    return res;
}

inline Ptr<Point2D> Ellipse2D::center() const
{
    Ptr<Point2D> res = center_raw();
    return res;
}

inline bool Ellipse2D::center(const Ptr<Point2D>& value)
{
    return center_raw(value.get());
}

inline Ptr<Vector2D> Ellipse2D::majorAxis() const
{
    Ptr<Vector2D> res = majorAxis_raw();
    return res;
}

inline bool Ellipse2D::majorAxis(const Ptr<Vector2D>& value)
{
    return majorAxis_raw(value.get());
}

inline double Ellipse2D::majorRadius() const
{
    double res = majorRadius_raw();
    return res;
}

inline bool Ellipse2D::majorRadius(double value)
{
    return majorRadius_raw(value);
}

inline double Ellipse2D::minorRadius() const
{
    double res = minorRadius_raw();
    return res;
}

inline bool Ellipse2D::minorRadius(double value)
{
    return minorRadius_raw(value);
}

inline Ptr<Ellipse2D> Ellipse2D::copy() const
{
    Ptr<Ellipse2D> res = copy_raw();
    return res;
}

inline bool Ellipse2D::getData(Ptr<Point2D>& center, Ptr<Vector2D>& majorAxis, double& majorRadius, double& minorRadius) const
{
    Point2D* center_ = nullptr;
    Vector2D* majorAxis_ = nullptr;

    bool res = getData_raw(center_, majorAxis_, majorRadius, minorRadius);
    center = center_;
    majorAxis = majorAxis_;
    return res;
}

inline bool Ellipse2D::set(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius)
{
    bool res = set_raw(center.get(), majorAxis.get(), majorRadius, minorRadius);
    return res;
}

inline Ptr<NurbsCurve2D> Ellipse2D::asNurbsCurve() const
{
    Ptr<NurbsCurve2D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ELLIPSE2D_API