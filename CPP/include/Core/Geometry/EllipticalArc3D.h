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
# ifdef __COMPILING_ADSK_CORE_ELLIPTICALARC3D_CPP__
# define ADSK_CORE_ELLIPTICALARC3D_API XI_EXPORT
# else
# define ADSK_CORE_ELLIPTICALARC3D_API
# endif
#else
# define ADSK_CORE_ELLIPTICALARC3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve3D;
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient 3D elliptical arc. A transient elliptical arc is not displayed or saved in a document.
/// Transient 3D elliptical arcs are used as a wrapper to work with raw 3D elliptical arc information.
/// They are created statically using the create method of the EllipticalArc3D class.
class EllipticalArc3D : public Curve3D {
public:

    /// Creates a transient 3D elliptical arc.
    /// center : The center point of the elliptical arc.
    /// normal : The normal vector of the elliptical arc.
    /// majorAxis : The major axis of the elliptical arc.
    /// majorRadius : The major radius of the of the elliptical arc.
    /// minorRadius : The minor radius of the of the elliptical arc.
    /// startAngle : The start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// endAngle : The end angle of the elliptical arc in radians, where 0 is along the major axis.
    /// Returns the newly created elliptical arc or null if the creation failed.
    static Ptr<EllipticalArc3D> create(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle);

    /// Gets and sets the center point of the elliptical arc.
    Ptr<Point3D> center() const;
    bool center(const Ptr<Point3D>& value);

    /// Gets and sets the normal of the elliptical arc.
    Ptr<Vector3D> normal() const;

    /// Gets and sets the major axis of the elliptical arc.
    Ptr<Vector3D> majorAxis() const;
    bool majorAxis(const Ptr<Vector3D>& value);

    /// Gets and sets the major radius of the elliptical arc.
    double majorRadius() const;
    bool majorRadius(double value);

    /// Gets and sets the minor radius of the elliptical arc.
    double minorRadius() const;
    bool minorRadius(double value);

    /// Gets and sets the start angle of the elliptical arc.
    double startAngle() const;
    bool startAngle(double value);

    /// Gets and sets the end angle of the elliptical arc.
    double endAngle() const;
    bool endAngle(double value);

    /// Creates and returns a copy of this EllipticalArc3D object.
    /// Returns a new EllipticalArc3D object that is a copy of this Arc3D object.
    Ptr<EllipticalArc3D> copy() const;

    /// Gets all of the data defining the elliptical arc.
    /// center : The output center point of the elliptical arc.
    /// normal : The output normal vector of the elliptical arc.
    /// majorAxis : The output major axis of the elliptical arc.
    /// majorRadius : The output major radius of the of the elliptical arc.
    /// minorRadius : The output minor radius of the of the elliptical arc.
    /// startAngle : The output start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// endAngle : The output end angle of the elliptical arc in radians, where 0 is along the major axis.
    /// Returns true if successful.
    bool getData(Ptr<Point3D>& center, Ptr<Vector3D>& normal, Ptr<Vector3D>& majorAxis, double& majorRadius, double& minorRadius, double& startAngle, double& endAngle) const;

    /// Sets all of the data defining the elliptical arc.
    /// center : The center point of the elliptical arc.
    /// normal : The normal vector of the elliptical arc.
    /// majorAxis : The major axis of the elliptical arc.
    /// majorRadius : The major radius of the of the elliptical arc.
    /// minorRadius : The minor radius of the of the elliptical arc.
    /// startAngle : The start angle of the elliptical arc in radians, where 0 is along the major axis.
    /// endAngle : The end angle of the elliptical arc in radians, where 0 is along the major axis.
    /// Returns true if successful.
    bool set(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle);

    /// Returns a NURBS curve that is geometrically identical to the elliptical arc.
    Ptr<NurbsCurve3D> asNurbsCurve() const;

    ADSK_CORE_ELLIPTICALARC3D_API static const char* classType();
    ADSK_CORE_ELLIPTICALARC3D_API const char* objectType() const override;
    ADSK_CORE_ELLIPTICALARC3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ELLIPTICALARC3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ELLIPTICALARC3D_API static EllipticalArc3D* create_raw(Point3D* center, Vector3D* normal, Vector3D* majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle);
    virtual Point3D* center_raw() const = 0;
    virtual bool center_raw(Point3D* value) = 0;
    virtual Vector3D* normal_raw() const = 0;
    virtual Vector3D* majorAxis_raw() const = 0;
    virtual bool majorAxis_raw(Vector3D* value) = 0;
    virtual double majorRadius_raw() const = 0;
    virtual bool majorRadius_raw(double value) = 0;
    virtual double minorRadius_raw() const = 0;
    virtual bool minorRadius_raw(double value) = 0;
    virtual double startAngle_raw() const = 0;
    virtual bool startAngle_raw(double value) = 0;
    virtual double endAngle_raw() const = 0;
    virtual bool endAngle_raw(double value) = 0;
    virtual EllipticalArc3D* copy_raw() const = 0;
    virtual bool getData_raw(Point3D*& center, Vector3D*& normal, Vector3D*& majorAxis, double& majorRadius, double& minorRadius, double& startAngle, double& endAngle) const = 0;
    virtual bool set_raw(Point3D* center, Vector3D* normal, Vector3D* majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle) = 0;
    virtual NurbsCurve3D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<EllipticalArc3D> EllipticalArc3D::create(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle)
{
    Ptr<EllipticalArc3D> res = create_raw(center.get(), normal.get(), majorAxis.get(), majorRadius, minorRadius, startAngle, endAngle);
    return res;
}

inline Ptr<Point3D> EllipticalArc3D::center() const
{
    Ptr<Point3D> res = center_raw();
    return res;
}

inline bool EllipticalArc3D::center(const Ptr<Point3D>& value)
{
    return center_raw(value.get());
}

inline Ptr<Vector3D> EllipticalArc3D::normal() const
{
    Ptr<Vector3D> res = normal_raw();
    return res;
}

inline Ptr<Vector3D> EllipticalArc3D::majorAxis() const
{
    Ptr<Vector3D> res = majorAxis_raw();
    return res;
}

inline bool EllipticalArc3D::majorAxis(const Ptr<Vector3D>& value)
{
    return majorAxis_raw(value.get());
}

inline double EllipticalArc3D::majorRadius() const
{
    double res = majorRadius_raw();
    return res;
}

inline bool EllipticalArc3D::majorRadius(double value)
{
    return majorRadius_raw(value);
}

inline double EllipticalArc3D::minorRadius() const
{
    double res = minorRadius_raw();
    return res;
}

inline bool EllipticalArc3D::minorRadius(double value)
{
    return minorRadius_raw(value);
}

inline double EllipticalArc3D::startAngle() const
{
    double res = startAngle_raw();
    return res;
}

inline bool EllipticalArc3D::startAngle(double value)
{
    return startAngle_raw(value);
}

inline double EllipticalArc3D::endAngle() const
{
    double res = endAngle_raw();
    return res;
}

inline bool EllipticalArc3D::endAngle(double value)
{
    return endAngle_raw(value);
}

inline Ptr<EllipticalArc3D> EllipticalArc3D::copy() const
{
    Ptr<EllipticalArc3D> res = copy_raw();
    return res;
}

inline bool EllipticalArc3D::getData(Ptr<Point3D>& center, Ptr<Vector3D>& normal, Ptr<Vector3D>& majorAxis, double& majorRadius, double& minorRadius, double& startAngle, double& endAngle) const
{
    Point3D* center_ = nullptr;
    Vector3D* normal_ = nullptr;
    Vector3D* majorAxis_ = nullptr;

    bool res = getData_raw(center_, normal_, majorAxis_, majorRadius, minorRadius, startAngle, endAngle);
    center = center_;
    normal = normal_;
    majorAxis = majorAxis_;
    return res;
}

inline bool EllipticalArc3D::set(const Ptr<Point3D>& center, const Ptr<Vector3D>& normal, const Ptr<Vector3D>& majorAxis, double majorRadius, double minorRadius, double startAngle, double endAngle)
{
    bool res = set_raw(center.get(), normal.get(), majorAxis.get(), majorRadius, minorRadius, startAngle, endAngle);
    return res;
}

inline Ptr<NurbsCurve3D> EllipticalArc3D::asNurbsCurve() const
{
    Ptr<NurbsCurve3D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ELLIPTICALARC3D_API