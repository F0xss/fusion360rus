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
# ifdef __COMPILING_ADSK_CORE_VALUEINPUT_CPP__
# define ADSK_CORE_VALUEINPUT_API XI_EXPORT
# else
# define ADSK_CORE_VALUEINPUT_API
# endif
#else
# define ADSK_CORE_VALUEINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A ValueInput provides a flexible way of specifying a string, a double, a boolean, or object reference.
/// No semantics are associated with a ValueInput (e.g. is the string valid, can the string
/// be converted to a double) - it is merely a way of supplying information in
/// either string, double, boolean or object reference form as a function parameter.
/// ValueInput objects are typically used to specify things like an extrude depth, or hole dia, etc.
class ValueInput : public Base {
public:

    /// Creates a new ValueInput object using a double. For example, if you create a value using
    /// the double value 2 and use it as input for a length, it will be interpreted as 2 cm because
    /// centimeters are the internal unit for length. Values defined by a real are are always
    /// interpreted to be in the appropriate internal unit.
    /// For example, if the value 2 is used to define the depth of an extrusion (a length value),
    /// it will be 2 cm because cm is the internal unit for lengths. If the value 2 is used
    /// to define the angle of the extrude, it will be 2 radians because radians are the internal
    /// unit for angles.
    /// realValue : a double value
    /// Returns the newly created ValueInput object or null if the creation failed.
    static Ptr<ValueInput> createByReal(double realValue);

    /// When a string is used to create a value it needs to be evaluated as an expression so
    /// its value can be determined using the UnitsManager class.
    /// The units of an expression can be explicitly defined or will default to the current default
    /// units.
    /// For example, if you create an expression with the string "6" and specify it as a length,
    /// it will use the current active units. If the current active units are defined as inches
    /// the expression will be interpreted as 6 inches.
    /// You can specify the units as part of the string (i.e. "6 mm").
    /// You can also use equations in the string (ie. "6 + 5mm")
    /// 
    /// In order for an expression to be valid, its units must be compatible with the value it
    /// represents. For example if you specify "5 in + 3 cm" as an expresssion to supply the value
    /// of an angle, it will fail because the units of the expression define a length.
    /// stringValue : The expression string
    /// Returns the newly created ValueInput object or null if the creation failed.
    static Ptr<ValueInput> createByString(const std::string& stringValue);

    /// Gets the real value, if there is one.
    /// Returns -1 AND GetLastError returns ValueNotOfType if there is no real value.
    /// You can use the valueType property to determine which value type is currently used.
    double realValue() const;

    /// Gets the string value, if there is one.
    /// Returns an empty string AND GetLastError returns ValueNotOfType if there is no string value.
    /// You can use the valueType property to determine which value type is currently used.
    std::string stringValue() const;

    /// Creates a new ValueInput object that contains a reference to any Fusion 360 object.
    /// objectReference : The Fusion 360 object that you want to create the ValueInput for.
    /// Returns the newly created ValueInput object or null if the creation failed.
    static Ptr<ValueInput> createByObject(const Ptr<Base>& objectReference);

    /// Gets the object being referenced, if there is one.
    /// Returns null AND GetLastError returns ValueNotOfType if there is no object reference.
    /// You can use the valueType property to determine which value type is currently used.
    Ptr<Base> objectReference() const;

    /// Returns the type of value this ValueInput currently represents.
    ValueTypes valueType() const;

    /// Creates a new ValueInput object that contains a boolean value.
    /// booleanValue : Boolean value.
    /// Returns the newly created ValueInput object or null if the creation failed.
    static Ptr<ValueInput> createByBoolean(bool booleanValue);

    /// Gets the boolean value, if there is one.
    /// Returns false AND GetLastError returns ValueNotOfType if there is no boolean value.
    /// You can use the valueType property to determine which value type is currently used.
    bool booleanValue() const;

    ADSK_CORE_VALUEINPUT_API static const char* classType();
    ADSK_CORE_VALUEINPUT_API const char* objectType() const override;
    ADSK_CORE_VALUEINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_VALUEINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_VALUEINPUT_API static ValueInput* createByReal_raw(double realValue);
    ADSK_CORE_VALUEINPUT_API static ValueInput* createByString_raw(const char* stringValue);
    virtual double realValue_raw() const = 0;
    virtual char* stringValue_raw() const = 0;
    ADSK_CORE_VALUEINPUT_API static ValueInput* createByObject_raw(Base* objectReference);
    virtual Base* objectReference_raw() const = 0;
    virtual ValueTypes valueType_raw() const = 0;
    ADSK_CORE_VALUEINPUT_API static ValueInput* createByBoolean_raw(bool booleanValue);
    virtual bool booleanValue_raw() const = 0;
};

// Inline wrappers

inline Ptr<ValueInput> ValueInput::createByReal(double realValue)
{
    Ptr<ValueInput> res = createByReal_raw(realValue);
    return res;
}

inline Ptr<ValueInput> ValueInput::createByString(const std::string& stringValue)
{
    Ptr<ValueInput> res = createByString_raw(stringValue.c_str());
    return res;
}

inline double ValueInput::realValue() const
{
    double res = realValue_raw();
    return res;
}

inline std::string ValueInput::stringValue() const
{
    std::string res;

    char* p= stringValue_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<ValueInput> ValueInput::createByObject(const Ptr<Base>& objectReference)
{
    Ptr<ValueInput> res = createByObject_raw(objectReference.get());
    return res;
}

inline Ptr<Base> ValueInput::objectReference() const
{
    Ptr<Base> res = objectReference_raw();
    return res;
}

inline ValueTypes ValueInput::valueType() const
{
    ValueTypes res = valueType_raw();
    return res;
}

inline Ptr<ValueInput> ValueInput::createByBoolean(bool booleanValue)
{
    Ptr<ValueInput> res = createByBoolean_raw(booleanValue);
    return res;
}

inline bool ValueInput::booleanValue() const
{
    bool res = booleanValue_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_VALUEINPUT_API