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
#include "Surface.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_PLANE_CPP__
# define ADSK_CORE_PLANE_API XI_EXPORT
# else
# define ADSK_CORE_PLANE_API
# endif
#else
# define ADSK_CORE_PLANE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
    class InfiniteLine3D;
    class Line3D;
    class ObjectCollection;
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient plane. A transient plane is not displayed or saved in a document.
/// Transient planes are used as a wrapper to work with raw plane information.
/// A transient plane has no boundaries or size, but is infinite and is represented
/// by a position, a normal, and an orientation in space.
/// They are created statically using the create method of the Plane class.
class Plane : public Surface {
public:

    /// Creates a transient plane object by specifying an origin and a normal direction.
    /// origin : The origin point of the plane.
    /// normal : The normal direction of the plane.
    /// Returns the new plane object or null if the creation failed.
    static Ptr<Plane> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& normal);

    /// Creates a transient plane object by specifying an origin along with U and V directions.
    /// origin : The origin point of the plane.
    /// uDirection : The U direction for the plane.
    /// vDirection : The V direction for the plane.
    /// Returns the new plane object or null if the creation failed.
    static Ptr<Plane> createUsingDirections(const Ptr<Point3D>& origin, const Ptr<Vector3D>& uDirection, const Ptr<Vector3D>& vDirection);

    /// Gets and sets the origin point of the plane.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets and sets the normal of the plane.
    Ptr<Vector3D> normal() const;
    bool normal(const Ptr<Vector3D>& value);

    /// Gets the U Direction of the plane.
    Ptr<Vector3D> uDirection() const;

    /// Gets the V Direction of the plane.
    Ptr<Vector3D> vDirection() const;

    /// Sets the U and V directions of the plane.
    /// uDirection : The U direction for the plane.
    /// vDirection : The V direction for the plane.
    /// Returns true if successful.
    bool setUVDirections(const Ptr<Vector3D>& uDirection, const Ptr<Vector3D>& vDirection);

    /// Checks if this plane is parallel to another plane.
    /// plane : The plane to compare with for parallelism.
    /// Returns true if the planes are parallel.
    bool isParallelToPlane(const Ptr<Plane>& plane) const;

    /// Checks if this plane is parallel to a line.
    /// line : The line to compare with for parallelism.
    /// Returns true if the plane and line are parallel.
    bool isParallelToLine(const Ptr<Line3D>& line) const;

    /// Checks if this plane is perpendicular to another plane.
    /// plane : The plane to compare with for perpendicularity.
    /// Returns true if the planes are perpendicular.
    bool isPerpendicularToPlane(const Ptr<Plane>& plane) const;

    /// Checks if this plane is perpendicular to a line.
    /// line : The line to compare with for perpendicularity.
    /// Returns true if the plane and line are perpendicular.
    bool isPerpendicularToLine(const Ptr<Line3D>& line) const;

    /// Checks if this plane is coplanar with another plane.
    /// plane : The plane to compare with for co-planarity.
    /// Returns true if the planes are coplanar.
    bool isCoPlanarTo(const Ptr<Plane>& plane) const;

    /// Creates an infinite line at the intersection of this plane with another plane.
    /// plane : The plane to intersect with.
    /// Returns an InfiniteLine3D object or null if the planes do not intersect (are parallel).
    Ptr<InfiniteLine3D> intersectWithPlane(const Ptr<Plane>& plane) const;

    /// Creates a 3D point at the intersection of this plane and a line.
    /// line : The line to intersect with.
    /// Returns a Point3D object or null if the plane and line do not intersect (are parallel).
    Ptr<Point3D> intersectWithLine(const Ptr<InfiniteLine3D>& line) const;

    /// Intersect this plane with a curve to get the intersection point(s).
    /// curve : The intersecting curve.
    /// The curve can be a Line3D, InfininteLine3D, Circle3D, Arc3D, EllipticalArc3D, Ellipse3D,
    /// or NurbsCurve3D.
    /// Returns a collection of the intersection points.
    Ptr<ObjectCollection> intersectWithCurve(const Ptr<Curve3D>& curve) const;

    /// Intersect this plane with a surface to get the intersection point(s).
    /// surface : The intersecting surface.
    /// The surface can be a Plane, Cone, Cylinder, EllipticalCone, EllipticalCylinder, Sphere,
    /// Torus, or a NurbsSurface.
    /// Returns a collection of the intersection points.
    Ptr<ObjectCollection> intersectWithSurface(const Ptr<Surface>& surface) const;

    /// Creates and returns an independent copy of this Plane object.
    /// Returns a new Plane object that is a copy of this Plane object.
    Ptr<Plane> copy() const;

    ADSK_CORE_PLANE_API static const char* classType();
    ADSK_CORE_PLANE_API const char* objectType() const override;
    ADSK_CORE_PLANE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PLANE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_PLANE_API static Plane* create_raw(Point3D* origin, Vector3D* normal);
    ADSK_CORE_PLANE_API static Plane* createUsingDirections_raw(Point3D* origin, Vector3D* uDirection, Vector3D* vDirection);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual Vector3D* normal_raw() const = 0;
    virtual bool normal_raw(Vector3D* value) = 0;
    virtual Vector3D* uDirection_raw() const = 0;
    virtual Vector3D* vDirection_raw() const = 0;
    virtual bool setUVDirections_raw(Vector3D* uDirection, Vector3D* vDirection) = 0;
    virtual bool isParallelToPlane_raw(Plane* plane) const = 0;
    virtual bool isParallelToLine_raw(Line3D* line) const = 0;
    virtual bool isPerpendicularToPlane_raw(Plane* plane) const = 0;
    virtual bool isPerpendicularToLine_raw(Line3D* line) const = 0;
    virtual bool isCoPlanarTo_raw(Plane* plane) const = 0;
    virtual InfiniteLine3D* intersectWithPlane_raw(Plane* plane) const = 0;
    virtual Point3D* intersectWithLine_raw(InfiniteLine3D* line) const = 0;
    virtual ObjectCollection* intersectWithCurve_raw(Curve3D* curve) const = 0;
    virtual ObjectCollection* intersectWithSurface_raw(Surface* surface) const = 0;
    virtual Plane* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<Plane> Plane::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& normal)
{
    Ptr<Plane> res = create_raw(origin.get(), normal.get());
    return res;
}

inline Ptr<Plane> Plane::createUsingDirections(const Ptr<Point3D>& origin, const Ptr<Vector3D>& uDirection, const Ptr<Vector3D>& vDirection)
{
    Ptr<Plane> res = createUsingDirections_raw(origin.get(), uDirection.get(), vDirection.get());
    return res;
}

inline Ptr<Point3D> Plane::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool Plane::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline Ptr<Vector3D> Plane::normal() const
{
    Ptr<Vector3D> res = normal_raw();
    return res;
}

inline bool Plane::normal(const Ptr<Vector3D>& value)
{
    return normal_raw(value.get());
}

inline Ptr<Vector3D> Plane::uDirection() const
{
    Ptr<Vector3D> res = uDirection_raw();
    return res;
}

inline Ptr<Vector3D> Plane::vDirection() const
{
    Ptr<Vector3D> res = vDirection_raw();
    return res;
}

inline bool Plane::setUVDirections(const Ptr<Vector3D>& uDirection, const Ptr<Vector3D>& vDirection)
{
    bool res = setUVDirections_raw(uDirection.get(), vDirection.get());
    return res;
}

inline bool Plane::isParallelToPlane(const Ptr<Plane>& plane) const
{
    bool res = isParallelToPlane_raw(plane.get());
    return res;
}

inline bool Plane::isParallelToLine(const Ptr<Line3D>& line) const
{
    bool res = isParallelToLine_raw(line.get());
    return res;
}

inline bool Plane::isPerpendicularToPlane(const Ptr<Plane>& plane) const
{
    bool res = isPerpendicularToPlane_raw(plane.get());
    return res;
}

inline bool Plane::isPerpendicularToLine(const Ptr<Line3D>& line) const
{
    bool res = isPerpendicularToLine_raw(line.get());
    return res;
}

inline bool Plane::isCoPlanarTo(const Ptr<Plane>& plane) const
{
    bool res = isCoPlanarTo_raw(plane.get());
    return res;
}

inline Ptr<InfiniteLine3D> Plane::intersectWithPlane(const Ptr<Plane>& plane) const
{
    Ptr<InfiniteLine3D> res = intersectWithPlane_raw(plane.get());
    return res;
}

inline Ptr<Point3D> Plane::intersectWithLine(const Ptr<InfiniteLine3D>& line) const
{
    Ptr<Point3D> res = intersectWithLine_raw(line.get());
    return res;
}

inline Ptr<ObjectCollection> Plane::intersectWithCurve(const Ptr<Curve3D>& curve) const
{
    Ptr<ObjectCollection> res = intersectWithCurve_raw(curve.get());
    return res;
}

inline Ptr<ObjectCollection> Plane::intersectWithSurface(const Ptr<Surface>& surface) const
{
    Ptr<ObjectCollection> res = intersectWithSurface_raw(surface.get());
    return res;
}

inline Ptr<Plane> Plane::copy() const
{
    Ptr<Plane> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PLANE_API