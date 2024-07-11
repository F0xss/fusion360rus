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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_MEASUREMANAGER_CPP__
# define ADSK_CORE_MEASUREMANAGER_API XI_EXPORT
# else
# define ADSK_CORE_MEASUREMANAGER_API
# endif
#else
# define ADSK_CORE_MEASUREMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class MeasureResults;
    class OrientedBoundingBox3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// The MeasurementManager class provides some generic measurement utilities that
/// can be used for most entity types.
class MeasureManager : public Base {
public:

    /// Calculates an oriented bounding box for the input geometry. The bounding box is tight fitting
    /// to the input geometry and is particularly useful when you want to calculate a bounding box that
    /// is not oriented to be parallel to the model x-y-z plane.
    /// 
    /// The height direction is automatically determined using the length and width directions.
    /// geometry : The geometry to calculate the bounding box for. This can be any of the B-Rep related entities.
    /// lengthVector : The direction the length of the oriented bounding box will be measured in. The magnitude of the vector
    /// is ignored and only the direction is used.
    /// widthVector : The direction the width of the oriented bounding box will be measured in. The magnitude of the vector
    /// is ignored and only the direction is used. This must be perpendicular to the length vector.
    /// Returns an OrientedBoundingBox3D object which provides the information that defines an oriented bounding box.
    Ptr<OrientedBoundingBox3D> getOrientedBoundingBox(const Ptr<Base>& geometry, const Ptr<Vector3D>& lengthVector, const Ptr<Vector3D>& widthVector);

    /// Measures the minimum distance between the two input geometries.
    /// geometryOne : The first geometry to measure from. This can be an Occurrence, BRepBody, BRepFace, BRepEdge, BRepVertex,
    /// ConstructionPlane, ConstructionAxis, ConstructionPoint, and any sketch entity. The only temporary geometry supported is the Plane object.
    /// geometryTwo : The first geometry to measure from. This can be an Occurrence, BRepBody, BRepFace, BRepEdge, BRepVertex,
    /// ConstructionPlane, ConstructionAxis, ConstructionPoint, and any sketch entity. The only temporary geometry supported is the Plane object.
    /// A MeasureResults object that contains the distance and the two points on the geometry that the distance that
    /// was measured between them in centimeters.
    Ptr<MeasureResults> measureMinimumDistance(const Ptr<Base>& geometryOne, const Ptr<Base>& geometryTwo);

    /// Measures the angle between the input geometry.
    /// geometryOne : The first geometry to measure the angle to. This can be any 3D point geometry (Construction Point, Vertex, SketchPoint, or Point3D),
    /// any 3D linear geometry (Construction Axis, linear BRepEdge, SketchLine, Line3D, or InfiniteLine3D), or any planar geometry (Construction Plane, planar BRepFace, or Plane).
    /// geometryTwo : The second geometry to measure the angle to. This can be any 3D point geometry (Construction Point, Vertex, SketchPoint, or Point3D),
    /// any 3D linear geometry (Construction Axis, linear BRepEdge, SketchLine, Line3D, or InfiniteLine3D), or any planar geometry (Construction Plane, planar BRepFace, or Plane).
    /// geometryThree : The optional third geometry to measure the angle to. This is only used when the first two geometries
    /// are points and this defines the third point. When three points define a triangle, the apex of the
    /// triangle is defined by the second point. A point can be defined by a Construction Point, Vertex, SketchPoint, or Point3D object.
    /// A MeasureResults object that contains the angle and the two points on the geometry that the angle
    /// that was measured between them in radians.
    Ptr<MeasureResults> measureAngle(const Ptr<Base>& geometryOne, const Ptr<Base>& geometryTwo, const Ptr<Base>& geometryThree = NULL);

    ADSK_CORE_MEASUREMANAGER_API static const char* classType();
    ADSK_CORE_MEASUREMANAGER_API const char* objectType() const override;
    ADSK_CORE_MEASUREMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MEASUREMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual OrientedBoundingBox3D* getOrientedBoundingBox_raw(Base* geometry, Vector3D* lengthVector, Vector3D* widthVector) = 0;
    virtual MeasureResults* measureMinimumDistance_raw(Base* geometryOne, Base* geometryTwo) = 0;
    virtual MeasureResults* measureAngle_raw(Base* geometryOne, Base* geometryTwo, Base* geometryThree) = 0;
};

// Inline wrappers

inline Ptr<OrientedBoundingBox3D> MeasureManager::getOrientedBoundingBox(const Ptr<Base>& geometry, const Ptr<Vector3D>& lengthVector, const Ptr<Vector3D>& widthVector)
{
    Ptr<OrientedBoundingBox3D> res = getOrientedBoundingBox_raw(geometry.get(), lengthVector.get(), widthVector.get());
    return res;
}

inline Ptr<MeasureResults> MeasureManager::measureMinimumDistance(const Ptr<Base>& geometryOne, const Ptr<Base>& geometryTwo)
{
    Ptr<MeasureResults> res = measureMinimumDistance_raw(geometryOne.get(), geometryTwo.get());
    return res;
}

inline Ptr<MeasureResults> MeasureManager::measureAngle(const Ptr<Base>& geometryOne, const Ptr<Base>& geometryTwo, const Ptr<Base>& geometryThree)
{
    Ptr<MeasureResults> res = measureAngle_raw(geometryOne.get(), geometryTwo.get(), geometryThree.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MEASUREMANAGER_API