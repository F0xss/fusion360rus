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
# ifdef __COMPILING_ADSK_CORE_CAMERA_CPP__
# define ADSK_CORE_CAMERA_API XI_EXPORT
# else
# define ADSK_CORE_CAMERA_API
# endif
#else
# define ADSK_CORE_CAMERA_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// The Camera class represents the information that specifies how a model
/// is viewed and displayed. It's analogous to a real camera where it has
/// a position in space, is pointed towards a specific point and is oriented
/// in a particular way.
class Camera : public Base {
public:

    /// Gets and sets the position of the eye in world space.
    Ptr<Point3D> eye() const;
    bool eye(const Ptr<Point3D>& value);

    /// Gets and sets the camera target point in world space.
    Ptr<Point3D> target() const;
    bool target(const Ptr<Point3D>& value);

    /// Gets and sets the current camera type.
    CameraTypes cameraType() const;
    bool cameraType(CameraTypes value);

    /// Gets and sets the perspective angle of the camera. This
    /// property is only valid when the CameraType property is
    /// either Perspective or PerspectiveWithOrthoFaces.
    double perspectiveAngle() const;
    bool perspectiveAngle(double value);

    /// Defines the "up" direction for the camera which controls the orientation of the camera around the line
    /// defined between the eye and target points.
    Ptr<Vector3D> upVector() const;
    bool upVector(const Ptr<Vector3D>& value);

    /// Defines the area that's visible by the camera. This
    /// value is the radius of a sphere centered at the target point.
    /// The camera will display everything within that sphere and
    /// everything in front of and behind the sphere. Additional
    /// geometry outside of the sphere will also be visible depending
    /// on the shape of the window. Setting this
    /// value can cause the eye and/or perspective angle to be
    /// modified when the camera type is perspective.
    double viewExtents() const;
    bool viewExtents(double value);

    /// If this property is true, when this camera is applied to a viewport it
    /// will modify the camera such that the entire model is displayed in the viewport.
    /// When getting a camera from a viewport this property is always initialized to false.
    bool isFitView() const;
    bool isFitView(bool value);

    /// Determines whether Fusion 360 does a smooth transition to this camera position when the
    /// camera is assigned to a ViewPort. If this is true it will do a smooth transition from
    /// the current camera position to the new camera position. If false, the view will jump
    /// to the position defined by the camera with no intermediate steps. This is useful if
    /// you're providing a series of cameras to control the camera animation.
    bool isSmoothTransition() const;
    bool isSmoothTransition(bool value);

    /// Sets the camera to a standard orientation. If this is set, it will result in resetting
    /// all the camera values except the camera type. The orientation is based on the current
    /// orientation defined by the ViewCube. This means, that the view orientations cannot be
    /// expected to be consistent from one view to another.
    ViewOrientations viewOrientation() const;
    bool viewOrientation(ViewOrientations value);

    ADSK_CORE_CAMERA_API static const char* classType();
    ADSK_CORE_CAMERA_API const char* objectType() const override;
    ADSK_CORE_CAMERA_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CAMERA_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Point3D* eye_raw() const = 0;
    virtual bool eye_raw(Point3D* value) = 0;
    virtual Point3D* target_raw() const = 0;
    virtual bool target_raw(Point3D* value) = 0;
    virtual CameraTypes cameraType_raw() const = 0;
    virtual bool cameraType_raw(CameraTypes value) = 0;
    virtual double perspectiveAngle_raw() const = 0;
    virtual bool perspectiveAngle_raw(double value) = 0;
    virtual Vector3D* upVector_raw() const = 0;
    virtual bool upVector_raw(Vector3D* value) = 0;
    virtual double viewExtents_raw() const = 0;
    virtual bool viewExtents_raw(double value) = 0;
    virtual bool isFitView_raw() const = 0;
    virtual bool isFitView_raw(bool value) = 0;
    virtual bool isSmoothTransition_raw() const = 0;
    virtual bool isSmoothTransition_raw(bool value) = 0;
    virtual ViewOrientations viewOrientation_raw() const = 0;
    virtual bool viewOrientation_raw(ViewOrientations value) = 0;
};

// Inline wrappers

inline Ptr<Point3D> Camera::eye() const
{
    Ptr<Point3D> res = eye_raw();
    return res;
}

inline bool Camera::eye(const Ptr<Point3D>& value)
{
    return eye_raw(value.get());
}

inline Ptr<Point3D> Camera::target() const
{
    Ptr<Point3D> res = target_raw();
    return res;
}

inline bool Camera::target(const Ptr<Point3D>& value)
{
    return target_raw(value.get());
}

inline CameraTypes Camera::cameraType() const
{
    CameraTypes res = cameraType_raw();
    return res;
}

inline bool Camera::cameraType(CameraTypes value)
{
    return cameraType_raw(value);
}

inline double Camera::perspectiveAngle() const
{
    double res = perspectiveAngle_raw();
    return res;
}

inline bool Camera::perspectiveAngle(double value)
{
    return perspectiveAngle_raw(value);
}

inline Ptr<Vector3D> Camera::upVector() const
{
    Ptr<Vector3D> res = upVector_raw();
    return res;
}

inline bool Camera::upVector(const Ptr<Vector3D>& value)
{
    return upVector_raw(value.get());
}

inline double Camera::viewExtents() const
{
    double res = viewExtents_raw();
    return res;
}

inline bool Camera::viewExtents(double value)
{
    return viewExtents_raw(value);
}

inline bool Camera::isFitView() const
{
    bool res = isFitView_raw();
    return res;
}

inline bool Camera::isFitView(bool value)
{
    return isFitView_raw(value);
}

inline bool Camera::isSmoothTransition() const
{
    bool res = isSmoothTransition_raw();
    return res;
}

inline bool Camera::isSmoothTransition(bool value)
{
    return isSmoothTransition_raw(value);
}

inline ViewOrientations Camera::viewOrientation() const
{
    ViewOrientations res = viewOrientation_raw();
    return res;
}

inline bool Camera::viewOrientation(ViewOrientations value)
{
    return viewOrientation_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CAMERA_API