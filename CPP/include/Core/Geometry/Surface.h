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
# ifdef __COMPILING_ADSK_CORE_SURFACE_CPP__
# define ADSK_CORE_SURFACE_API XI_EXPORT
# else
# define ADSK_CORE_SURFACE_API
# endif
#else
# define ADSK_CORE_SURFACE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
    class SurfaceEvaluator;
}}

namespace adsk { namespace core {

/// Describes a two-dimensional topological, manifold in three-dimensional space.
/// It is used as the underlying geometry for a BRepFace.
class Surface : public Base {
public:

    /// Returns the surface type.
    SurfaceTypes surfaceType() const;

    /// Returns the surface evaluator.
    Ptr<SurfaceEvaluator> evaluator() const;

    /// Updates this surface by transforming it with a given input matrix.
    /// matrix : A 3D matrix that defines the transform to apply to the surface.
    /// Returns true if the transform was successful.
    bool transformBy(const Ptr<Matrix3D>& matrix);

    ADSK_CORE_SURFACE_API static const char* classType();
    ADSK_CORE_SURFACE_API const char* objectType() const override;
    ADSK_CORE_SURFACE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SURFACE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual SurfaceTypes surfaceType_raw() const = 0;
    virtual SurfaceEvaluator* evaluator_raw() const = 0;
    virtual bool transformBy_raw(Matrix3D* matrix) = 0;
    virtual void placeholderSurface0() {}
    virtual void placeholderSurface1() {}
    virtual void placeholderSurface2() {}
    virtual void placeholderSurface3() {}
    virtual void placeholderSurface4() {}
    virtual void placeholderSurface5() {}
    virtual void placeholderSurface6() {}
    virtual void placeholderSurface7() {}
    virtual void placeholderSurface8() {}
    virtual void placeholderSurface9() {}
    virtual void placeholderSurface10() {}
    virtual void placeholderSurface11() {}
    virtual void placeholderSurface12() {}
    virtual void placeholderSurface13() {}
    virtual void placeholderSurface14() {}
    virtual void placeholderSurface15() {}
    virtual void placeholderSurface16() {}
    virtual void placeholderSurface17() {}
    virtual void placeholderSurface18() {}
    virtual void placeholderSurface19() {}
    virtual void placeholderSurface20() {}
    virtual void placeholderSurface21() {}
    virtual void placeholderSurface22() {}
    virtual void placeholderSurface23() {}
    virtual void placeholderSurface24() {}
    virtual void placeholderSurface25() {}
    virtual void placeholderSurface26() {}
    virtual void placeholderSurface27() {}
    virtual void placeholderSurface28() {}
};

// Inline wrappers

inline SurfaceTypes Surface::surfaceType() const
{
    SurfaceTypes res = surfaceType_raw();
    return res;
}

inline Ptr<SurfaceEvaluator> Surface::evaluator() const
{
    Ptr<SurfaceEvaluator> res = evaluator_raw();
    return res;
}

inline bool Surface::transformBy(const Ptr<Matrix3D>& matrix)
{
    bool res = transformBy_raw(matrix.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SURFACE_API