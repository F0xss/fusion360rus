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
# ifdef __COMPILING_ADSK_CORE_SPHERE_CPP__
# define ADSK_CORE_SPHERE_API XI_EXPORT
# else
# define ADSK_CORE_SPHERE_API
# endif
#else
# define ADSK_CORE_SPHERE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace core {

/// Transient sphere. A transient sphere is not displayed or saved in a document.
/// Transient spheres are used as a wrapper to work with raw sphere information.
/// A transient sphere is a full sphere defined by a point and a radius.
/// They are created statically using the create method of the Sphere class.
class Sphere : public Surface {
public:

    /// Creates a transient sphere object.
    /// origin : The origin point (center) of the sphere.
    /// radius : The radius of the sphere.
    /// Returns the new Sphere object or null if the creation failed.
    static Ptr<Sphere> create(const Ptr<Point3D>& origin, double radius);

    /// Gets and sets the origin point (center) of the sphere.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets and sets the radius of the sphere.
    double radius() const;
    bool radius(double value);

    /// Gets all of the data defining the sphere.
    /// origin : The output origin point (center) of the sphere.
    /// radius : The output radius of the sphere.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, double& radius) const;

    /// Sets all of the data defining the sphere.
    /// origin : The origin point (center) of the sphere.
    /// radius : The radius of the sphere.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, double radius);

    /// Creates and returns an independent copy of this Sphere object.
    /// Returns a new Sphere object that is a copy of this Sphere object.
    Ptr<Sphere> copy() const;

    ADSK_CORE_SPHERE_API static const char* classType();
    ADSK_CORE_SPHERE_API const char* objectType() const override;
    ADSK_CORE_SPHERE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SPHERE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_SPHERE_API static Sphere* create_raw(Point3D* origin, double radius);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual bool getData_raw(Point3D*& origin, double& radius) const = 0;
    virtual bool set_raw(Point3D* origin, double radius) = 0;
    virtual Sphere* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<Sphere> Sphere::create(const Ptr<Point3D>& origin, double radius)
{
    Ptr<Sphere> res = create_raw(origin.get(), radius);
    return res;
}

inline Ptr<Point3D> Sphere::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool Sphere::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline double Sphere::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Sphere::radius(double value)
{
    return radius_raw(value);
}

inline bool Sphere::getData(Ptr<Point3D>& origin, double& radius) const
{
    Point3D* origin_ = nullptr;

    bool res = getData_raw(origin_, radius);
    origin = origin_;
    return res;
}

inline bool Sphere::set(const Ptr<Point3D>& origin, double radius)
{
    bool res = set_raw(origin.get(), radius);
    return res;
}

inline Ptr<Sphere> Sphere::copy() const
{
    Ptr<Sphere> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SPHERE_API