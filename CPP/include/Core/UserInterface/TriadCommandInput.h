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
#include "CommandInput.h"
#include "../CoreTypeDefs.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_TRIADCOMMANDINPUT_CPP__
# define ADSK_CORE_TRIADCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_TRIADCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_TRIADCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace core {

/// Represents a command input that displays a triad and allows the user to control translation
/// rotation, and scaling. Using properties on the input you can choose which controls are available
/// to the user. This displays inputs in the command dialog where the user can enter values and also
/// displays a manipulator in the graphics window to allow them to graphically set the values. The
/// input boxes are displayed in the dialog when the isVisible property of the command input is true.
/// The manipulator is displayed in the graphics window when both the isVisible and isEnabled properties
/// are true.
/// 
/// It will often be useful to first create a GroupCommandInput and then create the TriadCommandInput within the group so
/// it's apparent to the user these items are related and they can be collapsed to reduce clutter in the dialog. This also
/// allows you to label the set of displayed inputs by using the name of the GroupCommandInput.
class TriadCommandInput : public CommandInput {
public:

    /// A convenience method to turn on and off the visibility of the X, Y, and Z
    /// translation controls.
    /// isVisible : Defines if the visibility of the controls should be turned on or off. True
    /// indicates they will be visible.
    /// Returns true if it was successful.
    bool setTranslateVisibility(bool isVisible);

    /// A convenience method to turn on and off the visibility of the X-Y, Y-Z, and Z-X planar
    /// translation controls.
    /// isVisible : Defines if the visibility of the controls should be turned on or off. True
    /// indicates they will be visible.
    /// Returns true if it was successful.
    bool setPlanarMoveVisibility(bool isVisible);

    /// A convenience method to turn on and off the visibility of the X, Y, and Z
    /// axis rotation controls.
    /// isVisible : Defines if the visibility of the controls should be turned on or off. True
    /// indicates they will be visible.
    /// Returns true if it was successful.
    bool setRotateVisibility(bool isVisible);

    /// A convenience method to turn on and off the visibility of the controls that
    /// define scaling in the X, Y, and Z direction and the X-Y, Y-Z, and Z-X planes.
    /// isVisible : Defines if the visibility of the controls should be turned on or off. True
    /// indicates they will be visible.
    /// Returns true if it was successful.
    bool setScaleVisibility(bool isVisible);

    /// A convenience method to turn on and off the visibility of the horizontal
    /// and vertical flip controls.
    /// isVisible : Defines if the visibility of the controls should be turned on or off. True
    /// indicates they will be visible.
    /// Returns true if it was successful.
    bool setFlipVisibility(bool isVisible);

    /// A convenience method to turn on and off the visibility of commonly used
    /// controls in a triad. These include the X, Y, and Z axis translations, the
    /// X, Y, and Z axis rotations, scaling in the X, Y, and Z directions, scaling
    /// on the X-Y, Y-Z and Z-X planes, translation on the X-Y, Y-Z, and Z-X planes,
    /// and the origin move.
    /// isVisible : Defines if the visibility of the controls should be turned on or off. True
    /// indicates they will be visible.
    /// Returns true if it was successful.
    bool setFullVisibility(bool isVisible);

    /// Hides all controls.
    /// Returns true if hiding the controls was successful.
    bool hideAll();

    /// Gets and sets if the control that supports translation in the X, Y, and Z directions
    /// is visible in both the graphical manipulator and in the dialog. In the manipulator,
    /// this is the large dot at the origin or the triad.
    bool isOriginTranslationVisible() const;
    bool isOriginTranslationVisible(bool value);

    /// Gets and sets if the control that supports X Translation is visible in both the
    /// graphical manipulator and in the dialog.
    bool isXTranslationVisible() const;
    bool isXTranslationVisible(bool value);

    /// Gets and sets if the control that defines the Y Translation is visible in both the
    /// graphical manipulator and in the dialog.
    bool isYTranslationVisible() const;
    bool isYTranslationVisible(bool value);

    /// Gets and sets if the control that defines the Z Translation is visible in both the
    /// graphical manipulator and in the dialog.
    bool isZTranslationVisible() const;
    bool isZTranslationVisible(bool value);

    /// Gets and sets if the control that defines the translation in the X-Y plane is
    /// visible in both the graphical manipulator and in the dialog.
    bool isXYPlaneTranslationVisible() const;
    bool isXYPlaneTranslationVisible(bool value);

    /// Gets and sets if the control that defines the translation in the X-Z plane is
    /// visible in both the graphical manipulator and in the dialog.
    bool isXZPlaneTranslationVisible() const;
    bool isXZPlaneTranslationVisible(bool value);

    /// Gets and sets if the control that defines the translation in the Y-Z plane is
    /// visible in both the graphical manipulator and in the dialog.
    bool isYZPlaneTranslationVisible() const;
    bool isYZPlaneTranslationVisible(bool value);

    /// Sets all rotation related controls to be invisible. This is useful if you are only
    /// using translations or scaling.
    /// Returns true if hiding the controls was successful.
    bool hideAllRotations();

    /// Gets and sets if the control that defines the rotation around the
    /// X axis is visible in both the graphical manipulator and in the dialog.
    bool isXRotationVisible() const;
    bool isXRotationVisible(bool value);

    /// Gets and sets if the control that defines the rotation around the
    /// Y axis is visible in both the graphical manipulator and in the dialog.
    bool isYRotationVisible() const;
    bool isYRotationVisible(bool value);

    /// Gets and sets if the control that defines the rotation around the
    /// Z axis is visible in both the graphical manipulator and in the dialog.
    bool isZRotationVisible() const;
    bool isZRotationVisible(bool value);

    /// Sets all scaling related controls to be invisible. This is useful if you are only
    /// using translations or rotations.
    /// Returns true if hiding the controls was successful.
    bool hideAllScaling();

    /// Gets and sets if the control that defines the scaling along the
    /// X axis is visible in both the graphical manipulator and in the dialog.
    /// This control lies on the X-Y plane of the triad.
    bool isXScalingInXYVisible() const;
    bool isXScalingInXYVisible(bool value);

    /// Gets and sets if the control that defines the scaling along the
    /// X axis is visible in both the graphical manipulator and in the dialog.
    /// This control lies on the X-Z plane of the triad.
    bool isXScalingInXZVisible() const;
    bool isXScalingInXZVisible(bool value);

    /// Gets and sets if the control that defines the scaling along the
    /// Y axis is visible in both the graphical manipulator and in the dialog.
    /// This control lies on the X-Y plane of the triad.
    bool isYScalingInXYVisible() const;
    bool isYScalingInXYVisible(bool value);

    /// Gets and sets if the control that defines the scaling along the
    /// Y axis is visible in both the graphical manipulator and in the dialog.
    /// This control lies on the Y-Z plane of the triad.
    bool isYScalingInYZVisible() const;
    bool isYScalingInYZVisible(bool value);

    /// Gets and sets if the control that defines the scaling along the
    /// Z axis is visible in both the graphical manipulator and in the dialog.
    /// This control lies on the X-Z plane of the triad.
    bool isZScalingInXZVisible() const;
    bool isZScalingInXZVisible(bool value);

    /// Gets and sets if the control that defines the scaling along the
    /// Z axis is visible in both the graphical manipulator and in the dialog.
    /// This control lies on the Y-Z plane of the triad.
    bool isZScalingInYZVisible() const;
    bool isZScalingInYZVisible(bool value);

    /// Gets and sets if the control that defines the scaling in the X-Y plane is
    /// visible in both the graphical manipulator and in the dialog.
    bool isXYPlaneScalingVisible() const;
    bool isXYPlaneScalingVisible(bool value);

    /// Gets and sets if the control that defines the scaling in the X-Z plane is
    /// visible in both the graphical manipulator and in the dialog.
    bool isXZPlaneScalingVisible() const;
    bool isXZPlaneScalingVisible(bool value);

    /// Gets and sets if the control that defines the scaling in the Y-Z plane is
    /// visible in both the graphical manipulator and in the dialog.
    bool isYZPlaneScalingVisible() const;
    bool isYZPlaneScalingVisible(bool value);

    /// Gets and sets if the control that defines the scaling in all directions
    /// visible in both the graphical manipulator and in the dialog.
    bool isUnifiedScalingVisible() const;
    bool isUnifiedScalingVisible(bool value);

    /// Gets and sets if the control that lets the user flip horizontally (around the Y-Z plane of the triad)
    /// is visible in both the graphical manipulator and the dialog.
    bool isHorizontalFlipVisible() const;
    bool isHorizontalFlipVisible(bool value);

    /// Gets and sets if the control that lets the user flip vertical (around the X-Z plane of the triad)
    /// is visible in both the graphical manipulator and the dialog.
    bool isVerticalFlipVisible() const;
    bool isVerticalFlipVisible(bool value);

    /// Gets and sets the current value of the translation along the X axis of the triad.
    /// The value is in centimeters but will be displayed to the user in default units for the design.
    /// 
    /// The isValidExpressions property should be checked before using the returned value.
    double xTranslation() const;
    bool xTranslation(double value);

    /// Gets or sets the expression displayed in the input field for the X translation. This can contain
    /// equations and references to parameters but must result in a valid distance expression. If units
    /// are not specified as part of the expression, the default user units of length are used.
    std::string xTranslationExpression() const;
    bool xTranslationExpression(const std::string& value);

    /// Gets and sets the current value of the translation along the Y axis of the triad.
    /// The value is in centimeters but will be displayed to the user in default units for the design.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double yTranslation() const;
    bool yTranslation(double value);

    /// Gets or sets the expression displayed in the input field for the Y translation. This can contain
    /// equations and references to parameters but must result in a valid distance expression. If units
    /// are not specified as part of the expression, the default user units of length are used.
    std::string yTranslationExpression() const;
    bool yTranslationExpression(const std::string& value);

    /// Gets and sets the current value of the translation along the Z axis of the triad.
    /// The value is in centimeters but will be displayed to the user in default units for the design.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double zTranslation() const;
    bool zTranslation(double value);

    /// Gets or sets the expression displayed in the input field for the Z translation. This can contain
    /// equations and references to parameters but must result in a valid distance expression. If units
    /// are not specified as part of the expression, the default user units of length are used.
    std::string zTranslationExpression() const;
    bool zTranslationExpression(const std::string& value);

    /// Gets and sets the current value of the rotation around the X axis of the triad. The value is in radians
    /// but will be displayed to the user in degrees.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double xRotation() const;
    bool xRotation(double value);

    /// Gets or sets the expression displayed in the input field for the X rotation. This can contain
    /// equations and references to parameters but must result in a valid distance expression. If units
    /// are not specified as part of the expression degrees are used.
    std::string xRotationExpression() const;
    bool xRotationExpression(const std::string& value);

    /// Gets and sets the current value of the rotation around the Y axis of the triad. The value is in radians
    /// but will be displayed to the user in degrees.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double yRotation() const;
    bool yRotation(double value);

    /// Gets or sets the expression displayed in the input field for the Y rotation. This can contain
    /// equations and references to parameters but must result in a valid distance expression. If units
    /// are not specified as part of the expression degrees are used.
    std::string yRotationExpression() const;
    bool yRotationExpression(const std::string& value);

    /// Gets and sets the current value of the rotation around the Z axis of the triad. The value is in radians
    /// but will be displayed to the user in degrees.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double zRotation() const;
    bool zRotation(double value);

    /// Gets or sets the expression displayed in the input field for the Z rotation. This can contain
    /// equations and references to parameters but must result in a valid distance expression. If units
    /// are not specified as part of the expression degrees are used.
    std::string zRotationExpression() const;
    bool zRotationExpression(const std::string& value);

    /// Gets and sets the current value of the scale factor along the X axis of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double xScaleFactor() const;
    bool xScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the X scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string xScaleFactorExpression() const;
    bool xScaleFactorExpression(const std::string& value);

    /// Gets and sets the current value of the scale factor along the Y axis of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double yScaleFactor() const;
    bool yScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the Y scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string yScaleFactorExpression() const;
    bool yScaleFactorExpression(const std::string& value);

    /// Gets and sets the current value of the scale factor along the Z axis of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double zScaleFactor() const;
    bool zScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the Z scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string zScaleFactorExpression() const;
    bool zScaleFactorExpression(const std::string& value);

    /// Gets and sets the current value of the scale factor on the X-Y plane of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double xYPlaneScaleFactor() const;
    bool xYPlaneScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the X-Y plane scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string xYPlaneScaleFactorExpression() const;
    bool xYPlaneScaleFactorExpression(const std::string& value);

    /// Gets and sets the current value of the scale factor on the Y-Z plane of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double yZPlaneScaleFactor() const;
    bool yZPlaneScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the Y-Z plane scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string yZPlaneScaleFactorExpression() const;
    bool yZPlaneScaleFactorExpression(const std::string& value);

    /// Gets and sets the current value of the scale factor on the Z-X plane of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double zXPlaneScaleFactor() const;
    bool zXPlaneScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the Z-X plane scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string zXPlaneScaleFactorExpression() const;
    bool zXPlaneScaleFactorExpression(const std::string& value);

    /// Gets and sets the current value of the unified scale factor of the triad.
    /// 
    /// The isValidExpressions property should be checked before using the value within the command.
    double unifiedeScaleFactor() const;
    bool unifiedeScaleFactor(double value);

    /// Gets or sets the expression displayed in the input field for the unified scale. This can contain
    /// equations and references to parameters but must result in a valid unitless expression.
    std::string unifiedScaleFactorExpression() const;
    bool unifiedScaleFactorExpression(const std::string& value);

    /// Gets and sets if the triad is flipped horizontally (around the around the Y-Z plane of the triad).
    bool isFlippedHorizontal() const;
    bool isFlippedHorizontal(bool value);

    /// Gets and sets if the triad is flipped vertically (around the around the X-Z plane of the triad).
    bool isFlippedVertical() const;
    bool isFlippedVertical(bool value);

    /// Gets or sets the current position, orientation, and scale of the triad using a transformation matrix.
    Ptr<Matrix3D> transform() const;
    bool transform(const Ptr<Matrix3D>& value);

    /// Gets the current position and orientation of the triad using a transformation matrix. This transform
    /// does not include any scaling.
    Ptr<Matrix3D> positionTransform() const;

    /// Returns the transform of the triad before the latest change. Using the matrices returned
    /// by this property and the transform property you can determine what changed. The lastChangeMade
    /// property is also useful to help you know the type of change to look for when comparing the
    /// matrices.
    Ptr<Matrix3D> lastTransform() const;

    /// Returns true if all of the input fields have valid expressions. If this property is false,
    /// the triad is incorrectly defined and the current values should not be used.
    bool isValidExpressions() const;

    /// Returns which value was most recently changed. To determine the actual change made you need
    /// to compare the transforms returned by the transform and lastTransform properties. Having information
    /// about the specific type of change made makes it easier to compare the matrices because you know
    /// what to look for.
    TriadChanges lastChangeMade() const;

    ADSK_CORE_TRIADCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_TRIADCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_TRIADCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TRIADCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setTranslateVisibility_raw(bool isVisible) = 0;
    virtual bool setPlanarMoveVisibility_raw(bool isVisible) = 0;
    virtual bool setRotateVisibility_raw(bool isVisible) = 0;
    virtual bool setScaleVisibility_raw(bool isVisible) = 0;
    virtual bool setFlipVisibility_raw(bool isVisible) = 0;
    virtual bool setFullVisibility_raw(bool isVisible) = 0;
    virtual bool hideAll_raw() = 0;
    virtual bool isOriginTranslationVisible_raw() const = 0;
    virtual bool isOriginTranslationVisible_raw(bool value) = 0;
    virtual bool isXTranslationVisible_raw() const = 0;
    virtual bool isXTranslationVisible_raw(bool value) = 0;
    virtual bool isYTranslationVisible_raw() const = 0;
    virtual bool isYTranslationVisible_raw(bool value) = 0;
    virtual bool isZTranslationVisible_raw() const = 0;
    virtual bool isZTranslationVisible_raw(bool value) = 0;
    virtual bool isXYPlaneTranslationVisible_raw() const = 0;
    virtual bool isXYPlaneTranslationVisible_raw(bool value) = 0;
    virtual bool isXZPlaneTranslationVisible_raw() const = 0;
    virtual bool isXZPlaneTranslationVisible_raw(bool value) = 0;
    virtual bool isYZPlaneTranslationVisible_raw() const = 0;
    virtual bool isYZPlaneTranslationVisible_raw(bool value) = 0;
    virtual bool hideAllRotations_raw() = 0;
    virtual bool isXRotationVisible_raw() const = 0;
    virtual bool isXRotationVisible_raw(bool value) = 0;
    virtual bool isYRotationVisible_raw() const = 0;
    virtual bool isYRotationVisible_raw(bool value) = 0;
    virtual bool isZRotationVisible_raw() const = 0;
    virtual bool isZRotationVisible_raw(bool value) = 0;
    virtual bool hideAllScaling_raw() = 0;
    virtual bool isXScalingInXYVisible_raw() const = 0;
    virtual bool isXScalingInXYVisible_raw(bool value) = 0;
    virtual bool isXScalingInXZVisible_raw() const = 0;
    virtual bool isXScalingInXZVisible_raw(bool value) = 0;
    virtual bool isYScalingInXYVisible_raw() const = 0;
    virtual bool isYScalingInXYVisible_raw(bool value) = 0;
    virtual bool isYScalingInYZVisible_raw() const = 0;
    virtual bool isYScalingInYZVisible_raw(bool value) = 0;
    virtual bool isZScalingInXZVisible_raw() const = 0;
    virtual bool isZScalingInXZVisible_raw(bool value) = 0;
    virtual bool isZScalingInYZVisible_raw() const = 0;
    virtual bool isZScalingInYZVisible_raw(bool value) = 0;
    virtual bool isXYPlaneScalingVisible_raw() const = 0;
    virtual bool isXYPlaneScalingVisible_raw(bool value) = 0;
    virtual bool isXZPlaneScalingVisible_raw() const = 0;
    virtual bool isXZPlaneScalingVisible_raw(bool value) = 0;
    virtual bool isYZPlaneScalingVisible_raw() const = 0;
    virtual bool isYZPlaneScalingVisible_raw(bool value) = 0;
    virtual bool isUnifiedScalingVisible_raw() const = 0;
    virtual bool isUnifiedScalingVisible_raw(bool value) = 0;
    virtual bool isHorizontalFlipVisible_raw() const = 0;
    virtual bool isHorizontalFlipVisible_raw(bool value) = 0;
    virtual bool isVerticalFlipVisible_raw() const = 0;
    virtual bool isVerticalFlipVisible_raw(bool value) = 0;
    virtual double xTranslation_raw() const = 0;
    virtual bool xTranslation_raw(double value) = 0;
    virtual char* xTranslationExpression_raw() const = 0;
    virtual bool xTranslationExpression_raw(const char* value) = 0;
    virtual double yTranslation_raw() const = 0;
    virtual bool yTranslation_raw(double value) = 0;
    virtual char* yTranslationExpression_raw() const = 0;
    virtual bool yTranslationExpression_raw(const char* value) = 0;
    virtual double zTranslation_raw() const = 0;
    virtual bool zTranslation_raw(double value) = 0;
    virtual char* zTranslationExpression_raw() const = 0;
    virtual bool zTranslationExpression_raw(const char* value) = 0;
    virtual double xRotation_raw() const = 0;
    virtual bool xRotation_raw(double value) = 0;
    virtual char* xRotationExpression_raw() const = 0;
    virtual bool xRotationExpression_raw(const char* value) = 0;
    virtual double yRotation_raw() const = 0;
    virtual bool yRotation_raw(double value) = 0;
    virtual char* yRotationExpression_raw() const = 0;
    virtual bool yRotationExpression_raw(const char* value) = 0;
    virtual double zRotation_raw() const = 0;
    virtual bool zRotation_raw(double value) = 0;
    virtual char* zRotationExpression_raw() const = 0;
    virtual bool zRotationExpression_raw(const char* value) = 0;
    virtual double xScaleFactor_raw() const = 0;
    virtual bool xScaleFactor_raw(double value) = 0;
    virtual char* xScaleFactorExpression_raw() const = 0;
    virtual bool xScaleFactorExpression_raw(const char* value) = 0;
    virtual double yScaleFactor_raw() const = 0;
    virtual bool yScaleFactor_raw(double value) = 0;
    virtual char* yScaleFactorExpression_raw() const = 0;
    virtual bool yScaleFactorExpression_raw(const char* value) = 0;
    virtual double zScaleFactor_raw() const = 0;
    virtual bool zScaleFactor_raw(double value) = 0;
    virtual char* zScaleFactorExpression_raw() const = 0;
    virtual bool zScaleFactorExpression_raw(const char* value) = 0;
    virtual double xYPlaneScaleFactor_raw() const = 0;
    virtual bool xYPlaneScaleFactor_raw(double value) = 0;
    virtual char* xYPlaneScaleFactorExpression_raw() const = 0;
    virtual bool xYPlaneScaleFactorExpression_raw(const char* value) = 0;
    virtual double yZPlaneScaleFactor_raw() const = 0;
    virtual bool yZPlaneScaleFactor_raw(double value) = 0;
    virtual char* yZPlaneScaleFactorExpression_raw() const = 0;
    virtual bool yZPlaneScaleFactorExpression_raw(const char* value) = 0;
    virtual double zXPlaneScaleFactor_raw() const = 0;
    virtual bool zXPlaneScaleFactor_raw(double value) = 0;
    virtual char* zXPlaneScaleFactorExpression_raw() const = 0;
    virtual bool zXPlaneScaleFactorExpression_raw(const char* value) = 0;
    virtual double unifiedeScaleFactor_raw() const = 0;
    virtual bool unifiedeScaleFactor_raw(double value) = 0;
    virtual char* unifiedScaleFactorExpression_raw() const = 0;
    virtual bool unifiedScaleFactorExpression_raw(const char* value) = 0;
    virtual bool isFlippedHorizontal_raw() const = 0;
    virtual bool isFlippedHorizontal_raw(bool value) = 0;
    virtual bool isFlippedVertical_raw() const = 0;
    virtual bool isFlippedVertical_raw(bool value) = 0;
    virtual Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(Matrix3D* value) = 0;
    virtual Matrix3D* positionTransform_raw() const = 0;
    virtual Matrix3D* lastTransform_raw() const = 0;
    virtual bool isValidExpressions_raw() const = 0;
    virtual TriadChanges lastChangeMade_raw() const = 0;
};

// Inline wrappers

inline bool TriadCommandInput::setTranslateVisibility(bool isVisible)
{
    bool res = setTranslateVisibility_raw(isVisible);
    return res;
}

inline bool TriadCommandInput::setPlanarMoveVisibility(bool isVisible)
{
    bool res = setPlanarMoveVisibility_raw(isVisible);
    return res;
}

inline bool TriadCommandInput::setRotateVisibility(bool isVisible)
{
    bool res = setRotateVisibility_raw(isVisible);
    return res;
}

inline bool TriadCommandInput::setScaleVisibility(bool isVisible)
{
    bool res = setScaleVisibility_raw(isVisible);
    return res;
}

inline bool TriadCommandInput::setFlipVisibility(bool isVisible)
{
    bool res = setFlipVisibility_raw(isVisible);
    return res;
}

inline bool TriadCommandInput::setFullVisibility(bool isVisible)
{
    bool res = setFullVisibility_raw(isVisible);
    return res;
}

inline bool TriadCommandInput::hideAll()
{
    bool res = hideAll_raw();
    return res;
}

inline bool TriadCommandInput::isOriginTranslationVisible() const
{
    bool res = isOriginTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isOriginTranslationVisible(bool value)
{
    return isOriginTranslationVisible_raw(value);
}

inline bool TriadCommandInput::isXTranslationVisible() const
{
    bool res = isXTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXTranslationVisible(bool value)
{
    return isXTranslationVisible_raw(value);
}

inline bool TriadCommandInput::isYTranslationVisible() const
{
    bool res = isYTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isYTranslationVisible(bool value)
{
    return isYTranslationVisible_raw(value);
}

inline bool TriadCommandInput::isZTranslationVisible() const
{
    bool res = isZTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isZTranslationVisible(bool value)
{
    return isZTranslationVisible_raw(value);
}

inline bool TriadCommandInput::isXYPlaneTranslationVisible() const
{
    bool res = isXYPlaneTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXYPlaneTranslationVisible(bool value)
{
    return isXYPlaneTranslationVisible_raw(value);
}

inline bool TriadCommandInput::isXZPlaneTranslationVisible() const
{
    bool res = isXZPlaneTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXZPlaneTranslationVisible(bool value)
{
    return isXZPlaneTranslationVisible_raw(value);
}

inline bool TriadCommandInput::isYZPlaneTranslationVisible() const
{
    bool res = isYZPlaneTranslationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isYZPlaneTranslationVisible(bool value)
{
    return isYZPlaneTranslationVisible_raw(value);
}

inline bool TriadCommandInput::hideAllRotations()
{
    bool res = hideAllRotations_raw();
    return res;
}

inline bool TriadCommandInput::isXRotationVisible() const
{
    bool res = isXRotationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXRotationVisible(bool value)
{
    return isXRotationVisible_raw(value);
}

inline bool TriadCommandInput::isYRotationVisible() const
{
    bool res = isYRotationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isYRotationVisible(bool value)
{
    return isYRotationVisible_raw(value);
}

inline bool TriadCommandInput::isZRotationVisible() const
{
    bool res = isZRotationVisible_raw();
    return res;
}

inline bool TriadCommandInput::isZRotationVisible(bool value)
{
    return isZRotationVisible_raw(value);
}

inline bool TriadCommandInput::hideAllScaling()
{
    bool res = hideAllScaling_raw();
    return res;
}

inline bool TriadCommandInput::isXScalingInXYVisible() const
{
    bool res = isXScalingInXYVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXScalingInXYVisible(bool value)
{
    return isXScalingInXYVisible_raw(value);
}

inline bool TriadCommandInput::isXScalingInXZVisible() const
{
    bool res = isXScalingInXZVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXScalingInXZVisible(bool value)
{
    return isXScalingInXZVisible_raw(value);
}

inline bool TriadCommandInput::isYScalingInXYVisible() const
{
    bool res = isYScalingInXYVisible_raw();
    return res;
}

inline bool TriadCommandInput::isYScalingInXYVisible(bool value)
{
    return isYScalingInXYVisible_raw(value);
}

inline bool TriadCommandInput::isYScalingInYZVisible() const
{
    bool res = isYScalingInYZVisible_raw();
    return res;
}

inline bool TriadCommandInput::isYScalingInYZVisible(bool value)
{
    return isYScalingInYZVisible_raw(value);
}

inline bool TriadCommandInput::isZScalingInXZVisible() const
{
    bool res = isZScalingInXZVisible_raw();
    return res;
}

inline bool TriadCommandInput::isZScalingInXZVisible(bool value)
{
    return isZScalingInXZVisible_raw(value);
}

inline bool TriadCommandInput::isZScalingInYZVisible() const
{
    bool res = isZScalingInYZVisible_raw();
    return res;
}

inline bool TriadCommandInput::isZScalingInYZVisible(bool value)
{
    return isZScalingInYZVisible_raw(value);
}

inline bool TriadCommandInput::isXYPlaneScalingVisible() const
{
    bool res = isXYPlaneScalingVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXYPlaneScalingVisible(bool value)
{
    return isXYPlaneScalingVisible_raw(value);
}

inline bool TriadCommandInput::isXZPlaneScalingVisible() const
{
    bool res = isXZPlaneScalingVisible_raw();
    return res;
}

inline bool TriadCommandInput::isXZPlaneScalingVisible(bool value)
{
    return isXZPlaneScalingVisible_raw(value);
}

inline bool TriadCommandInput::isYZPlaneScalingVisible() const
{
    bool res = isYZPlaneScalingVisible_raw();
    return res;
}

inline bool TriadCommandInput::isYZPlaneScalingVisible(bool value)
{
    return isYZPlaneScalingVisible_raw(value);
}

inline bool TriadCommandInput::isUnifiedScalingVisible() const
{
    bool res = isUnifiedScalingVisible_raw();
    return res;
}

inline bool TriadCommandInput::isUnifiedScalingVisible(bool value)
{
    return isUnifiedScalingVisible_raw(value);
}

inline bool TriadCommandInput::isHorizontalFlipVisible() const
{
    bool res = isHorizontalFlipVisible_raw();
    return res;
}

inline bool TriadCommandInput::isHorizontalFlipVisible(bool value)
{
    return isHorizontalFlipVisible_raw(value);
}

inline bool TriadCommandInput::isVerticalFlipVisible() const
{
    bool res = isVerticalFlipVisible_raw();
    return res;
}

inline bool TriadCommandInput::isVerticalFlipVisible(bool value)
{
    return isVerticalFlipVisible_raw(value);
}

inline double TriadCommandInput::xTranslation() const
{
    double res = xTranslation_raw();
    return res;
}

inline bool TriadCommandInput::xTranslation(double value)
{
    return xTranslation_raw(value);
}

inline std::string TriadCommandInput::xTranslationExpression() const
{
    std::string res;

    char* p= xTranslationExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::xTranslationExpression(const std::string& value)
{
    return xTranslationExpression_raw(value.c_str());
}

inline double TriadCommandInput::yTranslation() const
{
    double res = yTranslation_raw();
    return res;
}

inline bool TriadCommandInput::yTranslation(double value)
{
    return yTranslation_raw(value);
}

inline std::string TriadCommandInput::yTranslationExpression() const
{
    std::string res;

    char* p= yTranslationExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::yTranslationExpression(const std::string& value)
{
    return yTranslationExpression_raw(value.c_str());
}

inline double TriadCommandInput::zTranslation() const
{
    double res = zTranslation_raw();
    return res;
}

inline bool TriadCommandInput::zTranslation(double value)
{
    return zTranslation_raw(value);
}

inline std::string TriadCommandInput::zTranslationExpression() const
{
    std::string res;

    char* p= zTranslationExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::zTranslationExpression(const std::string& value)
{
    return zTranslationExpression_raw(value.c_str());
}

inline double TriadCommandInput::xRotation() const
{
    double res = xRotation_raw();
    return res;
}

inline bool TriadCommandInput::xRotation(double value)
{
    return xRotation_raw(value);
}

inline std::string TriadCommandInput::xRotationExpression() const
{
    std::string res;

    char* p= xRotationExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::xRotationExpression(const std::string& value)
{
    return xRotationExpression_raw(value.c_str());
}

inline double TriadCommandInput::yRotation() const
{
    double res = yRotation_raw();
    return res;
}

inline bool TriadCommandInput::yRotation(double value)
{
    return yRotation_raw(value);
}

inline std::string TriadCommandInput::yRotationExpression() const
{
    std::string res;

    char* p= yRotationExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::yRotationExpression(const std::string& value)
{
    return yRotationExpression_raw(value.c_str());
}

inline double TriadCommandInput::zRotation() const
{
    double res = zRotation_raw();
    return res;
}

inline bool TriadCommandInput::zRotation(double value)
{
    return zRotation_raw(value);
}

inline std::string TriadCommandInput::zRotationExpression() const
{
    std::string res;

    char* p= zRotationExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::zRotationExpression(const std::string& value)
{
    return zRotationExpression_raw(value.c_str());
}

inline double TriadCommandInput::xScaleFactor() const
{
    double res = xScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::xScaleFactor(double value)
{
    return xScaleFactor_raw(value);
}

inline std::string TriadCommandInput::xScaleFactorExpression() const
{
    std::string res;

    char* p= xScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::xScaleFactorExpression(const std::string& value)
{
    return xScaleFactorExpression_raw(value.c_str());
}

inline double TriadCommandInput::yScaleFactor() const
{
    double res = yScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::yScaleFactor(double value)
{
    return yScaleFactor_raw(value);
}

inline std::string TriadCommandInput::yScaleFactorExpression() const
{
    std::string res;

    char* p= yScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::yScaleFactorExpression(const std::string& value)
{
    return yScaleFactorExpression_raw(value.c_str());
}

inline double TriadCommandInput::zScaleFactor() const
{
    double res = zScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::zScaleFactor(double value)
{
    return zScaleFactor_raw(value);
}

inline std::string TriadCommandInput::zScaleFactorExpression() const
{
    std::string res;

    char* p= zScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::zScaleFactorExpression(const std::string& value)
{
    return zScaleFactorExpression_raw(value.c_str());
}

inline double TriadCommandInput::xYPlaneScaleFactor() const
{
    double res = xYPlaneScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::xYPlaneScaleFactor(double value)
{
    return xYPlaneScaleFactor_raw(value);
}

inline std::string TriadCommandInput::xYPlaneScaleFactorExpression() const
{
    std::string res;

    char* p= xYPlaneScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::xYPlaneScaleFactorExpression(const std::string& value)
{
    return xYPlaneScaleFactorExpression_raw(value.c_str());
}

inline double TriadCommandInput::yZPlaneScaleFactor() const
{
    double res = yZPlaneScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::yZPlaneScaleFactor(double value)
{
    return yZPlaneScaleFactor_raw(value);
}

inline std::string TriadCommandInput::yZPlaneScaleFactorExpression() const
{
    std::string res;

    char* p= yZPlaneScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::yZPlaneScaleFactorExpression(const std::string& value)
{
    return yZPlaneScaleFactorExpression_raw(value.c_str());
}

inline double TriadCommandInput::zXPlaneScaleFactor() const
{
    double res = zXPlaneScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::zXPlaneScaleFactor(double value)
{
    return zXPlaneScaleFactor_raw(value);
}

inline std::string TriadCommandInput::zXPlaneScaleFactorExpression() const
{
    std::string res;

    char* p= zXPlaneScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::zXPlaneScaleFactorExpression(const std::string& value)
{
    return zXPlaneScaleFactorExpression_raw(value.c_str());
}

inline double TriadCommandInput::unifiedeScaleFactor() const
{
    double res = unifiedeScaleFactor_raw();
    return res;
}

inline bool TriadCommandInput::unifiedeScaleFactor(double value)
{
    return unifiedeScaleFactor_raw(value);
}

inline std::string TriadCommandInput::unifiedScaleFactorExpression() const
{
    std::string res;

    char* p= unifiedScaleFactorExpression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool TriadCommandInput::unifiedScaleFactorExpression(const std::string& value)
{
    return unifiedScaleFactorExpression_raw(value.c_str());
}

inline bool TriadCommandInput::isFlippedHorizontal() const
{
    bool res = isFlippedHorizontal_raw();
    return res;
}

inline bool TriadCommandInput::isFlippedHorizontal(bool value)
{
    return isFlippedHorizontal_raw(value);
}

inline bool TriadCommandInput::isFlippedVertical() const
{
    bool res = isFlippedVertical_raw();
    return res;
}

inline bool TriadCommandInput::isFlippedVertical(bool value)
{
    return isFlippedVertical_raw(value);
}

inline Ptr<Matrix3D> TriadCommandInput::transform() const
{
    Ptr<Matrix3D> res = transform_raw();
    return res;
}

inline bool TriadCommandInput::transform(const Ptr<Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline Ptr<Matrix3D> TriadCommandInput::positionTransform() const
{
    Ptr<Matrix3D> res = positionTransform_raw();
    return res;
}

inline Ptr<Matrix3D> TriadCommandInput::lastTransform() const
{
    Ptr<Matrix3D> res = lastTransform_raw();
    return res;
}

inline bool TriadCommandInput::isValidExpressions() const
{
    bool res = isValidExpressions_raw();
    return res;
}

inline TriadChanges TriadCommandInput::lastChangeMade() const
{
    TriadChanges res = lastChangeMade_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TRIADCOMMANDINPUT_API