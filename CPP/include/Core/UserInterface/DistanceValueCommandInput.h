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
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DISTANCEVALUECOMMANDINPUT_CPP__
# define ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Represents a command input that gets a distance from the user. This displays
/// an entry in the command dialog where the user can enter a value and also displays
/// a manipulator in the graphics window to allow them to graphically set the value.
/// The input box is displayed in the dialog when the isVisible property of the command
/// input is true. The manipulator is displayed in the graphics when both the isVisible
/// and isEnabled properties are true.
class DistanceValueCommandInput : public CommandInput {
public:

    /// Gets and sets the current value of the command input. The value is
    /// in centimeters but will be displayed to the user in the current default
    /// document units. Setting this value can fail if the input value is
    /// not within the minimum and maximum value range.
    /// 
    /// The isValidExpression property should be checked before using this
    /// value within the command because if the expression can't be evaluated
    /// there isn't a valid value. Fusion 360 won't allow the execution of a command
    /// that contains ValueCommandInput object with invalid expressions so you can
    /// dependably use the value in the execute event of the command.
    double value() const;
    bool value(double value);

    /// Gets or sets the expression displayed in the input field. This can contain equations and
    /// references to parameters but must result in a valid length expression. If units are not
    /// specified as part of the expression, the default units for the design are used.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets minimum value, if any, that the value can be. When getting this
    /// property you should first check the hasMinimumValue property to see if this property
    /// applies. Also, the isMinimumValueInclusive indicates if the minimum includes this
    /// value or will be up to this value.
    /// 
    /// Setting this value will change the isMinimumValueInclusive to True and the hasMinimumValue property to True if hasMinimumValue is currently
    /// False, otherwise it will just update the value.
    double minimumValue() const;
    bool minimumValue(double value);

    /// Gets and sets if there is a minimum value for this command input. When setting this property, it is only valid
    /// to set it to False to remove the minimum value. Setting the minimumValue property will result in this property
    /// being set to True.
    bool hasMinimumValue() const;
    bool hasMinimumValue(bool value);

    /// Gets and sets if the value of the input includes the minimum value or is up to the minimum value. For example,
    /// if the minimum value is zero and this property is True, the minimum value can be zero. If this is False, the
    /// minimum value must be greater than zero. When the minimum value is first defined using the minimumValue property,
    /// this property is set to True. The value returned by this property is only meaningful when the hasMinimumValue property
    /// returns True.
    bool isMinimumValueInclusive() const;
    bool isMinimumValueInclusive(bool value);

    /// Gets and sets maximum value, if any, that the value can be. When getting this
    /// property you should first check the hasMaximumValue property to see if this property
    /// applies. Also, the isMaximumValueInclusive indicates if the maximum includes this
    /// value or will be up to this value.
    double maximumValue() const;
    bool maximumValue(double value);

    /// Gets and sets if there is a maximum value for this command input. When setting this property, it is only valid
    /// to set it to False to remove the maximum value. Setting the maximumValue property will result in this property
    /// being set to True.
    bool hasMaximumValue() const;
    bool hasMaximumValue(bool value);

    /// Gets and sets if the value of the input includes the maximum value or is up to the maximum value. For example,
    /// if the maximum value is 100 and this property is True, the maximum value can be 100. If this is False, the
    /// minimum value must be less than 100. When the maximum value is first defined using the maximumValue property,
    /// this property is set to True. The value returned by this property is only meaningful when the hasMaximumValue property
    /// returns True.
    bool isMaximumValueInclusive() const;
    bool isMaximumValueInclusive(bool value);

    /// Defines the position and orientation of the manipulator. The manipulator is only visible
    /// when both the isVisible and isEnabled properties are true. If those properties are
    /// true and the setManipulator has not been called, the manipulator will be displayed in
    /// a default location (0,0,0) and direction (1,0,0). Because of that the input is typically
    /// set to be invisible and/or disabled and then enabled once enough input has been specified
    /// that you can display the manipulator in the desired location.
    /// origin : Defines the position of the manipulator in root component space.
    /// direction : Defines the direction of the manipulator in root component space.
    /// Returns true if successful.
    bool setManipulator(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction);

    /// Gets the origin point of the manipulator in the model space of the root component.
    /// To set the origin use the setManipulator method.
    Ptr<Point3D> manipulatorOrigin() const;

    /// Gets the positive direction of the manipulator in the model space or the root component.
    /// To set the direction use the setManipulator method.
    Ptr<Vector3D> manipulatorDirection() const;

    /// Returns true if the current expression is valid and can be evaluated. If this
    /// is false, the value returned should be ignored because there currently is
    /// not a valid value.
    bool isValidExpression() const;

    ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual double minimumValue_raw() const = 0;
    virtual bool minimumValue_raw(double value) = 0;
    virtual bool hasMinimumValue_raw() const = 0;
    virtual bool hasMinimumValue_raw(bool value) = 0;
    virtual bool isMinimumValueInclusive_raw() const = 0;
    virtual bool isMinimumValueInclusive_raw(bool value) = 0;
    virtual double maximumValue_raw() const = 0;
    virtual bool maximumValue_raw(double value) = 0;
    virtual bool hasMaximumValue_raw() const = 0;
    virtual bool hasMaximumValue_raw(bool value) = 0;
    virtual bool isMaximumValueInclusive_raw() const = 0;
    virtual bool isMaximumValueInclusive_raw(bool value) = 0;
    virtual bool setManipulator_raw(Point3D* origin, Vector3D* direction) = 0;
    virtual Point3D* manipulatorOrigin_raw() const = 0;
    virtual Vector3D* manipulatorDirection_raw() const = 0;
    virtual bool isValidExpression_raw() const = 0;
};

// Inline wrappers

inline double DistanceValueCommandInput::value() const
{
    double res = value_raw();
    return res;
}

inline bool DistanceValueCommandInput::value(double value)
{
    return value_raw(value);
}

inline std::string DistanceValueCommandInput::expression() const
{
    std::string res;

    char* p= expression_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DistanceValueCommandInput::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline double DistanceValueCommandInput::minimumValue() const
{
    double res = minimumValue_raw();
    return res;
}

inline bool DistanceValueCommandInput::minimumValue(double value)
{
    return minimumValue_raw(value);
}

inline bool DistanceValueCommandInput::hasMinimumValue() const
{
    bool res = hasMinimumValue_raw();
    return res;
}

inline bool DistanceValueCommandInput::hasMinimumValue(bool value)
{
    return hasMinimumValue_raw(value);
}

inline bool DistanceValueCommandInput::isMinimumValueInclusive() const
{
    bool res = isMinimumValueInclusive_raw();
    return res;
}

inline bool DistanceValueCommandInput::isMinimumValueInclusive(bool value)
{
    return isMinimumValueInclusive_raw(value);
}

inline double DistanceValueCommandInput::maximumValue() const
{
    double res = maximumValue_raw();
    return res;
}

inline bool DistanceValueCommandInput::maximumValue(double value)
{
    return maximumValue_raw(value);
}

inline bool DistanceValueCommandInput::hasMaximumValue() const
{
    bool res = hasMaximumValue_raw();
    return res;
}

inline bool DistanceValueCommandInput::hasMaximumValue(bool value)
{
    return hasMaximumValue_raw(value);
}

inline bool DistanceValueCommandInput::isMaximumValueInclusive() const
{
    bool res = isMaximumValueInclusive_raw();
    return res;
}

inline bool DistanceValueCommandInput::isMaximumValueInclusive(bool value)
{
    return isMaximumValueInclusive_raw(value);
}

inline bool DistanceValueCommandInput::setManipulator(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction)
{
    bool res = setManipulator_raw(origin.get(), direction.get());
    return res;
}

inline Ptr<Point3D> DistanceValueCommandInput::manipulatorOrigin() const
{
    Ptr<Point3D> res = manipulatorOrigin_raw();
    return res;
}

inline Ptr<Vector3D> DistanceValueCommandInput::manipulatorDirection() const
{
    Ptr<Vector3D> res = manipulatorDirection_raw();
    return res;
}

inline bool DistanceValueCommandInput::isValidExpression() const
{
    bool res = isValidExpression_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DISTANCEVALUECOMMANDINPUT_API