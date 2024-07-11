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
# ifdef __COMPILING_ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_CPP__
# define ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get the value of a slider from the user, the value type is integer.
class IntegerSliderCommandInput : public SliderCommandInput {
public:

    /// Gets or sets the value associated with the first slider.
    int valueOne() const;
    bool valueOne(int value);

    /// If the hasTwoSliders property is true, this returns the value associated with
    /// the second slider.
    int valueTwo() const;
    bool valueTwo(int value);

    /// Gets and sets minimum value of the slider. This will fail if there is a value list because the
    /// minimum and maximum values are defined by the value list.
    int minimumValue() const;
    bool minimumValue(int value);

    /// Gets and sets maximum value of the slider. This will fail if there is a value list because the
    /// minimum and maximum values are defined by the value list.
    int maximumValue() const;
    bool maximumValue(int value);

    /// Gets the value list of the slider. The list is empty if this command input was not added by value list.
    std::vector<int> valueList() const;

    /// Gets and sets the spin step. This defines the amount the slider moves when the user clicks the spin
    /// button beside the value. The spin step should be more than zero.
    size_t spinStep() const;
    bool spinStep(size_t value);

    ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int valueOne_raw() const = 0;
    virtual bool valueOne_raw(int value) = 0;
    virtual int valueTwo_raw() const = 0;
    virtual bool valueTwo_raw(int value) = 0;
    virtual int minimumValue_raw() const = 0;
    virtual bool minimumValue_raw(int value) = 0;
    virtual int maximumValue_raw() const = 0;
    virtual bool maximumValue_raw(int value) = 0;
    virtual int* valueList_raw(size_t& return_size) const = 0;
    virtual size_t spinStep_raw() const = 0;
    virtual bool spinStep_raw(size_t value) = 0;
};

// Inline wrappers

inline int IntegerSliderCommandInput::valueOne() const
{
    int res = valueOne_raw();
    return res;
}

inline bool IntegerSliderCommandInput::valueOne(int value)
{
    return valueOne_raw(value);
}

inline int IntegerSliderCommandInput::valueTwo() const
{
    int res = valueTwo_raw();
    return res;
}

inline bool IntegerSliderCommandInput::valueTwo(int value)
{
    return valueTwo_raw(value);
}

inline int IntegerSliderCommandInput::minimumValue() const
{
    int res = minimumValue_raw();
    return res;
}

inline bool IntegerSliderCommandInput::minimumValue(int value)
{
    return minimumValue_raw(value);
}

inline int IntegerSliderCommandInput::maximumValue() const
{
    int res = maximumValue_raw();
    return res;
}

inline bool IntegerSliderCommandInput::maximumValue(int value)
{
    return maximumValue_raw(value);
}

inline std::vector<int> IntegerSliderCommandInput::valueList() const
{
    std::vector<int> res;
    size_t s;

    int* p= valueList_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline size_t IntegerSliderCommandInput::spinStep() const
{
    size_t res = spinStep_raw();
    return res;
}

inline bool IntegerSliderCommandInput::spinStep(size_t value)
{
    return spinStep_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_INTEGERSLIDERCOMMANDINPUT_API