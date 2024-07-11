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
# ifdef __COMPILING_ADSK_CORE_ELLIPTICALCONE_CPP__
# define ADSK_CORE_ELLIPTICALCONE_API XI_EXPORT
# else
# define ADSK_CORE_ELLIPTICALCONE_API
# endif
#else
# define ADSK_CORE_ELLIPTICALCONE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient elliptical cone. A transient elliptical cone is not displayed or saved in a document.
/// A transient elliptical cone is used as a wrapper to work with raw elliptical cone information.
/// A transient elliptical cone has no boundaries.
/// The cone always goes to a point in its narrowing direction, and is infinite in its
/// widening direction.
/// They are created statically using the create method of the EllipticalCone class.
class EllipticalCone : public Surface {
public:

    /// Creates a transient elliptical cone object.
    /// origin : The origin point (center) of the base of the cone.
    /// axis : The center axis (along the length) of the cone that defines its normal direction.
    /// majorAxisDirection : The direction of the major axis of the ellipse that defines the cone.
    /// majorRadius : The major radius of the ellipse that defines the cone.
    /// minorRadius : The minor radius of the ellipse that defines the cone.
    /// halfAngle : The taper half-angle of the cone.
    /// Returns the new EllipticalCone object or null if the creation failed.
    static Ptr<EllipticalCone> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxisDirection, double majorRadius, double minorRadius, double halfAngle);

    /// Gets and sets the origin point (center) of the base of the cone.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets the center axis of the cone that defines its normal direction and the major axis
    /// direction of the ellipse that defines it.
    /// axis : The output center axis (along the length) of the cone that defines its normal direction.
    /// majorAxisDirection : The output direction of the major axis of the ellipse that defines the cone.
    void getAxes(Ptr<Vector3D>& axis, Ptr<Vector3D>& majorAxisDirection);

    /// Sets the center axis of the cone and the major axis direction of the ellipse that defines it.
    /// axis : The center axis (along the length) of the cone that defines its normal direction.
    /// majorAxisDirection : The direction of the major axis of the ellipse that defines the cone.
    /// Returns true if successful.
    bool setAxes(const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxisDirection);

    /// Gets and sets the major radius of the ellipse that defines the cone.
    double majorRadius() const;
    bool majorRadius(double value);

    /// Gets and sets the minor radius of the ellipse that defines the cone.
    double minorRadius() const;
    bool minorRadius(double value);

    /// Gets and sets the taper half-angle of the elliptical cone.
    /// A negative value indicates that the cone is narrowing in the direction of the axis vector,
    /// whereas a positive values indicates that it is expanding in the direction of the axis vector.
    double halfAngle() const;
    bool halfAngle(double value);

    /// Gets the data that defines the Elliptical Cone.
    /// origin : The output origin point (center) of the base of the cone.
    /// axis : The output center axis (along the length) of the cone that defines its normal direction.
    /// majorAxisDirection : The output direction of the major axis of the ellipse that defines the cone.
    /// majorRadius : The output major radius of the ellipse that defines the cone.
    /// minorRadius : The output minor radius of the ellipse that defines the cone.
    /// halfAngle : The output taper half-angle of the cone.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, Ptr<Vector3D>& majorAxisDirection, double& majorRadius, double& minorRadius, double& halfAngle) const;

    /// Sets the data that defines the Elliptical Cone.
    /// origin : The origin point (center) of the base of the cone.
    /// axis : The center axis (along the length) of the cone that defines its normal direction.
    /// majorAxisDirection : The direction of the major axis of the ellipse that defines the cone.
    /// majorRadius : The major radius of the ellipse that defines the cone.
    /// minorRadius : The minor radius of the ellipse that defines the cone.
    /// halfAngle : The taper half-angle of the cone.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxisDirection, double majorRadius, double minorRadius, double halfAngle);

    /// Creates and returns an independent copy of this EllipticalCone object.
    /// Returns a new EllipticalCone object that is a copy of this EllipticalCone object.
    Ptr<EllipticalCone> copy() const;

    ADSK_CORE_ELLIPTICALCONE_API static const char* classType();
    ADSK_CORE_ELLIPTICALCONE_API const char* objectType() const override;
    ADSK_CORE_ELLIPTICALCONE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ELLIPTICALCONE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ELLIPTICALCONE_API static EllipticalCone* create_raw(Point3D* origin, Vector3D* axis, Vector3D* majorAxisDirection, double majorRadius, double minorRadius, double halfAngle);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual void getAxes_raw(Vector3D*& axis, Vector3D*& majorAxisDirection) = 0;
    virtual bool setAxes_raw(Vector3D* axis, Vector3D* majorAxisDirection) = 0;
    virtual double majorRadius_raw() const = 0;
    virtual bool majorRadius_raw(double value) = 0;
    virtual double minorRadius_raw() const = 0;
    virtual bool minorRadius_raw(double value) = 0;
    virtual double halfAngle_raw() const = 0;
    virtual bool halfAngle_raw(double value) = 0;
    virtual bool getData_raw(Point3D*& origin, Vector3D*& axis, Vector3D*& majorAxisDirection, double& majorRadius, double& minorRadius, double& halfAngle) const = 0;
    virtual bool set_raw(Point3D* origin, Vector3D* axis, Vector3D* majorAxisDirection, double majorRadius, double minorRadius, double halfAngle) = 0;
    virtual EllipticalCone* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<EllipticalCone> EllipticalCone::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxisDirection, double majorRadius, double minorRadius, double halfAngle)
{
    Ptr<EllipticalCone> res = create_raw(origin.get(), axis.get(), majorAxisDirection.get(), majorRadius, minorRadius, halfAngle);
    return res;
}

inline Ptr<Point3D> EllipticalCone::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool EllipticalCone::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline void EllipticalCone::getAxes(Ptr<Vector3D>& axis, Ptr<Vector3D>& majorAxisDirection)
{
    Vector3D* axis_ = nullptr;
    Vector3D* majorAxisDirection_ = nullptr;

    getAxes_raw(axis_, majorAxisDirection_);
    axis = axis_;
    majorAxisDirection = majorAxisDirection_;
}

inline bool EllipticalCone::setAxes(const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxisDirection)
{
    bool res = setAxes_raw(axis.get(), majorAxisDirection.get());
    return res;
}

inline double EllipticalCone::majorRadius() const
{
    double res = majorRadius_raw();
    return res;
}

inline bool EllipticalCone::majorRadius(double value)
{
    return majorRadius_raw(value);
}

inline double EllipticalCone::minorRadius() const
{
    double res = minorRadius_raw();
    return res;
}

inline bool EllipticalCone::minorRadius(double value)
{
    return minorRadius_raw(value);
}

inline double EllipticalCone::halfAngle() const
{
    double res = halfAngle_raw();
    return res;
}

inline bool EllipticalCone::halfAngle(double value)
{
    return halfAngle_raw(value);
}

inline bool EllipticalCone::getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, Ptr<Vector3D>& majorAxisDirection, double& majorRadius, double& minorRadius, double& halfAngle) const
{
    Point3D* origin_ = nullptr;
    Vector3D* axis_ = nullptr;
    Vector3D* majorAxisDirection_ = nullptr;

    bool res = getData_raw(origin_, axis_, majorAxisDirection_, majorRadius, minorRadius, halfAngle);
    origin = origin_;
    axis = axis_;
    majorAxisDirection = majorAxisDirection_;
    return res;
}

inline bool EllipticalCone::set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxisDirection, double majorRadius, double minorRadius, double halfAngle)
{
    bool res = set_raw(origin.get(), axis.get(), majorAxisDirection.get(), majorRadius, minorRadius, halfAngle);
    return res;
}

inline Ptr<EllipticalCone> EllipticalCone::copy() const
{
    Ptr<EllipticalCone> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ELLIPTICALCONE_API