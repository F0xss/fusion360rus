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
# ifdef __COMPILING_ADSK_CORE_SLIDERCOMMANDINPUT_CPP__
# define ADSK_CORE_SLIDERCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_SLIDERCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_SLIDERCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides a command input to get the value of a slider from the user.
class SliderCommandInput : public CommandInput {
public:

    /// Uses an expression to set the value in the first input field. This can contain equations and
    /// is evaluated using the specified unit type.
    std::string expressionOne() const;
    bool expressionOne(const std::string& value);

    /// Uses an expression to set the value in the second input field. This can contain equations and
    /// is evaluated using the specified unit type.
    /// 
    /// This property is only available when the hasTwoSliders property returns true.
    std::string expressionTwo() const;
    bool expressionTwo(const std::string& value);

    /// Gets and sets the unit type that is used when evaluating the user's input.
    std::string unitType() const;
    bool unitType(const std::string& value);

    /// Gets if the command input has two sliders.
    bool hasTwoSliders() const;

    /// Sets the text of the slider. Both the left and the right text should be set.
    /// left : Indicates the text on the left side of the slider.
    /// right : Indicates the text on the right side of the slider.
    /// Returns true if successful.
    bool setText(const std::string& left, const std::string& right);

    /// Gets the texts of the slider if text has been defined.
    /// isLeft : Indicates to get the left or right text.
    /// Returns the left or right text of the slider.
    std::string getText(bool isLeft) const;

    ADSK_CORE_SLIDERCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_SLIDERCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_SLIDERCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SLIDERCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* expressionOne_raw() const = 0;
    virtual bool expressionOne_raw(const char* value) = 0;
    virtual char* expressionTwo_raw() const = 0;
    virtual bool expressionTwo_raw(const char* value) = 0;
    virtual char* unitType_raw() const = 0;
    virtual bool unitType_raw(const char* value) = 0;
    virtual bool hasTwoSliders_raw() const = 0;
    virtual bool setText_raw(const char* left, const char* right) = 0;
    virtual char* getText_raw(bool isLeft) const = 0;
    virtual void placeholderSliderCommandInput0() {}
    virtual void placeholderSliderCommandInput1() {}
    virtual void placeholderSliderCommandInput2() {}
    virtual void placeholderSliderCommandInput3() {}
    virtual void placeholderSliderCommandInput4() {}
    virtual void placeholderSliderCommandInput5() {}
    virtual void placeholderSliderCommandInput6() {}
    virtual void placeholderSliderCommandInput7() {}
    virtual void placeholderSliderCommandInput8() {}
    virtual void placeholderSliderCommandInput9() {}
    virtual void placeholderSliderCommandInput10() {}
    virtual void placeholderSliderCommandInput11() {}
    virtual void placeholderSliderCommandInput12() {}
    virtual void placeholderSliderCommandInput13() {}
    virtual void placeholderSliderCommandInput14() {}
    virtual void placeholderSliderCommandInput15() {}
    virtual void placeholderSliderCommandInput16() {}
    virtual void placeholderSliderCommandInput17() {}
    virtual void placeholderSliderCommandInput18() {}
    virtual void placeholderSliderCommandInput19() {}
    virtual void placeholderSliderCommandInput20() {}
    virtual void placeholderSliderCommandInput21() {}
    virtual void placeholderSliderCommandInput22() {}
};

// Inline wrappers

inline std::string SliderCommandInput::expressionOne() const
{
    std::string res;

    char* p= expressionOne_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool SliderCommandInput::expressionOne(const std::string& value)
{
    return expressionOne_raw(value.c_str());
}

inline std::string SliderCommandInput::expressionTwo() const
{
    std::string res;

    char* p= expressionTwo_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool SliderCommandInput::expressionTwo(const std::string& value)
{
    return expressionTwo_raw(value.c_str());
}

inline std::string SliderCommandInput::unitType() const
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

inline bool SliderCommandInput::unitType(const std::string& value)
{
    return unitType_raw(value.c_str());
}

inline bool SliderCommandInput::hasTwoSliders() const
{
    bool res = hasTwoSliders_raw();
    return res;
}

inline bool SliderCommandInput::setText(const std::string& left, const std::string& right)
{
    bool res = setText_raw(left.c_str(), right.c_str());
    return res;
}

inline std::string SliderCommandInput::getText(bool isLeft) const
{
    std::string res;

    char* p= getText_raw(isLeft);
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SLIDERCOMMANDINPUT_API