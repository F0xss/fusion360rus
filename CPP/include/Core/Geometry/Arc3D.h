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
# ifdef __COMPILING_ADSK_CORE_ARC3D_CPP__
# define ADSK_CORE_ARC3D_API XI_EXPORT
# else
# define ADSK_CORE_ARC3D_API
# endif
#else
# define ADSK_CORE_ARC3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve3D;
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient 3D arc. A transient arc is not displayed or saved in a document.
/// Transient 3D arcs are used as a wrapper to work with raw 3D arc information.
/// They are created statically using one of the create methods of the Arc3D class.
class Arc3D : public Curve3D {
public:

    /// Creates a transient 3D arc object by specifying a center point and radius.
    /// center : The center point of the arc.
    /// normal : The normal vector of the arc.
    /// The plane perpendicular to this normal at the center point is the plane of the arc.
    /// referenceVector : A reference vector from which the start and end angles are measured from.
    /// This vector must be perpendicular to the normal vector.
    /// radius : The radius of the arc.
    /// startAngle : The start angle in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    /// endAngle : The end angle in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    /// Returns the newly created arc or null if the creation failed.
    static Ptr<Arc3D> createByCenter(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& referenceVector, double radius, double startAngle, double endAngle);

    /// Creates a transient 3D arc by specifying 3 points.
    /// A transient arc is not displayed or saved in a document. Transient arcs are used as
    /// a wrapper to work with raw 3D arc information.
    /// pointOne : The start point of the arc.
    /// pointTwo : A point along the arc.
    /// This point must not be coincident with the first or third points.
    /// This point must not lie on the line between the first and third points.
    /// pointThree : The end point of the arc.
    /// This point must not be coincident with the first or second points.
    /// Returns the newly created arc or null if the creation failed.
    static Ptr<Arc3D> createByThreePoints(const Ptr<Point3D>& pointOne, const Ptr<Point3D>& pointTwo, const Ptr<Point3D>& pointThree);

    /// Gets and sets the center position of the arc.
    Ptr<Point3D> center() const;
    bool center(const Ptr<Point3D>& value);

    /// Gets and sets the normal of the arc.
    Ptr<Vector3D> normal() const;

    /// Gets and sets the reference vector of the arc.
    Ptr<Vector3D> referenceVector() const;

    /// Sets the normal and reference vectors of the arc.
    /// normal : The new normal vector.
    /// referenceVector : The new reference vector from which the start and end angles are measured from.
    /// The reference vector must be perpendicular to the normal vector.
    /// Returns true if successful
    bool setAxes(const Ptr<Vector3D>& normal, const Ptr<Vector3D>& referenceVector);

    /// Gets and sets the radius of the arc.
    double radius() const;
    bool radius(double value);

    /// Gets and sets the start angle of the arc in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    double startAngle() const;
    bool startAngle(double value);

    /// Gets and sets the end angle of the arc in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    double endAngle() const;
    bool endAngle(double value);

    /// Gets the start point of the arc.
    Ptr<Point3D> startPoint() const;

    /// Gets the end point of the arc.
    Ptr<Point3D> endPoint() const;

    /// Creates and returns an independent copy of this Arc3D object.
    /// Returns a new Arc3D object that is a copy of this Arc3D object.
    Ptr<Arc3D> copy() const;

    /// Gets all of the data defining the arc.
    /// center : The output center point of the arc.
    /// normal : The output normal vector.
    /// referenceVector : The output reference vector.
    /// radius : The output radius of the arc.
    /// startAngle : The output start angle in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    /// endAngle : The output end angle in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    /// Returns true if successful
    bool getData(Ptr<Point3D>& center, Ptr<Vector3D>& normal, Ptr<Vector3D>& referenceVector, double& radius, double& startAngle, double& endAngle) const;

    /// Sets all of the data defining the arc.
    /// center : The center point of the arc.
    /// normal : The normal vector of the arc.
    /// The plane perpendicular to this normal at the center point is the plane of the arc.
    /// referenceVector : A reference vector from which the start and end angles are measured from.
    /// This vector must be perpendicular to the normal vector.
    /// radius : The radius of the arc.
    /// startAngle : The start angle in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    /// endAngle : The end angle in radians.
    /// This angle is measured from the reference vector using the right hand rule around the normal vector.
    /// Returns true if successful
    bool set(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& referenceVector, double radius, double startAngle, double endAngle);

    /// Returns a NURBS curve that is geometrically identical to the arc.
    Ptr<NurbsCurve3D> asNurbsCurve() const;

    ADSK_CORE_ARC3D_API static const char* classType();
    ADSK_CORE_ARC3D_API const char* objectType() const override;
    ADSK_CORE_ARC3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ARC3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ARC3D_API static Arc3D* createByCenter_raw(Point3D* center, Vector3D* normal, Vector3D* referenceVector, double radius, double startAngle, double endAngle);
    ADSK_CORE_ARC3D_API static Arc3D* createByThreePoints_raw(Point3D* pointOne, Point3D* pointTwo, Point3D* pointThree);
    virtual Point3D* center_raw() const = 0;
    virtual bool center_raw(Point3D* value) = 0;
    virtual Vector3D* normal_raw() const = 0;
    virtual Vector3D* referenceVector_raw() const = 0;
    virtual bool setAxes_raw(Vector3D* normal, Vector3D* referenceVector) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual double startAngle_raw() const = 0;
    virtual bool startAngle_raw(double value) = 0;
    virtual double endAngle_raw() const = 0;
    virtual bool endAngle_raw(double value) = 0;
    virtual Point3D* startPoint_raw() const = 0;
    virtual Point3D* endPoint_raw() const = 0;
    virtual Arc3D* copy_raw() const = 0;
    virtual bool getData_raw(Point3D*& center, Vector3D*& normal, Vector3D*& referenceVector, double& radius, double& startAngle, double& endAngle) const = 0;
    virtual bool set_raw(Point3D* center, Vector3D* normal, Vector3D* referenceVector, double radius, double startAngle, double endAngle) = 0;
    virtual NurbsCurve3D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Arc3D> Arc3D::createByCenter(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& referenceVector, double radius, double startAngle, double endAngle)
{
    Ptr<Arc3D> res = createByCenter_raw(center.get(), normal.get(), referenceVector.get(), radius, startAngle, endAngle);
    return res;
}

inline Ptr<Arc3D> Arc3D::createByThreePoints(const Ptr<Point3D>& pointOne, const Ptr<Point3D>& pointTwo, const Ptr<Point3D>& pointThree)
{
    Ptr<Arc3D> res = createByThreePoints_raw(pointOne.get(), pointTwo.get(), pointThree.get());
    return res;
}

inline Ptr<Point3D> Arc3D::center() const
{
    Ptr<Point3D> res = center_raw();
    return res;
}

inline bool Arc3D::center(const Ptr<Point3D>& value)
{
    return center_raw(value.get());
}

inline Ptr<Vector3D> Arc3D::normal() const
{
    Ptr<Vector3D> res = normal_raw();
    return res;
}

inline Ptr<Vector3D> Arc3D::referenceVector() const
{
    Ptr<Vector3D> res = referenceVector_raw();
    return res;
}

inline bool Arc3D::setAxes(const Ptr<Vector3D>& normal, const Ptr<Vector3D>& referenceVector)
{
    bool res = setAxes_raw(normal.get(), referenceVector.get());
    return res;
}

inline double Arc3D::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Arc3D::radius(double value)
{
    return radius_raw(value);
}

inline double Arc3D::startAngle() const
{
    double res = startAngle_raw();
    return res;
}

inline bool Arc3D::startAngle(double value)
{
    return startAngle_raw(value);
}

inline double Arc3D::endAngle() const
{
    double res = endAngle_raw();
    return res;
}

inline bool Arc3D::endAngle(double value)
{
    return endAngle_raw(value);
}

inline Ptr<Point3D> Arc3D::startPoint() const
{
    Ptr<Point3D> res = startPoint_raw();
    return res;
}

inline Ptr<Point3D> Arc3D::endPoint() const
{
    Ptr<Point3D> res = endPoint_raw();
    return res;
}

inline Ptr<Arc3D> Arc3D::copy() const
{
    Ptr<Arc3D> res = copy_raw();
    return res;
}

inline bool Arc3D::getData(Ptr<Point3D>& center, Ptr<Vector3D>& normal, Ptr<Vector3D>& referenceVector, double& radius, double& startAngle, double& endAngle) const
{
    Point3D* center_ = nullptr;
    Vector3D* normal_ = nullptr;
    Vector3D* referenceVector_ = nullptr;

    bool res = getData_raw(center_, normal_, referenceVector_, radius, startAngle, endAngle);
    center = center_;
    normal = normal_;
    referenceVector = referenceVector_;
    return res;
}

inline bool Arc3D::set(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& referenceVector, double radius, double startAngle, double endAngle)
{
    bool res = set_raw(center.get(), normal.get(), referenceVector.get(), radius, startAngle, endAngle);
    return res;
}

inline Ptr<NurbsCurve3D> Arc3D::asNurbsCurve() const
{
    Ptr<NurbsCurve3D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ARC3D_API