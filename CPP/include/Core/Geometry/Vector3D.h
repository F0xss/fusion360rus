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
# ifdef __COMPILING_ADSK_CORE_VECTOR3D_CPP__
# define ADSK_CORE_VECTOR3D_API XI_EXPORT
# else
# define ADSK_CORE_VECTOR3D_API
# endif
#else
# define ADSK_CORE_VECTOR3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class Point3D;
}}

namespace adsk { namespace core {

/// Transient 3D vector. This object is a wrapper over 3D vector data and is used as way to pass vector data
/// in and out of the API and as a convenience when operating on vector data.
/// They are created statically using the create method of the Vector3D class.
class Vector3D : public Base {
public:

    /// Creates a 3D vector object. This object is created statically using the Vector3D.create method.
    /// x : The optional x value.
    /// y : The optional y value.
    /// z : The optional z value.
    /// Returns the new vector.
    static Ptr<Vector3D> create(double x = 0.0, double y = 0.0, double z = 0.0);

    /// Adds a vector to this vector.
    /// vector : The vector to add to this vector.
    /// Returns true if successful.
    bool add(const Ptr<Vector3D>& vector);

    /// Determines the angle between this vector and the specified vector.
    /// vector : The vector to measure the angle to.
    /// The angle in radians between this vector and the specified vector.
    double angleTo(const Ptr<Vector3D>& vector) const;

    /// Returns a new point with the same coordinate values as this vector.
    /// Return the new point.
    Ptr<Point3D> asPoint() const;

    /// Creates a copy of this vector.
    /// Returns the new vector copy.
    Ptr<Vector3D> copy() const;

    /// Returns the cross product between this vector and the specified vector.
    /// vector : The vector to take the cross product to.
    /// Returns the vector cross product.
    Ptr<Vector3D> crossProduct(const Ptr<Vector3D>& vector) const;

    /// Returns the dot product between this vector and the specified vector.
    /// vector : The vector to take the dot product to.
    /// Returns the dot product value.
    double dotProduct(const Ptr<Vector3D>& vector) const;

    /// Returns the vector coordinates as an array [x, y, z].
    /// Returns the array of vector coordinates [x, y, z].
    std::vector<double> asArray() const;

    /// Determines if this vector is equal to the specified vector.
    /// vector : The vector to test equality to.
    /// Returns true if the vectors are equal.
    bool isEqualTo(const Ptr<Vector3D>& vector) const;

    /// Determines if the input vector is parallel with this vector.
    /// vector : The vector to test parallelism to.
    /// Returns true if the vectors are parallel.
    bool isParallelTo(const Ptr<Vector3D>& vector) const;

    /// Determines if the input vector is perpendicular to this vector.
    /// vector : The vector to test perpendicularity to.
    /// Returns true if the vectors are perpendicular.
    bool isPerpendicularTo(const Ptr<Vector3D>& vector) const;

    /// Get the length of this vector.
    double length() const;

    /// Makes this vector of unit length.
    /// This vector should not be zero length.
    /// Returns true if successful.
    bool normalize();

    /// Reset this vector with the coordinate values in an array [x, y, z].
    /// coordinates : The array of coordinate values.
    /// Returns true if successful.
    bool setWithArray(const std::vector<double>& coordinates);

    /// Scale this vector by the specified product.
    /// scale : The scale value.
    /// Returns true if successful.
    bool scaleBy(double scale);

    /// Subtract a vector from this vector.
    /// vector : The vector to subtract.
    /// Returns true if successful.
    bool subtract(const Ptr<Vector3D>& vector);

    /// Transform this vector by the specified matrix.
    /// matrix : The transformation matrix.
    /// Returns true if successful.
    bool transformBy(const Ptr<Matrix3D>& matrix);

    /// The x value.
    double x() const;
    bool x(double value);

    /// The y value.
    double y() const;
    bool y(double value);

    /// The z value.
    double z() const;
    bool z(double value);

    ADSK_CORE_VECTOR3D_API static const char* classType();
    ADSK_CORE_VECTOR3D_API const char* objectType() const override;
    ADSK_CORE_VECTOR3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VECTOR3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_VECTOR3D_API static Vector3D* create_raw(double x, double y, double z);
    virtual bool add_raw(Vector3D* vector) = 0;
    virtual double angleTo_raw(Vector3D* vector) const = 0;
    virtual Point3D* asPoint_raw() const = 0;
    virtual Vector3D* copy_raw() const = 0;
    virtual Vector3D* crossProduct_raw(Vector3D* vector) const = 0;
    virtual double dotProduct_raw(Vector3D* vector) const = 0;
    virtual double* asArray_raw(size_t& return_size) const = 0;
    virtual bool isEqualTo_raw(Vector3D* vector) const = 0;
    virtual bool isParallelTo_raw(Vector3D* vector) const = 0;
    virtual bool isPerpendicularTo_raw(Vector3D* vector) const = 0;
    virtual double length_raw() const = 0;
    virtual bool normalize_raw() = 0;
    virtual bool setWithArray_raw(const double* coordinates, size_t coordinates_size) = 0;
    virtual bool scaleBy_raw(double scale) = 0;
    virtual bool subtract_raw(Vector3D* vector) = 0;
    virtual bool transformBy_raw(Matrix3D* matrix) = 0;
    virtual double x_raw() const = 0;
    virtual bool x_raw(double value) = 0;
    virtual double y_raw() const = 0;
    virtual bool y_raw(double value) = 0;
    virtual double z_raw() const = 0;
    virtual bool z_raw(double value) = 0;
};

// Inline wrappers

inline Ptr<Vector3D> Vector3D::create(double x, double y, double z)
{
    Ptr<Vector3D> res = create_raw(x, y, z);
    return res;
}

inline bool Vector3D::add(const Ptr<Vector3D>& vector)
{
    bool res = add_raw(vector.get());
    return res;
}

inline double Vector3D::angleTo(const Ptr<Vector3D>& vector) const
{
    double res = angleTo_raw(vector.get());
    return res;
}

inline Ptr<Point3D> Vector3D::asPoint() const
{
    Ptr<Point3D> res = asPoint_raw();
    return res;
}

inline Ptr<Vector3D> Vector3D::copy() const
{
    Ptr<Vector3D> res = copy_raw();
    return res;
}

inline Ptr<Vector3D> Vector3D::crossProduct(const Ptr<Vector3D>& vector) const
{
    Ptr<Vector3D> res = crossProduct_raw(vector.get());
    return res;
}

inline double Vector3D::dotProduct(const Ptr<Vector3D>& vector) const
{
    double res = dotProduct_raw(vector.get());
    return res;
}

inline std::vector<double> Vector3D::asArray() const
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

inline bool Vector3D::isEqualTo(const Ptr<Vector3D>& vector) const
{
    bool res = isEqualTo_raw(vector.get());
    return res;
}

inline bool Vector3D::isParallelTo(const Ptr<Vector3D>& vector) const
{
    bool res = isParallelTo_raw(vector.get());
    return res;
}

inline bool Vector3D::isPerpendicularTo(const Ptr<Vector3D>& vector) const
{
    bool res = isPerpendicularTo_raw(vector.get());
    return res;
}

inline double Vector3D::length() const
{
    double res = length_raw();
    return res;
}

inline bool Vector3D::normalize()
{
    bool res = normalize_raw();
    return res;
}

inline bool Vector3D::setWithArray(const std::vector<double>& coordinates)
{
    bool res = setWithArray_raw(coordinates.empty() ? nullptr : &coordinates[0], coordinates.size());
    return res;
}

inline bool Vector3D::scaleBy(double scale)
{
    bool res = scaleBy_raw(scale);
    return res;
}

inline bool Vector3D::subtract(const Ptr<Vector3D>& vector)
{
    bool res = subtract_raw(vector.get());
    return res;
}

inline bool Vector3D::transformBy(const Ptr<Matrix3D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}

inline double Vector3D::x() const
{
    double res = x_raw();
    return res;
}

inline bool Vector3D::x(double value)
{
    return x_raw(value);
}

inline double Vector3D::y() const
{
    double res = y_raw();
    return res;
}

inline bool Vector3D::y(double value)
{
    return y_raw(value);
}

inline double Vector3D::z() const
{
    double res = z_raw();
    return res;
}

inline bool Vector3D::z(double value)
{
    return z_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VECTOR3D_API