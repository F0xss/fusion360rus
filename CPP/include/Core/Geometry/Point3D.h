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
# ifdef __COMPILING_ADSK_CORE_POINT3D_CPP__
# define ADSK_CORE_POINT3D_API XI_EXPORT
# else
# define ADSK_CORE_POINT3D_API
# endif
#else
# define ADSK_CORE_POINT3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient 3D point. A transient point is not displayed or saved in a document.
/// Transient 3D points are used as a wrapper to work with raw 3D point information.
/// They are created statically using the create method of the Point3D class.
class Point3D : public Base {
public:

    /// Creates a transient 3D point object.
    /// x : The x coordinate of the point
    /// y : The y coordinate of the point
    /// z : The z coordinate of the point
    /// Returns the new Point3D object or null if the creation failed.
    static Ptr<Point3D> create(double x = 0.0, double y = 0.0, double z = 0.0);

    /// Returns the distance from this point to another point.
    /// point : The point to measure the distance to.
    /// Returns the distance to the point.
    double distanceTo(const Ptr<Point3D>& point) const;

    /// Creates and returns a copy of this point object.
    /// Returns an independent copy of this point object.
    Ptr<Point3D> copy() const;

    /// Get coordinate data of the point.
    /// Returns the coordinate data of the point as an array [x, y, z].
    std::vector<double> asArray() const;

    /// Checks to see if this point and another point are equal (have identical coordinates).
    /// The comparison is done within the modeling tolerance which can be found with the
    /// Application.pointTolerance property. If you want to compare two points with any other
    /// tolerance you can use the isEqualToByTolerance method.
    /// point : The point to compare for equality.
    /// Returns true if the points are equal (have identical coordinates).
    bool isEqualTo(const Ptr<Point3D>& point) const;

    /// Sets the coordinates of the point using an array as input.
    /// coordinates : An array that defines the coordinates of the point [x, y, z].
    /// Returns true if successful.
    bool setWithArray(const std::vector<double>& coordinates);

    /// Transforms the point using the provided matrix.
    /// matrix : The Matrix3D object that defines the transformation.
    /// Returns true if successful.
    bool transformBy(const Ptr<Matrix3D>& matrix);

    /// Gets and sets the X coordinate of the point.
    double x() const;
    bool x(double value);

    /// Gets and sets the Y coordinate of the point.
    double y() const;
    bool y(double value);

    /// Gets and sets the Z coordinate of the point.
    double z() const;
    bool z(double value);

    /// Defines a vector using the coordinates of the point.
    /// Returns a Vector2D object.
    Ptr<Vector3D> asVector() const;

    /// Translates the point using the provided vector.
    /// vector : The vector to use to translate the point.
    /// Returns true if successful.
    bool translateBy(const Ptr<Vector3D>& vector);

    /// Gets the data defining the point.
    /// x : The output x coordinate of the point.
    /// y : The output y coordinate of the point.
    /// z : The output z coordinate of the point.
    /// Returns true if successful.
    bool getData(double& x, double& y, double& z) const;

    /// Sets the data defining the point.
    /// x : The x coordinate of the point.
    /// y : The y coordinate of the point.
    /// z : The z coordinate of the point.
    /// Returns true if successful.
    bool set(double x, double y, double z);

    /// Returns a vector from this point to another point.
    /// point : The other point to use to create the vector.
    /// Returns a Vector3D object.
    Ptr<Vector3D> vectorTo(const Ptr<Point3D>& point) const;

    /// Checks to see if this point and another point are equal within the specified tolerance.
    /// point : The point to compare for equality.
    /// tolerance : The tolerance, in centimeters, to use when comparing the two points.
    /// Returns true if the points are equal (have identical coordinates).
    bool isEqualToByTolerance(const Ptr<Point3D>& point, double tolerance) const;

    ADSK_CORE_POINT3D_API static const char* classType();
    ADSK_CORE_POINT3D_API const char* objectType() const override;
    ADSK_CORE_POINT3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_POINT3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_POINT3D_API static Point3D* create_raw(double x, double y, double z);
    virtual double distanceTo_raw(Point3D* point) const = 0;
    virtual Point3D* copy_raw() const = 0;
    virtual double* asArray_raw(size_t& return_size) const = 0;
    virtual bool isEqualTo_raw(Point3D* point) const = 0;
    virtual bool setWithArray_raw(const double* coordinates, size_t coordinates_size) = 0;
    virtual bool transformBy_raw(Matrix3D* matrix) = 0;
    virtual double x_raw() const = 0;
    virtual bool x_raw(double value) = 0;
    virtual double y_raw() const = 0;
    virtual bool y_raw(double value) = 0;
    virtual double z_raw() const = 0;
    virtual bool z_raw(double value) = 0;
    virtual Vector3D* asVector_raw() const = 0;
    virtual bool translateBy_raw(Vector3D* vector) = 0;
    virtual bool getData_raw(double& x, double& y, double& z) const = 0;
    virtual bool set_raw(double x, double y, double z) = 0;
    virtual Vector3D* vectorTo_raw(Point3D* point) const = 0;
    virtual bool isEqualToByTolerance_raw(Point3D* point, double tolerance) const = 0;
};

// Inline wrappers

inline Ptr<Point3D> Point3D::create(double x, double y, double z)
{
    Ptr<Point3D> res = create_raw(x, y, z);
    return res;
}

inline double Point3D::distanceTo(const Ptr<Point3D>& point) const
{
    double res = distanceTo_raw(point.get());
    return res;
}

inline Ptr<Point3D> Point3D::copy() const
{
    Ptr<Point3D> res = copy_raw();
    return res;
}

inline std::vector<double> Point3D::asArray() const
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

inline bool Point3D::isEqualTo(const Ptr<Point3D>& point) const
{
    bool res = isEqualTo_raw(point.get());
    return res;
}

inline bool Point3D::setWithArray(const std::vector<double>& coordinates)
{
    bool res = setWithArray_raw(coordinates.empty() ? nullptr : &coordinates[0], coordinates.size());
    return res;
}

inline bool Point3D::transformBy(const Ptr<Matrix3D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}

inline double Point3D::x() const
{
    double res = x_raw();
    return res;
}

inline bool Point3D::x(double value)
{
    return x_raw(value);
}

inline double Point3D::y() const
{
    double res = y_raw();
    return res;
}

inline bool Point3D::y(double value)
{
    return y_raw(value);
}

inline double Point3D::z() const
{
    double res = z_raw();
    return res;
}

inline bool Point3D::z(double value)
{
    return z_raw(value);
}

inline Ptr<Vector3D> Point3D::asVector() const
{
    Ptr<Vector3D> res = asVector_raw();
    return res;
}

inline bool Point3D::translateBy(const Ptr<Vector3D>& vector)
{
    bool res = translateBy_raw(vector.get());
    return res;
}

inline bool Point3D::getData(double& x, double& y, double& z) const
{
    bool res = getData_raw(x, y, z);
    return res;
}

inline bool Point3D::set(double x, double y, double z)
{
    bool res = set_raw(x, y, z);
    return res;
}

inline Ptr<Vector3D> Point3D::vectorTo(const Ptr<Point3D>& point) const
{
    Ptr<Vector3D> res = vectorTo_raw(point.get());
    return res;
}

inline bool Point3D::isEqualToByTolerance(const Ptr<Point3D>& point, double tolerance) const
{
    bool res = isEqualToByTolerance_raw(point.get(), tolerance);
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_POINT3D_API