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
# ifdef __COMPILING_ADSK_CORE_VALUECOMMANDINPUT_CPP__
# define ADSK_CORE_VALUECOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_VALUECOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_VALUECOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get a unit based value from the user.
class ValueCommandInput : public CommandInput {
public:

    /// Gets or sets the value associated with this input. The value is always in
    /// the database units of the unit type specified. For example, if the unit type is "inch"
    /// this value is in centimeters since centimeters are the database length unit. When setting the
    /// value it is converted into a string using the unit type and displayed in the input box.
    /// When getting the value, the current expression string is evaluated and the database value
    /// for the unit type is returned.
    double value() const;
    bool value(double value);

    /// Gets or sets the expression displayed in the input field. This can contain equations and
    /// references to parameters. It is evaluated using the specified unit type.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Gets and sets the unit type that is used when evaluating the user's input.
    std::string unitType() const;
    bool unitType(const std::string& value);

    /// Returns true if the current expression is valid and can be evaluated. If this
    /// is false, the value returned should be ignored because there currently is
    /// not a valid value.
    bool isValidExpression() const;

    /// Gets and sets whether the minimum value has a limit. The minimum limit is set using
    /// the minimumValue property, and the isMinimumInclusive property controls whether the minimum
    /// includes the minimum value or must be greater than the minimum.
    /// 
    /// When a new ValueCommandInput is created this defaults to false so there is no limit.
    bool isMinimumLimited() const;
    bool isMinimumLimited(bool value);

    /// Gets and sets the minimum value for the input. Setting this value will automatically
    /// set the isMinimumLimited property to true, enabling the use of the minimum value. Use
    /// the isMinimumInclusive property to control if the minimum can be equal to this value or must
    /// be greater than the minimum.
    double minimumValue() const;
    bool minimumValue(double value);

    /// Gets and sets if the minimum value can be equal to the value defined by the minimumValue
    /// property or if it must be greater than.
    /// 
    /// When a new ValueCommandInput is created, this defaults to true.
    bool isMinimumInclusive() const;
    bool isMinimumInclusive(bool value);

    /// Gets and sets whether the maximum value has a limit. The maximum limit is set using
    /// the maximumValue property, and the isMaximumInclusive property controls whether the maximum
    /// includes the maximum value or must be less than the maximum.
    /// 
    /// When a new ValueCommandInput is created this defaults to false so there is no limit.
    bool isMaximumLimited() const;
    bool isMaximumLimited(bool value);

    /// Gets and sets the maximum value for the input. Setting this value will automatically
    /// set the isMaximumLimited property to true, enabling the use of the maximum value. Use
    /// the isMaximumInclusive property to control if the maximum can be equal to this value or must
    /// be less than the maximum.
    double maximumValue() const;
    bool maximumValue(double value);

    /// Gets and sets if the maximum value can be equal to the value defined by the maximumValue
    /// property or if it must be less than the maximum.
    /// 
    /// When a new ValueCommandInput is created, this defaults to true.
    bool isMaximumInclusive() const;
    bool isMaximumInclusive(bool value);

    ADSK_CORE_VALUECOMMANDINPUT_API static const char* classType();
    ADSK_CORE_VALUECOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_VALUECOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VALUECOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
    virtual bool value_raw(double value) = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual char* unitType_raw() const = 0;
    virtual bool unitType_raw(const char* value) = 0;
    virtual bool isValidExpression_raw() const = 0;
    virtual bool isMinimumLimited_raw() const = 0;
    virtual bool isMinimumLimited_raw(bool value) = 0;
    virtual double minimumValue_raw() const = 0;
    virtual bool minimumValue_raw(double value) = 0;
    virtual bool isMinimumInclusive_raw() const = 0;
    virtual bool isMinimumInclusive_raw(bool value) = 0;
    virtual bool isMaximumLimited_raw() const = 0;
    virtual bool isMaximumLimited_raw(bool value) = 0;
    virtual double maximumValue_raw() const = 0;
    virtual bool maximumValue_raw(double value) = 0;
    virtual bool isMaximumInclusive_raw() const = 0;
    virtual bool isMaximumInclusive_raw(bool value) = 0;
};

// Inline wrappers

inline double ValueCommandInput::value() const
{
    double res = value_raw();
    return res;
}

inline bool ValueCommandInput::value(double value)
{
    return value_raw(value);
}

inline std::string ValueCommandInput::expression() const
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

inline bool ValueCommandInput::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline std::string ValueCommandInput::unitType() const
{
    std::string res;

    char* p= unitType_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ValueCommandInput::unitType(const std::string& value)
{
    return unitType_raw(value.c_str());
}

inline bool ValueCommandInput::isValidExpression() const
{
    bool res = isValidExpression_raw();
    return res;
}

inline bool ValueCommandInput::isMinimumLimited() const
{
    bool res = isMinimumLimited_raw();
    return res;
}

inline bool ValueCommandInput::isMinimumLimited(bool value)
{
    return isMinimumLimited_raw(value);
}

inline double ValueCommandInput::minimumValue() const
{
    double res = minimumValue_raw();
    return res;
}

inline bool ValueCommandInput::minimumValue(double value)
{
    return minimumValue_raw(value);
}

inline bool ValueCommandInput::isMinimumInclusive() const
{
    bool res = isMinimumInclusive_raw();
    return res;
}

inline bool ValueCommandInput::isMinimumInclusive(bool value)
{
    return isMinimumInclusive_raw(value);
}

inline bool ValueCommandInput::isMaximumLimited() const
{
    bool res = isMaximumLimited_raw();
    return res;
}

inline bool ValueCommandInput::isMaximumLimited(bool value)
{
    return isMaximumLimited_raw(value);
}

inline double ValueCommandInput::maximumValue() const
{
    double res = maximumValue_raw();
    return res;
}

inline bool ValueCommandInput::maximumValue(double value)
{
    return maximumValue_raw(value);
}

inline bool ValueCommandInput::isMaximumInclusive() const
{
    bool res = isMaximumInclusive_raw();
    return res;
}

inline bool ValueCommandInput::isMaximumInclusive(bool value)
{
    return isMaximumInclusive_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VALUECOMMANDINPUT_API