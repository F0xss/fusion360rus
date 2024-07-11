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
# ifdef __COMPILING_ADSK_CORE_CURVEEVALUATOR2D_CPP__
# define ADSK_CORE_CURVEEVALUATOR2D_API XI_EXPORT
# else
# define ADSK_CORE_CURVEEVALUATOR2D_API
# endif
#else
# define ADSK_CORE_CURVEEVALUATOR2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point2D;
    class Vector2D;
}}

namespace adsk { namespace core {

/// 2D curve evaluator that is obtained from a transient curve and allows you to perform
/// various evaluations on the curve.
class CurveEvaluator2D : public Base {
public:

    /// Get the curvature values at a number of parameter positions on the curve.
    /// parameters : The array of parameter positions to return curvature information at.
    /// Each parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// directions : The output array of the direction of the curvature at each position on the curve.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// curvatures : The output array of the magnitude of the curvature at the position on the curve.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// Returns true if the curvatures were successfully returned.
    bool getCurvatures(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& directions, std::vector<double>& curvatures) const;

    /// Get the curvature value at a parameter position on the curve.
    /// parameter : The parameter position to return the curvature information at.
    /// This value must be within the range of the parameter extents as provided by getParameterExtents.
    /// direction : The output direction of the curvature at the position on the curve.
    /// curvature : The output magnitude of the curvature at the position on the curve.
    /// Returns true if the curvature was successfully returned.
    bool getCurvature(double parameter, Ptr<Vector2D>& direction, double& curvature) const;

    /// Get the tangent to the curve at a number of parameter positions on the curve.
    /// parameters : The array of parameter positions to return the tangent at.
    /// Each parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// tangents : The output array of tangent vectors for each position on the curve.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// Returns true if the tangents were successfully returned.
    bool getTangents(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& tangents) const;

    /// Get the tangent to the curve at a parameter position on the curve.
    /// parameter : The parameter position to return the tangent at.
    /// This value must be within the range of the parameter extents as provided by getParameterExtents.
    /// tangent : The output tangent vector at the curve position.
    /// Returns true if the tangent was successfully returned.
    bool getTangent(double parameter, Ptr<Vector2D>& tangent) const;

    /// Get the end points of the curve.
    /// startPoint : The output start point of the curve. If the curve is unbounded at the start, this value will be null.
    /// endPoint : The output end point of the curve. If the curve is unbounded at the end, this value will be null.
    /// Returns true if the end points were successfully returned.
    bool getEndPoints(Ptr<Point2D>& startPoint, Ptr<Point2D>& endPoint) const;

    /// Get the length of the curve between two parameter positions on the curve.
    /// fromParameter : The parameter position to measure the curve length from.
    /// This value must be within the range of the parameter extents as provided by getParameterExtents.
    /// toParameter : The parameter position to measure the curve length to.
    /// This value must be within the range of the parameter extents as provided by getParameterExtents.
    /// length : The output curve length between the from and to parameter positions on the curve.
    /// Returns true if the length was successfully returned.
    bool getLengthAtParameter(double fromParameter, double toParameter, double& length) const;

    /// Get the parameter position on the curve that is the specified curve length from the specified starting parameter position.
    /// fromParameter : The parameter position to start measuring the curve length from.
    /// This value must be within the range of the parameter extents as provided by getParameterExtents.
    /// length : The curve length to offset the from parameter by.
    /// A negative length value will offset in the negative parameter direction.
    /// parameter : The output parameter value that is the specified curve length from the starting parameter position.
    /// Returns true if the parameter was successfully returned.
    bool getParameterAtLength(double fromParameter, double length, double& parameter) const;

    /// Get the parameter positions that correspond to a set of points on the curve.
    /// For reliable results, the points should lie on the curve within model tolerance.
    /// If the points do not lie on the curve, the parameter of the nearest point on the curve will generally be returned.
    /// points : An array of points to get the curve parameter values at.
    /// parameters : The output array of parameter positions corresponding to the set of points.
    /// The length of this array will be equal to the length of the points array specified.
    /// Returns true if the parameters were successfully returned.
    bool getParametersAtPoints(const std::vector<Ptr<Point2D>>& points, std::vector<double>& parameters) const;

    /// Get the parameter position that correspond to a point on the curve.
    /// For reliable results, the point should lie on the curve within model tolerance.
    /// If the point does not lie on the curve, the parameter of the nearest point on the curve will generally be returned.
    /// point : The point to get the curve parameter value at.
    /// parameter : The output parameter position corresponding to the point.
    /// Returns true of the parameter was successfully returned.
    bool getParameterAtPoint(const Ptr<Point2D>& point, double& parameter) const;

    /// Get the parametric range of the curve.
    /// startParameter : The output lower bound of the parameter range.
    /// endParameter : The output upper bound of the parameter range.
    /// Returns true if the curve is bounded and the parameter extents were successfully returned.
    bool getParameterExtents(double& startParameter, double& endParameter) const;

    /// Get the points on the curve that correspond to evaluating a set of parameter positions on the curve.
    /// parameters : The array of parameter positions to evaluate the curve position at.
    /// Each parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// points : The output array of curve positions corresponding to evaluating the curve at that parameter position.
    /// The length of this array will be equal to the length of the parameters array specified.
    /// Returns true if the points were successfully returned.
    bool getPointsAtParameters(const std::vector<double>& parameters, std::vector<Ptr<Point2D>>& points) const;

    /// Get the point on the curve that corresponds to evaluating a parameter position on the curve.
    /// parameter : The parameter position to evaluate the curve position at.
    /// The parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// point : The output curve position corresponding to evaluating the curve at that parameter position.
    /// Returns true if the point was successfully returned.
    bool getPointAtParameter(double parameter, Ptr<Point2D>& point) const;

    /// Get the first derivatives of the curve at the specified parameter positions.
    /// parameters : The array of parameter positions to get the curve first derivative at.
    /// Each parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// firstDerivatives : The output array of first derivative vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// Returns true if the first derivatives were successfully returned.
    bool getFirstDerivatives(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& firstDerivatives) const;

    /// Get the first derivative of the curve at the specified parameter position.
    /// parameter : The parameter position to get the curve first derivative at.
    /// The parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// firstDerivative : The output first derivative vector at the parameter position specified.
    /// Returns true if the first derivative was successfully returned.
    bool getFirstDerivative(double parameter, Ptr<Vector2D>& firstDerivative) const;

    /// Get the second derivatives of the curve at the specified parameter positions.
    /// parameters : The array of parameter positions to get the curve second derivative at.
    /// Each parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// secondDerivatives : The output array of second derivative vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// Returns true if the second derivatives were successfully returned.
    bool getSecondDerivatives(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& secondDerivatives) const;

    /// Get the second derivative of the curve at the specified parameter position.
    /// parameter : The parameter position to get the curve second derivative at.
    /// The parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// secondDerivative : The output second derivative vector at the parameter position specified.
    /// Returns true if the second derivative was successfully returned.
    bool getSecondDerivative(double parameter, Ptr<Vector2D>& secondDerivative) const;

    /// Get the third derivatives of the curve at the specified parameter positions.
    /// parameters : The array of parameter positions to get the curve third derivative at.
    /// Each parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// thirdDerivatives : The output array of third derivative vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// Returns true if the third derivatives were successfully returned.
    bool getThirdDerivatives(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& thirdDerivatives) const;

    /// Get the third derivative of the curve at the specified parameter position.
    /// parameter : The parameter position to get the curve third derivative at.
    /// The parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// thirdDerivative : The output third derivative vector at the parameter position specified.
    /// Returns true if the third derivative was successfully returned.
    bool getThirdDerivative(double parameter, Ptr<Vector2D>& thirdDerivative) const;

    /// Get a sequence of points between two curve parameter positions.
    /// The points will be a linear interpolation along the curve between these two
    /// parameter positions where the maximum deviation between the curve and each line
    /// segment will not exceed the specified tolerance value.
    /// fromParameter : The starting parameter position to interpolate points from.
    /// The parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// toParameter : The ending parameter position to interpolate points to.
    /// The parameter value must be within the range of the parameter extents as provided by getParameterExtents.
    /// tolerance : The maximum distance tolerance between the curve and the linear interpolation.
    /// vertexCoordinates : The output array of linear interpolation points.
    /// Returns true if the interpolation points were successfully returned.
    bool getStrokes(double fromParameter, double toParameter, double tolerance, std::vector<Ptr<Point2D>>& vertexCoordinates) const;

    ADSK_CORE_CURVEEVALUATOR2D_API static const char* classType();
    ADSK_CORE_CURVEEVALUATOR2D_API const char* objectType() const override;
    ADSK_CORE_CURVEEVALUATOR2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CURVEEVALUATOR2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool getCurvatures_raw(const double* parameters, size_t parameters_size, Vector2D**& directions, size_t& directions_size, double*& curvatures, size_t& curvatures_size) const = 0;
    virtual bool getCurvature_raw(double parameter, Vector2D*& direction, double& curvature) const = 0;
    virtual bool getTangents_raw(const double* parameters, size_t parameters_size, Vector2D**& tangents, size_t& tangents_size) const = 0;
    virtual bool getTangent_raw(double parameter, Vector2D*& tangent) const = 0;
    virtual bool getEndPoints_raw(Point2D*& startPoint, Point2D*& endPoint) const = 0;
    virtual bool getLengthAtParameter_raw(double fromParameter, double toParameter, double& length) const = 0;
    virtual bool getParameterAtLength_raw(double fromParameter, double length, double& parameter) const = 0;
    virtual bool getParametersAtPoints_raw(Point2D** points, size_t points_size, double*& parameters, size_t& parameters_size) const = 0;
    virtual bool getParameterAtPoint_raw(Point2D* point, double& parameter) const = 0;
    virtual bool getParameterExtents_raw(double& startParameter, double& endParameter) const = 0;
    virtual bool getPointsAtParameters_raw(const double* parameters, size_t parameters_size, Point2D**& points, size_t& points_size) const = 0;
    virtual bool getPointAtParameter_raw(double parameter, Point2D*& point) const = 0;
    virtual bool getFirstDerivatives_raw(const double* parameters, size_t parameters_size, Vector2D**& firstDerivatives, size_t& firstDerivatives_size) const = 0;
    virtual bool getFirstDerivative_raw(double parameter, Vector2D*& firstDerivative) const = 0;
    virtual bool getSecondDerivatives_raw(const double* parameters, size_t parameters_size, Vector2D**& secondDerivatives, size_t& secondDerivatives_size) const = 0;
    virtual bool getSecondDerivative_raw(double parameter, Vector2D*& secondDerivative) const = 0;
    virtual bool getThirdDerivatives_raw(const double* parameters, size_t parameters_size, Vector2D**& thirdDerivatives, size_t& thirdDerivatives_size) const = 0;
    virtual bool getThirdDerivative_raw(double parameter, Vector2D*& thirdDerivative) const = 0;
    virtual bool getStrokes_raw(double fromParameter, double toParameter, double tolerance, Point2D**& vertexCoordinates, size_t& vertexCoordinates_size) const = 0;
};

// Inline wrappers

inline bool CurveEvaluator2D::getCurvatures(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& directions, std::vector<double>& curvatures) const
{
    Vector2D** directions_ = nullptr;
    size_t directions_size;
    double* curvatures_ = nullptr;
    size_t curvatures_size;

    bool res = getCurvatures_raw(parameters.empty() ? nullptr : &parameters[0], parameters.size(), directions_, directions_size, curvatures_, curvatures_size);
    if(directions_)
    {
        directions.assign(directions_, directions_ + directions_size);
        DeallocateArray(directions_);
    }
    if(curvatures_)
    {
        curvatures.assign(curvatures_, curvatures_ + curvatures_size);
        DeallocateArray(curvatures_);
    }
    return res;
}

inline bool CurveEvaluator2D::getCurvature(double parameter, Ptr<Vector2D>& direction, double& curvature) const
{
    Vector2D* direction_ = nullptr;

    bool res = getCurvature_raw(parameter, direction_, curvature);
    direction = direction_;
    return res;
}

inline bool CurveEvaluator2D::getTangents(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& tangents) const
{
    Vector2D** tangents_ = nullptr;
    size_t tangents_size;

    bool res = getTangents_raw(parameters.empty() ? nullptr : &parameters[0], parameters.size(), tangents_, tangents_size);
    if(tangents_)
    {
        tangents.assign(tangents_, tangents_ + tangents_size);
        DeallocateArray(tangents_);
    }
    return res;
}

inline bool CurveEvaluator2D::getTangent(double parameter, Ptr<Vector2D>& tangent) const
{
    Vector2D* tangent_ = nullptr;

    bool res = getTangent_raw(parameter, tangent_);
    tangent = tangent_;
    return res;
}

inline bool CurveEvaluator2D::getEndPoints(Ptr<Point2D>& startPoint, Ptr<Point2D>& endPoint) const
{
    Point2D* startPoint_ = nullptr;
    Point2D* endPoint_ = nullptr;

    bool res = getEndPoints_raw(startPoint_, endPoint_);
    startPoint = startPoint_;
    endPoint = endPoint_;
    return res;
}

inline bool CurveEvaluator2D::getLengthAtParameter(double fromParameter, double toParameter, double& length) const
{
    bool res = getLengthAtParameter_raw(fromParameter, toParameter, length);
    return res;
}

inline bool CurveEvaluator2D::getParameterAtLength(double fromParameter, double length, double& parameter) const
{
    bool res = getParameterAtLength_raw(fromParameter, length, parameter);
    return res;
}

inline bool CurveEvaluator2D::getParametersAtPoints(const std::vector<Ptr<Point2D>>& points, std::vector<double>& parameters) const
{
    Point2D** points_ = new Point2D*[points.size()];
    for(size_t i=0; i<points.size(); ++i)
        points_[i] = points[i].get();
    double* parameters_ = nullptr;
    size_t parameters_size;

    bool res = getParametersAtPoints_raw(points_, points.size(), parameters_, parameters_size);
    delete[] points_;
    if(parameters_)
    {
        parameters.assign(parameters_, parameters_ + parameters_size);
        DeallocateArray(parameters_);
    }
    return res;
}

inline bool CurveEvaluator2D::getParameterAtPoint(const Ptr<Point2D>& point, double& parameter) const
{
    bool res = getParameterAtPoint_raw(point.get(), parameter);
    return res;
}

inline bool CurveEvaluator2D::getParameterExtents(double& startParameter, double& endParameter) const
{
    bool res = getParameterExtents_raw(startParameter, endParameter);
    return res;
}

inline bool CurveEvaluator2D::getPointsAtParameters(const std::vector<double>& parameters, std::vector<Ptr<Point2D>>& points) const
{
    Point2D** points_ = nullptr;
    size_t points_size;

    bool res = getPointsAtParameters_raw(parameters.empty() ? nullptr : &parameters[0], parameters.size(), points_, points_size);
    if(points_)
    {
        points.assign(points_, points_ + points_size);
        DeallocateArray(points_);
    }
    return res;
}

inline bool CurveEvaluator2D::getPointAtParameter(double parameter, Ptr<Point2D>& point) const
{
    Point2D* point_ = nullptr;

    bool res = getPointAtParameter_raw(parameter, point_);
    point = point_;
    return res;
}

inline bool CurveEvaluator2D::getFirstDerivatives(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& firstDerivatives) const
{
    Vector2D** firstDerivatives_ = nullptr;
    size_t firstDerivatives_size;

    bool res = getFirstDerivatives_raw(parameters.empty() ? nullptr : &parameters[0], parameters.size(), firstDerivatives_, firstDerivatives_size);
    if(firstDerivatives_)
    {
        firstDerivatives.assign(firstDerivatives_, firstDerivatives_ + firstDerivatives_size);
        DeallocateArray(firstDerivatives_);
    }
    return res;
}

inline bool CurveEvaluator2D::getFirstDerivative(double parameter, Ptr<Vector2D>& firstDerivative) const
{
    Vector2D* firstDerivative_ = nullptr;

    bool res = getFirstDerivative_raw(parameter, firstDerivative_);
    firstDerivative = firstDerivative_;
    return res;
}

inline bool CurveEvaluator2D::getSecondDerivatives(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& secondDerivatives) const
{
    Vector2D** secondDerivatives_ = nullptr;
    size_t secondDerivatives_size;

    bool res = getSecondDerivatives_raw(parameters.empty() ? nullptr : &parameters[0], parameters.size(), secondDerivatives_, secondDerivatives_size);
    if(secondDerivatives_)
    {
        secondDerivatives.assign(secondDerivatives_, secondDerivatives_ + secondDerivatives_size);
        DeallocateArray(secondDerivatives_);
    }
    return res;
}

inline bool CurveEvaluator2D::getSecondDerivative(double parameter, Ptr<Vector2D>& secondDerivative) const
{
    Vector2D* secondDerivative_ = nullptr;

    bool res = getSecondDerivative_raw(parameter, secondDerivative_);
    secondDerivative = secondDerivative_;
    return res;
}

inline bool CurveEvaluator2D::getThirdDerivatives(const std::vector<double>& parameters, std::vector<Ptr<Vector2D>>& thirdDerivatives) const
{
    Vector2D** thirdDerivatives_ = nullptr;
    size_t thirdDerivatives_size;

    bool res = getThirdDerivatives_raw(parameters.empty() ? nullptr : &parameters[0], parameters.size(), thirdDerivatives_, thirdDerivatives_size);
    if(thirdDerivatives_)
    {
        thirdDerivatives.assign(thirdDerivatives_, thirdDerivatives_ + thirdDerivatives_size);
        DeallocateArray(thirdDerivatives_);
    }
    return res;
}

inline bool CurveEvaluator2D::getThirdDerivative(double parameter, Ptr<Vector2D>& thirdDerivative) const
{
    Vector2D* thirdDerivative_ = nullptr;

    bool res = getThirdDerivative_raw(parameter, thirdDerivative_);
    thirdDerivative = thirdDerivative_;
    return res;
}

inline bool CurveEvaluator2D::getStrokes(double fromParameter, double toParameter, double tolerance, std::vector<Ptr<Point2D>>& vertexCoordinates) const
{
    Point2D** vertexCoordinates_ = nullptr;
    size_t vertexCoordinates_size;

    bool res = getStrokes_raw(fromParameter, toParameter, tolerance, vertexCoordinates_, vertexCoordinates_size);
    if(vertexCoordinates_)
    {
        vertexCoordinates.assign(vertexCoordinates_, vertexCoordinates_ + vertexCoordinates_size);
        DeallocateArray(vertexCoordinates_);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CURVEEVALUATOR2D_API