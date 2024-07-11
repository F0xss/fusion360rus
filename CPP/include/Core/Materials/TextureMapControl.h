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
# ifdef __COMPILING_ADSK_CORE_TEXTUREMAPCONTROL_CPP__
# define ADSK_CORE_TEXTUREMAPCONTROL_API XI_EXPORT
# else
# define ADSK_CORE_TEXTUREMAPCONTROL_API
# endif
#else
# define ADSK_CORE_TEXTUREMAPCONTROL_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Provides access to the various settings that control how a texture is applied to a body or mesh.
/// This is the base class for the various texture mapping techniques.
class TextureMapControl : public Base {
public:

    /// Resets the texture map back to its original default settings.
    /// Returns true if the reset was successful.
    bool reset();

    ADSK_CORE_TEXTUREMAPCONTROL_API static const char* classType();
    ADSK_CORE_TEXTUREMAPCONTROL_API const char* objectType() const override;
    ADSK_CORE_TEXTUREMAPCONTROL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_TEXTUREMAPCONTROL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool reset_raw() = 0;
    virtual void placeholderTextureMapControl0() {}
    virtual void placeholderTextureMapControl1() {}
    virtual void placeholderTextureMapControl2() {}
    virtual void placeholderTextureMapControl3() {}
    virtual void placeholderTextureMapControl4() {}
    virtual void placeholderTextureMapControl5() {}
    virtual void placeholderTextureMapControl6() {}
    virtual void placeholderTextureMapControl7() {}
    virtual void placeholderTextureMapControl8() {}
    virtual void placeholderTextureMapControl9() {}
    virtual void placeholderTextureMapControl10() {}
    virtual void placeholderTextureMapControl11() {}
    virtual void placeholderTextureMapControl12() {}
    virtual void placeholderTextureMapControl13() {}
    virtual void placeholderTextureMapControl14() {}
};

// Inline wrappers

inline bool TextureMapControl::reset()
{
    bool res = reset_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_TEXTUREMAPCONTROL_API