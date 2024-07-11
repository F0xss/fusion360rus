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
# ifdef __COMPILING_ADSK_CORE_ELLIPTICALCYLINDER_CPP__
# define ADSK_CORE_ELLIPTICALCYLINDER_API XI_EXPORT
# else
# define ADSK_CORE_ELLIPTICALCYLINDER_API
# endif
#else
# define ADSK_CORE_ELLIPTICALCYLINDER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient elliptical cylinder. A transient elliptical cylinder is not displayed or saved
/// in a document.
/// A transient elliptical cylinder is used as a wrapper to work with raw elliptical cylinder
/// information.
/// A transient elliptical cylinder has no boundaries and is infinite in length.
/// They are created statically using the create method of the EllipticalCylinder class.
class EllipticalCylinder : public Surface {
public:

    /// Creates a transient 3D elliptical cylinder object.
    /// origin : The origin point (center) of the base of the cylinder.
    /// axis : The center axis (along the length) of the cylinder that defines its normal direction.
    /// majorAxis : The direction of the major axis of the ellipse that defines the cylinder.
    /// majorRadius : The major radius of the ellipse that defines the cylinder.
    /// minorRadius : The minor radius of the ellipse that defines the cylinder.
    /// Returns the new EllipticalCylinder object or null if the creation failed.
    static Ptr<EllipticalCylinder> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius);

    /// Gets and sets the origin point (center) of the base of the cylinder.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets and set the center axis (along the length) of the cylinder that defines
    /// its normal direction.
    Ptr<Vector3D> axis() const;
    bool axis(const Ptr<Vector3D>& value);

    /// Gets and sets the direction of the major axis of the ellipse that defines the cylinder.
    Ptr<Vector3D> majorAxis() const;
    bool majorAxis(const Ptr<Vector3D>& value);

    /// Gets and sets the major radius of the ellipse that defines the cylinder.
    double majorRadius() const;
    bool majorRadius(double value);

    /// Gets and sets the minor radius of the ellipse that defines the cylinder.
    double minorRadius() const;
    bool minorRadius(double value);

    /// Gets the data defining the elliptical cylinder.
    /// origin : The output origin point (center) of the base of the cylinder.
    /// axis : The output center axis (along the length) of the cylinder that defines its normal direction.
    /// majorAxis : The output direction of the major axis of the ellipse that defines the cylinder.
    /// majorRadius : The output major radius of the ellipse that defines the cylinder.
    /// minorRadius : The output minor radius of the ellipse that defines the cylinder.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, Ptr<Vector3D>& majorAxis, double& majorRadius, double& minorRadius) const;

    /// Sets the data defining the elliptical cylinder.
    /// origin : The origin point (center) of the base of the cylinder.
    /// axis : The center axis (along the length) of the cylinder that defines its normal direction.
    /// majorAxis : The direction of the major axis of the ellipse that defines the cylinder.
    /// majorRadius : The major radius of the ellipse that defines the cylinder.
    /// minorRadius : The minor radius of the ellipse that defines the cylinder.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius);

    /// Creates and returns an independent copy of this EllipticalCylinder object.
    /// Returns a new EllipticalCylinder object that is a copy of this EllipticalCylinder object.
    Ptr<EllipticalCylinder> copy() const;

    ADSK_CORE_ELLIPTICALCYLINDER_API static const char* classType();
    ADSK_CORE_ELLIPTICALCYLINDER_API const char* objectType() const override;
    ADSK_CORE_ELLIPTICALCYLINDER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ELLIPTICALCYLINDER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ELLIPTICALCYLINDER_API static EllipticalCylinder* create_raw(Point3D* origin, Vector3D* axis, Vector3D* majorAxis, double majorRadius, double minorRadius);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual Vector3D* axis_raw() const = 0;
    virtual bool axis_raw(Vector3D* value) = 0;
    virtual Vector3D* majorAxis_raw() const = 0;
    virtual bool majorAxis_raw(Vector3D* value) = 0;
    virtual double majorRadius_raw() const = 0;
    virtual bool majorRadius_raw(double value) = 0;
    virtual double minorRadius_raw() const = 0;
    virtual bool minorRadius_raw(double value) = 0;
    virtual bool getData_raw(Point3D*& origin, Vector3D*& axis, Vector3D*& majorAxis, double& majorRadius, double& minorRadius) const = 0;
    virtual bool set_raw(Point3D* origin, Vector3D* axis, Vector3D* majorAxis, double majorRadius, double minorRadius) = 0;
    virtual EllipticalCylinder* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<EllipticalCylinder> EllipticalCylinder::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius)
{
    Ptr<EllipticalCylinder> res = create_raw(origin.get(), axis.get(), majorAxis.get(), majorRadius, minorRadius);
    return res;
}

inline Ptr<Point3D> EllipticalCylinder::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool EllipticalCylinder::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline Ptr<Vector3D> EllipticalCylinder::axis() const
{
    Ptr<Vector3D> res = axis_raw();
    return res;
}

inline bool EllipticalCylinder::axis(const Ptr<Vector3D>& value)
{
    return axis_raw(value.get());
}

inline Ptr<Vector3D> EllipticalCylinder::majorAxis() const
{
    Ptr<Vector3D> res = majorAxis_raw();
    return res;
}

inline bool EllipticalCylinder::majorAxis(const Ptr<Vector3D>& value)
{
    return majorAxis_raw(value.get());
}

inline double EllipticalCylinder::majorRadius() const
{
    double res = majorRadius_raw();
    return res;
}

inline bool EllipticalCylinder::majorRadius(double value)
{
    return majorRadius_raw(value);
}

inline double EllipticalCylinder::minorRadius() const
{
    double res = minorRadius_raw();
    return res;
}

inline bool EllipticalCylinder::minorRadius(double value)
{
    return minorRadius_raw(value);
}

inline bool EllipticalCylinder::getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, Ptr<Vector3D>& majorAxis, double& majorRadius, double& minorRadius) const
{
    Point3D* origin_ = nullptr;
    Vector3D* axis_ = nullptr;
    Vector3D* majorAxis_ = nullptr;

    bool res = getData_raw(origin_, axis_, majorAxis_, majorRadius, minorRadius);
    origin = origin_;
    axis = axis_;
    majorAxis = majorAxis_;
    return res;
}

inline bool EllipticalCylinder::set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius)
{
    bool res = set_raw(origin.get(), axis.get(), majorAxis.get(), majorRadius, minorRadius);
    return res;
}

inline Ptr<EllipticalCylinder> EllipticalCylinder::copy() const
{
    Ptr<EllipticalCylinder> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ELLIPTICALCYLINDER_API