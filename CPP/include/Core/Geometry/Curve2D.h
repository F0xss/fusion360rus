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
# ifdef __COMPILING_ADSK_CORE_CURVE2D_CPP__
# define ADSK_CORE_CURVE2D_API XI_EXPORT
# else
# define ADSK_CORE_CURVE2D_API
# endif
#else
# define ADSK_CORE_CURVE2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CurveEvaluator2D;
    class Matrix2D;
}}

namespace adsk { namespace core {

/// The base class for all 2D transient geometry classes.
class Curve2D : public Base {
public:

    /// Returns the type of geometry this curve represents.
    Curve2DTypes curveType() const;

    /// Returns an evaluator object that lets you perform additional evaluations on the curve.
    Ptr<CurveEvaluator2D> evaluator() const;

    /// Transforms this curve in 2D space.
    /// matrix : A 2D matrix that defines the transform to apply to the curve.
    /// Return true if the transform was successful.
    bool transformBy(const Ptr<Matrix2D>& matrix);

    ADSK_CORE_CURVE2D_API static const char* classType();
    ADSK_CORE_CURVE2D_API const char* objectType() const override;
    ADSK_CORE_CURVE2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CURVE2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Curve2DTypes curveType_raw() const = 0;
    virtual CurveEvaluator2D* evaluator_raw() const = 0;
    virtual bool transformBy_raw(Matrix2D* matrix) = 0;
    virtual void placeholderCurve2D0() {}
    virtual void placeholderCurve2D1() {}
    virtual void placeholderCurve2D2() {}
    virtual void placeholderCurve2D3() {}
    virtual void placeholderCurve2D4() {}
    virtual void placeholderCurve2D5() {}
    virtual void placeholderCurve2D6() {}
    virtual void placeholderCurve2D7() {}
    virtual void placeholderCurve2D8() {}
    virtual void placeholderCurve2D9() {}
    virtual void placeholderCurve2D10() {}
    virtual void placeholderCurve2D11() {}
    virtual void placeholderCurve2D12() {}
    virtual void placeholderCurve2D13() {}
    virtual void placeholderCurve2D14() {}
    virtual void placeholderCurve2D15() {}
    virtual void placeholderCurve2D16() {}
    virtual void placeholderCurve2D17() {}
    virtual void placeholderCurve2D18() {}
    virtual void placeholderCurve2D19() {}
    virtual void placeholderCurve2D20() {}
    virtual void placeholderCurve2D21() {}
    virtual void placeholderCurve2D22() {}
    virtual void placeholderCurve2D23() {}
    virtual void placeholderCurve2D24() {}
    virtual void placeholderCurve2D25() {}
    virtual void placeholderCurve2D26() {}
    virtual void placeholderCurve2D27() {}
    virtual void placeholderCurve2D28() {}
};

// Inline wrappers

inline Curve2DTypes Curve2D::curveType() const
{
    Curve2DTypes res = curveType_raw();
    return res;
}

inline Ptr<CurveEvaluator2D> Curve2D::evaluator() const
{
    Ptr<CurveEvaluator2D> res = evaluator_raw();
    return res;
}

inline bool Curve2D::transformBy(const Ptr<Matrix2D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CURVE2D_API