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
# ifdef __COMPILING_ADSK_CORE_INFINITELINE3D_CPP__
# define ADSK_CORE_INFINITELINE3D_API XI_EXPORT
# else
# define ADSK_CORE_INFINITELINE3D_API
# endif
#else
# define ADSK_CORE_INFINITELINE3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Point3D;
    class Surface;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient 3D infinite line. An infinite line is defined by a position and direction in space
/// and has no start or end points.
/// They are created statically using the create method of the InfiniteLine3D class.
class InfiniteLine3D : public Curve3D {
public:

    /// Creates a transient 3D infinite line.
    /// origin : The origin point of the line.
    /// direction : The direction of the line.
    /// Returns the new InfiniteLine3D object or null if the creation failed.
    static Ptr<InfiniteLine3D> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction);

    /// Gets and sets the origin point of the line.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets and sets the direction of the line.
    Ptr<Vector3D> direction() const;
    bool direction(const Ptr<Vector3D>& value);

    /// Compare this line with another to check for collinearity.
    /// line : The line to compare with for collinearity.
    /// Returns true if the two lines are collinear.
    bool isColinearTo(const Ptr<InfiniteLine3D>& line) const;

    /// Creates and returns a copy of this line object.
    /// Returns an independent copy of this line object.
    Ptr<InfiniteLine3D> copy() const;

    /// Intersect this line with a curve to get the intersection point(s).
    /// curve : The intersecting curve.
    /// The curve can be a Line3D, InfininteLine3D, Circle3D, Arc3D, EllipticalArc3D, Ellipse3D,
    /// or NurbsCurve3D.
    /// Returns a collection of the intersection points.
    Ptr<ObjectCollection> intersectWithCurve(const Ptr<Curve3D>& curve) const;

    /// Intersect this line with a surface to get the intersection point(s).
    /// surface : The intersecting surface.
    /// The surface can be a Plane, Cone, Cylinder, EllipticalCone, EllipticalCylinder, Sphere,
    /// Torus, or a NurbsSurface.
    /// Returns a collection of the intersection points.
    Ptr<ObjectCollection> intersectWithSurface(const Ptr<Surface>& surface) const;

    /// Gets all of the data defining the infinite line.
    /// origin : The output origin point of the line.
    /// direction : The output direction of the line.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, Ptr<Vector3D>& direction) const;

    /// Sets all of the data defining the infinite line.
    /// origin : The origin point of the line.
    /// direction : The direction of the line.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction);

    ADSK_CORE_INFINITELINE3D_API static const char* classType();
    ADSK_CORE_INFINITELINE3D_API const char* objectType() const override;
    ADSK_CORE_INFINITELINE3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_INFINITELINE3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_INFINITELINE3D_API static InfiniteLine3D* create_raw(Point3D* origin, Vector3D* direction);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual Vector3D* direction_raw() const = 0;
    virtual bool direction_raw(Vector3D* value) = 0;
    virtual bool isColinearTo_raw(InfiniteLine3D* line) const = 0;
    virtual InfiniteLine3D* copy_raw() const = 0;
    virtual ObjectCollection* intersectWithCurve_raw(Curve3D* curve) const = 0;
    virtual ObjectCollection* intersectWithSurface_raw(Surface* surface) const = 0;
    virtual bool getData_raw(Point3D*& origin, Vector3D*& direction) const = 0;
    virtual bool set_raw(Point3D* origin, Vector3D* direction) = 0;
};

// Inline wrappers

inline Ptr<InfiniteLine3D> InfiniteLine3D::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction)
{
    Ptr<InfiniteLine3D> res = create_raw(origin.get(), direction.get());
    return res;
}

inline Ptr<Point3D> InfiniteLine3D::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool InfiniteLine3D::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline Ptr<Vector3D> InfiniteLine3D::direction() const
{
    Ptr<Vector3D> res = direction_raw();
    return res;
}

inline bool InfiniteLine3D::direction(const Ptr<Vector3D>& value)
{
    return direction_raw(value.get());
}

inline bool InfiniteLine3D::isColinearTo(const Ptr<InfiniteLine3D>& line) const
{
    bool res = isColinearTo_raw(line.get());
    return res;
}

inline Ptr<InfiniteLine3D> InfiniteLine3D::copy() const
{
    Ptr<InfiniteLine3D> res = copy_raw();
    return res;
}

inline Ptr<ObjectCollection> InfiniteLine3D::intersectWithCurve(const Ptr<Curve3D>& curve) const
{
    Ptr<ObjectCollection> res = intersectWithCurve_raw(curve.get());
    return res;
}

inline Ptr<ObjectCollection> InfiniteLine3D::intersectWithSurface(const Ptr<Surface>& surface) const
{
    Ptr<ObjectCollection> res = intersectWithSurface_raw(surface.get());
    return res;
}

inline bool InfiniteLine3D::getData(Ptr<Point3D>& origin, Ptr<Vector3D>& direction) const
{
    Point3D* origin_ = nullptr;
    Vector3D* direction_ = nullptr;

    bool res = getData_raw(origin_, direction_);
    origin = origin_;
    direction = direction_;
    return res;
}

inline bool InfiniteLine3D::set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction)
{
    bool res = set_raw(origin.get(), direction.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_INFINITELINE3D_API