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
#include "Curve3D.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_LINE3D_CPP__
# define ADSK_CORE_LINE3D_API XI_EXPORT
# else
# define ADSK_CORE_LINE3D_API
# endif
#else
# define ADSK_CORE_LINE3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class InfiniteLine3D;
    class NurbsCurve3D;
    class ObjectCollection;
    class Point3D;
    class Surface;
}}

namespace adsk { namespace core {

/// Transient 3D line. A transient line is not displayed or saved in a document.
/// Transient 3D lines are used as a wrapper to work with raw 3D line information.
/// They are created statically using the create method of the Line3D class.
class Line3D : public Curve3D {
public:

    /// Creates a transient line.
    /// startPoint : The start point of the line.
    /// endPoint : The end point of the line.
    /// Returns the new Line3D object or null if the creation failed.
    static Ptr<Line3D> create(const Ptr<Point3D>& startPoint, const Ptr<Point3D>& endPoint);

    /// Gets and sets the start point of the line.
    Ptr<Point3D> startPoint() const;
    bool startPoint(const Ptr<Point3D>& value);

    /// Gets and sets the end point of the line.
    Ptr<Point3D> endPoint() const;
    bool endPoint(const Ptr<Point3D>& value);

    /// Creates and returns a copy of this line object.
    /// Returns an independent copy of this line object.
    Ptr<Line3D> copy() const;

    /// Creates an equivalent InfiniteLine3D.
    /// Returns an equivalent InfiniteLine3D
    Ptr<InfiniteLine3D> asInfiniteLine() const;

    /// Compare this line with another to check for collinearity
    /// line : The line to compare with for collinearity
    /// Returns true if the two lines are collinear
    bool isColinearTo(const Ptr<Line3D>& line) const;

    /// Intersect this line with a curve to get the intersection point(s).
    /// curve : The intersecting curve.
    /// The curve can be a Line3D, InfininteLine3D, Circle3D, Arc3D, EllipticalArc3D, Ellipse3D,
    /// or NurbsCurve3D.
    /// Returns a collection of the intersection points
    Ptr<ObjectCollection> intersectWithCurve(const Ptr<Curve3D>& curve) const;

    /// Intersect this line with a surface to get the intersection point(s).
    /// surface : The intersecting surface.
    /// The surface can be a Plane, Cone, Cylinder, EllipticalCone, EllipticalCylinder, Sphere,
    /// Torus or a NurbsSurface.
    /// Returns a collection of the intersection points.
    Ptr<ObjectCollection> intersectWithSurface(const Ptr<Surface>& surface) const;

    /// Gets all of the data defining the line segment.
    /// startPoint : The output start point of the line.
    /// endPoint : The output end point of the line.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& startPoint, Ptr<Point3D>& endPoint) const;

    /// Sets all of the data defining the line segment.
    /// startPoint : The start point of the line.
    /// endPoint : The end point of the line.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& startPoint, const Ptr<Point3D>& endPoint);

    /// Returns a NURBS curve that is geometrically identical to the line.
    Ptr<NurbsCurve3D> asNurbsCurve() const;

    ADSK_CORE_LINE3D_API static const char* classType();
    ADSK_CORE_LINE3D_API const char* objectType() const override;
    ADSK_CORE_LINE3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_LINE3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_LINE3D_API static Line3D* create_raw(Point3D* startPoint, Point3D* endPoint);
    virtual Point3D* startPoint_raw() const = 0;
    virtual bool startPoint_raw(Point3D* value) = 0;
    virtual Point3D* endPoint_raw() const = 0;
    virtual bool endPoint_raw(Point3D* value) = 0;
    virtual Line3D* copy_raw() const = 0;
    virtual InfiniteLine3D* asInfiniteLine_raw() const = 0;
    virtual bool isColinearTo_raw(Line3D* line) const = 0;
    virtual ObjectCollection* intersectWithCurve_raw(Curve3D* curve) const = 0;
    virtual ObjectCollection* intersectWithSurface_raw(Surface* surface) const = 0;
    virtual bool getData_raw(Point3D*& startPoint, Point3D*& endPoint) const = 0;
    virtual bool set_raw(Point3D* startPoint, Point3D* endPoint) = 0;
    virtual NurbsCurve3D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Line3D> Line3D::create(const Ptr<Point3D>& startPoint, const Ptr<Point3D>& endPoint)
{
    Ptr<Line3D> res = create_raw(startPoint.get(), endPoint.get());
    return res;
}

inline Ptr<Point3D> Line3D::startPoint() const
{
    Ptr<Point3D> res = startPoint_raw();
    return res;
}

inline bool Line3D::startPoint(const Ptr<Point3D>& value)
{
    return startPoint_raw(value.get());
}

inline Ptr<Point3D> Line3D::endPoint() const
{
    Ptr<Point3D> res = endPoint_raw();
    return res;
}

inline bool Line3D::endPoint(const Ptr<Point3D>& value)
{
    return endPoint_raw(value.get());
}

inline Ptr<Line3D> Line3D::copy() const
{
    Ptr<Line3D> res = copy_raw();
    return res;
}

inline Ptr<InfiniteLine3D> Line3D::asInfiniteLine() const
{
    Ptr<InfiniteLine3D> res = asInfiniteLine_raw();
    return res;
}

inline bool Line3D::isColinearTo(const Ptr<Line3D>& line) const
{
    bool res = isColinearTo_raw(line.get());
    return res;
}

inline Ptr<ObjectCollection> Line3D::intersectWithCurve(const Ptr<Curve3D>& curve) const
{
    Ptr<ObjectCollection> res = intersectWithCurve_raw(curve.get());
    return res;
}

inline Ptr<ObjectCollection> Line3D::intersectWithSurface(const Ptr<Surface>& surface) const
{
    Ptr<ObjectCollection> res = intersectWithSurface_raw(surface.get());
    return res;
}

inline bool Line3D::getData(Ptr<Point3D>& startPoint, Ptr<Point3D>& endPoint) const
{
    Point3D* startPoint_ = nullptr;
    Point3D* endPoint_ = nullptr;

    bool res = getData_raw(startPoint_, endPoint_);
    startPoint = startPoint_;
    endPoint = endPoint_;
    return res;
}

inline bool Line3D::set(const Ptr<Point3D>& startPoint, const Ptr<Point3D>& endPoint)
{
    bool res = set_raw(startPoint.get(), endPoint.get());
    return res;
}

inline Ptr<NurbsCurve3D> Line3D::asNurbsCurve() const
{
    Ptr<NurbsCurve3D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_LINE3D_API