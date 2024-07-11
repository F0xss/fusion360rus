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
#include "../CoreTypeDefs.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_CPP__
# define ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API XI_EXPORT
# else
# define ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API
# endif
#else
# define ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Matrix3D;
}}

namespace adsk { namespace core {

/// Provides access to the various settings that control how a projected texture is applied to a body.
class ProjectedTextureMapControl : public TextureMapControl {
public:

    /// Gets and sets how the texture map is being applied onto the body.
    ProjectedTextureMapTypes projectedTextureMapType() const;
    bool projectedTextureMapType(ProjectedTextureMapTypes value);

    /// When a cylindrical projected texture map is being used this property gets and sets if
    /// a cap is use for the cylindrical projection. This property is only valid in the case
    /// when the projectedTextureMapType returns CylindricalTextureMapProjection. The value of
    /// this property should be ignored in all other cases and setting the property will have no effect.
    bool isCapped() const;
    bool isCapped(bool value);

    /// Gets and sets the transform that defines the position and orientation of how the texture
    /// is projected onto the body. The Z axis of the transform corresponds to the axis that is
    /// specified in the user-interface and is the primary direction of the texture.
    Ptr<Matrix3D> transform() const;
    bool transform(const Ptr<Matrix3D>& value);

    ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API static const char* classType();
    ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API const char* objectType() const override;
    ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual ProjectedTextureMapTypes projectedTextureMapType_raw() const = 0;
    virtual bool projectedTextureMapType_raw(ProjectedTextureMapTypes value) = 0;
    virtual bool isCapped_raw() const = 0;
    virtual bool isCapped_raw(bool value) = 0;
    virtual Matrix3D* transform_raw() const = 0;
    virtual bool transform_raw(Matrix3D* value) = 0;
};

// Inline wrappers

inline ProjectedTextureMapTypes ProjectedTextureMapControl::projectedTextureMapType() const
{
    ProjectedTextureMapTypes res = projectedTextureMapType_raw();
    return res;
}

inline bool ProjectedTextureMapControl::projectedTextureMapType(ProjectedTextureMapTypes value)
{
    return projectedTextureMapType_raw(value);
}

inline bool ProjectedTextureMapControl::isCapped() const
{
    bool res = isCapped_raw();
    return res;
}

inline bool ProjectedTextureMapControl::isCapped(bool value)
{
    return isCapped_raw(value);
}

inline Ptr<Matrix3D> ProjectedTextureMapControl::transform() const
{
    Ptr<Matrix3D> res = transform_raw();
    return res;
}

inline bool ProjectedTextureMapControl::transform(const Ptr<Matrix3D>& value)
{
    return transform_raw(value.get());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PROJECTEDTEXTUREMAPCONTROL_API