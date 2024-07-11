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
# ifdef __COMPILING_ADSK_CORE_MATRIX2D_CPP__
# define ADSK_CORE_MATRIX2D_API XI_EXPORT
# else
# define ADSK_CORE_MATRIX2D_API
# endif
#else
# define ADSK_CORE_MATRIX2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point2D;
    class Vector2D;
}}

namespace adsk { namespace core {

/// Transient 2D 3x3 matrix. This object is a wrapper over 2D matrix data and is used as way to pass matrix data
/// in and out of the API and as a convenience when operating on matrix data.
/// They are created statically using the create method of the Matrix2D class.
class Matrix2D : public Base {
public:

    /// Creates a transient 2D matrix (3x3) object. It is initialized as an identity matrix.
    /// Returns the new matrix.
    static Ptr<Matrix2D> create();

    /// Resets this matrix to be an identity matrix.
    /// Returns true if successful.
    bool setToIdentity();

    /// Invert this matrix.
    /// Returns true if successful.
    bool invert();

    /// Creates an independent copy of this matrix.
    /// Returns the new matrix copy.
    Ptr<Matrix2D> copy() const;

    /// Returns the determinant of the matrix.
    /// Returns the determinant value of this matrix.
    double determinant() const;

    /// Transforms this matrix using the input matrix.
    /// matrix : The transformation matrix.
    /// Returns true if successful.
    bool transformBy(const Ptr<Matrix2D>& matrix);

    /// Gets the value of the specified cell in the 3x3 matrix.
    /// row : The index of the row. The first row has in index of 0
    /// column : The index of the column. The first column has an index of 0
    /// Returns the value at [row][column].
    double getCell(int row, int column) const;

    /// Sets the specified cell in the 3x3 matrix to the specified value.
    /// row : The index of the row. The first row has in index of 0
    /// column : The index of the column. The first column has an index of 0
    /// value : The new value of the cell.
    /// Returns true if successful.
    bool setCell(int row, int column, double value);

    /// Gets the matrix data as the components that define a coordinate system.
    /// origin : The output origin point of the coordinate system.
    /// xAxis : The output x axis direction of the coordinate system.
    /// yAxis : The output y axis direction of the coordinate system.
    void getAsCoordinateSystem(Ptr<Point2D>& origin, Ptr<Vector2D>& xAxis, Ptr<Vector2D>& yAxis) const;

    /// Returns the contents of the matrix as a 9 element array.
    /// Returns the array of matrix values.
    std::vector<double> asArray() const;

    /// Reset this matrix to align with a specific coordinate system.
    /// origin : The origin point of the coordinate system.
    /// xAxis : The x axis direction of the coordinate system.
    /// yAxis : The y axis direction of the coordinate system.
    /// Returns true if successful.
    bool setWithCoordinateSystem(const Ptr<Point2D>& origin, const Ptr<Vector2D>& xAxis, const Ptr<Vector2D>& yAxis);

    /// Sets the contents of the array using a 9 element array.
    /// cells : The array of cell values.
    /// Returns true if successful.
    bool setWithArray(const std::vector<double>& cells);

    /// Compares this matrix with another matrix and returns True if they're identical.
    /// matrix : The matrix to compare to.
    /// Returns true if the matrix is equal to this matrix.
    bool isEqualTo(const Ptr<Matrix2D>& matrix) const;

    /// Sets this matrix to be the matrix that maps from the 'from' coordinate system to the 'to' coordinate system.
    /// fromOrigin : The origin point of the from coordinate system.
    /// fromXAxis : The x axis direction of the from coordinate system.
    /// fromYAxis : The y axis direction of the from coordinate system.
    /// toOrigin : The origin point of the to coordinate system.
    /// toXAxis : The x axis direction of the to coordinate system.
    /// toYAxis : The y axis direction of the to coordinate system.
    /// Returns true if successful.
    bool setToAlignCoordinateSystems(const Ptr<Point2D>& fromOrigin, const Ptr<Vector2D>& fromXAxis, const Ptr<Vector2D>& fromYAxis, const Ptr<Point2D>& toOrigin, const Ptr<Vector2D>& toXAxis, const Ptr<Vector2D>& toYAxis);

    /// Sets to the matrix of rotation that would align the 'from' vector with the 'to' vector.
    /// from : The from vector.
    /// to : The to vector.
    /// Returns true if successful.
    bool setToRotateTo(const Ptr<Vector2D>& from, const Ptr<Vector2D>& to);

    /// Sets this matrix to the matrix of rotation by the specified angle, through the specified origin.
    /// angle : The rotation angle in radians.
    /// origin : The origin point of the rotation.
    /// Returns true if successful.
    bool setToRotation(double angle, const Ptr<Point2D>& origin);

    ADSK_CORE_MATRIX2D_API static const char* classType();
    ADSK_CORE_MATRIX2D_API const char* objectType() const override;
    ADSK_CORE_MATRIX2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATRIX2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_MATRIX2D_API static Matrix2D* create_raw();
    virtual bool setToIdentity_raw() = 0;
    virtual bool invert_raw() = 0;
    virtual Matrix2D* copy_raw() const = 0;
    virtual double determinant_raw() const = 0;
    virtual bool transformBy_raw(Matrix2D* matrix) = 0;
    virtual double getCell_raw(int row, int column) const = 0;
    virtual bool setCell_raw(int row, int column, double value) = 0;
    virtual void getAsCoordinateSystem_raw(Point2D*& origin, Vector2D*& xAxis, Vector2D*& yAxis) const = 0;
    virtual double* asArray_raw(size_t& return_size) const = 0;
    virtual bool setWithCoordinateSystem_raw(Point2D* origin, Vector2D* xAxis, Vector2D* yAxis) = 0;
    virtual bool setWithArray_raw(const double* cells, size_t cells_size) = 0;
    virtual bool isEqualTo_raw(Matrix2D* matrix) const = 0;
    virtual bool setToAlignCoordinateSystems_raw(Point2D* fromOrigin, Vector2D* fromXAxis, Vector2D* fromYAxis, Point2D* toOrigin, Vector2D* toXAxis, Vector2D* toYAxis) = 0;
    virtual bool setToRotateTo_raw(Vector2D* from, Vector2D* to) = 0;
    virtual bool setToRotation_raw(double angle, Point2D* origin) = 0;
};

// Inline wrappers

inline Ptr<Matrix2D> Matrix2D::create()
{
    Ptr<Matrix2D> res = create_raw();
    return res;
}

inline bool Matrix2D::setToIdentity()
{
    bool res = setToIdentity_raw();
    return res;
}

inline bool Matrix2D::invert()
{
    bool res = invert_raw();
    return res;
}

inline Ptr<Matrix2D> Matrix2D::copy() const
{
    Ptr<Matrix2D> res = copy_raw();
    return res;
}

inline double Matrix2D::determinant() const
{
    double res = determinant_raw();
    return res;
}

inline bool Matrix2D::transformBy(const Ptr<Matrix2D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}

inline double Matrix2D::getCell(int row, int column) const
{
    double res = getCell_raw(row, column);
    return res;
}

inline bool Matrix2D::setCell(int row, int column, double value)
{
    bool res = setCell_raw(row, column, value);
    return res;
}

inline void Matrix2D::getAsCoordinateSystem(Ptr<Point2D>& origin, Ptr<Vector2D>& xAxis, Ptr<Vector2D>& yAxis) const
{
    Point2D* origin_ = nullptr;
    Vector2D* xAxis_ = nullptr;
    Vector2D* yAxis_ = nullptr;

    getAsCoordinateSystem_raw(origin_, xAxis_, yAxis_);
    origin = origin_;
    xAxis = xAxis_;
    yAxis = yAxis_;
}

inline std::vector<double> Matrix2D::asArray() const
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

inline bool Matrix2D::setWithCoordinateSystem(const Ptr<Point2D>& origin, const Ptr<Vector2D>& xAxis, const Ptr<Vector2D>& yAxis)
{
    bool res = setWithCoordinateSystem_raw(origin.get(), xAxis.get(), yAxis.get());
    return res;
}

inline bool Matrix2D::setWithArray(const std::vector<double>& cells)
{
    bool res = setWithArray_raw(cells.empty() ? nullptr : &cells[0], cells.size());
    return res;
}

inline bool Matrix2D::isEqualTo(const Ptr<Matrix2D>& matrix) const
{
    bool res = isEqualTo_raw(matrix.get());
    return res;
}

inline bool Matrix2D::setToAlignCoordinateSystems(const Ptr<Point2D>& fromOrigin, const Ptr<Vector2D>& fromXAxis, const Ptr<Vector2D>& fromYAxis, const Ptr<Point2D>& toOrigin, const Ptr<Vector2D>& toXAxis, const Ptr<Vector2D>& toYAxis)
{
    bool res = setToAlignCoordinateSystems_raw(fromOrigin.get(), fromXAxis.get(), fromYAxis.get(), toOrigin.get(), toXAxis.get(), toYAxis.get());
    return res;
}

inline bool Matrix2D::setToRotateTo(const Ptr<Vector2D>& from, const Ptr<Vector2D>& to)
{
    bool res = setToRotateTo_raw(from.get(), to.get());
    return res;
}

inline bool Matrix2D::setToRotation(double angle, const Ptr<Point2D>& origin)
{
    bool res = setToRotation_raw(angle, origin.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATRIX2D_API