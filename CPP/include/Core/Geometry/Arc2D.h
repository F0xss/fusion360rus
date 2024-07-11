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
# ifdef __COMPILING_ADSK_CORE_ARC2D_CPP__
# define ADSK_CORE_ARC2D_API XI_EXPORT
# else
# define ADSK_CORE_ARC2D_API
# endif
#else
# define ADSK_CORE_ARC2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve2D;
    class Point2D;
}}

namespace adsk { namespace core {

/// Transient 2D arc. A transient arc is not displayed or saved in a document.
/// Transient arcs are used as a wrapper to work with raw 2D arc information. They
/// are created statically using one of the create methods supported by the Arc2D class.
class Arc2D : public Curve2D {
public:

    /// Creates a transient 2D arc object specifying the center, radius and start and end angles.
    /// A transient arc is not displayed or saved in a document. Transient arcs arcs are used as
    /// a wrapper to work with raw 2D arc information.
    /// center : A Point2D object that defines the center position of the arc in 2D space.
    /// radius : The radius of the arc.
    /// startAngle : The start angle in radians, where 0 is along the X-axis.
    /// endAngle : The end angle in radians, where 0 is along the X-axis.
    /// isClockwise : Specifies if the sweep of the arc is clockwise or counterclockwise from the start to end angle.
    /// Returns the newly created arc or null if the creation failed.
    static Ptr<Arc2D> createByCenter(const Ptr<Point2D>& center, double radius, double startAngle, double endAngle, bool isClockwise = false);

    /// Creates a transient 2D arc by specifying 3 points.
    /// A transient arc is not displayed or saved in a document. Transient arcs arcs are used as
    /// a wrapper to work with raw 2D arc information.
    /// startPoint : The start point of the arc.
    /// point : A point along the arc.
    /// endPoint : The end point of the arc.
    /// Returns the newly created arc or null if the creation failed.
    static Ptr<Arc2D> createByThreePoints(const Ptr<Point2D>& startPoint, const Ptr<Point2D>& point, const Ptr<Point2D>& endPoint);

    /// Gets and sets the center position of the arc.
    Ptr<Point2D> center() const;
    bool center(const Ptr<Point2D>& value);

    /// Gets and sets the radius of the arc.
    double radius() const;
    bool radius(double value);

    /// Gets and sets the start angle of the arc in radians, where 0 is along the x axis.
    double startAngle() const;
    bool startAngle(double value);

    /// Gets and sets the end angle of the arc in radians, where 0 is along the x axis.
    double endAngle() const;
    bool endAngle(double value);

    /// Specifies if the sweep direction of the arc is clockwise or counterclockwise.
    bool isClockwise() const;

    /// Gets the position of the start point of the arc.
    Ptr<Point2D> startPoint() const;

    /// Gets the position of the end point of the arc.
    Ptr<Point2D> endPoint() const;

    /// Creates and returns an independent copy of this Arc2D object.
    /// Returns a new Arc2D object that is a copy of this Arc2D object.
    Ptr<Arc2D> copy() const;

    /// Gets all of the data defining the arc.
    /// center : The output center point of the arc.
    /// radius : The output radius of the arc.
    /// startAngle : The output start angle of the arc in radians, where 0 is along the x axis.
    /// endAngle : The output end angle of the arc in radians, where 0 is along the x axis.
    /// isClockwise : The output value that indicates if the sweep direction is clockwise or counterclockwise.
    /// Returns true if successful
    bool getData(Ptr<Point2D>& center, double& radius, double& startAngle, double& endAngle, bool& isClockwise) const;

    /// Sets all of the data defining the arc.
    /// center : A Point2D object defining the center position of the arc.
    /// radius : The radius of the arc.
    /// startAngle : The start angle of the arc in radians, where 0 is along the x axis.
    /// endAngle : The end angle of the arc in radians, where 0 is along the x axis.
    /// isClockwise : Indicates if the sweep direction is clockwise or counterclockwise.
    /// Returns true if redefining the arc is successful
    bool set(const Ptr<Point2D>& center, double radius, double startAngle, double endAngle, bool isClockwise);

    /// Returns a NURBS curve that is geometrically identical to the arc.
    Ptr<NurbsCurve2D> asNurbsCurve() const;

    ADSK_CORE_ARC2D_API static const char* classType();
    ADSK_CORE_ARC2D_API const char* objectType() const override;
    ADSK_CORE_ARC2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ARC2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ARC2D_API static Arc2D* createByCenter_raw(Point2D* center, double radius, double startAngle, double endAngle, bool isClockwise);
    ADSK_CORE_ARC2D_API static Arc2D* createByThreePoints_raw(Point2D* startPoint, Point2D* point, Point2D* endPoint);
    virtual Point2D* center_raw() const = 0;
    virtual bool center_raw(Point2D* value) = 0;
    virtual double radius_raw() const = 0;
    virtual bool radius_raw(double value) = 0;
    virtual double startAngle_raw() const = 0;
    virtual bool startAngle_raw(double value) = 0;
    virtual double endAngle_raw() const = 0;
    virtual bool endAngle_raw(double value) = 0;
    virtual bool isClockwise_raw() const = 0;
    virtual Point2D* startPoint_raw() const = 0;
    virtual Point2D* endPoint_raw() const = 0;
    virtual Arc2D* copy_raw() const = 0;
    virtual bool getData_raw(Point2D*& center, double& radius, double& startAngle, double& endAngle, bool& isClockwise) const = 0;
    virtual bool set_raw(Point2D* center, double radius, double startAngle, double endAngle, bool isClockwise) = 0;
    virtual NurbsCurve2D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Arc2D> Arc2D::createByCenter(const Ptr<Point2D>& center, double radius, double startAngle, double endAngle, bool isClockwise)
{
    Ptr<Arc2D> res = createByCenter_raw(center.get(), radius, startAngle, endAngle, isClockwise);
    return res;
}

inline Ptr<Arc2D> Arc2D::createByThreePoints(const Ptr<Point2D>& startPoint, const Ptr<Point2D>& point, const Ptr<Point2D>& endPoint)
{
    Ptr<Arc2D> res = createByThreePoints_raw(startPoint.get(), point.get(), endPoint.get());
    return res;
}

inline Ptr<Point2D> Arc2D::center() const
{
    Ptr<Point2D> res = center_raw();
    return res;
}

inline bool Arc2D::center(const Ptr<Point2D>& value)
{
    return center_raw(value.get());
}

inline double Arc2D::radius() const
{
    double res = radius_raw();
    return res;
}

inline bool Arc2D::radius(double value)
{
    return radius_raw(value);
}

inline double Arc2D::startAngle() const
{
    double res = startAngle_raw();
    return res;
}

inline bool Arc2D::startAngle(double value)
{
    return startAngle_raw(value);
}

inline double Arc2D::endAngle() const
{
    double res = endAngle_raw();
    return res;
}

inline bool Arc2D::endAngle(double value)
{
    return endAngle_raw(value);
}

inline bool Arc2D::isClockwise() const
{
    bool res = isClockwise_raw();
    return res;
}

inline Ptr<Point2D> Arc2D::startPoint() const
{
    Ptr<Point2D> res = startPoint_raw();
    return res;
}

inline Ptr<Point2D> Arc2D::endPoint() const
{
    Ptr<Point2D> res = endPoint_raw();
    return res;
}

inline Ptr<Arc2D> Arc2D::copy() const
{
    Ptr<Arc2D> res = copy_raw();
    return res;
}

inline bool Arc2D::getData(Ptr<Point2D>& center, double& radius, double& startAngle, double& endAngle, bool& isClockwise) const
{
    Point2D* center_ = nullptr;

    bool res = getData_raw(center_, radius, startAngle, endAngle, isClockwise);
    center = center_;
    return res;
}

inline bool Arc2D::set(const Ptr<Point2D>& center, double radius, double startAngle, double endAngle, bool isClockwise)
{
    bool res = set_raw(center.get(), radius, startAngle, endAngle, isClockwise);
    return res;
}

inline Ptr<NurbsCurve2D> Arc2D::asNurbsCurve() const
{
    Ptr<NurbsCurve2D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ARC2D_API