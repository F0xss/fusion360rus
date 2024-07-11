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
# ifdef __COMPILING_ADSK_CORE_FLOATSPINNERCOMMANDINPUT_CPP__
# define ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get the value of a spinner from the user, the value type is float.
class FloatSpinnerCommandInput : public CommandInput {
public:

    /// Gets and sets the value associated with this input. The value is always in
    /// the database units of the unit type specified. For example, if the unit type is "inch"
    /// this value is in centimeters since centimeters are the database length unit. When setting the
    /// value it is converted into a string using the unit type and displayed in the input box.
    /// 
    /// The isValidExpression property should be checked before using this
    /// value within the command because if the expression can't be evaluated
    /// there isn't a valid value. Fusion 360 won't allow the execution of a command
    /// that contains ValueCommandInput object with invalid expressions so you can
    /// dependably use the value in the execute event of the command.
    double value() const;
    bool value(double value);

    /// Gets the unit type that is used when evaluating the user's input.
    std::string unitType() const;

    /// Gets the minimum allowed value of the spinner in database units.
    double minimumValue() const;

    /// Gets the maximum allowed value of the spinner in database units.
    double maximumValue() const;

    /// Gets the spin step value in the unit type set by the unitType argument.
    /// The value should be more than zero. This is the amount the spinner will advance
    /// when the user clicks the spin button beside the value.
    double spinStep() const;

    /// Gets or sets the expression displayed in the input field. This can contain equations and
    /// references to parameters. It is evaluated using the specified unit type.
    std::string expression() const;
    bool expression(const std::string& value);

    /// Returns true if the current expression is valid and can be evaluated. If this
    /// is false, the value returned should be ignored because there currently is
    /// not a valid value.
    bool isValidExpression() const;

    ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
    virtual char* unitType_raw() const = 0;
    virtual double minimumValue_raw() const = 0;
    virtual double maximumValue_raw() const = 0;
    virtual double spinStep_raw() const = 0;
    virtual bool value__raw(double value) = 0;
    virtual char* expression_raw() const = 0;
    virtual bool expression_raw(const char* value) = 0;
    virtual bool isValidExpression_raw() const = 0;
};

// Inline wrappers

inline double FloatSpinnerCommandInput::value() const
{
    double res = value_raw();
    return res;
}

inline bool FloatSpinnerCommandInput::value(double value)
{
    return value__raw(value);
}

inline std::string FloatSpinnerCommandInput::unitType() const
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

inline double FloatSpinnerCommandInput::minimumValue() const
{
    double res = minimumValue_raw();
    return res;
}

inline double FloatSpinnerCommandInput::maximumValue() const
{
    double res = maximumValue_raw();
    return res;
}

inline double FloatSpinnerCommandInput::spinStep() const
{
    double res = spinStep_raw();
    return res;
}

inline std::string FloatSpinnerCommandInput::expression() const
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

inline bool FloatSpinnerCommandInput::expression(const std::string& value)
{
    return expression_raw(value.c_str());
}

inline bool FloatSpinnerCommandInput::isValidExpression() const
{
    bool res = isValidExpression_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FLOATSPINNERCOMMANDINPUT_API