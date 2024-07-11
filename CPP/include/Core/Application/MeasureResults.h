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
# ifdef __COMPILING_ADSK_CORE_MEASURERESULTS_CPP__
# define ADSK_CORE_MEASURERESULTS_API XI_EXPORT
# else
# define ADSK_CORE_MEASURERESULTS_API
# endif
#else
# define ADSK_CORE_MEASURERESULTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace core {

/// Provides measurement results from the various measurement methods available on the MeasureManager object.
class MeasureResults : public Base {
public:

    /// The measurement value. If the measurement is a distance this value will be in centimeters.
    /// If it's an angle then it will be in radians.
    double value() const;

    /// For a distance measurement, this is the point on the first entity where the measurement was made from.
    /// For an angle measurement this is one of the three points defining the angle.
    Ptr<Point3D> positionOne() const;

    /// For a distance measurement, this is the point on the second entity where the measurement was made to.
    /// For an angle measurement this is one of the three points defining the angle.
    Ptr<Point3D> positionTwo() const;

    /// This point is only used for angle measurements and is one of the three points defining the angle.
    Ptr<Point3D> positionThree() const;

    ADSK_CORE_MEASURERESULTS_API static const char* classType();
    ADSK_CORE_MEASURERESULTS_API const char* objectType() const override;
    ADSK_CORE_MEASURERESULTS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MEASURERESULTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual double value_raw() const = 0;
    virtual Point3D* positionOne_raw() const = 0;
    virtual Point3D* positionTwo_raw() const = 0;
    virtual Point3D* positionThree_raw() const = 0;
};

// Inline wrappers

inline double MeasureResults::value() const
{
    double res = value_raw();
    return res;
}

inline Ptr<Point3D> MeasureResults::positionOne() const
{
    Ptr<Point3D> res = positionOne_raw();
    return res;
}

inline Ptr<Point3D> MeasureResults::positionTwo() const
{
    Ptr<Point3D> res = positionTwo_raw();
    return res;
}

inline Ptr<Point3D> MeasureResults::positionThree() const
{
    Ptr<Point3D> res = positionThree_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MEASURERESULTS_API