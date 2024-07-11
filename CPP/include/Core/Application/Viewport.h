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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_VIEWPORT_CPP__
# define ADSK_CORE_VIEWPORT_API XI_EXPORT
# else
# define ADSK_CORE_VIEWPORT_API
# endif
#else
# define ADSK_CORE_VIEWPORT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Camera;
    class Document;
    class Matrix3D;
    class Point2D;
    class Point3D;
    class SaveImageFileOptions;
    class Vector3D;
}}

namespace adsk { namespace core {

/// A viewport within Fusion 360. A viewport is the window where the model is displayed.
class Viewport : public Base {
public:

    /// Forces the view to refresh. It is sometimes useful to force a refresh to
    /// be able to see edits that have been made using the API.
    /// Returns true if the operation was successful.
    bool refresh() const;

    /// Gets and sets the camera associated with the view.
    /// The camera returned is a copy of the current camera
    /// settings of the view. Editing the properties of the
    /// camera will have no affect on the viewport until the
    /// camera is assigned back to the viewport.
    Ptr<Camera> camera() const;
    bool camera(const Ptr<Camera>& value);

    /// Returns the height of the viewport in pixels.
    int height() const;

    /// Returns the width of the viewport in pixels.
    int width() const;

    /// Gets and sets if the view is in full screen mode.
    bool isFullScreen() const;
    bool isFullScreen(bool value);

    /// Saves the current view to the specified image file. The view is re-rendered to the specified size and not
    /// just scaled from the existing view. This allows you to generate higher resolution images than you could
    /// do with just a screen capture.
    /// filename : The full filename, including the path, of the image file. The type of image file to be created is inferred from the extension of the filename.
    /// width : The width in pixels of the output image. A value of zero indicates that the current width of the viewport is to be used.
    /// height : The height in pixels of the output image. A value of zero indicates that the current height of the viewport is to be used.
    /// Returns true if the operation was successful.
    bool saveAsImageFile(const std::string& filename, int width, int height);

    /// Gets and sets the current visual style being used.
    VisualStyles visualStyle() const;
    bool visualStyle(VisualStyles value);

    /// Forces a camera change so that all of the graphics are visible in the viewport.
    /// Returns true if the fit was successful.
    bool fit();

    /// A specified point in model space returns the equivalent point in view space.
    /// modelCoordinate : A coordinate in model space.
    /// Returns the equivalent point in view space.
    Ptr<Point2D> modelToViewSpace(const Ptr<Point3D>& modelCoordinate);

    /// A specified point in view space returns the equivalent point in model space.
    /// Because view space is 2D and model space is 3D, the depth of the point is
    /// returned is somewhat arbitrary along the eye to target point direction.
    /// viewCoordinate : A coordinate in view space.
    /// Returns the equivalent point in model space.
    Ptr<Point3D> viewToModelSpace(const Ptr<Point2D>& viewCoordinate);

    /// Converts a 2D screen point into the equivalent viewport coordinate.
    /// screenCoordinate : A 2D coordinate in screen space.
    /// (0,0) indicates the upper-left corner of the entire screen.
    /// Returns the equivalent point in the viewport. This can return null in the case
    /// where the input screen point does not lie within the viewport.
    Ptr<Point2D> screenToView(const Ptr<Point2D>& screenCoordinate);

    /// Converts a 2D viewPort point into the equivalent screen coordinate.
    /// viewCoordinate : A 2D coordinate in the viewport.
    /// (0,0) indicates the upper-left corner of the viewport.
    /// Returns the equivalent point in the screen. This can return null in the case where
    /// the input point is outside the bounds of the screen, which also means it's outside
    /// any viewport.
    Ptr<Point2D> viewToScreen(const Ptr<Point2D>& viewCoordinate);

    /// Saves the current view to the specified image file. The view is re-rendered to the specified size and not
    /// just scaled from the existing view. This allows you to generate higher resolution images than you could
    /// do with just a screen capture.
    /// options : A SaveImageFileOptions object that defines the various options that define how the image should be created.
    /// The SaveImageFileOptions can be created by using the static create method on the SaveImageFileOptions class.
    /// Returns true if the operation was successful.
    bool saveAsImageFileWithOptions(const Ptr<SaveImageFileOptions>& options);

    /// Returns the parent document of this viewport.
    Ptr<Document> parentDocument() const;

    /// Sets the "front" view to be the current view orientation.
    /// Returns true if setting the view orientation was successful.
    bool setCurrentAsFront();

    /// Sets the "top" view to be the current view orientation.
    /// Returns true if setting the view orientation was successful.
    bool setCurrentAsTop();

    /// Sets the "home" view to be the current view orientation.
    /// isFitToView : Specifies if when the view goes "home" if the view should be fit to the model
    /// or not. True indicates the view will be fit to the model.
    /// Returns true if setting the view orientation was successful.
    bool setCurrentAsHome(bool isFitToView);

    /// Sets the camera of the viewport to the defined "home" position.
    /// transition : If this is true it will do a smooth transition from
    /// the current camera position to the home position. If false, the view will jump
    /// to the home position with no intermediate steps.
    /// Returns true if setting the view orientation was successful.
    bool goHome(bool transition = true);

    /// Resets the front view to be the default front view orientation.
    /// Returns true if resetting to front was successful.
    bool resetFront();

    /// Returns the direction of the front view as defined by the view cube.
    /// This vector defines the direction from the eye to the target for the front view.
    Ptr<Vector3D> frontEyeDirection() const;

    /// Returns the up direction of the front view as defined by the view cube.
    Ptr<Vector3D> frontUpDirection() const;

    /// Returns a transformation matrix that defines the transform from model to viewport space.
    Ptr<Matrix3D> modelToViewSpaceTransform() const;

    ADSK_CORE_VIEWPORT_API static const char* classType();
    ADSK_CORE_VIEWPORT_API const char* objectType() const override;
    ADSK_CORE_VIEWPORT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VIEWPORT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool refresh_raw() const = 0;
    virtual Camera* camera_raw() const = 0;
    virtual bool camera_raw(Camera* value) = 0;
    virtual int height_raw() const = 0;
    virtual int width_raw() const = 0;
    virtual bool isFullScreen_raw() const = 0;
    virtual bool isFullScreen_raw(bool value) = 0;
    virtual bool saveAsImageFile_raw(const char* filename, int width, int height) = 0;
    virtual VisualStyles visualStyle_raw() const = 0;
    virtual bool visualStyle_raw(VisualStyles value) = 0;
    virtual bool fit_raw() = 0;
    virtual Point2D* modelToViewSpace_raw(Point3D* modelCoordinate) = 0;
    virtual Point3D* viewToModelSpace_raw(Point2D* viewCoordinate) = 0;
    virtual Point2D* screenToView_raw(Point2D* screenCoordinate) = 0;
    virtual Point2D* viewToScreen_raw(Point2D* viewCoordinate) = 0;
    virtual bool saveAsImageFileWithOptions_raw(SaveImageFileOptions* options) = 0;
    virtual Document* parentDocument_raw() const = 0;
    virtual bool setCurrentAsFront_raw() = 0;
    virtual bool setCurrentAsTop_raw() = 0;
    virtual bool setCurrentAsHome_raw(bool isFitToView) = 0;
    virtual bool goHome_raw(bool transition) = 0;
    virtual bool resetFront_raw() = 0;
    virtual Vector3D* frontEyeDirection_raw() const = 0;
    virtual Vector3D* frontUpDirection_raw() const = 0;
    virtual Matrix3D* modelToViewSpaceTransform_raw() const = 0;
};

// Inline wrappers

inline bool Viewport::refresh() const
{
    bool res = refresh_raw();
    return res;
}

inline Ptr<Camera> Viewport::camera() const
{
    Ptr<Camera> res = camera_raw();
    return res;
}

inline bool Viewport::camera(const Ptr<Camera>& value)
{
    return camera_raw(value.get());
}

inline int Viewport::height() const
{
    int res = height_raw();
    return res;
}

inline int Viewport::width() const
{
    int res = width_raw();
    return res;
}

inline bool Viewport::isFullScreen() const
{
    bool res = isFullScreen_raw();
    return res;
}

inline bool Viewport::isFullScreen(bool value)
{
    return isFullScreen_raw(value);
}

inline bool Viewport::saveAsImageFile(const std::string& filename, int width, int height)
{
    bool res = saveAsImageFile_raw(filename.c_str(), width, height);
    return res;
}

inline VisualStyles Viewport::visualStyle() const
{
    VisualStyles res = visualStyle_raw();
    return res;
}

inline bool Viewport::visualStyle(VisualStyles value)
{
    return visualStyle_raw(value);
}

inline bool Viewport::fit()
{
    bool res = fit_raw();
    return res;
}

inline Ptr<Point2D> Viewport::modelToViewSpace(const Ptr<Point3D>& modelCoordinate)
{
    Ptr<Point2D> res = modelToViewSpace_raw(modelCoordinate.get());
    return res;
}

inline Ptr<Point3D> Viewport::viewToModelSpace(const Ptr<Point2D>& viewCoordinate)
{
    Ptr<Point3D> res = viewToModelSpace_raw(viewCoordinate.get());
    return res;
}

inline Ptr<Point2D> Viewport::screenToView(const Ptr<Point2D>& screenCoordinate)
{
    Ptr<Point2D> res = screenToView_raw(screenCoordinate.get());
    return res;
}

inline Ptr<Point2D> Viewport::viewToScreen(const Ptr<Point2D>& viewCoordinate)
{
    Ptr<Point2D> res = viewToScreen_raw(viewCoordinate.get());
    return res;
}

inline bool Viewport::saveAsImageFileWithOptions(const Ptr<SaveImageFileOptions>& options)
{
    bool res = saveAsImageFileWithOptions_raw(options.get());
    return res;
}

inline Ptr<Document> Viewport::parentDocument() const
{
    Ptr<Document> res = parentDocument_raw();
    return res;
}

inline bool Viewport::setCurrentAsFront()
{
    bool res = setCurrentAsFront_raw();
    return res;
}

inline bool Viewport::setCurrentAsTop()
{
    bool res = setCurrentAsTop_raw();
    return res;
}

inline bool Viewport::setCurrentAsHome(bool isFitToView)
{
    bool res = setCurrentAsHome_raw(isFitToView);
    return res;
}

inline bool Viewport::goHome(bool transition)
{
    bool res = goHome_raw(transition);
    return res;
}

inline bool Viewport::resetFront()
{
    bool res = resetFront_raw();
    return res;
}

inline Ptr<Vector3D> Viewport::frontEyeDirection() const
{
    Ptr<Vector3D> res = frontEyeDirection_raw();
    return res;
}

inline Ptr<Vector3D> Viewport::frontUpDirection() const
{
    Ptr<Vector3D> res = frontUpDirection_raw();
    return res;
}

inline Ptr<Matrix3D> Viewport::modelToViewSpaceTransform() const
{
    Ptr<Matrix3D> res = modelToViewSpaceTransform_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VIEWPORT_API