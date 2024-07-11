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
#include "TextureMapControl.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_TEXTUREMAPCONTROL3D_CPP__
# define ADSK_CORE_TEXTUREMAPCONTROL3D_API XI_EXPORT
# else
# define ADSK_CORE_TEXTUREMAPCONTROL3D_API
# endif
#else
# define ADSK_CORE_TEXTUREMAPCONTROL3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace core {

/// Provides access to the various settings that control how a 3D texture is applied to a body.
class TextureMapControl3D : public TextureMapControl {
public:

    /// Gets and sets the transform that defines the position and orientation of how the texture
    /// is applied to the body. For wood grain, the Z direction of the defined coordinate system is
    /// the direction of the grain.
    Ptr<Matrix3D> transform() const;
    bool transform(const Ptr<Matrix3D>& value);

    /// Reorients the transform to best fit the geometry of the body.
    /// Returns true if the best fit was successful.
    bool bestFit();

    ADSK_CORE_TEXTUREMAPCONTROL3D_API static const char* classType();
    ADSK_CORE_TEXTUREMAPCONTROL3D_API const char* objectType() const override;
    ADSK_CORE_TEXTUREMAPCONTROL3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TEXTUREMAPCONTROL3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(Matrix3D* value) = 0;
    virtual bool bestFit_raw() = 0;
};

// Inline wrappers

inline Ptr<Matrix3D> TextureMapControl3D::transform() const
{
    Ptr<Matrix3D> res = transform_raw();
    return res;
}

inline bool TextureMapControl3D::transform(const Ptr<Matrix3D>& value)
{
    return transform_raw(value.get());
}

inline bool TextureMapControl3D::bestFit()
{
    bool res = bestFit_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TEXTUREMAPCONTROL3D_API