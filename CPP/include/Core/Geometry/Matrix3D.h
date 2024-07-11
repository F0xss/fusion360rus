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
# ifdef __COMPILING_ADSK_CORE_MATRIX3D_CPP__
# define ADSK_CORE_MATRIX3D_API XI_EXPORT
# else
# define ADSK_CORE_MATRIX3D_API
# endif
#else
# define ADSK_CORE_MATRIX3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient 3D 4x4 matrix. This object is a wrapper over 3D matrix data and is used as way to pass matrix data
/// in and out of the API and as a convenience when operating on matrix data.
/// They are created statically using the create method of the Matrix3D class.
class Matrix3D : public Base {
public:

    /// Creates a transient 3d matrix object. It is initialized as an identity matrix and
    /// is created statically using the Matrix3D.create method.
    /// Returns the new matrix.
    static Ptr<Matrix3D> create();

    /// Resets this matrix to an identify matrix.
    /// Returns true if successful.
    bool setToIdentity();

    /// Inverts this matrix.
    /// Returns true if successful.
    bool invert();

    /// Creates an independent copy of this matrix.
    /// Returns the new matrix copy.
    Ptr<Matrix3D> copy() const;

    /// Returns the determinant of the matrix.
    double determinant() const;

    /// Transforms this matrix using the input matrix.
    /// matrix : The transformation matrix.
    /// Returns true if successful.
    bool transformBy(const Ptr<Matrix3D>& matrix);

    /// Gets the matrix data as the components that define a coordinate system.
    /// origin : The output origin point of the coordinate system.
    /// xAxis : The output x axis direction of the coordinate system.
    /// yAxis : The output y axis direction of the coordinate system.
    /// zAxis : The output z axis direction of the coordinate system.
    void getAsCoordinateSystem(Ptr<Point3D>& origin, Ptr<Vector3D>& xAxis, Ptr<Vector3D>& yAxis, Ptr<Vector3D>& zAxis) const;

    /// Sets the matrix based on the components of a coordinate system.
    /// origin : The origin point of the coordinate system.
    /// xAxis : The x axis direction of the coordinate system.
    /// yAxis : The y axis direction of the coordinate system.
    /// zAxis : The z axis direction of the coordinate system.
    /// Returns true if successful.
    bool setWithCoordinateSystem(const Ptr<Point3D>& origin, const Ptr<Vector3D>& xAxis, const Ptr<Vector3D>& yAxis, const Ptr<Vector3D>& zAxis);

    /// Gets the value of the specified cell in the 4x4 matrix.
    /// row : The index of the row. The first row has in index of 0
    /// column : The index of the column. The first column has an index of 0
    /// The cell value at [row][column].
    double getCell(int row, int column) const;

    /// Sets the specified cell in the 4x4 matrix to the specified value.
    /// row : The index of the row. The first row has in index of 0
    /// column : The index of the column. The first column has an index of 0
    /// value : The new cell value.
    /// Returns true if successful.
    bool setCell(int row, int column, double value);

    /// Returns the contents of the matrix as a 16 element array.
    /// Returns the array of cell values.
    std::vector<double> asArray() const;

    /// Sets the contents of the array using a 16 element array.
    /// cells : The array of cell values.
    /// Returns true if successful.
    bool setWithArray(const std::vector<double>& cells);

    /// Compares this matrix with another matrix and returns True if they're identical.
    /// matrix : The matrix to compare this matrix to.
    /// Returns true if the matrices are equal.
    bool isEqualTo(const Ptr<Matrix3D>& matrix) const;

    /// Gets and sets the translation component of the matrix.
    Ptr<Vector3D> translation() const;
    bool translation(const Ptr<Vector3D>& value);

    /// Sets this matrix to be the matrix that maps from the 'from' coordinate system to the 'to' coordinate system.
    /// fromOrigin : The origin point of the from coordinate system.
    /// fromXAxis : The x axis direction of the from coordinate system.
    /// fromYAxis : The y axis direction of the from coordinate system.
    /// fromZAxis : The z axis direction of the from coordinate system.
    /// toOrigin : The origin point of the to coordinate system.
    /// toXAxis : The x axis direction of the to coordinate system.
    /// toYAxis : The y axis direction of the to coordinate system.
    /// toZAxis : The z axis direction of the to coordinate system.
    /// Returns true if successful.
    bool setToAlignCoordinateSystems(const Ptr<Point3D>& fromOrigin, const Ptr<Vector3D>& fromXAxis, const Ptr<Vector3D>& fromYAxis, const Ptr<Vector3D>& fromZAxis, const Ptr<Point3D>& toOrigin, const Ptr<Vector3D>& toXAxis, const Ptr<Vector3D>& toYAxis, const Ptr<Vector3D>& toZAxis);

    /// Sets to the matrix of rotation that would align the 'from' vector with the 'to' vector. The optional
    /// axis argument may be used when the two vectors are perpendicular and in opposite directions to
    /// specify a specific solution, but is otherwise ignored
    /// from : The vector to rotate from.
    /// to : The vector to rotate to.
    /// axis : The optional axis vector to disambiguate the rotation axis.
    /// Returns true if successful.
    bool setToRotateTo(const Ptr<Vector3D>& from, const Ptr<Vector3D>& to, const Ptr<Vector3D>& axis = NULL);

    /// Sets this matrix to the matrix of rotation by the specified angle, through the specified origin, around the specified axis
    /// angle : The rotation angle in radians.
    /// axis : The axis of rotation.
    /// origin : The origin point of the axis of rotation.
    /// Returns true if successful.
    bool setToRotation(double angle, const Ptr<Vector3D>& axis, const Ptr<Point3D>& origin);

    ADSK_CORE_MATRIX3D_API static const char* classType();
    ADSK_CORE_MATRIX3D_API const char* objectType() const override;
    ADSK_CORE_MATRIX3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATRIX3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_MATRIX3D_API static Matrix3D* create_raw();
    virtual bool setToIdentity_raw() = 0;
    virtual bool invert_raw() = 0;
    virtual Matrix3D* copy_raw() const = 0;
    virtual double determinant_raw() const = 0;
    virtual bool transformBy_raw(Matrix3D* matrix) = 0;
    virtual void getAsCoordinateSystem_raw(Point3D*& origin, Vector3D*& xAxis, Vector3D*& yAxis, Vector3D*& zAxis) const = 0;
    virtual bool setWithCoordinateSystem_raw(Point3D* origin, Vector3D* xAxis, Vector3D* yAxis, Vector3D* zAxis) = 0;
    virtual double getCell_raw(int row, int column) const = 0;
    virtual bool setCell_raw(int row, int column, double value) = 0;
    virtual double* asArray_raw(size_t& return_size) const = 0;
    virtual bool setWithArray_raw(const double* cells, size_t cells_size) = 0;
    virtual bool isEqualTo_raw(Matrix3D* matrix) const = 0;
    virtual Vector3D* translation_raw() const = 0;
    virtual bool translation_raw(Vector3D* value) = 0;
    virtual bool setToAlignCoordinateSystems_raw(Point3D* fromOrigin, Vector3D* fromXAxis, Vector3D* fromYAxis, Vector3D* fromZAxis, Point3D* toOrigin, Vector3D* toXAxis, Vector3D* toYAxis, Vector3D* toZAxis) = 0;
    virtual bool setToRotateTo_raw(Vector3D* from, Vector3D* to, Vector3D* axis) = 0;
    virtual bool setToRotation_raw(double angle, Vector3D* axis, Point3D* origin) = 0;
};

// Inline wrappers

inline Ptr<Matrix3D> Matrix3D::create()
{
    Ptr<Matrix3D> res = create_raw();
    return res;
}

inline bool Matrix3D::setToIdentity()
{
    bool res = setToIdentity_raw();
    return res;
}

inline bool Matrix3D::invert()
{
    bool res = invert_raw();
    return res;
}

inline Ptr<Matrix3D> Matrix3D::copy() const
{
    Ptr<Matrix3D> res = copy_raw();
    return res;
}

inline double Matrix3D::determinant() const
{
    double res = determinant_raw();
    return res;
}

inline bool Matrix3D::transformBy(const Ptr<Matrix3D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}

inline void Matrix3D::getAsCoordinateSystem(Ptr<Point3D>& origin, Ptr<Vector3D>& xAxis, Ptr<Vector3D>& yAxis, Ptr<Vector3D>& zAxis) const
{
    Point3D* origin_ = nullptr;
    Vector3D* xAxis_ = nullptr;
    Vector3D* yAxis_ = nullptr;
    Vector3D* zAxis_ = nullptr;

    getAsCoordinateSystem_raw(origin_, xAxis_, yAxis_, zAxis_);
    origin = origin_;
    xAxis = xAxis_;
    yAxis = yAxis_;
    zAxis = zAxis_;
}

inline bool Matrix3D::setWithCoordinateSystem(const Ptr<Point3D>& origin, const Ptr<Vector3D>& xAxis, const Ptr<Vector3D>& yAxis, const Ptr<Vector3D>& zAxis)
{
    bool res = setWithCoordinateSystem_raw(origin.get(), xAxis.get(), yAxis.get(), zAxis.get());
    return res;
}

inline double Matrix3D::getCell(int row, int column) const
{
    double res = getCell_raw(row, column);
    return res;
}

inline bool Matrix3D::setCell(int row, int column, double value)
{
    bool res = setCell_raw(row, column, value);
    return res;
}

inline std::vector<double> Matrix3D::asArray() const
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

inline bool Matrix3D::setWithArray(const std::vector<double>& cells)
{
    bool res = setWithArray_raw(cells.empty() ? nullptr : &cells[0], cells.size());
    return res;
}

inline bool Matrix3D::isEqualTo(const Ptr<Matrix3D>& matrix) const
{
    bool res = isEqualTo_raw(matrix.get());
    return res;
}

inline Ptr<Vector3D> Matrix3D::translation() const
{
    Ptr<Vector3D> res = translation_raw();
    return res;
}

inline bool Matrix3D::translation(const Ptr<Vector3D>& value)
{
    return translation_raw(value.get());
}

inline bool Matrix3D::setToAlignCoordinateSystems(const Ptr<Point3D>& fromOrigin, const Ptr<Vector3D>& fromXAxis, const Ptr<Vector3D>& fromYAxis, const Ptr<Vector3D>& fromZAxis, const Ptr<Point3D>& toOrigin, const Ptr<Vector3D>& toXAxis, const Ptr<Vector3D>& toYAxis, const Ptr<Vector3D>& toZAxis)
{
    bool res = setToAlignCoordinateSystems_raw(fromOrigin.get(), fromXAxis.get(), fromYAxis.get(), fromZAxis.get(), toOrigin.get(), toXAxis.get(), toYAxis.get(), toZAxis.get());
    return res;
}

inline bool Matrix3D::setToRotateTo(const Ptr<Vector3D>& from, const Ptr<Vector3D>& to, const Ptr<Vector3D>& axis)
{
    bool res = setToRotateTo_raw(from.get(), to.get(), axis.get());
    return res;
}

inline bool Matrix3D::setToRotation(double angle, const Ptr<Vector3D>& axis, const Ptr<Point3D>& origin)
{
    bool res = setToRotation_raw(angle, axis.get(), origin.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATRIX3D_API