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
# ifdef __COMPILING_ADSK_CORE_LINE2D_CPP__
# define ADSK_CORE_LINE2D_API XI_EXPORT
# else
# define ADSK_CORE_LINE2D_API
# endif
#else
# define ADSK_CORE_LINE2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class NurbsCurve2D;
    class Point2D;
}}

namespace adsk { namespace core {

/// Transient 2D line. A transient line is not displayed or saved in a document.
/// Transient 2D lines are used as a wrapper to work with raw 2D line information.
/// They are created statically using the create method of the Line2D class.
class Line2D : public Curve2D {
public:

    /// Creates a transient line.
    /// startPoint : The start point of the line
    /// endPoint : The end point of the line
    /// Returns the new Line2D object or null if the creation failed.
    static Ptr<Line2D> create(const Ptr<Point2D>& startPoint, const Ptr<Point2D>& endPoint);

    /// Gets and sets the start point of the line.
    Ptr<Point2D> startPoint() const;
    bool startPoint(const Ptr<Point2D>& value);

    /// Gets and sets the end point of the line.
    Ptr<Point2D> endPoint() const;
    bool endPoint(const Ptr<Point2D>& value);

    /// Creates and returns a copy of this line object.
    /// Returns an independent copy of this line object.
    Ptr<Line2D> copy() const;

    /// Gets all of the data defining the line segment.
    /// startPoint : The output start point of the line.
    /// endPoint : The output end point of the line.
    /// Returns true if successful.
    bool getData(Ptr<Point2D>& startPoint, Ptr<Point2D>& endPoint) const;

    /// Sets all of the data defining the line segment.
    /// startPoint : The start point of the line
    /// endPoint : The end point of the line
    /// Returns true if redefining the line is successful
    bool set(const Ptr<Point2D>& startPoint, const Ptr<Point2D>& endPoint);

    /// Returns a NURBS curve that is geometrically identical to the line.
    Ptr<NurbsCurve2D> asNurbsCurve() const;

    ADSK_CORE_LINE2D_API static const char* classType();
    ADSK_CORE_LINE2D_API const char* objectType() const override;
    ADSK_CORE_LINE2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_LINE2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_LINE2D_API static Line2D* create_raw(Point2D* startPoint, Point2D* endPoint);
    virtual Point2D* startPoint_raw() const = 0;
    virtual bool startPoint_raw(Point2D* value) = 0;
    virtual Point2D* endPoint_raw() const = 0;
    virtual bool endPoint_raw(Point2D* value) = 0;
    virtual Line2D* copy_raw() const = 0;
    virtual bool getData_raw(Point2D*& startPoint, Point2D*& endPoint) const = 0;
    virtual bool set_raw(Point2D* startPoint, Point2D* endPoint) = 0;
    virtual NurbsCurve2D* asNurbsCurve_raw() const = 0;
};

// Inline wrappers

inline Ptr<Line2D> Line2D::create(const Ptr<Point2D>& startPoint, const Ptr<Point2D>& endPoint)
{
    Ptr<Line2D> res = create_raw(startPoint.get(), endPoint.get());
    return res;
}

inline Ptr<Point2D> Line2D::startPoint() const
{
    Ptr<Point2D> res = startPoint_raw();
    return res;
}

inline bool Line2D::startPoint(const Ptr<Point2D>& value)
{
    return startPoint_raw(value.get());
}

inline Ptr<Point2D> Line2D::endPoint() const
{
    Ptr<Point2D> res = endPoint_raw();
    return res;
}

inline bool Line2D::endPoint(const Ptr<Point2D>& value)
{
    return endPoint_raw(value.get());
}

inline Ptr<Line2D> Line2D::copy() const
{
    Ptr<Line2D> res = copy_raw();
    return res;
}

inline bool Line2D::getData(Ptr<Point2D>& startPoint, Ptr<Point2D>& endPoint) const
{
    Point2D* startPoint_ = nullptr;
    Point2D* endPoint_ = nullptr;

    bool res = getData_raw(startPoint_, endPoint_);
    startPoint = startPoint_;
    endPoint = endPoint_;
    return res;
}

inline bool Line2D::set(const Ptr<Point2D>& startPoint, const Ptr<Point2D>& endPoint)
{
    bool res = set_raw(startPoint.get(), endPoint.get());
    return res;
}

inline Ptr<NurbsCurve2D> Line2D::asNurbsCurve() const
{
    Ptr<NurbsCurve2D> res = asNurbsCurve_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_LINE2D_API