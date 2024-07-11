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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_UNITANDVALUEPREFERENCES_CPP__
# define ADSK_CORE_UNITANDVALUEPREFERENCES_API XI_EXPORT
# else
# define ADSK_CORE_UNITANDVALUEPREFERENCES_API
# endif
#else
# define ADSK_CORE_UNITANDVALUEPREFERENCES_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The UnitAndValuePreferences object provides access to unit and value precision
/// related preferences.
class UnitAndValuePreferences : public Base {
public:

    /// Gets and sets the general precision for distance values. This
    /// value specifies the number of decimals to display.
    int generalPrecision() const;
    bool generalPrecision(int value);

    /// Gets and sets the angular precision. This
    /// value specifies the number of decimals to display.
    int angularPrecision() const;
    bool angularPrecision(int value);

    /// Gets and sets the number scientific notation precision. This
    /// value specifies the number of decimals to display.
    int scientificNotationPrecision() const;
    bool scientificNotationPrecision(int value);

    /// Gets and sets the foot and inch display format.
    FootAndInchDisplayFormats footAndInchDisplayFormat() const;
    bool footAndInchDisplayFormat(FootAndInchDisplayFormats value);

    /// Gets and sets the degree display format.
    DegreeDisplayFormats degreeDisplayFormat() const;
    bool degreeDisplayFormat(DegreeDisplayFormats value);

    /// Gets and sets if the decimal is a period or comma.
    bool isPeriodDecimalPoint() const;
    bool isPeriodDecimalPoint(bool value);

    /// Gets and sets if abbreviations are used for units display.
    bool areAbbreviationsForUnitDisplayed() const;
    bool areAbbreviationsForUnitDisplayed(bool value);

    /// Gets and sets if symbols are used for units display.
    bool areSymbolsForUnitDisplayed() const;
    bool areSymbolsForUnitDisplayed(bool value);

    /// Gets and sets if scientific notation is used when displaying numbers.
    bool isScientificNotationUsed() const;
    bool isScientificNotationUsed(bool value);

    /// Gets and sets the number of whole digits that will be displayed before
    /// switching to scientific notation.
    int useScientficNotationAbove() const;
    bool useScientficNotationAbove(int value);

    /// Gets and sets the number of non zero decimal places that will be
    /// displayed before switching to scientific notation.
    int useScientficNotationBelow() const;
    bool useScientficNotationBelow(int value);

    /// Gets and sets if trailing zeros are hidden when displaying numbers.
    bool areTrailingZerosHidden() const;
    bool areTrailingZerosHidden(bool value);

    /// Gets and sets the minimum number of digits to the right of the decimal to display
    /// before hiding trailing zeros.
    int minimumPrecisionWhenHidingZeros() const;
    bool minimumPrecisionWhenHidingZeros(int value);

    /// Gets and sets the units types to use when displaying values.
    MaterialDisplayUnits materialDisplayUnit() const;
    bool materialDisplayUnit(MaterialDisplayUnits value);

    ADSK_CORE_UNITANDVALUEPREFERENCES_API static const char* classType();
    ADSK_CORE_UNITANDVALUEPREFERENCES_API const char* objectType() const override;
    ADSK_CORE_UNITANDVALUEPREFERENCES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_UNITANDVALUEPREFERENCES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual int generalPrecision_raw() const = 0;
    virtual bool generalPrecision_raw(int value) = 0;
    virtual int angularPrecision_raw() const = 0;
    virtual bool angularPrecision_raw(int value) = 0;
    virtual int scientificNotationPrecision_raw() const = 0;
    virtual bool scientificNotationPrecision_raw(int value) = 0;
    virtual FootAndInchDisplayFormats footAndInchDisplayFormat_raw() const = 0;
    virtual bool footAndInchDisplayFormat_raw(FootAndInchDisplayFormats value) = 0;
    virtual DegreeDisplayFormats degreeDisplayFormat_raw() const = 0;
    virtual bool degreeDisplayFormat_raw(DegreeDisplayFormats value) = 0;
    virtual bool isPeriodDecimalPoint_raw() const = 0;
    virtual bool isPeriodDecimalPoint_raw(bool value) = 0;
    virtual bool areAbbreviationsForUnitDisplayed_raw() const = 0;
    virtual bool areAbbreviationsForUnitDisplayed_raw(bool value) = 0;
    virtual bool areSymbolsForUnitDisplayed_raw() const = 0;
    virtual bool areSymbolsForUnitDisplayed_raw(bool value) = 0;
    virtual bool isScientificNotationUsed_raw() const = 0;
    virtual bool isScientificNotationUsed_raw(bool value) = 0;
    virtual int useScientficNotationAbove_raw() const = 0;
    virtual bool useScientficNotationAbove_raw(int value) = 0;
    virtual int useScientficNotationBelow_raw() const = 0;
    virtual bool useScientficNotationBelow_raw(int value) = 0;
    virtual bool areTrailingZerosHidden_raw() const = 0;
    virtual bool areTrailingZerosHidden_raw(bool value) = 0;
    virtual int minimumPrecisionWhenHidingZeros_raw() const = 0;
    virtual bool minimumPrecisionWhenHidingZeros_raw(int value) = 0;
    virtual MaterialDisplayUnits materialDisplayUnit_raw() const = 0;
    virtual bool materialDisplayUnit_raw(MaterialDisplayUnits value) = 0;
};

// Inline wrappers

inline int UnitAndValuePreferences::generalPrecision() const
{
    int res = generalPrecision_raw();
    return res;
}

inline bool UnitAndValuePreferences::generalPrecision(int value)
{
    return generalPrecision_raw(value);
}

inline int UnitAndValuePreferences::angularPrecision() const
{
    int res = angularPrecision_raw();
    return res;
}

inline bool UnitAndValuePreferences::angularPrecision(int value)
{
    return angularPrecision_raw(value);
}

inline int UnitAndValuePreferences::scientificNotationPrecision() const
{
    int res = scientificNotationPrecision_raw();
    return res;
}

inline bool UnitAndValuePreferences::scientificNotationPrecision(int value)
{
    return scientificNotationPrecision_raw(value);
}

inline FootAndInchDisplayFormats UnitAndValuePreferences::footAndInchDisplayFormat() const
{
    FootAndInchDisplayFormats res = footAndInchDisplayFormat_raw();
    return res;
}

inline bool UnitAndValuePreferences::footAndInchDisplayFormat(FootAndInchDisplayFormats value)
{
    return footAndInchDisplayFormat_raw(value);
}

inline DegreeDisplayFormats UnitAndValuePreferences::degreeDisplayFormat() const
{
    DegreeDisplayFormats res = degreeDisplayFormat_raw();
    return res;
}

inline bool UnitAndValuePreferences::degreeDisplayFormat(DegreeDisplayFormats value)
{
    return degreeDisplayFormat_raw(value);
}

inline bool UnitAndValuePreferences::isPeriodDecimalPoint() const
{
    bool res = isPeriodDecimalPoint_raw();
    return res;
}

inline bool UnitAndValuePreferences::isPeriodDecimalPoint(bool value)
{
    return isPeriodDecimalPoint_raw(value);
}

inline bool UnitAndValuePreferences::areAbbreviationsForUnitDisplayed() const
{
    bool res = areAbbreviationsForUnitDisplayed_raw();
    return res;
}

inline bool UnitAndValuePreferences::areAbbreviationsForUnitDisplayed(bool value)
{
    return areAbbreviationsForUnitDisplayed_raw(value);
}

inline bool UnitAndValuePreferences::areSymbolsForUnitDisplayed() const
{
    bool res = areSymbolsForUnitDisplayed_raw();
    return res;
}

inline bool UnitAndValuePreferences::areSymbolsForUnitDisplayed(bool value)
{
    return areSymbolsForUnitDisplayed_raw(value);
}

inline bool UnitAndValuePreferences::isScientificNotationUsed() const
{
    bool res = isScientificNotationUsed_raw();
    return res;
}

inline bool UnitAndValuePreferences::isScientificNotationUsed(bool value)
{
    return isScientificNotationUsed_raw(value);
}

inline int UnitAndValuePreferences::useScientficNotationAbove() const
{
    int res = useScientficNotationAbove_raw();
    return res;
}

inline bool UnitAndValuePreferences::useScientficNotationAbove(int value)
{
    return useScientficNotationAbove_raw(value);
}

inline int UnitAndValuePreferences::useScientficNotationBelow() const
{
    int res = useScientficNotationBelow_raw();
    return res;
}

inline bool UnitAndValuePreferences::useScientficNotationBelow(int value)
{
    return useScientficNotationBelow_raw(value);
}

inline bool UnitAndValuePreferences::areTrailingZerosHidden() const
{
    bool res = areTrailingZerosHidden_raw();
    return res;
}

inline bool UnitAndValuePreferences::areTrailingZerosHidden(bool value)
{
    return areTrailingZerosHidden_raw(value);
}

inline int UnitAndValuePreferences::minimumPrecisionWhenHidingZeros() const
{
    int res = minimumPrecisionWhenHidingZeros_raw();
    return res;
}

inline bool UnitAndValuePreferences::minimumPrecisionWhenHidingZeros(int value)
{
    return minimumPrecisionWhenHidingZeros_raw(value);
}

inline MaterialDisplayUnits UnitAndValuePreferences::materialDisplayUnit() const
{
    MaterialDisplayUnits res = materialDisplayUnit_raw();
    return res;
}

inline bool UnitAndValuePreferences::materialDisplayUnit(MaterialDisplayUnits value)
{
    return materialDisplayUnit_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_UNITANDVALUEPREFERENCES_API