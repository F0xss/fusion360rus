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
# ifdef __COMPILING_ADSK_CORE_VECTOR2D_CPP__
# define ADSK_CORE_VECTOR2D_API XI_EXPORT
# else
# define ADSK_CORE_VECTOR2D_API
# endif
#else
# define ADSK_CORE_VECTOR2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix2D;
    class Point2D;
}}

namespace adsk { namespace core {

/// Transient 2D vector. This object is a wrapper for 2D vector data and is used to
/// pass vector data in and out of the API.
/// They are created statically using the create method of the Vector2D class.
class Vector2D : public Base {
public:

    /// Creates a 2D vector object.
    /// x : The x coordinate of the vector.
    /// y : The y coordinate of the vector.
    /// Returns the new Vector2D object or null if the creation failed.
    static Ptr<Vector2D> create(double x = 0.0, double y = 0.0);

    /// Add a vector to this vector.
    /// vector : The vector to add to this vector.
    /// Returns true if successful.
    bool add(const Ptr<Vector2D>& vector);

    /// Gets the angle between this vector and another vector.
    /// vector : The vector to measure the angle to.
    /// Returns the angle in radians.
    double angleTo(const Ptr<Vector2D>& vector) const;

    /// Creates and returns an independent copy of this Vector2D object.
    /// Returns a new Vector2D object that is a copy of this Vector2D object.
    Ptr<Vector2D> copy() const;

    /// Calculates the Dot Product of this vector and an input vector.
    /// vector : The vector to use in the dot product calculation.
    /// Returns the dot product of the two vectors.
    double dotProduct(const Ptr<Vector2D>& vector) const;

    /// Returns the vector values as an array [x, y].
    /// Returns an array of the vector's values [x, y].
    std::vector<double> asArray() const;

    /// Compare this vector with another to check for equality.
    /// vector : The vector to compare with for equality.
    /// Returns true if the vectors are equal.
    bool isEqualTo(const Ptr<Vector2D>& vector) const;

    /// Compare this vector with another to check for parallelism.
    /// vector : The vector to compare with for parallelism.
    /// Returns true if the vectors are parallel.
    bool isParallelTo(const Ptr<Vector2D>& vector) const;

    /// Compare this vector with another to check for perpendicularity.
    /// vector : The vector to compare with for perpendicularity.
    /// Returns true if the vectors are perpendicular.
    bool isPerpendicularTo(const Ptr<Vector2D>& vector) const;

    /// Gets the length of the vector.
    double length() const;

    /// Normalizes the vector.
    /// Normalization makes the vector length equal to one.
    /// The vector should not be zero length.
    /// Returns true if successful.
    bool normalize();

    /// Sets the definition of the vector by specifying an array containing the x and y coordinates.
    /// coordinates : An array that specifies the values for the x and y coordinates of the vector.
    /// Returns true if successful
    bool setWithArray(const std::vector<double>& coordinates);

    /// Scales the vector by specifying a scaling factor.
    /// scale : The scale factor to multiple the vector by (i.e. 1.5).
    /// Returns true if successful.
    bool scaleBy(double scale);

    /// Subtract a vector from this vector.
    /// vector : The vector to subtract from this vector.
    /// Returns true if successful.
    bool subtract(const Ptr<Vector2D>& vector);

    /// Transforms the vector by specifying a 2D transformation matrix.
    /// matrix : The Matrix2D object that defines the transformation.
    /// Returns true if successful.
    bool transformBy(const Ptr<Matrix2D>& matrix);

    /// Return a point with the same x and y values as this vector.
    /// Returns the new point.
    Ptr<Point2D> asPoint() const;

    /// Gets and sets the X coordinate of the vector.
    double x() const;
    bool x(double value);

    /// Gets and sets the Y coordinate of the vector.
    double y() const;
    bool y(double value);

    ADSK_CORE_VECTOR2D_API static const char* classType();
    ADSK_CORE_VECTOR2D_API const char* objectType() const override;
    ADSK_CORE_VECTOR2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VECTOR2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_VECTOR2D_API static Vector2D* create_raw(double x, double y);
    virtual bool add_raw(Vector2D* vector) = 0;
    virtual double angleTo_raw(Vector2D* vector) const = 0;
    virtual Vector2D* copy_raw() const = 0;
    virtual double dotProduct_raw(Vector2D* vector) const = 0;
    virtual double* asArray_raw(size_t& return_size) const = 0;
    virtual bool isEqualTo_raw(Vector2D* vector) const = 0;
    virtual bool isParallelTo_raw(Vector2D* vector) const = 0;
    virtual bool isPerpendicularTo_raw(Vector2D* vector) const = 0;
    virtual double length_raw() const = 0;
    virtual bool normalize_raw() = 0;
    virtual bool setWithArray_raw(const double* coordinates, size_t coordinates_size) = 0;
    virtual bool scaleBy_raw(double scale) = 0;
    virtual bool subtract_raw(Vector2D* vector) = 0;
    virtual bool transformBy_raw(Matrix2D* matrix) = 0;
    virtual Point2D* asPoint_raw() const = 0;
    virtual double x_raw() const = 0;
    virtual bool x_raw(double value) = 0;
    virtual double y_raw() const = 0;
    virtual bool y_raw(double value) = 0;
};

// Inline wrappers

inline Ptr<Vector2D> Vector2D::create(double x, double y)
{
    Ptr<Vector2D> res = create_raw(x, y);
    return res;
}

inline bool Vector2D::add(const Ptr<Vector2D>& vector)
{
    bool res = add_raw(vector.get());
    return res;
}

inline double Vector2D::angleTo(const Ptr<Vector2D>& vector) const
{
    double res = angleTo_raw(vector.get());
    return res;
}

inline Ptr<Vector2D> Vector2D::copy() const
{
    Ptr<Vector2D> res = copy_raw();
    return res;
}

inline double Vector2D::dotProduct(const Ptr<Vector2D>& vector) const
{
    double res = dotProduct_raw(vector.get());
    return res;
}

inline std::vector<double> Vector2D::asArray() const
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

inline bool Vector2D::isEqualTo(const Ptr<Vector2D>& vector) const
{
    bool res = isEqualTo_raw(vector.get());
    return res;
}

inline bool Vector2D::isParallelTo(const Ptr<Vector2D>& vector) const
{
    bool res = isParallelTo_raw(vector.get());
    return res;
}

inline bool Vector2D::isPerpendicularTo(const Ptr<Vector2D>& vector) const
{
    bool res = isPerpendicularTo_raw(vector.get());
    return res;
}

inline double Vector2D::length() const
{
    double res = length_raw();
    return res;
}

inline bool Vector2D::normalize()
{
    bool res = normalize_raw();
    return res;
}

inline bool Vector2D::setWithArray(const std::vector<double>& coordinates)
{
    bool res = setWithArray_raw(coordinates.empty() ? nullptr : &coordinates[0], coordinates.size());
    return res;
}

inline bool Vector2D::scaleBy(double scale)
{
    bool res = scaleBy_raw(scale);
    return res;
}

inline bool Vector2D::subtract(const Ptr<Vector2D>& vector)
{
    bool res = subtract_raw(vector.get());
    return res;
}

inline bool Vector2D::transformBy(const Ptr<Matrix2D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}

inline Ptr<Point2D> Vector2D::asPoint() const
{
    Ptr<Point2D> res = asPoint_raw();
    return res;
}

inline double Vector2D::x() const
{
    double res = x_raw();
    return res;
}

inline bool Vector2D::x(double value)
{
    return x_raw(value);
}

inline double Vector2D::y() const
{
    double res = y_raw();
    return res;
}

inline bool Vector2D::y(double value)
{
    return y_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VECTOR2D_API