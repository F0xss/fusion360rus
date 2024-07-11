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
#include "Curve2D.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_CIRCLE2D_CPP__
# define ADSK_CORE_CIRCLE2D_API XI_EXPORT
# else
# define ADSK_CORE_CIRCLE2D_API
# endif
#else
# define ADSK_CORE_CIRCLE2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve2D;
    class Point2D;
}}

namespace adsk { namespace core {

/// Transient 2D circle. A transient circle is not displayed or saved in a document.
/// Transient circles are used as a wrapper to work with raw 2D arc information. They
/// are created statically using one of the create methods of the Circle2D class.
class Circle2D : public Curve2D {
public:

    /// Creates a transient 2D circle object by specifying a center and radius.
    /// center : A Point2D object that defines the center of the circle.
    /// radius : The radius of the circle.
    /// Returns the new Circle2D object or null if the creation failed.
    static Ptr<Circle2D> createByCenter(const Ptr<Point2D>& center, double radius);

    /// Creates a transient 2D circle through three points.
    /// pointOne : The first point on the circle.
    /// pointTwo : The second point on the circle.
    /// pointThree : The third point on the circle.
    /// Returns the new Circle2D object or null if the creation failed.
    static Ptr<Circle2D> createByThreePoints(const Ptr<Point2D>& pointOne, const Ptr<Point2D>& pointTwo, const Ptr<Point2D>& pointThree);

    /// Gets and sets the center position of the circle.
    Ptr<Point2D> center() const;
    bool center(const Ptr<Point2D>& value);

    /// Gets and sets the radius of the circle.
    double radius() const;
    bool radius(double value);

    /// Creates and returns an independent copy of this Circle2D object.
    /// Returns an independent copy of this Circle2D object.
    Ptr<Circle2D> copy() const;

    /// Gets all of the data defining the circle.
    /// center : The output point defining the center position of the circle.
    /// radius : The output radius of the circle.
    /// Returns true if successful.
    bool getData(Ptr<Point2D>& center, double& radius) const;

    /// Sets all of the data defining the circle.
    /// center : A point that defines the center position of the circle.
    /// radius : The radius of the circle.
    /// Returns true if redefining the circle is successful
    bool set(const Ptr<Point2D>& center, double radius);

    /// Returns a NURBS curve that is geometrically identical to the circle.
    Ptr<NurbsCurve2D> asNurbsCurve() const;

    ADSK_CORE_CIRCLE2D_API static const char* classType();
    ADSK_CORE_CIRCLE2D_API const char* objectType() const override;
    ADSK_CORE_CIRCLE2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CIRCLE2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_CIRCLE2D_API static Circle2D* createByCenter_raw(Point2D* center, double radius);
    ADSK_CORE_CIRCLE2D_API static Circle2D* createByThreePoints_raw(Point2D* pointOne, Point2D* pointTwo, Point2D* pointThree);
    virtual Point2D* center_raw() const = 0;
    virtual bool center_raw(Point2D* value) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual Circle2D* copy_raw() const = 0;
    virtual bool getData_raw(Point2D*& center, double& radius) const = 0;
    virtual bool set_raw(Point2D* center, double radius) = 0;
    virtual NurbsCurve2D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Circle2D> Circle2D::createByCenter(const Ptr<Point2D>& center, double radius)
{
    Ptr<Circle2D> res = createByCenter_raw(center.get(), radius);
    return res;
}

inline Ptr<Circle2D> Circle2D::createByThreePoints(const Ptr<Point2D>& pointOne, const Ptr<Point2D>& pointTwo, const Ptr<Point2D>& pointThree)
{
    Ptr<Circle2D> res = createByThreePoints_raw(pointOne.get(), pointTwo.get(), pointThree.get());
    return res;
}

inline Ptr<Point2D> Circle2D::center() const
{
    Ptr<Point2D> res = center_raw();
    return res;
}

inline bool Circle2D::center(const Ptr<Point2D>& value)
{
    return center_raw(value.get());
}

inline double Circle2D::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Circle2D::radius(double value)
{
    return radius_raw(value);
}

inline Ptr<Circle2D> Circle2D::copy() const
{
    Ptr<Circle2D> res = copy_raw();
    return res;
}

inline bool Circle2D::getData(Ptr<Point2D>& center, double& radius) const
{
    Point2D* center_ = nullptr;

    bool res = getData_raw(center_, radius);
    center = center_;
    return res;
}

inline bool Circle2D::set(const Ptr<Point2D>& center, double radius)
{
    bool res = set_raw(center.get(), radius);
    return res;
}

inline Ptr<NurbsCurve2D> Circle2D::asNurbsCurve() const
{
    Ptr<NurbsCurve2D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CIRCLE2D_API