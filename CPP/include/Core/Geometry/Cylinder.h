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
# ifdef __COMPILING_ADSK_CORE_CYLINDER_CPP__
# define ADSK_CORE_CYLINDER_API XI_EXPORT
# else
# define ADSK_CORE_CYLINDER_API
# endif
#else
# define ADSK_CORE_CYLINDER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient cylinder. A transient cylinder is not displayed or saved in a document.
/// A transient cylinder is but is used as a wrapper to work with raw cylinder information.
/// A transient cylinder has no boundaries and is infinite in length.
/// They are created statically using the create method of the Cylinder class.
class Cylinder : public Surface {
public:

    /// Creates a transient cylinder object.
    /// origin : The origin point (center) of the base of the cylinder.
    /// axis : The center axis (along the length) of the cylinder that defines its normal direction.
    /// radius : The radius of the cylinder.
    /// Returns the new Cylinder object or null if the creation failed.
    static Ptr<Cylinder> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius);

    /// The origin point (center) of the base of the cylinder.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// The center axis (along the length) of the cylinder that defines its normal direction.
    Ptr<Vector3D> axis() const;
    bool axis(const Ptr<Vector3D>& value);

    /// The radius of the cylinder.
    double radius() const;
    bool radius(double value);

    /// Gets the data that defines the cylinder.
    /// origin : The output origin point (center) of the base of the cylinder.
    /// axis : The output center axis (along the length) of the cylinder that defines its normal direction.
    /// radius : The output radius of the cylinder.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, double& radius) const;

    /// Sets the data that defines the cylinder.
    /// origin : The origin point (center) of the base of the cylinder.
    /// axis : The center axis (along the length) of the cylinder that defines its normal direction.
    /// radius : The radius of the cylinder.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius);

    /// Creates and returns an independent copy of this Cylinder object.
    /// Returns a new Cylinder object that is a copy of this Cylinder object.
    Ptr<Cylinder> copy() const;

    ADSK_CORE_CYLINDER_API static const char* classType();
    ADSK_CORE_CYLINDER_API const char* objectType() const override;
    ADSK_CORE_CYLINDER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CYLINDER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_CYLINDER_API static Cylinder* create_raw(Point3D* origin, Vector3D* axis, double radius);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual Vector3D* axis_raw() const = 0;
    virtual bool axis_raw(Vector3D* value) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual bool getData_raw(Point3D*& origin, Vector3D*& axis, double& radius) const = 0;
    virtual bool set_raw(Point3D* origin, Vector3D* axis, double radius) = 0;
    virtual Cylinder* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<Cylinder> Cylinder::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius)
{
    Ptr<Cylinder> res = create_raw(origin.get(), axis.get(), radius);
    return res;
}

inline Ptr<Point3D> Cylinder::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool Cylinder::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline Ptr<Vector3D> Cylinder::axis() const
{
    Ptr<Vector3D> res = axis_raw();
    return res;
}

inline bool Cylinder::axis(const Ptr<Vector3D>& value)
{
    return axis_raw(value.get());
}

inline double Cylinder::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Cylinder::radius(double value)
{
    return radius_raw(value);
}

inline bool Cylinder::getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, double& radius) const
{
    Point3D* origin_ = nullptr;
    Vector3D* axis_ = nullptr;

    bool res = getData_raw(origin_, axis_, radius);
    origin = origin_;
    axis = axis_;
    return res;
}

inline bool Cylinder::set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius)
{
    bool res = set_raw(origin.get(), axis.get(), radius);
    return res;
}

inline Ptr<Cylinder> Cylinder::copy() const
{
    Ptr<Cylinder> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CYLINDER_API