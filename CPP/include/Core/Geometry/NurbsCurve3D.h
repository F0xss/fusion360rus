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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_NURBSCURVE3D_CPP__
# define ADSK_CORE_NURBSCURVE3D_API XI_EXPORT
# else
# define ADSK_CORE_NURBSCURVE3D_API
# endif
#else
# define ADSK_CORE_NURBSCURVE3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace core {

/// Transient 3D NURBS curve. A transient NURBS curve is not displayed or saved in a document.
/// Transient 3D NURBS curves are used as a wrapper to work with raw 3D NURBS curve information.
/// They are created statically using one of the create methods of the NurbsCurve3D class.
class NurbsCurve3D : public Curve3D {
public:

    /// Creates a transient 3D NURBS non-rational b-spline object.
    /// controlPoints : An array of control point that define the path of the spline.
    /// degree : The degree of curvature of the spline.
    /// knots : An array of numbers that define the knot vector of the spline. The knots is an array of (>=degree + N + 1) numbers, where N is the number of control points.
    /// isPeriodic : A bool specifying if the spline is to be Periodic. A periodic spline has a start point and
    /// end point that meet forming a closed loop.
    /// Returns the new NurbsCurve3D object or null if the creation failed.
    static Ptr<NurbsCurve3D> createNonRational(const std::vector<Ptr<Point3D>>& controlPoints, int degree, const std::vector<double>& knots, bool isPeriodic);

    /// Creates a transient 3D NURBS rational b-spline object.
    /// controlPoints : An array of control point that define the path of the spline.
    /// degree : The degree of curvature of the spline.
    /// knots : An array of numbers that define the knot vector of the spline. The knots is an array of (>=degree + N + 1) numbers, where N is the number of control points.
    /// weights : An array of numbers that define the weight at each control point.
    /// isPeriodic : A bool specifying if the spline is to be Periodic. A periodic curve has a start point and
    /// end point that meet (with curvature continuity) forming a closed loop.
    /// Returns the new NurbsCurve3D object or null if the creation failed.
    static Ptr<NurbsCurve3D> createRational(const std::vector<Ptr<Point3D>>& controlPoints, int degree, const std::vector<double>& knots, const std::vector<double>& weights, bool isPeriodic);

    /// Gets the number of control points that define the curve.
    int controlPointCount() const;

    /// Returns the degree of the curve.
    int degree() const;

    /// Returns the knot count of the curve.
    int knotCount() const;

    /// Indicates if the curve is rational or non-rational type.
    bool isRational() const;

    /// Indicates if the curve is closed.
    bool isClosed() const;

    /// Indicates if the curve is periodic.
    bool isPeriodic() const;

    /// Returns an array of Point3D objects that define the control points of the curve.
    std::vector<Ptr<Point3D>> controlPoints() const;

    /// Returns an array of numbers that define the knot vector of the curve.
    std::vector<double> knots() const;

    /// Gets the data that defines a transient 3D NURBS rational b-spline object.
    /// controlPoints : The output array of control point that define the path of the spline.
    /// degree : The output degree of curvature of the spline.
    /// knots : The output array of numbers that define the knot vector of the spline.
    /// isRational : The output value indicating if the spline is rational. A rational spline will have a weight value
    /// for each control point.
    /// weights : The output array of numbers that define the weights for the spline.
    /// isPeriodic : The output value indicating if the spline is Periodic. A periodic curve has a start point and
    /// end point that meet (with curvature continuity) forming a closed loop.
    /// Returns true if successful.
    bool getData(std::vector<Ptr<Point3D>>& controlPoints, int& degree, std::vector<double>& knots, bool& isRational, std::vector<double>& weights, bool& isPeriodic) const;

    /// Sets the data that defines a transient 3D NURBS rational b-spline object.
    /// controlPoints : The array of control point that define the path of the spline.
    /// degree : The degree of curvature of the spline.
    /// knots : An array of numbers that define the knot vector of the spline.
    /// isRational : A bool value indicating if the spline is rational. A rational spline must have a weight value
    /// for each control point.
    /// weights : An array of numbers that define the weights for the spline.
    /// isPeriodic : A bool indicating if the spline is Periodic. A periodic curve has a start point and
    /// end point that meet (with curvature continuity) forming a closed loop.
    /// Returns true if successful.
    bool set(const std::vector<Ptr<Point3D>>& controlPoints, int degree, const std::vector<double>& knots, bool isRational, const std::vector<double>& weights, bool isPeriodic);

    /// Defines a new NURBS curve that is the subset of this NURBS curve in the parameter
    /// range of [startParam, endParam]
    /// startParam : The parameter position that defines the start of the subset.
    /// endParam : The parameter position that defines the end of the subset.
    /// Returns a new NurbsCurve3D object.
    Ptr<NurbsCurve3D> extract(double startParam, double endParam) const;

    /// Define a new NURBS curve that is the result of combining this NURBS curve with
    /// another NURBS curve.
    /// nurbsCurve : The NURBS curve to combine with.
    /// Returns a new NurbsCurve3D object.
    Ptr<NurbsCurve3D> merge(const Ptr<NurbsCurve3D>& nurbsCurve) const;

    /// Creates and returns an independent copy of this NurbsCurve3D object.
    /// Returns an independent copy of this NurbsCurve3D.
    Ptr<NurbsCurve3D> copy() const;

    /// Reverses the orientation of the curve so the start and end points
    /// are swapped. The shape of the curve remains unchanged. This is
    /// especially useful to prepare the curves to use with the merge
    /// method.
    /// 
    bool reverse();

    ADSK_CORE_NURBSCURVE3D_API static const char* classType();
    ADSK_CORE_NURBSCURVE3D_API const char* objectType() const override;
    ADSK_CORE_NURBSCURVE3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_NURBSCURVE3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_NURBSCURVE3D_API static NurbsCurve3D* createNonRational_raw(Point3D** controlPoints, size_t controlPoints_size, int degree, const double* knots, size_t knots_size, bool isPeriodic);
    ADSK_CORE_NURBSCURVE3D_API static NurbsCurve3D* createRational_raw(Point3D** controlPoints, size_t controlPoints_size, int degree, const double* knots, size_t knots_size, const double* weights, size_t weights_size, bool isPeriodic);
    virtual int controlPointCount_raw() const = 0;
    virtual int degree_raw() const = 0;
    virtual int knotCount_raw() const = 0;
    virtual bool isRational_raw() const = 0;
    virtual bool isClosed_raw() const = 0;
    virtual bool isPeriodic_raw() const = 0;
    virtual Point3D** controlPoints_raw(size_t& return_size) const = 0;
    virtual double* knots_raw(size_t& return_size) const = 0;
    virtual bool getData_raw(Point3D**& controlPoints, size_t& controlPoints_size, int& degree, double*& knots, size_t& knots_size, bool& isRational, double*& weights, size_t& weights_size, bool& isPeriodic) const = 0;
    virtual bool set_raw(Point3D** controlPoints, size_t controlPoints_size, int degree, const double* knots, size_t knots_size, bool isRational, const double* weights, size_t weights_size, bool isPeriodic) = 0;
    virtual NurbsCurve3D* extract_raw(double startParam, double endParam) const = 0;
    virtual NurbsCurve3D* merge_raw(NurbsCurve3D* nurbsCurve) const = 0;
    virtual NurbsCurve3D* copy_raw() const = 0;
    virtual bool reverse_raw() = 0;
};

// Inline wrappers

inline Ptr<NurbsCurve3D> NurbsCurve3D::createNonRational(const std::vector<Ptr<Point3D>>& controlPoints, int degree, const std::vector<double>& knots, bool isPeriodic)
{
    Point3D** controlPoints_ = new Point3D*[controlPoints.size()];
    for(size_t i=0; i<controlPoints.size(); ++i)
        controlPoints_[i] = controlPoints[i].get();

    Ptr<NurbsCurve3D> res = createNonRational_raw(controlPoints_, controlPoints.size(), degree, knots.empty() ? nullptr : &knots[0], knots.size(), isPeriodic);
    delete[] controlPoints_;
    return res;
}

inline Ptr<NurbsCurve3D> NurbsCurve3D::createRational(const std::vector<Ptr<Point3D>>& controlPoints, int degree, const std::vector<double>& knots, const std::vector<double>& weights, bool isPeriodic)
{
    Point3D** controlPoints_ = new Point3D*[controlPoints.size()];
    for(size_t i=0; i<controlPoints.size(); ++i)
        controlPoints_[i] = controlPoints[i].get();

    Ptr<NurbsCurve3D> res = createRational_raw(controlPoints_, controlPoints.size(), degree, knots.empty() ? nullptr : &knots[0], knots.size(), weights.empty() ? nullptr : &weights[0], weights.size(), isPeriodic);
    delete[] controlPoints_;
    return res;
}

inline int NurbsCurve3D::controlPointCount() const
{
    int res = controlPointCount_raw();
    return res;
}

inline int NurbsCurve3D::degree() const
{
    int res = degree_raw();
    return res;
}

inline int NurbsCurve3D::knotCount() const
{
    int res = knotCount_raw();
    return res;
}

inline bool NurbsCurve3D::isRational() const
{
    bool res = isRational_raw();
    return res;
}

inline bool NurbsCurve3D::isClosed() const
{
    bool res = isClosed_raw();
    return res;
}

inline bool NurbsCurve3D::isPeriodic() const
{
    bool res = isPeriodic_raw();
    return res;
}

inline std::vector<Ptr<Point3D>> NurbsCurve3D::controlPoints() const
{
    std::vector<Ptr<Point3D>> res;
    size_t s;

    Point3D** p= controlPoints_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline std::vector<double> NurbsCurve3D::knots() const
{
    std::vector<double> res;
    size_t s;

    double* p= knots_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool NurbsCurve3D::getData(std::vector<Ptr<Point3D>>& controlPoints, int& degree, std::vector<double>& knots, bool& isRational, std::vector<double>& weights, bool& isPeriodic) const
{
    Point3D** controlPoints_ = nullptr;
    size_t controlPoints_size;
    double* knots_ = nullptr;
    size_t knots_size;
    double* weights_ = nullptr;
    size_t weights_size;

    bool res = getData_raw(controlPoints_, controlPoints_size, degree, knots_, knots_size, isRational, weights_, weights_size, isPeriodic);
    if(controlPoints_)
    {
        controlPoints.assign(controlPoints_, controlPoints_ + controlPoints_size);
        DeallocateArray(controlPoints_);
    }
    if(knots_)
    {
        knots.assign(knots_, knots_ + knots_size);
        DeallocateArray(knots_);
    }
    if(weights_)
    {
        weights.assign(weights_, weights_ + weights_size);
        DeallocateArray(weights_);
    }
    return res;
}

inline bool NurbsCurve3D::set(const std::vector<Ptr<Point3D>>& controlPoints, int degree, const std::vector<double>& knots, bool isRational, const std::vector<double>& weights, bool isPeriodic)
{
    Point3D** controlPoints_ = new Point3D*[controlPoints.size()];
    for(size_t i=0; i<controlPoints.size(); ++i)
        controlPoints_[i] = controlPoints[i].get();

    bool res = set_raw(controlPoints_, controlPoints.size(), degree, knots.empty() ? nullptr : &knots[0], knots.size(), isRational, weights.empty() ? nullptr : &weights[0], weights.size(), isPeriodic);
    delete[] controlPoints_;
    return res;
}

inline Ptr<NurbsCurve3D> NurbsCurve3D::extract(double startParam, double endParam) const
{
    Ptr<NurbsCurve3D> res = extract_raw(startParam, endParam);
    return res;
}

inline Ptr<NurbsCurve3D> NurbsCurve3D::merge(const Ptr<NurbsCurve3D>& nurbsCurve) const
{
    Ptr<NurbsCurve3D> res = merge_raw(nurbsCurve.get());
    return res;
}

inline Ptr<NurbsCurve3D> NurbsCurve3D::copy() const
{
    Ptr<NurbsCurve3D> res = copy_raw();
    return res;
}

inline bool NurbsCurve3D::reverse()
{
    bool res = reverse_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_NURBSCURVE3D_API