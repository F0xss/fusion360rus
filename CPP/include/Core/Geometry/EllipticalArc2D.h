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
# ifdef __COMPILING_ADSK_CORE_ELLIPTICALARC2D_CPP__
# define ADSK_CORE_ELLIPTICALARC2D_API XI_EXPORT
# else
# define ADSK_CORE_ELLIPTICALARC2D_API
# endif
#else
# define ADSK_CORE_ELLIPTICALARC2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve2D;
    class Point2D;
    class Vector2D;
}}

namespace adsk { namespace core {

/// Transient 2D elliptical arc. A transient elliptical arc is not displayed or saved in a document.
/// Transient 2D elliptical arcs are used as a wrapper to work with raw 2D elliptical arc information.
/// They are created statically using the create method of the EllipticalArc2D class.
class EllipticalArc2D : public Curve2D {
public:

    /// Creates a transient 2D elliptical arc
    /// center : A Point2D object that defines the center of the elliptical arc.
    /// majorAxis : The major axis of the elliptical arc
    /// majorRadius : The major radius of the of the elliptical arc.
    /// minorRadius : The minor radius of the of the elliptical arc.
    /// startAngle : The start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// endAngle : The end angle of the elliptical arc in radians, where 0 is along the major axis.
    /// Returns the newly created elliptical arc or null if the creation failed.
    static Ptr<EllipticalArc2D> create(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle);

    /// Gets and sets the center position of the elliptical arc.
    Ptr<Point2D> center() const;
    bool center(const Ptr<Point2D>& value);

    /// Gets and sets the major axis of the elliptical arc.
    Ptr<Vector2D> majorAxis() const;
    bool majorAxis(const Ptr<Vector2D>& value);

    /// Gets and sets the major radius of the elliptical arc.
    double majorRadius() const;
    bool majorRadius(double value);

    /// Gets and sets the minor radius of the elliptical arc.
    double minorRadius() const;
    bool minorRadius(double value);

    /// Gets and sets the start angle of the elliptical arc in radians, where 0 is along the major axis.
    double startAngle() const;
    bool startAngle(double value);

    /// Gets and sets the end angle of the elliptical arc in radians, where 0 is along the major axis.
    double endAngle() const;
    bool endAngle(double value);

    /// Indicates if the sweep direction of the elliptical arc is clockwise or counterclockwise.
    bool isClockwise() const;

    /// Indicates if the elliptical arc is the geometric equivalent of a circular arc
    bool isCircular() const;

    /// Gets the position of the start point of the elliptical arc.
    Ptr<Point2D> startPoint() const;

    /// Gets the position of the end point of the elliptical arc.
    Ptr<Point2D> endPoint() const;

    /// Creates and returns a copy of this EllipticalArc2D object.
    /// Returns a new EllipticalArc2D object that is a copy of this Arc2D object.
    Ptr<EllipticalArc2D> copy() const;

    /// Gets all of the data defining the elliptical arc.
    /// center : The output center point of the elliptical arc.
    /// majorAxis : The output major axis of the elliptical arc.
    /// majorRadius : The output major radius of the of the elliptical arc.
    /// minorRadius : The output minor radius of the of the elliptical arc.
    /// startAngle : The output start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// endAngle : The output end angle of the elliptical arc in radians, where 0 is along the major axis.
    /// Returns true if successful
    bool getData(Ptr<Point2D>& center, Ptr<Vector2D>& majorAxis, double& majorRadius, double& minorRadius, double& startAngle, double& endAngle) const;

    /// center : A Point2D object that defines the center of the elliptical arc.
    /// majorAxis : The major axis of the elliptical arc.
    /// majorRadius : The major radius of the of the elliptical arc.
    /// minorRadius : The minor radius of the of the elliptical arc.
    /// startAngle : The start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// endAngle : The end angle of the elliptical arc in radians, where 0 is along the major axis.
    /// Returns true if redefining the elliptical arc is successful
    bool set(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle);

    /// Returns a NURBS curve that is geometrically identical to the elliptical arc.
    Ptr<NurbsCurve2D> asNurbsCurve() const;

    ADSK_CORE_ELLIPTICALARC2D_API static const char* classType();
    ADSK_CORE_ELLIPTICALARC2D_API const char* objectType() const override;
    ADSK_CORE_ELLIPTICALARC2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ELLIPTICALARC2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ELLIPTICALARC2D_API static EllipticalArc2D* create_raw(Point2D* center, Vector2D* majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle);
    virtual Point2D* center_raw() const = 0;
    virtual bool center_raw(Point2D* value) = 0;
    virtual Vector2D* majorAxis_raw() const = 0;
    virtual bool majorAxis_raw(Vector2D* value) = 0;
    virtual double majorRadius_raw() const = 0;
    virtual bool majorRadius_raw(double value) = 0;
    virtual double minorRadius_raw() const = 0;
    virtual bool minorRadius_raw(double value) = 0;
    virtual double startAngle_raw() const = 0;
    virtual bool startAngle_raw(double value) = 0;
    virtual double endAngle_raw() const = 0;
    virtual bool endAngle_raw(double value) = 0;
    virtual bool isClockwise_raw() const = 0;
    virtual bool isCircular_raw() const = 0;
    virtual Point2D* startPoint_raw() const = 0;
    virtual Point2D* endPoint_raw() const = 0;
    virtual EllipticalArc2D* copy_raw() const = 0;
    virtual bool getData_raw(Point2D*& center, Vector2D*& majorAxis, double& majorRadius, double& minorRadius, double& startAngle, double& endAngle) const = 0;
    virtual bool set_raw(Point2D* center, Vector2D* majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle) = 0;
    virtual NurbsCurve2D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<EllipticalArc2D> EllipticalArc2D::create(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle)
{
    Ptr<EllipticalArc2D> res = create_raw(center.get(), majorAxis.get(), majorRadius, minorRadius, startAngle, endAngle);
    return res;
}

inline Ptr<Point2D> EllipticalArc2D::center() const
{
    Ptr<Point2D> res = center_raw();
    return res;
}

inline bool EllipticalArc2D::center(const Ptr<Point2D>& value)
{
    return center_raw(value.get());
}

inline Ptr<Vector2D> EllipticalArc2D::majorAxis() const
{
    Ptr<Vector2D> res = majorAxis_raw();
    return res;
}

inline bool EllipticalArc2D::majorAxis(const Ptr<Vector2D>& value)
{
    return majorAxis_raw(value.get());
}

inline double EllipticalArc2D::majorRadius() const
{
    double res = majorRadius_raw();
    return res;
}

inline bool EllipticalArc2D::majorRadius(double value)
{
    return majorRadius_raw(value);
}

inline double EllipticalArc2D::minorRadius() const
{
    double res = minorRadius_raw();
    return res;
}

inline bool EllipticalArc2D::minorRadius(double value)
{
    return minorRadius_raw(value);
}

inline double EllipticalArc2D::startAngle() const
{
    double res = startAngle_raw();
    return res;
}

inline bool EllipticalArc2D::startAngle(double value)
{
    return startAngle_raw(value);
}

inline double EllipticalArc2D::endAngle() const
{
    double res = endAngle_raw();
    return res;
}

inline bool EllipticalArc2D::endAngle(double value)
{
    return endAngle_raw(value);
}

inline bool EllipticalArc2D::isClockwise() const
{
    bool res = isClockwise_raw();
    return res;
}

inline bool EllipticalArc2D::isCircular() const
{
    bool res = isCircular_raw();
    return res;
}

inline Ptr<Point2D> EllipticalArc2D::startPoint() const
{
    Ptr<Point2D> res = startPoint_raw();
    return res;
}

inline Ptr<Point2D> EllipticalArc2D::endPoint() const
{
    Ptr<Point2D> res = endPoint_raw();
    return res;
}

inline Ptr<EllipticalArc2D> EllipticalArc2D::copy() const
{
    Ptr<EllipticalArc2D> res = copy_raw();
    return res;
}

inline bool EllipticalArc2D::getData(Ptr<Point2D>& center, Ptr<Vector2D>& majorAxis, double& majorRadius, double& minorRadius, double& startAngle, double& endAngle) const
{
    Point2D* center_ = nullptr;
    Vector2D* majorAxis_ = nullptr;

    bool res = getData_raw(center_, majorAxis_, majorRadius, minorRadius, startAngle, endAngle);
    center = center_;
    majorAxis = majorAxis_;
    return res;
}

inline bool EllipticalArc2D::set(const Ptr<Point2D>& center, const Ptr<Vector2D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle)
{
    bool res = set_raw(center.get(), majorAxis.get(), majorRadius, minorRadius, startAngle, endAngle);
    return res;
}

inline Ptr<NurbsCurve2D> EllipticalArc2D::asNurbsCurve() const
{
    Ptr<NurbsCurve2D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ELLIPTICALARC2D_API