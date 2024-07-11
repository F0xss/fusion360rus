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
#include "SliderCommandInput.h"
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_FLOATSLIDERCOMMANDINPUT_CPP__
# define ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get the value of a slider from the user, the value type is float.
class FloatSliderCommandInput : public SliderCommandInput {
public:

    /// Gets or sets the first value associated with this input. The value is always in
    /// the database units of the unit type specified. For example, if the unit type is "inch"
    /// this value is in centimeters since centimeters are the database length unit. When setting the
    /// value it is converted into a string using the unit type and displayed in the input box.
    double valueOne() const;
    bool valueOne(double value);

    /// Gets or sets the second value associated with this input. The value is always in
    /// the database units of the unit type specified. For example, if the unit type is "inch"
    /// this value is in centimeters since centimeters are the database length unit. When setting the
    /// value it is converted into a string using the unit type and displayed in the input box.
    /// 
    /// This property is only available when the hasTwoSliders property returns true.
    double valueTwo() const;
    bool valueTwo(double value);

    /// Gets and sets minimum value of the slider in database units.
    /// Gets a failure when set if the value of this command input was added by value list.
    double minimumValue() const;
    bool minimumValue(double value);

    /// Gets and sets maximum value of the slider in database units.
    /// Gets a failure when set if the value of this command input was added by value list.
    double maximumValue() const;
    bool maximumValue(double value);

    /// Gets the value list of the slider. This property is valid when this input represents a list type of slider command input.
    /// Otherwise an empty list will be returned.
    std::vector<double> valueList() const;

    /// Gets and sets the spin step value in the unit type set by the unitType argument.
    /// The value should be more than zero. This is the amount the slider will advance
    /// when the user clicks the spin button beside the value.
    double spinStep() const;
    bool spinStep(double value);

    ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double valueOne_raw() const = 0;
    virtual bool valueOne_raw(double value) = 0;
    virtual double valueTwo_raw() const = 0;
    virtual bool valueTwo_raw(double value) = 0;
    virtual double minimumValue_raw() const = 0;
    virtual bool minimumValue_raw(double value) = 0;
    virtual double maximumValue_raw() const = 0;
    virtual bool maximumValue_raw(double value) = 0;
    virtual double* valueList_raw(size_t& return_size) const = 0;
    virtual double spinStep_raw() const = 0;
    virtual bool spinStep_raw(double value) = 0;
};

// Inline wrappers

inline double FloatSliderCommandInput::valueOne() const
{
    double res = valueOne_raw();
    return res;
}

inline bool FloatSliderCommandInput::valueOne(double value)
{
    return valueOne_raw(value);
}

inline double FloatSliderCommandInput::valueTwo() const
{
    double res = valueTwo_raw();
    return res;
}

inline bool FloatSliderCommandInput::valueTwo(double value)
{
    return valueTwo_raw(value);
}

inline double FloatSliderCommandInput::minimumValue() const
{
    double res = minimumValue_raw();
    return res;
}

inline bool FloatSliderCommandInput::minimumValue(double value)
{
    return minimumValue_raw(value);
}

inline double FloatSliderCommandInput::maximumValue() const
{
    double res = maximumValue_raw();
    return res;
}

inline bool FloatSliderCommandInput::maximumValue(double value)
{
    return maximumValue_raw(value);
}

inline std::vector<double> FloatSliderCommandInput::valueList() const
{
    std::vector<double> res;
    size_t s;

    double* p= valueList_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline double FloatSliderCommandInput::spinStep() const
{
    double res = spinStep_raw();
    return res;
}

inline bool FloatSliderCommandInput::spinStep(double value)
{
    return spinStep_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FLOATSLIDERCOMMANDINPUT_API