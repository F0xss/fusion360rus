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
# ifdef __COMPILING_ADSK_CORE_UNITSMANAGER_CPP__
# define ADSK_CORE_UNITSMANAGER_API XI_EXPORT
# else
# define ADSK_CORE_UNITSMANAGER_API
# endif
#else
# define ADSK_CORE_UNITSMANAGER_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Product;
}}

namespace adsk { namespace core {

/// Utility class used to work with Values and control default units.
/// Internal values are held in SI units (e.g. seconds, radians, kg for time, angle, mass)
/// with the exception that all lengths are in cm rather than meter and this affects derived
/// units (e.g. velocity is cm/s, volume is cm^3).
/// Units are specified flexibility via strings (e.g. "cm", "in", "inch", "cm^3", "cm*cm*cm", "mph", "mps" "m/s").
/// Units like length can be defaulted based on the design settings if the user does not explicitly
/// specify units - so "3" can be 3 inches, mm or cm depending on what the design
/// settings are.
class UnitsManager : public Base {
public:

    /// Returns the parent Product.
    Ptr<Product> product() const;

    /// Checks to see if the given expression is valid.
    /// expression : The expression to validate.
    /// units : The units to use when validating the expression.
    /// Returns True if it is a valid expression.
    bool isValidExpression(const std::string& expression, const std::string& units) const;

    /// Gets the value (in internal units) of the expression.
    /// expression : EvaluateExpression("1cm + 1in") -> 3.54
    /// EvaluateExpression("1") -> -> depends on the DistanceUnits, with "mm" it gives 0.1
    /// units : If not supplied the units will default to the default length specified in the preferences.
    /// Returns -1 AND GetLastError will return ExpressionError in the event of an error.
    double evaluateExpression(const std::string& expression, const std::string& units = "DefaultDistance") const;

    /// Converts a value from one unit to another. The input and output unit specifiers must be compatible.
    /// For example, "in" (inches) and "cm" (centimeters) will work because they both define length.
    /// So Convert(1.5, "in", "ft") -> 0.125
    /// Convert(1.5, unitsManager.defaultLengthUnits, "cm") -> depends on the current default distance units, with "mm" it gives 0.15
    /// So Convert(1.5, "in", "kg") -> -1 and GetLastError returns ExpressionError (to denote error)
    /// So Convert(1, "in", "internalUnits") -> 2.54
    /// So Convert(1, "internalUnits", "in") -> 0.3937...
    /// valueInInputUnits : The value to convert
    /// inputUnits : The units of the value to convert
    /// outputUnits : The units to convert the value to
    /// Returns -1 AND GetLastError returns ExpressionError in the event of an error.
    double convert(double valueInInputUnits, const std::string& inputUnits, const std::string& outputUnits) const;

    /// Formats the internal value as a string. The output string is formatted using the current
    /// unit settings in preferences. The preferences control the number of decimal places, whether
    /// units are abbreviated and several other things.
    /// FormatInternalValue(1.5, "in") -> "0.591 in"
    /// FormatInternalValue(1.5, "in", false) -> "0.591"
    /// FormatInternalValue(1.5, "mm", true) -> "15.00 mm"
    /// FormatInternalValue(1.5) -> depends on DistanceUnits, might be "15.0 mm"
    /// internalValue : The internal value to format.
    /// displayUnits : The units to display the value in. If not supplied the units will default to the default length specified in the preferences.
    /// showUnits : Specify false to exclude units from the format. The default is true.
    /// Returns an empty string if the units are incorrectly specified.
    std::string formatInternalValue(double internalValue, const std::string& displayUnits = "DefaultDistance", bool showUnits = true) const;

    /// Formats the unit according to the user preferences
    /// "centimeter" -> "cm"
    /// "inch" -> "in"
    /// "cm* cm *cm / s" -> , "cm^3 / s"
    /// units : The unit to use when converting the value into a string.
    /// Returns an empty string and GetLastError returns ExpressionError in the event of an error.
    std::string formatUnits(const std::string& units) const;

    /// Standardizes the expression in terms of spacing and user preferences.
    /// StandardizeExpression("1.5") -> depends on distance units, but with mmight be "1.5 mm"
    /// StandardizeExpression("1.5", "in") -> "1.5 in"
    /// StandardizeExpression("1.5 cm + 1.50001 centimeter") -> "1.5 cm + 1.50001 cm"
    /// StandardizeExpression("1.5", "m * m * m / s") -> "1.5 m^3 /s"
    /// expression : The expression to standardize
    /// units : The units to apply to the standardized expression. If not supplied the units will default to the default length specified in the preferences.
    /// Returns an empty string AND GetLastError returns ExpressionError in the event of an error.
    std::string standardizeExpression(const std::string& expression, const std::string& units = "DefaultDistance") const;

    /// Returns a string that represents internal units - i.e. "internalUnits".
    /// This can be used when performing conversions via Convert.
    std::string internalUnits() const;

    /// Returns the unit strings for the current default length unit as specified in preferences. - e.g. "cm" or "in"
    /// This is the string that is being used by Fusion 360 to represent the current length unit and is affected
    /// by the preference settings that let the user choose whether abbreviations and symbols can be used. This means
    /// that inch length units can be returned as inch, in, or ". If you need a consistent way of determing the current
    /// length unit, the distanceDisplayUnits of the FusionUnitsManager object returns an enum value.
    std::string defaultLengthUnits() const;

    ADSK_CORE_UNITSMANAGER_API static const char* classType();
    ADSK_CORE_UNITSMANAGER_API const char* objectType() const override;
    ADSK_CORE_UNITSMANAGER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_UNITSMANAGER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Product* product_raw() const = 0;
    virtual bool isValidExpression_raw(const char* expression, const char* units) const = 0;
    virtual double evaluateExpression_raw(const char* expression, const char* units) const = 0;
    virtual double convert_raw(double valueInInputUnits, const char* inputUnits, const char* outputUnits) const = 0;
    virtual char* formatInternalValue_raw(double internalValue, const char* displayUnits, bool showUnits) const = 0;
    virtual char* formatUnits_raw(const char* units) const = 0;
    virtual char* standardizeExpression_raw(const char* expression, const char* units) const = 0;
    virtual char* internalUnits_raw() const = 0;
    virtual char* defaultLengthUnits_raw() const = 0;
    virtual void placeholderUnitsManager0() {}
    virtual void placeholderUnitsManager1() {}
    virtual void placeholderUnitsManager2() {}
    virtual void placeholderUnitsManager3() {}
    virtual void placeholderUnitsManager4() {}
    virtual void placeholderUnitsManager5() {}
    virtual void placeholderUnitsManager6() {}
    virtual void placeholderUnitsManager7() {}
    virtual void placeholderUnitsManager8() {}
    virtual void placeholderUnitsManager9() {}
    virtual void placeholderUnitsManager10() {}
    virtual void placeholderUnitsManager11() {}
    virtual void placeholderUnitsManager12() {}
    virtual void placeholderUnitsManager13() {}
    virtual void placeholderUnitsManager14() {}
    virtual void placeholderUnitsManager15() {}
    virtual void placeholderUnitsManager16() {}
    virtual void placeholderUnitsManager17() {}
    virtual void placeholderUnitsManager18() {}
    virtual void placeholderUnitsManager19() {}
    virtual void placeholderUnitsManager20() {}
    virtual void placeholderUnitsManager21() {}
    virtual void placeholderUnitsManager22() {}
};

// Inline wrappers

inline Ptr<Product> UnitsManager::product() const
{
    Ptr<Product> res = product_raw();
    return res;
}

inline bool UnitsManager::isValidExpression(const std::string& expression, const std::string& units) const
{
    bool res = isValidExpression_raw(expression.c_str(), units.c_str());
    return res;
}

inline double UnitsManager::evaluateExpression(const std::string& expression, const std::string& units) const
{
    double res = evaluateExpression_raw(expression.c_str(), units.c_str());
    return res;
}

inline double UnitsManager::convert(double valueInInputUnits, const std::string& inputUnits, const std::string& outputUnits) const
{
    double res = convert_raw(valueInInputUnits, inputUnits.c_str(), outputUnits.c_str());
    return res;
}

inline std::string UnitsManager::formatInternalValue(double internalValue, const std::string& displayUnits, bool showUnits) const
{
    std::string res;

    char* p= formatInternalValue_raw(internalValue, displayUnits.c_str(), showUnits);
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string UnitsManager::formatUnits(const std::string& units) const
{
    std::string res;

    char* p= formatUnits_raw(units.c_str());
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string UnitsManager::standardizeExpression(const std::string& expression, const std::string& units) const
{
    std::string res;

    char* p= standardizeExpression_raw(expression.c_str(), units.c_str());
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string UnitsManager::internalUnits() const
{
    std::string res;

    char* p= internalUnits_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string UnitsManager::defaultLengthUnits() const
{
    std::string res;

    char* p= defaultLengthUnits_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_UNITSMANAGER_API