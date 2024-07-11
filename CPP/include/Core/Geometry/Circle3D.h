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
# ifdef __COMPILING_ADSK_CORE_CIRCLE3D_CPP__
# define ADSK_CORE_CIRCLE3D_API XI_EXPORT
# else
# define ADSK_CORE_CIRCLE3D_API
# endif
#else
# define ADSK_CORE_CIRCLE3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve3D;
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient 3D circle. A transient circle is not displayed or saved in a document.
/// Transient 3D circles are used as a wrapper to work with raw 3D circle information.
/// They are created statically using one of the create methods of the Circle3D class.
class Circle3D : public Curve3D {
public:

    /// Creates a transient 3D circle object by specifying a center and radius.
    /// center : The center point of the circle.
    /// normal : The normal vector of the circle.
    /// The plane through the center point and perpendicular to the normal vector defines the plane of the circle.
    /// radius : The radius of the circle.
    /// Returns the new Circle3D object or null if the creation failed.
    static Ptr<Circle3D> createByCenter(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, double radius);

    /// Creates a transient 3D circle through three points.
    /// pointOne : The first point on the circle.
    /// pointTwo : The second point on the circle.
    /// This point cannot be coincident with pointOne or pointThree.
    /// This point cannot lie on the line defined by pointOne and pointThree.
    /// pointThree : The third point on the circle.
    /// This point cannot be coincident with pointOne or pointThree.
    /// Returns the new Circle3D object or null if the creation failed.
    static Ptr<Circle3D> createByThreePoints(const Ptr<Point3D>& pointOne, const Ptr<Point3D>& pointTwo, const Ptr<Point3D>& pointThree);

    /// Gets and sets the center position of the circle.
    Ptr<Point3D> center() const;
    bool center(const Ptr<Point3D>& value);

    /// Gets and sets the normal of the circle.
    Ptr<Vector3D> normal() const;
    bool normal(const Ptr<Vector3D>& value);

    /// Gets and sets the radius of the circle.
    double radius() const;
    bool radius(double value);

    /// Creates and returns an independent copy of this Circle3D object.
    /// Returns an independent copy of this Circle3D object.
    Ptr<Circle3D> copy() const;

    /// Gets all of the data defining the circle.
    /// center : The output center point of the circle.
    /// normal : The output normal vector.
    /// radius : The output radius of the circle.
    /// Returns true if successful
    bool getData(Ptr<Point3D>& center, Ptr<Vector3D>& normal, double& radius) const;

    /// Sets all of the data defining the circle.
    /// center : The center point of the circle.
    /// normal : The normal vector of the circle.
    /// The plane through the center point and perpendicular to the normal vector defines the plane of the circle.
    /// radius : The radius of the circle.
    /// Returns true if successful
    bool set(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, double radius);

    /// Returns a NURBS curve that is geometrically identical to the circle.
    Ptr<NurbsCurve3D> asNurbsCurve() const;

    ADSK_CORE_CIRCLE3D_API static const char* classType();
    ADSK_CORE_CIRCLE3D_API const char* objectType() const override;
    ADSK_CORE_CIRCLE3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CIRCLE3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_CIRCLE3D_API static Circle3D* createByCenter_raw(Point3D* center, Vector3D* normal, double radius);
    ADSK_CORE_CIRCLE3D_API static Circle3D* createByThreePoints_raw(Point3D* pointOne, Point3D* pointTwo, Point3D* pointThree);
    virtual Point3D* center_raw() const = 0;
    virtual bool center_raw(Point3D* value) = 0;
    virtual Vector3D* normal_raw() const = 0;
    virtual bool normal_raw(Vector3D* value) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual Circle3D* copy_raw() const = 0;
    virtual bool getData_raw(Point3D*& center, Vector3D*& normal, double& radius) const = 0;
    virtual bool set_raw(Point3D* center, Vector3D* normal, double radius) = 0;
    virtual NurbsCurve3D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Circle3D> Circle3D::createByCenter(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, double radius)
{
    Ptr<Circle3D> res = createByCenter_raw(center.get(), normal.get(), radius);
    return res;
}

inline Ptr<Circle3D> Circle3D::createByThreePoints(const Ptr<Point3D>& pointOne, const Ptr<Point3D>& pointTwo, const Ptr<Point3D>& pointThree)
{
    Ptr<Circle3D> res = createByThreePoints_raw(pointOne.get(), pointTwo.get(), pointThree.get());
    return res;
}

inline Ptr<Point3D> Circle3D::center() const
{
    Ptr<Point3D> res = center_raw();
    return res;
}

inline bool Circle3D::center(const Ptr<Point3D>& value)
{
    return center_raw(value.get());
}

inline Ptr<Vector3D> Circle3D::normal() const
{
    Ptr<Vector3D> res = normal_raw();
    return res;
}

inline bool Circle3D::normal(const Ptr<Vector3D>& value)
{
    return normal_raw(value.get());
}

inline double Circle3D::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Circle3D::radius(double value)
{
    return radius_raw(value);
}

inline Ptr<Circle3D> Circle3D::copy() const
{
    Ptr<Circle3D> res = copy_raw();
    return res;
}

inline bool Circle3D::getData(Ptr<Point3D>& center, Ptr<Vector3D>& normal, double& radius) const
{
    Point3D* center_ = nullptr;
    Vector3D* normal_ = nullptr;

    bool res = getData_raw(center_, normal_, radius);
    center = center_;
    normal = normal_;
    return res;
}

inline bool Circle3D::set(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, double radius)
{
    bool res = set_raw(center.get(), normal.get(), radius);
    return res;
}

inline Ptr<NurbsCurve3D> Circle3D::asNurbsCurve() const
{
    Ptr<NurbsCurve3D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CIRCLE3D_API