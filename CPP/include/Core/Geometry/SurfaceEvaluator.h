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
# ifdef __COMPILING_ADSK_CORE_SURFACEEVALUATOR_CPP__
# define ADSK_CORE_SURFACEEVALUATOR_API XI_EXPORT
# else
# define ADSK_CORE_SURFACEEVALUATOR_API
# endif
#else
# define ADSK_CORE_SURFACEEVALUATOR_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class BoundingBox2D;
    class Curve2D;
    class ObjectCollection;
    class Point2D;
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Surface evaluator that is obtained from a transient surface and allows you to perform
/// various evaluations on the surface.
class SurfaceEvaluator : public Base {
public:

    /// Indicates if the surface is closed (forms a loop) in the U direction
    bool isClosedInU() const;

    /// Indicates if the surface is closed (forms a loop) in the V direction
    bool isClosedInV() const;

    /// Creates the 3D equivalent curve in model space, of a 2D curve defined in the
    /// parametric space of the surface.
    /// parametricCurve : The parameter space curve to map into this surface's parameter space.
    /// Returns an ObjectCollection containing one or more curves.
    /// When the SufaceEvaluatior is obtained from a face, and the curve cuts across internal
    /// boundaries of the face, multiple curves are returned. The returned curves are trimmed
    /// to the boundaries of the face.
    /// If the SurfaceEvaluator is obtained from a geometry object, a single curve returned
    /// because there are no boundaries with which to trim the curve.
    /// The type of curve(s) returned depends on the shape of the input curve and surface.
    Ptr<ObjectCollection> getModelCurveFromParametricCurve(const Ptr<Curve2D>& parametricCurve) const;

    /// Gets (by extraction) a curve that follows a constant u or v parameter along the surface.
    /// The curve will have the same properties as the surface in the direction of the extraction.
    /// For example, when a curve is extracted from the periodic direction of a surface, the extracted
    /// curve will also be periodic.
    /// The type of curve returned is dependent on the shape the surface.
    /// parameter : The parameter at which to extract the curve
    /// isUDirection : A bool that indicates whether to extract the curve from the U or V direction
    /// Returns an ObjectCollection that contains one or more curves.
    /// Multiple curves are returned when the SurfaceEvaluator is obtained from a Face
    /// and the curve cuts across internal boundaries. The resulting curves are trimmed to the
    /// boundaries of the Face.
    /// When the SurfaceEvaluator is obtained from a geometry object, a single curve is returned
    /// because there are no boundaries to trim the curve.
    /// The type of curve(s) returned is dependent on the shape of the surface.
    Ptr<ObjectCollection> getIsoCurve(double parameter, bool isUDirection) const;

    /// Get the curvature values at a number of parameter positions on the surface.
    /// parameters : The array of parameter positions to return curvature information at.
    /// Each parameter position must be with the range of the parameter extents as verified by isParameterOnFace.
    /// maxTangents : The output array of directions of maximum curvature at each position on the surface.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// maxCurvatures : The output array of the magnitude of the maximum curvature at each position on the surface.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// minCurvatures : The output array of the magnitude of the minimum curvature at each position on the surface.
    /// The minimum curvature direction is perpendicular to the maximum curvature tangent directions.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// Returns true if the curvatures were successfully returned.
    bool getCurvatures(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& maxTangents, std::vector<double>& maxCurvatures, std::vector<double>& minCurvatures) const;

    /// Get the curvature values at a parameter positions on the surface.
    /// parameter : The parameter positions to return curvature information at.
    /// maxTangent : The output directions of maximum curvature at the position on the surface.
    /// maxCurvature : The output magnitude of the maximum curvature at the position on the surface.
    /// minCurvature : The output magnitude of the minimum curvature at the position on the surface.
    /// The minimum curvature direction is perpendicular to the maximum curvature tangent directions.
    /// Returns true if the curvature was successfully returned.
    bool getCurvature(const Ptr<Point2D>& parameter, Ptr<Vector3D>& maxTangent, double& maxCurvature, double& minCurvature) const;

    /// Gets the surface normal at a number of parameter positions on the surface.
    /// parameters : The array of parameter positions to return the normal at.
    /// Each parameter position must be with the range of the parameter extents as verified by isParameterOnFace.
    /// normals : The output array of normals for each parameter position on the surface.
    /// The length of this array will be the same as the length of the parameters array provided.
    /// Returns true if the normals were successfully returned.
    bool getNormalsAtParameters(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& normals) const;

    /// Gets the surface normal at a parameter position on the surface.
    /// parameter : The parameter position to return the normal at.
    /// The parameter position must be with the range of the parameter extents as verified by isParameterOnFace.
    /// normal : The output normal for the parameter position on the surface.
    /// Returns true if the normal was successfully returned.
    bool getNormalAtParameter(const Ptr<Point2D>& parameter, Ptr<Vector3D>& normal) const;

    /// Gets the surface normal at a number of positions on the surface.
    /// points : The array of points to return the normal at.
    /// For reliable results each point should lie on the surface.
    /// normals : The output array of normals for each point on the surface.
    /// The length of this array will be the same as the length of the points array provided.
    /// Returns true if the normals were successfully returned.
    bool getNormalsAtPoints(const std::vector<Ptr<Point3D>>& points, std::vector<Ptr<Vector3D>>& normals) const;

    /// Gets the surface normal at a point on the surface.
    /// point : The point to return the normal at.
    /// For reliable results the point should lie on the surface.
    /// normal : The output normal for the point on the surface.
    /// Returns true if the normal was successfully returned.
    bool getNormalAtPoint(const Ptr<Point3D>& point, Ptr<Vector3D>& normal) const;

    /// Get the parameter positions that correspond to a set of points on the surface.
    /// For reliable results, the points should lie on the surface within model tolerance.
    /// If the points do not lie on the surface, the parameter of the nearest point on the surface will generally be returned.
    /// points : An array of points to get the surface parameter values at.
    /// parameters : The output array of parameter positions corresponding to the set of points.
    /// The length of this array will be equal to the length of the points array specified.
    /// Returns true if the parameters were successfully returned.
    bool getParametersAtPoints(const std::vector<Ptr<Point3D>>& points, std::vector<Ptr<Point2D>>& parameters) const;

    /// Get the parameter position that correspond to a point on the surface.
    /// For reliable results, the point should lie on the surface within model tolerance.
    /// If the point does not lie on the surface, the parameter of the nearest point on the surface will generally be returned.
    /// point : The point to get the curve parameter value at.
    /// parameter : The output parameter position corresponding to the point.
    /// Returns true of the parameter was successfully returned.
    bool getParameterAtPoint(const Ptr<Point3D>& point, Ptr<Point2D>& parameter) const;

    /// Get the points on the surface that correspond to evaluating a set of parameter positions on the surface.
    /// parameters : The array of parameter positions to evaluate the surface position at.
    /// Each parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// points : The output array of points corresponding to evaluating the curve at that parameter position.
    /// The length of this array will be equal to the length of the parameters array specified.
    /// Returns true if the points were successfully returned.
    bool getPointsAtParameters(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Point3D>>& points) const;

    /// Get the point on the surface that correspond to evaluating a parameter position on the surface.
    /// parameter : The parameter positions to evaluate the surface position at.
    /// The parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// point : The output point corresponding to evaluating the curve at that parameter position.
    /// Returns true if the point was successfully returned.
    bool getPointAtParameter(const Ptr<Point2D>& parameter, Ptr<Point3D>& point) const;

    /// Gets details about anomalies in parameter space of the surface.
    /// This includes information about periodic intervals, singularities, or unbounded parameter ranges.
    /// periodicityU : The output array with information about the period of the surface in U.
    /// periodicityU[0] will contain the period of the surface in U.
    /// If periodicityU[0] is 0, the surface is not periodic in U.
    /// If the surface is periodic in U, peridocityU[1] will contain the parameter value at the start of the principle period.
    /// periodicityV : The output array with information about the period of the surface in V.
    /// periodicityV[0] will contain the period of the surface in V.
    /// If periodicityV[0] is 0, the surface is not periodic in V.
    /// If the surface is periodic in V, peridocityV[1] will contain the parameter value at the start of the principle period.
    /// singularitiesU : The output array parameter values of singularities in U.
    /// If this array is empty, there are no singularities in U.
    /// singularitiesV : The output array parameter values of singularities in V.
    /// If this array is empty, there are no singularities in V.
    /// unboundedParameters : The output array that indicates if the parameter range is unbounded in U or V.
    /// unboundedParameters[0] will be true if U is unbounded.
    /// unboundedParameters[1] will be true if V is unbounded.
    /// Returns true if the parameter anomalies were successfully returned.
    bool getParamAnomaly(std::vector<double>& periodicityU, std::vector<double>& periodicityV, std::vector<double>& singularitiesU, std::vector<double>& singularitiesV, std::vector<bool>& unboundedParameters) const;

    /// Get the first derivatives of the surface at the specified parameter positions.
    /// parameters : The array of parameter positions to get the surface first derivative at.
    /// Each parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// partialsU : The output array of first derivative U partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// partialsV : The output array of first derivative V partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// Returns true if the first derivatives were successfully returned.
    bool getFirstDerivatives(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& partialsU, std::vector<Ptr<Vector3D>>& partialsV) const;

    /// Get the first derivative of the surface at the specified parameter position.
    /// parameter : The parameter positions to get the surface first derivative at.
    /// The parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// partialU : The output first derivative U partial vector at the parameter position specified.
    /// partialV : The output first derivative V partial vector at the parameter position specified.
    /// Returns true if the first derivative was successfully returned.
    bool getFirstDerivative(const Ptr<Point2D>& parameter, Ptr<Vector3D>& partialU, Ptr<Vector3D>& partialV) const;

    /// Get the second derivatives of the surface at the specified parameter positions.
    /// parameters : The array of parameter positions to get the surface second derivative at.
    /// Each parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// partialsUU : The output array of second derivative UU partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// partialsUV : The output array of second derivative UV mixed partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// partialsVV : The output array of second derivative VV partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// Returns true if the second derivatives were successfully returned.
    bool getSecondDerivatives(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& partialsUU, std::vector<Ptr<Vector3D>>& partialsUV, std::vector<Ptr<Vector3D>>& partialsVV) const;

    /// Get the second derivative of the surface at the specified parameter position.
    /// parameter : The parameter position to get the surface second derivative at.
    /// The parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// partialUU : The output second derivative UU partial vector at each parameter position specified.
    /// partialUV : The output second derivative UV mixed partial vector at each parameter position specified.
    /// partialVV : The output second derivative VV partial vector at each parameter position specified.
    /// Returns true if the second derivative was successfully returned.
    bool getSecondDerivative(const Ptr<Point2D>& parameter, Ptr<Vector3D>& partialUU, Ptr<Vector3D>& partialUV, Ptr<Vector3D>& partialVV) const;

    /// Get the third derivatives of the surface at the specified parameter positions.
    /// parameters : The array of parameter positions to get the surface third derivative at.
    /// Each parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// partialsUUU : The output array of third derivative UUU partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// partialsVVV : The output array of third derivative VVV partial vectors at each parameter position specified.
    /// The length of this array is equal to the length of the parameters array specified.
    /// Returns true if the third derivatives were successfully returned.
    bool getThirdDerivatives(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& partialsUUU, std::vector<Ptr<Vector3D>>& partialsVVV) const;

    /// Get the third derivative of the surface at the specified parameter position.
    /// parameter : The parameter position to get the surface third derivative at.
    /// The parameter position must be within the range of the parameter extents as verified by isParameterOnFace.
    /// partialUUU : The output third derivative UUU partial vector at each parameter position specified.
    /// partialVVV : The output third derivative VVV partial vector at each parameter position specified.
    /// Returns true if the third derivative was successfully returned.
    bool getThirdDerivative(const Ptr<Point2D>& parameter, Ptr<Vector3D>& partialUUU, Ptr<Vector3D>& partialVVV) const;

    /// Determines if the specified parameter position lies within the surface. When the SurfaceEvaluator
    /// is obtained from a BRepFace object, this will respect the boundaries of the face and return true
    /// when point is on the visible portion of the surface. When obtained from surface geometry it returns
    /// true if the point is within the parametric range of surface.
    /// parameter : The parameter position to test.
    /// Returns true if the parameter position lies within the surface.
    bool isParameterOnFace(const Ptr<Point2D>& parameter) const;

    /// Returns the parametric range of the surface.
    /// If the surface is periodic in a direction, the range is set to the principle period's range.
    /// If the surface is only upper bounded in a direction, the lower bound is set to -double-max.
    /// If the surface is only lower bounded in a direction, the upper bound is set to double-max.
    /// If the surface is unbounded in a direction, the lower bound and upper bound of the range will both be zero.
    /// Returns the bounding box with the parameter extents, with the X value being the U range, and the Y value being the V range.
    Ptr<BoundingBox2D> parametricRange() const;

    /// Returns the area of the surface. This is typically used when the SurfaceEvaluator is associated
    /// with a BRepFace object where it is always valid. This can fail in the case where the SurfaceEvaluator is
    /// associated with one of the geometry classes, (Plane, Cylinder, Cone, EllipticalCone, or EllipticalCylinder
    /// object), because these surfaces are unbounded. A BRepFace, even one of these shapes, is bounded by its
    /// edges and has a well-defined area.
    double area() const;

    ADSK_CORE_SURFACEEVALUATOR_API static const char* classType();
    ADSK_CORE_SURFACEEVALUATOR_API const char* objectType() const override;
    ADSK_CORE_SURFACEEVALUATOR_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SURFACEEVALUATOR_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool isClosedInU_raw() const = 0;
    virtual bool isClosedInV_raw() const = 0;
    virtual ObjectCollection* getModelCurveFromParametricCurve_raw(Curve2D* parametricCurve) const = 0;
    virtual ObjectCollection* getIsoCurve_raw(double parameter, bool isUDirection) const = 0;
    virtual bool getCurvatures_raw(Point2D** parameters, size_t parameters_size, Vector3D**& maxTangents, size_t& maxTangents_size, double*& maxCurvatures, size_t& maxCurvatures_size, double*& minCurvatures, size_t& minCurvatures_size) const = 0;
    virtual bool getCurvature_raw(Point2D* parameter, Vector3D*& maxTangent, double& maxCurvature, double& minCurvature) const = 0;
    virtual bool getNormalsAtParameters_raw(Point2D** parameters, size_t parameters_size, Vector3D**& normals, size_t& normals_size) const = 0;
    virtual bool getNormalAtParameter_raw(Point2D* parameter, Vector3D*& normal) const = 0;
    virtual bool getNormalsAtPoints_raw(Point3D** points, size_t points_size, Vector3D**& normals, size_t& normals_size) const = 0;
    virtual bool getNormalAtPoint_raw(Point3D* point, Vector3D*& normal) const = 0;
    virtual bool getParametersAtPoints_raw(Point3D** points, size_t points_size, Point2D**& parameters, size_t& parameters_size) const = 0;
    virtual bool getParameterAtPoint_raw(Point3D* point, Point2D*& parameter) const = 0;
    virtual bool getPointsAtParameters_raw(Point2D** parameters, size_t parameters_size, Point3D**& points, size_t& points_size) const = 0;
    virtual bool getPointAtParameter_raw(Point2D* parameter, Point3D*& point) const = 0;
    virtual bool getParamAnomaly_raw(double*& periodicityU, size_t& periodicityU_size, double*& periodicityV, size_t& periodicityV_size, double*& singularitiesU, size_t& singularitiesU_size, double*& singularitiesV, size_t& singularitiesV_size, bool*& unboundedParameters, size_t& unboundedParameters_size) const = 0;
    virtual bool getFirstDerivatives_raw(Point2D** parameters, size_t parameters_size, Vector3D**& partialsU, size_t& partialsU_size, Vector3D**& partialsV, size_t& partialsV_size) const = 0;
    virtual bool getFirstDerivative_raw(Point2D* parameter, Vector3D*& partialU, Vector3D*& partialV) const = 0;
    virtual bool getSecondDerivatives_raw(Point2D** parameters, size_t parameters_size, Vector3D**& partialsUU, size_t& partialsUU_size, Vector3D**& partialsUV, size_t& partialsUV_size, Vector3D**& partialsVV, size_t& partialsVV_size) const = 0;
    virtual bool getSecondDerivative_raw(Point2D* parameter, Vector3D*& partialUU, Vector3D*& partialUV, Vector3D*& partialVV) const = 0;
    virtual bool getThirdDerivatives_raw(Point2D** parameters, size_t parameters_size, Vector3D**& partialsUUU, size_t& partialsUUU_size, Vector3D**& partialsVVV, size_t& partialsVVV_size) const = 0;
    virtual bool getThirdDerivative_raw(Point2D* parameter, Vector3D*& partialUUU, Vector3D*& partialVVV) const = 0;
    virtual bool isParameterOnFace_raw(Point2D* parameter) const = 0;
    virtual BoundingBox2D* parametricRange_raw() const = 0;
    virtual double area_raw() const = 0;
};

// Inline wrappers

inline bool SurfaceEvaluator::isClosedInU() const
{
    bool res = isClosedInU_raw();
    return res;
}

inline bool SurfaceEvaluator::isClosedInV() const
{
    bool res = isClosedInV_raw();
    return res;
}

inline Ptr<ObjectCollection> SurfaceEvaluator::getModelCurveFromParametricCurve(const Ptr<Curve2D>& parametricCurve) const
{
    Ptr<ObjectCollection> res = getModelCurveFromParametricCurve_raw(parametricCurve.get());
    return res;
}

inline Ptr<ObjectCollection> SurfaceEvaluator::getIsoCurve(double parameter, bool isUDirection) const
{
    Ptr<ObjectCollection> res = getIsoCurve_raw(parameter, isUDirection);
    return res;
}

inline bool SurfaceEvaluator::getCurvatures(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& maxTangents, std::vector<double>& maxCurvatures, std::vector<double>& minCurvatures) const
{
    Point2D** parameters_ = new Point2D*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    Vector3D** maxTangents_ = nullptr;
    size_t maxTangents_size;
    double* maxCurvatures_ = nullptr;
    size_t maxCurvatures_size;
    double* minCurvatures_ = nullptr;
    size_t minCurvatures_size;

    bool res = getCurvatures_raw(parameters_, parameters.size(), maxTangents_, maxTangents_size, maxCurvatures_, maxCurvatures_size, minCurvatures_, minCurvatures_size);
    delete[] parameters_;
    if(maxTangents_)
    {
        maxTangents.assign(maxTangents_, maxTangents_ + maxTangents_size);
        DeallocateArray(maxTangents_);
    }
    if(maxCurvatures_)
    {
        maxCurvatures.assign(maxCurvatures_, maxCurvatures_ + maxCurvatures_size);
        DeallocateArray(maxCurvatures_);
    }
    if(minCurvatures_)
    {
        minCurvatures.assign(minCurvatures_, minCurvatures_ + minCurvatures_size);
        DeallocateArray(minCurvatures_);
    }
    return res;
}

inline bool SurfaceEvaluator::getCurvature(const Ptr<Point2D>& parameter, Ptr<Vector3D>& maxTangent, double& maxCurvature, double& minCurvature) const
{
    Vector3D* maxTangent_ = nullptr;

    bool res = getCurvature_raw(parameter.get(), maxTangent_, maxCurvature, minCurvature);
    maxTangent = maxTangent_;
    return res;
}

inline bool SurfaceEvaluator::getNormalsAtParameters(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& normals) const
{
    Point2D** parameters_ = new Point2D*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    Vector3D** normals_ = nullptr;
    size_t normals_size;

    bool res = getNormalsAtParameters_raw(parameters_, parameters.size(), normals_, normals_size);
    delete[] parameters_;
    if(normals_)
    {
        normals.assign(normals_, normals_ + normals_size);
        DeallocateArray(normals_);
    }
    return res;
}

inline bool SurfaceEvaluator::getNormalAtParameter(const Ptr<Point2D>& parameter, Ptr<Vector3D>& normal) const
{
    Vector3D* normal_ = nullptr;

    bool res = getNormalAtParameter_raw(parameter.get(), normal_);
    normal = normal_;
    return res;
}

inline bool SurfaceEvaluator::getNormalsAtPoints(const std::vector<Ptr<Point3D>>& points, std::vector<Ptr<Vector3D>>& normals) const
{
    Point3D** points_ = new Point3D*[points.size()];
    for(size_t i=0; i<points.size(); ++i)
        points_[i] = points[i].get();
    Vector3D** normals_ = nullptr;
    size_t normals_size;

    bool res = getNormalsAtPoints_raw(points_, points.size(), normals_, normals_size);
    delete[] points_;
    if(normals_)
    {
        normals.assign(normals_, normals_ + normals_size);
        DeallocateArray(normals_);
    }
    return res;
}

inline bool SurfaceEvaluator::getNormalAtPoint(const Ptr<Point3D>& point, Ptr<Vector3D>& normal) const
{
    Vector3D* normal_ = nullptr;

    bool res = getNormalAtPoint_raw(point.get(), normal_);
    normal = normal_;
    return res;
}

inline bool SurfaceEvaluator::getParametersAtPoints(const std::vector<Ptr<Point3D>>& points, std::vector<Ptr<Point2D>>& parameters) const
{
    Point3D** points_ = new Point3D*[points.size()];
    for(size_t i=0; i<points.size(); ++i)
        points_[i] = points[i].get();
    Point2D** parameters_ = nullptr;
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

inline bool SurfaceEvaluator::getParameterAtPoint(const Ptr<Point3D>& point, Ptr<Point2D>& parameter) const
{
    Point2D* parameter_ = nullptr;

    bool res = getParameterAtPoint_raw(point.get(), parameter_);
    parameter = parameter_;
    return res;
}

inline bool SurfaceEvaluator::getPointsAtParameters(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Point3D>>& points) const
{
    Point2D** parameters_ = new Point2D*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    Point3D** points_ = nullptr;
    size_t points_size;

    bool res = getPointsAtParameters_raw(parameters_, parameters.size(), points_, points_size);
    delete[] parameters_;
    if(points_)
    {
        points.assign(points_, points_ + points_size);
        DeallocateArray(points_);
    }
    return res;
}

inline bool SurfaceEvaluator::getPointAtParameter(const Ptr<Point2D>& parameter, Ptr<Point3D>& point) const
{
    Point3D* point_ = nullptr;

    bool res = getPointAtParameter_raw(parameter.get(), point_);
    point = point_;
    return res;
}

inline bool SurfaceEvaluator::getParamAnomaly(std::vector<double>& periodicityU, std::vector<double>& periodicityV, std::vector<double>& singularitiesU, std::vector<double>& singularitiesV, std::vector<bool>& unboundedParameters) const
{
    double* periodicityU_ = nullptr;
    size_t periodicityU_size;
    double* periodicityV_ = nullptr;
    size_t periodicityV_size;
    double* singularitiesU_ = nullptr;
    size_t singularitiesU_size;
    double* singularitiesV_ = nullptr;
    size_t singularitiesV_size;
    bool* unboundedParameters_ = nullptr;
    size_t unboundedParameters_size;

    bool res = getParamAnomaly_raw(periodicityU_, periodicityU_size, periodicityV_, periodicityV_size, singularitiesU_, singularitiesU_size, singularitiesV_, singularitiesV_size, unboundedParameters_, unboundedParameters_size);
    if(periodicityU_)
    {
        periodicityU.assign(periodicityU_, periodicityU_ + periodicityU_size);
        DeallocateArray(periodicityU_);
    }
    if(periodicityV_)
    {
        periodicityV.assign(periodicityV_, periodicityV_ + periodicityV_size);
        DeallocateArray(periodicityV_);
    }
    if(singularitiesU_)
    {
        singularitiesU.assign(singularitiesU_, singularitiesU_ + singularitiesU_size);
        DeallocateArray(singularitiesU_);
    }
    if(singularitiesV_)
    {
        singularitiesV.assign(singularitiesV_, singularitiesV_ + singularitiesV_size);
        DeallocateArray(singularitiesV_);
    }
    if(unboundedParameters_)
    {
        unboundedParameters.assign(unboundedParameters_, unboundedParameters_ + unboundedParameters_size);
        DeallocateArray(unboundedParameters_);
    }
    return res;
}

inline bool SurfaceEvaluator::getFirstDerivatives(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& partialsU, std::vector<Ptr<Vector3D>>& partialsV) const
{
    Point2D** parameters_ = new Point2D*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    Vector3D** partialsU_ = nullptr;
    size_t partialsU_size;
    Vector3D** partialsV_ = nullptr;
    size_t partialsV_size;

    bool res = getFirstDerivatives_raw(parameters_, parameters.size(), partialsU_, partialsU_size, partialsV_, partialsV_size);
    delete[] parameters_;
    if(partialsU_)
    {
        partialsU.assign(partialsU_, partialsU_ + partialsU_size);
        DeallocateArray(partialsU_);
    }
    if(partialsV_)
    {
        partialsV.assign(partialsV_, partialsV_ + partialsV_size);
        DeallocateArray(partialsV_);
    }
    return res;
}

inline bool SurfaceEvaluator::getFirstDerivative(const Ptr<Point2D>& parameter, Ptr<Vector3D>& partialU, Ptr<Vector3D>& partialV) const
{
    Vector3D* partialU_ = nullptr;
    Vector3D* partialV_ = nullptr;

    bool res = getFirstDerivative_raw(parameter.get(), partialU_, partialV_);
    partialU = partialU_;
    partialV = partialV_;
    return res;
}

inline bool SurfaceEvaluator::getSecondDerivatives(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& partialsUU, std::vector<Ptr<Vector3D>>& partialsUV, std::vector<Ptr<Vector3D>>& partialsVV) const
{
    Point2D** parameters_ = new Point2D*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    Vector3D** partialsUU_ = nullptr;
    size_t partialsUU_size;
    Vector3D** partialsUV_ = nullptr;
    size_t partialsUV_size;
    Vector3D** partialsVV_ = nullptr;
    size_t partialsVV_size;

    bool res = getSecondDerivatives_raw(parameters_, parameters.size(), partialsUU_, partialsUU_size, partialsUV_, partialsUV_size, partialsVV_, partialsVV_size);
    delete[] parameters_;
    if(partialsUU_)
    {
        partialsUU.assign(partialsUU_, partialsUU_ + partialsUU_size);
        DeallocateArray(partialsUU_);
    }
    if(partialsUV_)
    {
        partialsUV.assign(partialsUV_, partialsUV_ + partialsUV_size);
        DeallocateArray(partialsUV_);
    }
    if(partialsVV_)
    {
        partialsVV.assign(partialsVV_, partialsVV_ + partialsVV_size);
        DeallocateArray(partialsVV_);
    }
    return res;
}

inline bool SurfaceEvaluator::getSecondDerivative(const Ptr<Point2D>& parameter, Ptr<Vector3D>& partialUU, Ptr<Vector3D>& partialUV, Ptr<Vector3D>& partialVV) const
{
    Vector3D* partialUU_ = nullptr;
    Vector3D* partialUV_ = nullptr;
    Vector3D* partialVV_ = nullptr;

    bool res = getSecondDerivative_raw(parameter.get(), partialUU_, partialUV_, partialVV_);
    partialUU = partialUU_;
    partialUV = partialUV_;
    partialVV = partialVV_;
    return res;
}

inline bool SurfaceEvaluator::getThirdDerivatives(const std::vector<Ptr<Point2D>>& parameters, std::vector<Ptr<Vector3D>>& partialsUUU, std::vector<Ptr<Vector3D>>& partialsVVV) const
{
    Point2D** parameters_ = new Point2D*[parameters.size()];
    for(size_t i=0; i<parameters.size(); ++i)
        parameters_[i] = parameters[i].get();
    Vector3D** partialsUUU_ = nullptr;
    size_t partialsUUU_size;
    Vector3D** partialsVVV_ = nullptr;
    size_t partialsVVV_size;

    bool res = getThirdDerivatives_raw(parameters_, parameters.size(), partialsUUU_, partialsUUU_size, partialsVVV_, partialsVVV_size);
    delete[] parameters_;
    if(partialsUUU_)
    {
        partialsUUU.assign(partialsUUU_, partialsUUU_ + partialsUUU_size);
        DeallocateArray(partialsUUU_);
    }
    if(partialsVVV_)
    {
        partialsVVV.assign(partialsVVV_, partialsVVV_ + partialsVVV_size);
        DeallocateArray(partialsVVV_);
    }
    return res;
}

inline bool SurfaceEvaluator::getThirdDerivative(const Ptr<Point2D>& parameter, Ptr<Vector3D>& partialUUU, Ptr<Vector3D>& partialVVV) const
{
    Vector3D* partialUUU_ = nullptr;
    Vector3D* partialVVV_ = nullptr;

    bool res = getThirdDerivative_raw(parameter.get(), partialUUU_, partialVVV_);
    partialUUU = partialUUU_;
    partialVVV = partialVVV_;
    return res;
}

inline bool SurfaceEvaluator::isParameterOnFace(const Ptr<Point2D>& parameter) const
{
    bool res = isParameterOnFace_raw(parameter.get());
    return res;
}

inline Ptr<BoundingBox2D> SurfaceEvaluator::parametricRange() const
{
    Ptr<BoundingBox2D> res = parametricRange_raw();
    return res;
}

inline double SurfaceEvaluator::area() const
{
    double res = area_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SURFACEEVALUATOR_API