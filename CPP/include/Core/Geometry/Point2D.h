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
#include "../Base.h"
#include "../CoreTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_POINT2D_CPP__
# define ADSK_CORE_POINT2D_API XI_EXPORT
# else
# define ADSK_CORE_POINT2D_API
# endif
#else
# define ADSK_CORE_POINT2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix2D;
    class Vector2D;
}}

namespace adsk { namespace core {

/// Transient 2D point. A transient point is not displayed or saved in a document.
/// Transient 2D points are used as a wrapper to work with raw 2D point information.
/// They are created statically using the create methods of the Point2D class.
class Point2D : public Base {
public:

    /// Creates a transient 2D point object.
    /// x : The x coordinate of the point
    /// y : The y coordinate of the point
    /// Returns the new Point2D object or null if the creation failed.
    static Ptr<Point2D> create(double x = 0.0, double y = 0.0);

    /// Gets and sets the X coordinate of the point.
    double x() const;
    bool x(double value);

    /// Gets and sets the Y coordinate of the point.
    double y() const;
    bool y(double value);

    /// Creates and returns a copy of this point object.
    /// Returns an independent copy of this point object.
    Ptr<Point2D> copy() const;

    /// Gets the data defining the point.
    /// x : The output x coordinate of the point.
    /// y : The output y coordinate of the point.
    /// Returns true if successful.
    bool getData(double& x, double& y);

    /// Returns the distance from this point to another point.
    /// point : The point to measure the distance to
    /// Returns the distance to the point.
    double distanceTo(const Ptr<Point2D>& point) const;

    /// Get coordinate data of the point
    /// Returns the coordinate data of the point as an array
    std::vector<double> asArray() const;

    /// Checks to see if this point and another point are equal (have identical coordinates).
    /// The comparison is done within the modeling tolerance which can be found with the
    /// Application.pointTolerance property. If you want to compare two points with any other
    /// tolerance you can use the isEqualToByTolerance method.
    /// point : The point to compare for equality
    /// Returns true if the points are equal. (have identical coordinates)
    bool isEqualTo(const Ptr<Point2D>& point) const;

    /// Sets the coordinates of the point using an array as input.
    /// coordinates : An array that defines the coordinates of the point
    /// Returns true if successful
    bool setWithArray(const std::vector<double>& coordinates);

    /// Sets the coordinates of the point by specifying the x, y coordinates.
    /// x : The x coordinate of the point.
    /// y : The y coordinate of the point.
    /// Returns true if successful
    bool set(double x, double y);

    /// Transforms the point using the provided matrix.
    /// matrix : The Matrix2D object that defines the transformation
    /// Returns true if successful
    bool transformBy(const Ptr<Matrix2D>& matrix);

    /// Defines a vector using the coordinates of the point.
    /// Returns a Vector2D object
    Ptr<Vector2D> asVector() const;

    /// Translates the point using the provided vector.
    /// vector : The vector to use to translate the point
    /// Returns true if successful
    bool translateBy(const Ptr<Vector2D>& vector);

    /// Returns a vector from this point to another point.
    /// point : The other point to use to create the vector
    /// Returns a Vector2D object
    Ptr<Vector2D> vectorTo(const Ptr<Point2D>& point) const;

    /// Checks to see if this point and another point are equal within the specified tolerance.
    /// point : The point to compare for equality.
    /// tolerance : The tolerance, in centimeters, to use when comparing the two points.
    /// Returns true if the points are equal (have identical coordinates).
    bool isEqualToByTolerance(const Ptr<Point2D>& point, double tolerance) const;

    ADSK_CORE_POINT2D_API static const char* classType();
    ADSK_CORE_POINT2D_API const char* objectType() const override;
    ADSK_CORE_POINT2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_POINT2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_POINT2D_API static Point2D* create_raw(double x, double y);
    virtual double x_raw() const = 0;
    virtual bool x_raw(double value) = 0;
    virtual double y_raw() const = 0;
    virtual bool y_raw(double value) = 0;
    virtual Point2D* copy_raw() const = 0;
    virtual bool getData_raw(double& x, double& y) = 0;
    virtual double distanceTo_raw(Point2D* point) const = 0;
    virtual double* asArray_raw(size_t& return_size) const = 0;
    virtual bool isEqualTo_raw(Point2D* point) const = 0;
    virtual bool setWithArray_raw(const double* coordinates, size_t coordinates_size) = 0;
    virtual bool set_raw(double x, double y) = 0;
    virtual bool transformBy_raw(Matrix2D* matrix) = 0;
    virtual Vector2D* asVector_raw() const = 0;
    virtual bool translateBy_raw(Vector2D* vector) = 0;
    virtual Vector2D* vectorTo_raw(Point2D* point) const = 0;
    virtual bool isEqualToByTolerance_raw(Point2D* point, double tolerance) const = 0;
};

// Inline wrappers

inline Ptr<Point2D> Point2D::create(double x, double y)
{
    Ptr<Point2D> res = create_raw(x, y);
    return res;
}

inline double Point2D::x() const
{
    double res = x_raw();
    return res;
}

inline bool Point2D::x(double value)
{
    return x_raw(value);
}

inline double Point2D::y() const
{
    double res = y_raw();
    return res;
}

inline bool Point2D::y(double value)
{
    return y_raw(value);
}

inline Ptr<Point2D> Point2D::copy() const
{
    Ptr<Point2D> res = copy_raw();
    return res;
}

inline bool Point2D::getData(double& x, double& y)
{
    bool res = getData_raw(x, y);
    return res;
}

inline double Point2D::distanceTo(const Ptr<Point2D>& point) const
{
    double res = distanceTo_raw(point.get());
    return res;
}

inline std::vector<double> Point2D::asArray() const
{
    std::vector<double> res;
    size_t s;

    double* p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool Point2D::isEqualTo(const Ptr<Point2D>& point) const
{
    bool res = isEqualTo_raw(point.get());
    return res;
}

inline bool Point2D::setWithArray(const std::vector<double>& coordinates)
{
    bool res = setWithArray_raw(coordinates.empty() ? nullptr : &coordinates[0], coordinates.size());
    return res;
}

inline bool Point2D::set(double x, double y)
{
    bool res = set_raw(x, y);
    return res;
}

inline bool Point2D::transformBy(const Ptr<Matrix2D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}

inline Ptr<Vector2D> Point2D::asVector() const
{
    Ptr<Vector2D> res = asVector_raw();
    return res;
}

inline bool Point2D::translateBy(const Ptr<Vector2D>& vector)
{
    bool res = translateBy_raw(vector.get());
    return res;
}

inline Ptr<Vector2D> Point2D::vectorTo(const Ptr<Point2D>& point) const
{
    Ptr<Vector2D> res = vectorTo_raw(point.get());
    return res;
}

inline bool Point2D::isEqualToByTolerance(const Ptr<Point2D>& point, double tolerance) const
{
    bool res = isEqualToByTolerance_raw(point.get(), tolerance);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_POINT2D_API