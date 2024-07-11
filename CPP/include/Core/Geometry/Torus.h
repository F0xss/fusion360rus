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
# ifdef __COMPILING_ADSK_CORE_TORUS_CPP__
# define ADSK_CORE_TORUS_API XI_EXPORT
# else
# define ADSK_CORE_TORUS_API
# endif
#else
# define ADSK_CORE_TORUS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient torus. A transient torus is not displayed or saved in a document.
/// A transient torus is used as a wrapper to work with raw torus information.
/// A transient torus is a full torus with no boundaries.
/// They are created statically using the create method of the Torus class.
class Torus : public Surface {
public:

    /// Creates a transient torus object.
    /// origin : The origin point (center) of the torus.
    /// axis : The center axis of the torus.
    /// majorRadius : The major radius of the torus.
    /// minorRadius : The minor radius of the torus.
    /// Returns the new Torus object or null if the creation failed.
    static Ptr<Torus> create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double majorRadius, double minorRadius);

    /// Gets and sets the origin point (center) of the torus.
    Ptr<Point3D> origin() const;
    bool origin(const Ptr<Point3D>& value);

    /// Gets and sets the center axis of the torus.
    Ptr<Vector3D> axis() const;
    bool axis(const Ptr<Vector3D>& value);

    /// Gets and sets the major radius of the torus.
    double majorRadius() const;
    bool majorRadius(double value);

    /// Gets and sets the minor radius of the torus.
    double minorRadius() const;
    bool minorRadius(double value);

    /// Gets all of the data defining the torus.
    /// origin : The output origin point (center) of the torus.
    /// axis : The output center axis of the torus.
    /// majorRadius : The output major radius of the torus.
    /// minorRadius : The output minor radius of the torus.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, double& majorRadius, double& minorRadius) const;

    /// Sets all of the data defining the torus.
    /// origin : The origin point (center) of the torus.
    /// axis : The center axis of the torus.
    /// majorRadius : The major radius of the torus.
    /// minorRadius : The minor radius of the torus.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double majorRadius, double minorRadius);

    /// Creates and returns an independent copy of this Torus object.
    /// Returns a new Torus object that is a copy of this Torus object.
    Ptr<Torus> copy() const;

    ADSK_CORE_TORUS_API static const char* classType();
    ADSK_CORE_TORUS_API const char* objectType() const override;
    ADSK_CORE_TORUS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TORUS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_TORUS_API static Torus* create_raw(Point3D* origin, Vector3D* axis, double majorRadius, double minorRadius);
    virtual Point3D* origin_raw() const = 0;
    virtual bool origin_raw(Point3D* value) = 0;
    virtual Vector3D* axis_raw() const = 0;
    virtual bool axis_raw(Vector3D* value) = 0;
    virtual double majorRadius_raw() const = 0;
    virtual bool majorRadius_raw(double value) = 0;
    virtual double minorRadius_raw() const = 0;
    virtual bool minorRadius_raw(double value) = 0;
    virtual bool getData_raw(Point3D*& origin, Vector3D*& axis, double& majorRadius, double& minorRadius) const = 0;
    virtual bool set_raw(Point3D* origin, Vector3D* axis, double majorRadius, double minorRadius) = 0;
    virtual Torus* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<Torus> Torus::create(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double majorRadius, double minorRadius)
{
    Ptr<Torus> res = create_raw(origin.get(), axis.get(), majorRadius, minorRadius);
    return res;
}

inline Ptr<Point3D> Torus::origin() const
{
    Ptr<Point3D> res = origin_raw();
    return res;
}

inline bool Torus::origin(const Ptr<Point3D>& value)
{
    return origin_raw(value.get());
}

inline Ptr<Vector3D> Torus::axis() const
{
    Ptr<Vector3D> res = axis_raw();
    return res;
}

inline bool Torus::axis(const Ptr<Vector3D>& value)
{
    return axis_raw(value.get());
}

inline double Torus::majorRadius() const
{
    double res = majorRadius_raw();
    return res;
}

inline bool Torus::majorRadius(double value)
{
    return majorRadius_raw(value);
}

inline double Torus::minorRadius() const
{
    double res = minorRadius_raw();
    return res;
}

inline bool Torus::minorRadius(double value)
{
    return minorRadius_raw(value);
}

inline bool Torus::getData(Ptr<Point3D>& origin, Ptr<Vector3D>& axis, double& majorRadius, double& minorRadius) const
{
    Point3D* origin_ = nullptr;
    Vector3D* axis_ = nullptr;

    bool res = getData_raw(origin_, axis_, majorRadius, minorRadius);
    origin = origin_;
    axis = axis_;
    return res;
}

inline bool Torus::set(const Ptr<Point3D>& origin, const Ptr<Vector3D>& axis, double majorRadius, double minorRadius)
{
    bool res = set_raw(origin.get(), axis.get(), majorRadius, minorRadius);
    return res;
}

inline Ptr<Torus> Torus::copy() const
{
    Ptr<Torus> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TORUS_API