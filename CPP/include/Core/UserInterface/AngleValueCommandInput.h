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
# ifdef __COMPILING_ADSK_CORE_ANGLEVALUECOMMANDINPUT_CPP__
# define ADSK_CORE_ANGLEVALUECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_ANGLEVALUECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_ANGLEVALUECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Represents a command input that gets an angle from the user. This displays
/// an entry in the command dialog where the user can enter a value and also displays
/// a manipulator in the graphics window to allow them to graphically set the value.
/// The input box is displayed in the dialog when the isVisible property of the command
/// input is true. The manipulator is displayed in the graphics when both the isVisible
/// and isEnabled properties are true.
class AngleValueCommandInput : public CommandInput {
public:

    /// Gets and sets the current value of the command input. The value is in radians
    /// but will be displayed to the user in degrees. Setting this value can fail if the input value is
    /// not within the minimum and maximum value range.
    /// 
    /// The isValidExpression property should be checked before using the value within the command
    /// because if the expression can't be evaluated there isn't a valid value. Fusion 360 won't allow
    /// the execution of a command that contains ValueCommandInput object with invalid expressions
    /// so you can dependably use the value in the execute event of the command.
    double value() const;
    bool value(double value);

    /// Gets or sets the expression displayed in the input field. This can contain equations and
    /// references to parameters but must result in a valid angle expression. If units are not
    /// specified as part of the expression, the default user units of degrees are used.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets minimum value, if any, that the value can be. The value is in radians. When getting this
    /// property you should first check the hasMinimumValue property to see if this property
    /// applies. Also, the isMinimumValueInclusive indicates if the minimum includes this
    /// value or will be up to this value.
    /// 
    /// Setting this value will change the isMinimumValueInclusive to True and the hasMinimumValue
    /// property to True if hasMinimumValue is currently False, otherwise it will just update the value.
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

    /// Gets and sets maximum value, if any, that the value can be. The value is in radians. When getting this
    /// property you should first check the hasMaximumValue property to see if this property applies. Also, the
    /// isMaximumValueInclusive indicates if the minimum includes this value or will be up to this value.
    /// 
    /// Setting this value will change the isMaximumValueInclusive to True and the hasMaximumValue
    /// property to True if hasMaximumValue is currently False, otherwise it will just update the value.
    double maximumValue() const;
    bool maximumValue(double value);

    /// Gets and sets if there is a maximum value for this command input. When setting this property, it is only valid
    /// to set it to False to remove the maximum value. Setting the maximumValue property will result in this property
    /// being set to True.
    bool hasMaximumValue() const;
    bool hasMaximumValue(bool value);

    /// Gets and sets if the value of the input includes the maximum value or is up to the maximum value. For example,
    /// if the maximum value is the value of pi (180 degrees) and this property is True, the maximum value can be pi.
    /// If this is False, the minimum value must be less than pi. When the maximum value is first defined using the
    /// maximumValue property, this property is set to True. The value returned by this property is only meaningful
    /// when the hasMaximumValue property returns True.
    bool isMaximumValueInclusive() const;
    bool isMaximumValueInclusive(bool value);

    /// Defines the position and orientation of the manipulator. The manipulator is only visible
    /// when both the isVisible and isEnabled properties are true. If those properties are
    /// true and the setManipulator has not been called, the manipulator will be displayed in
    /// a default location (0,0,0) using default directions; x direction (1,0,0) and y direction (0,1,0).
    /// Because of that the input is typically set to be invisible and/or disabled and then enabled once
    /// enough input has been specified that you can display the manipulator in the desired location.
    /// origin : Defines the center position of the manipulator in root component space.
    /// xDirection : Defines the X direction of the manipulator in root component space. The X direction is the 0 angle direction. This
    /// direction, along with the Y direction vector define the plane that the manipulator is displayed on.
    /// yDirection : Defines the Y direction of the manipulator in root component space. The X and Y direction vectors define the plane
    /// the manipulator is displayed one. When the manipulator is rotated from the xDirection vector towards the yDirection
    /// vector that is the positive direction.
    /// Returns true if successful.
    bool setManipulator(const Ptr<Point3D>& origin, const Ptr<Vector3D>& xDirection, const Ptr<Vector3D>& yDirection);

    /// Gets the origin point of the manipulator in the model space of the root component.
    /// To set the origin use the setManipulator method.
    Ptr<Point3D> manipulatorOrigin() const;

    /// Gets the X direction of the manipulator in the model space of the root component. The X direction is
    /// the 0 angle direction. This direction, along with the Y direction vector define the plane that the
    /// manipulator is displayed on.
    /// 
    /// To set the direction use the setManipulator method.
    Ptr<Vector3D> manipulatorXDirection() const;

    /// Gets the Y direction of the manipulator in the model space of the root component. The X and Y direction
    /// vectors define the plane that the manipulator is displayed on.
    /// 
    /// To set the direction use the setManipulator method.
    Ptr<Vector3D> manipulatorYDirection() const;

    /// Returns true if the current expression is valid and can be evaluated. If this
    /// is false, the value returned should be ignored because there currently is
    /// not a valid value.
    bool isValidExpression() const;

    ADSK_CORE_ANGLEVALUECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_ANGLEVALUECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_ANGLEVALUECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ANGLEVALUECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

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
    virtual bool setManipulator_raw(Point3D* origin, Vector3D* xDirection, Vector3D* yDirection) = 0;
    virtual Point3D* manipulatorOrigin_raw() const = 0;
    virtual Vector3D* manipulatorXDirection_raw() const = 0;
    virtual Vector3D* manipulatorYDirection_raw() const = 0;
    virtual bool isValidExpression_raw() const = 0;
};

// Inline wrappers

inline double AngleValueCommandInput::value() const
{
    double res = value_raw();
    return res;
}

inline bool AngleValueCommandInput::value(double value)
{
    return value_raw(value);
}

inline std::string AngleValueCommandInput::expression() const
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

inline bool AngleValueCommandInput::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline double AngleValueCommandInput::minimumValue() const
{
    double res = minimumValue_raw();
    return res;
}

inline bool AngleValueCommandInput::minimumValue(double value)
{
    return minimumValue_raw(value);
}

inline bool AngleValueCommandInput::hasMinimumValue() const
{
    bool res = hasMinimumValue_raw();
    return res;
}

inline bool AngleValueCommandInput::hasMinimumValue(bool value)
{
    return hasMinimumValue_raw(value);
}

inline bool AngleValueCommandInput::isMinimumValueInclusive() const
{
    bool res = isMinimumValueInclusive_raw();
    return res;
}

inline bool AngleValueCommandInput::isMinimumValueInclusive(bool value)
{
    return isMinimumValueInclusive_raw(value);
}

inline double AngleValueCommandInput::maximumValue() const
{
    double res = maximumValue_raw();
    return res;
}

inline bool AngleValueCommandInput::maximumValue(double value)
{
    return maximumValue_raw(value);
}

inline bool AngleValueCommandInput::hasMaximumValue() const
{
    bool res = hasMaximumValue_raw();
    return res;
}

inline bool AngleValueCommandInput::hasMaximumValue(bool value)
{
    return hasMaximumValue_raw(value);
}

inline bool AngleValueCommandInput::isMaximumValueInclusive() const
{
    bool res = isMaximumValueInclusive_raw();
    return res;
}

inline bool AngleValueCommandInput::isMaximumValueInclusive(bool value)
{
    return isMaximumValueInclusive_raw(value);
}

inline bool AngleValueCommandInput::setManipulator(const Ptr<Point3D>& origin, const Ptr<Vector3D>& xDirection, const Ptr<Vector3D>& yDirection)
{
    bool res = setManipulator_raw(origin.get(), xDirection.get(), yDirection.get());
    return res;
}

inline Ptr<Point3D> AngleValueCommandInput::manipulatorOrigin() const
{
    Ptr<Point3D> res = manipulatorOrigin_raw();
    return res;
}

inline Ptr<Vector3D> AngleValueCommandInput::manipulatorXDirection() const
{
    Ptr<Vector3D> res = manipulatorXDirection_raw();
    return res;
}

inline Ptr<Vector3D> AngleValueCommandInput::manipulatorYDirection() const
{
    Ptr<Vector3D> res = manipulatorYDirection_raw();
    return res;
}

inline bool AngleValueCommandInput::isValidExpression() const
{
    bool res = isValidExpression_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ANGLEVALUECOMMANDINPUT_API