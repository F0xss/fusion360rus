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
# ifdef __COMPILING_ADSK_CORE_APPEARANCETEXTURE_CPP__
# define ADSK_CORE_APPEARANCETEXTURE_API XI_EXPORT
# else
# define ADSK_CORE_APPEARANCETEXTURE_API
# endif
#else
# define ADSK_CORE_APPEARANCETEXTURE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Properties;
}}

namespace adsk { namespace core {

/// Provides access to a list of properties that define a texture.
class AppearanceTexture : public Base {
public:

    /// Changes the image of this texture.
    /// imageFilename : Input String specifying the full filename of the texture file to use.
    /// Returns true if the change was successful.
    bool changeTextureImage(const std::string& imageFilename);

    /// Returns a collection of the properties associated with this texture.
    Ptr<Properties> properties() const;

    /// Gets the type of texture this appearance currently is.
    TextureTypes textureType() const;

    ADSK_CORE_APPEARANCETEXTURE_API static const char* classType();
    ADSK_CORE_APPEARANCETEXTURE_API const char* objectType() const override;
    ADSK_CORE_APPEARANCETEXTURE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_APPEARANCETEXTURE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool changeTextureImage_raw(const char* imageFilename) = 0;
    virtual Properties* properties_raw() const = 0;
    virtual TextureTypes textureType_raw() const = 0;
};

// Inline wrappers

inline bool AppearanceTexture::changeTextureImage(const std::string& imageFilename)
{
    bool res = changeTextureImage_raw(imageFilename.c_str());
    return res;
}

inline Ptr<Properties> AppearanceTexture::properties() const
{
    Ptr<Properties> res = properties_raw();
    return res;
}

inline TextureTypes AppearanceTexture::textureType() const
{
    TextureTypes res = textureType_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_APPEARANCETEXTURE_API