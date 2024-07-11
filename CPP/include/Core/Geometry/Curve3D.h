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
# ifdef __COMPILING_ADSK_CORE_CURVE3D_CPP__
# define ADSK_CORE_CURVE3D_API XI_EXPORT
# else
# define ADSK_CORE_CURVE3D_API
# endif
#else
# define ADSK_CORE_CURVE3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class CurveEvaluator3D;
    class Matrix3D;
}}

namespace adsk { namespace core {

/// The base class for all 3D transient geometry classes.
class Curve3D : public Base {
public:

    /// Returns the type of geometry this curve represents.
    Curve3DTypes curveType() const;

    /// Returns an evaluator object that lets you perform additional evaluations on the curve.
    Ptr<CurveEvaluator3D> evaluator() const;

    /// Transforms this curve in 3D space.
    /// matrix : A 3D matrix that defines the transform to apply to the curve.
    /// Return true if the transform was successful.
    bool transformBy(const Ptr<Matrix3D>& matrix);

    ADSK_CORE_CURVE3D_API static const char* classType();
    ADSK_CORE_CURVE3D_API const char* objectType() const override;
    ADSK_CORE_CURVE3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CURVE3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Curve3DTypes curveType_raw() const = 0;
    virtual CurveEvaluator3D* evaluator_raw() const = 0;
    virtual bool transformBy_raw(Matrix3D* matrix) = 0;
    virtual void placeholderCurve3D0() {}
    virtual void placeholderCurve3D1() {}
    virtual void placeholderCurve3D2() {}
    virtual void placeholderCurve3D3() {}
    virtual void placeholderCurve3D4() {}
    virtual void placeholderCurve3D5() {}
    virtual void placeholderCurve3D6() {}
    virtual void placeholderCurve3D7() {}
    virtual void placeholderCurve3D8() {}
    virtual void placeholderCurve3D9() {}
    virtual void placeholderCurve3D10() {}
    virtual void placeholderCurve3D11() {}
    virtual void placeholderCurve3D12() {}
    virtual void placeholderCurve3D13() {}
    virtual void placeholderCurve3D14() {}
    virtual void placeholderCurve3D15() {}
    virtual void placeholderCurve3D16() {}
    virtual void placeholderCurve3D17() {}
    virtual void placeholderCurve3D18() {}
    virtual void placeholderCurve3D19() {}
    virtual void placeholderCurve3D20() {}
    virtual void placeholderCurve3D21() {}
    virtual void placeholderCurve3D22() {}
    virtual void placeholderCurve3D23() {}
    virtual void placeholderCurve3D24() {}
    virtual void placeholderCurve3D25() {}
    virtual void placeholderCurve3D26() {}
    virtual void placeholderCurve3D27() {}
    virtual void placeholderCurve3D28() {}
};

// Inline wrappers

inline Curve3DTypes Curve3D::curveType() const
{
    Curve3DTypes res = curveType_raw();
    return res;
}

inline Ptr<CurveEvaluator3D> Curve3D::evaluator() const
{
    Ptr<CurveEvaluator3D> res = evaluator_raw();
    return res;
}

inline bool Curve3D::transformBy(const Ptr<Matrix3D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CURVE3D_API