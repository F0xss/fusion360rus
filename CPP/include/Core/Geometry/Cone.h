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
# ifdef __COMPILING_ADSK_CORE_CONE_CPP__
# define ADSK_CORE_CONE_API XI_EXPORT
# else
# define ADSK_CORE_CONE_API
# endif
#else
# define ADSK_CORE_CONE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient cone. A transient cone is not displayed or saved in a document.
/// A transient cone is used as a wrapper to work with raw cone information.
/// A transient cone has no boundaries.
/// The cone always goes to a point in its narrowing direction, and is infinite in its
/// widening direction.
/// They are created statically using the create method of the Cone class.
class Cone : public Surface {
public:

    /// Creates a transient cone object.
    /// origin : The origin point (center) of the base of the cone.
    /// axis : The center axis (along the length) of the cone that defines its normal direction.
    /// radius : The radius of the cone.
    /// halfAngle : The taper half-angle of the cone.
    /// Returns the new Cone object or null if the creation failed.
    static Ptr<Cone> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius, double halfAngle);

    /// Gets and sets the origin point (center) of the base of the cone.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets and sets the center axis (along the length) of the cone that defines its
    /// normal direction.
    Ptr<Vector3D> axis() const;
    bool axis(const Ptr<Vector3D>& value);

    /// Gets and sets the radius of the cone.
    double radius() const;
    bool radius(double value);

    /// Gets and sets the taper half-angle of the cone in radians.
    /// A negative value indicates that the cone is narrowing in the direction of the
    /// axis vector, whereas a positive value indicates that it is expanding in the direction of
    /// the axis vector.
    double halfAngle() const;
    bool halfAngle(double value);

    /// Gets the data that defines the cone.
    /// origin : The output origin point (center) of the base of the cone.
    /// axis : The output center axis (along the length) of the cone that defines its normal direction.
    /// radius : The output radius of the cone.
    /// halfAngle : The output taper half-angle of the cone.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, double& radius, double& halfAngle) const;

    /// Sets the data that defines the cone.
    /// origin : The origin point (center) of the base of the cone.
    /// axis : The center axis (along the length) of the cone that defines its normal direction.
    /// radius : The radius of the cone.
    /// halfAngle : The taper half-angle of the cone.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius, double halfAngle);

    /// Creates and returns an independent copy of this Cone object.
    /// Returns a new Cone object that is a copy of this Cone object.
    Ptr<Cone> copy() const;

    ADSK_CORE_CONE_API static const char* classType();
    ADSK_CORE_CONE_API const char* objectType() const override;
    ADSK_CORE_CONE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CONE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_CONE_API static Cone* create_raw(Point3D* origin, Vector3D* axis, double radius, double halfAngle);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual Vector3D* axis_raw() const = 0;
    virtual bool axis_raw(Vector3D* value) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual double halfAngle_raw() const = 0;
    virtual bool halfAngle_raw(double value) = 0;
    virtual bool getData_raw(Point3D*& origin, Vector3D*& axis, double& radius, double& halfAngle) const = 0;
    virtual bool set_raw(Point3D* origin, Vector3D* axis, double radius, double halfAngle) = 0;
    virtual Cone* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<Cone> Cone::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius, double halfAngle)
{
    Ptr<Cone> res = create_raw(origin.get(), axis.get(), radius, halfAngle);
    return res;
}

inline Ptr<Point3D> Cone::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool Cone::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline Ptr<Vector3D> Cone::axis() const
{
    Ptr<Vector3D> res = axis_raw();
    return res;
}

inline bool Cone::axis(const Ptr<Vector3D>& value)
{
    return axis_raw(value.get());
}

inline double Cone::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Cone::radius(double value)
{
    return radius_raw(value);
}

inline double Cone::halfAngle() const
{
    double res = halfAngle_raw();
    return res;
}

inline bool Cone::halfAngle(double value)
{
    return halfAngle_raw(value);
}

inline bool Cone::getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, double& radius, double& halfAngle) const
{
    Point3D* origin_ = nullptr;
    Vector3D* axis_ = nullptr;

    bool res = getData_raw(origin_, axis_, radius, halfAngle);
    origin = origin_;
    axis = axis_;
    return res;
}

inline bool Cone::set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double radius, double halfAngle)
{
    bool res = set_raw(origin.get(), axis.get(), radius, halfAngle);
    return res;
}

inline Ptr<Cone> Cone::copy() const
{
    Ptr<Cone> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CONE_API