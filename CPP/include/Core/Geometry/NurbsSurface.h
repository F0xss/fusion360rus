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
#include "Surface.h"
#include "../CoreTypeDefs.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_NURBSSURFACE_CPP__
# define ADSK_CORE_NURBSSURFACE_API XI_EXPORT
# else
# define ADSK_CORE_NURBSSURFACE_API
# endif
#else
# define ADSK_CORE_NURBSSURFACE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace core {

/// Transient NURBS surface. A transient NURBS surface is not displayed or saved in a document.
/// A transient NURBS surface is used as a wrapper to work with raw NURBS surface information.
/// A transient NURBS surface is bounded by it's natural boundaries and does not support the
/// definition of arbitrary boundaries.
/// A NURBS surface is typically obtained from a BREPFace object, which does have boundary information.
/// They are created statically using the create method of the NurbsSurface class.
class NurbsSurface : public Surface {
public:

    /// Creates a transient NURBS surface object.
    /// degreeU : The degree in the U direction.
    /// degreeV : The degree in the V direction.
    /// controlPointCountU : The number of control points in the U direction.
    /// controlPointCountV : The number of control points in the V direction.
    /// controlPoints : An array of surface control points.
    /// The length of this array must be controlPointCountU * controlPointCountV.
    /// knotsU : The knot vector for the U direction.
    /// knotsV : The knot vector for the V direction.
    /// weights : An array of weights that corresponds to the control points of the surface.
    /// propertiesU : The properties (NurbsSurfaceProperties) of the surface in the U direction.
    /// propertiesV : The properties (NurbsSurfaceProperties) of the surface in the V direction.
    /// Returns the new NurbsSurface object or null if the creation failed.
    static Ptr<NurbsSurface> create(int degreeU, int degreeV, int controlPointCountU, int controlPointCountV, const std::vector<Ptr<Point3D>>& controlPoints, const std::vector<double>& knotsU, const std::vector<double>& knotsV, const std::vector<double>& weights, NurbsSurfaceProperties propertiesU, NurbsSurfaceProperties propertiesV);

    /// Gets the number of control points in the U direction.
    int controlPointCountU() const;

    /// Gets the number of control points in the V direction.
    int controlPointCountV() const;

    /// Gets the degree in the U direction.
    int degreeU() const;

    /// Gets the degree in the V direction.
    int degreeV() const;

    /// Gets the knot count in the U direction.
    int knotCountU() const;

    /// Gets thekKnot count in the V direction.
    int knotCountV() const;

    /// Gets the properties (NurbsSurfaceProperties) of the surface in the U direction.
    NurbsSurfaceProperties propertiesU() const;

    /// Gets the properties (NurbsSurfaceProperties) of the surface in the V direction.
    NurbsSurfaceProperties propertiesV() const;

    /// Gets an array of control points from the surface.
    std::vector<Ptr<Point3D>> controlPoints() const;

    /// Get the knot vector from the U direction.
    std::vector<double> knotsU() const;

    /// Get the knot vector from the V direction
    std::vector<double> knotsV() const;

    /// Gets the data that defines the NURBS surface.
    /// degreeU : The output degree in the U direction.
    /// degreeV : The output degree in the V direction.
    /// controlPointCountU : The output number of control points in the U direction.
    /// controlPointCountV : The output number of control points in the V direction.
    /// controlPoints : An output array of surface control points.
    /// knotsU : The output knot vector for the U direction.
    /// knotsV : The output knot vector for the V direction.
    /// weights : An output array of weights that corresponds to the control points of the surface.
    /// propertiesU : The output properties (NurbsSurfaceProperties) of the surface in the U direction.
    /// propertiesV : The output properties (NurbsSurfaceProperties) of the surface in the V direction.
    /// Returns true if successful.
    bool getData(int& degreeU, int& degreeV, int& controlPointCountU, int& controlPointCountV, std::vector<Ptr<Point3D>>& controlPoints, std::vector<double>& knotsU, std::vector<double>& knotsV, std::vector<double>& weights, NurbsSurfaceProperties& propertiesU, NurbsSurfaceProperties& propertiesV) const;

    /// Sets the data that defines the NURBS surface.
    /// degreeU : The degree in the U direction.
    /// degreeV : The degree in the V direction.
    /// controlPointCountU : The number of control points in the U direction.
    /// controlPointCountV : The number of control points in the V direction.
    /// controlPoints : An array of surface control points.
    /// knotsU : The knot vector for the U direction.
    /// knotsV : The knot vector for the V direction.
    /// weights : An array of weights that corresponds to the control points of the surface.
    /// propertiesU : The properties (NurbsSurfaceProperties) of the surface in the U direction.
    /// propertiesV : The properties (NurbsSurfaceProperties) of the surface in the V direction.
    /// Returns true if successful
    bool set(int degreeU, int degreeV, int controlPointCountU, int controlPointCountV, const std::vector<Ptr<Point3D>>& controlPoints, const std::vector<double>& knotsU, const std::vector<double>& knotsV, const std::vector<double>& weights, NurbsSurfaceProperties propertiesU, NurbsSurfaceProperties propertiesV);

    /// Creates and returns an independent copy of this NurbsSurface object.
    /// Returns a new NurbsSurface object that is a copy of this NurbsSurface object.
    Ptr<NurbsSurface> copy() const;

    ADSK_CORE_NURBSSURFACE_API static const char* classType();
    ADSK_CORE_NURBSSURFACE_API const char* objectType() const override;
    ADSK_CORE_NURBSSURFACE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_NURBSSURFACE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_NURBSSURFACE_API static NurbsSurface* create_raw(int degreeU, int degreeV, int controlPointCountU, int controlPointCountV, Point3D** controlPoints, size_t controlPoints_size, const double* knotsU, size_t knotsU_size, const double* knotsV, size_t knotsV_size, const double* weights, size_t weights_size, NurbsSurfaceProperties propertiesU, NurbsSurfaceProperties propertiesV);
    virtual int controlPointCountU_raw() const = 0;
    virtual int controlPointCountV_raw() const = 0;
    virtual int degreeU_raw() const = 0;
    virtual int degreeV_raw() const = 0;
    virtual int knotCountU_raw() const = 0;
    virtual int knotCountV_raw() const = 0;
    virtual NurbsSurfaceProperties propertiesU_raw() const = 0;
    virtual NurbsSurfaceProperties propertiesV_raw() const = 0;
    virtual Point3D** controlPoints_raw(size_t& return_size) const = 0;
    virtual double* knotsU_raw(size_t& return_size) const = 0;
    virtual double* knotsV_raw(size_t& return_size) const = 0;
    virtual bool getData_raw(int& degreeU, int& degreeV, int& controlPointCountU, int& controlPointCountV, Point3D**& controlPoints, size_t& controlPoints_size, double*& knotsU, size_t& knotsU_size, double*& knotsV, size_t& knotsV_size, double*& weights, size_t& weights_size, NurbsSurfaceProperties& propertiesU, NurbsSurfaceProperties& propertiesV) const = 0;
    virtual bool set_raw(int degreeU, int degreeV, int controlPointCountU, int controlPointCountV, Point3D** controlPoints, size_t controlPoints_size, const double* knotsU, size_t knotsU_size, const double* knotsV, size_t knotsV_size, const double* weights, size_t weights_size, NurbsSurfaceProperties propertiesU, NurbsSurfaceProperties propertiesV) = 0;
    virtual NurbsSurface* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<NurbsSurface> NurbsSurface::create(int degreeU, int degreeV, int controlPointCountU, int controlPointCountV, const std::vector<Ptr<Point3D>>& controlPoints, const std::vector<double>& knotsU, const std::vector<double>& knotsV, const std::vector<double>& weights, NurbsSurfaceProperties propertiesU, NurbsSurfaceProperties propertiesV)
{
    Point3D** controlPoints_ = new Point3D*[controlPoints.size()];
    for(size_t i=0; i<controlPoints.size(); ++i)
        controlPoints_[i] = controlPoints[i].get();

    Ptr<NurbsSurface> res = create_raw(degreeU, degreeV, controlPointCountU, controlPointCountV, controlPoints_, controlPoints.size(), knotsU.empty() ? nullptr : &knotsU[0], knotsU.size(), knotsV.empty() ? nullptr : &knotsV[0], knotsV.size(), weights.empty() ? nullptr : &weights[0], weights.size(), propertiesU, propertiesV);
    delete[] controlPoints_;
    return res;
}

inline int NurbsSurface::controlPointCountU() const
{
    int res = controlPointCountU_raw();
    return res;
}

inline int NurbsSurface::controlPointCountV() const
{
    int res = controlPointCountV_raw();
    return res;
}

inline int NurbsSurface::degreeU() const
{
    int res = degreeU_raw();
    return res;
}

inline int NurbsSurface::degreeV() const
{
    int res = degreeV_raw();
    return res;
}

inline int NurbsSurface::knotCountU() const
{
    int res = knotCountU_raw();
    return res;
}

inline int NurbsSurface::knotCountV() const
{
    int res = knotCountV_raw();
    return res;
}

inline NurbsSurfaceProperties NurbsSurface::propertiesU() const
{
    NurbsSurfaceProperties res = propertiesU_raw();
    return res;
}

inline NurbsSurfaceProperties NurbsSurface::propertiesV() const
{
    NurbsSurfaceProperties res = propertiesV_raw();
    return res;
}

inline std::vector<Ptr<Point3D>> NurbsSurface::controlPoints() const
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

inline std::vector<double> NurbsSurface::knotsU() const
{
    std::vector<double> res;
    size_t s;

    double* p= knotsU_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline std::vector<double> NurbsSurface::knotsV() const
{
    std::vector<double> res;
    size_t s;

    double* p= knotsV_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool NurbsSurface::getData(int& degreeU, int& degreeV, int& controlPointCountU, int& controlPointCountV, std::vector<Ptr<Point3D>>& controlPoints, std::vector<double>& knotsU, std::vector<double>& knotsV, std::vector<double>& weights, NurbsSurfaceProperties& propertiesU, NurbsSurfaceProperties& propertiesV) const
{
    Point3D** controlPoints_ = nullptr;
    size_t controlPoints_size;
    double* knotsU_ = nullptr;
    size_t knotsU_size;
    double* knotsV_ = nullptr;
    size_t knotsV_size;
    double* weights_ = nullptr;
    size_t weights_size;

    bool res = getData_raw(degreeU, degreeV, controlPointCountU, controlPointCountV, controlPoints_, controlPoints_size, knotsU_, knotsU_size, knotsV_, knotsV_size, weights_, weights_size, propertiesU, propertiesV);
    if(controlPoints_)
    {
        controlPoints.assign(controlPoints_, controlPoints_ + controlPoints_size);
        DeallocateArray(controlPoints_);
    }
    if(knotsU_)
    {
        knotsU.assign(knotsU_, knotsU_ + knotsU_size);
        DeallocateArray(knotsU_);
    }
    if(knotsV_)
    {
        knotsV.assign(knotsV_, knotsV_ + knotsV_size);
        DeallocateArray(knotsV_);
    }
    if(weights_)
    {
        weights.assign(weights_, weights_ + weights_size);
        DeallocateArray(weights_);
    }
    return res;
}

inline bool NurbsSurface::set(int degreeU, int degreeV, int controlPointCountU, int controlPointCountV, const std::vector<Ptr<Point3D>>& controlPoints, const std::vector<double>& knotsU, const std::vector<double>& knotsV, const std::vector<double>& weights, NurbsSurfaceProperties propertiesU, NurbsSurfaceProperties propertiesV)
{
    Point3D** controlPoints_ = new Point3D*[controlPoints.size()];
    for(size_t i=0; i<controlPoints.size(); ++i)
        controlPoints_[i] = controlPoints[i].get();

    bool res = set_raw(degreeU, degreeV, controlPointCountU, controlPointCountV, controlPoints_, controlPoints.size(), knotsU.empty() ? nullptr : &knotsU[0], knotsU.size(), knotsV.empty() ? nullptr : &knotsV[0], knotsV.size(), weights.empty() ? nullptr : &weights[0], weights.size(), propertiesU, propertiesV);
    delete[] controlPoints_;
    return res;
}

inline Ptr<NurbsSurface> NurbsSurface::copy() const
{
    Ptr<NurbsSurface> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_NURBSSURFACE_API