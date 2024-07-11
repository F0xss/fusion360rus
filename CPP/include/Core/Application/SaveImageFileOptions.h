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
# ifdef __COMPILING_ADSK_CORE_SAVEIMAGEFILEOPTIONS_CPP__
# define ADSK_CORE_SAVEIMAGEFILEOPTIONS_API XI_EXPORT
# else
# define ADSK_CORE_SAVEIMAGEFILEOPTIONS_API
# endif
#else
# define ADSK_CORE_SAVEIMAGEFILEOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Class that defines the various options that can be used when saving a viewport as an image. This
/// object is created by using the static create method on the class and is then used as input to the
/// Viewport.saveAsImageFileWithOptions method.
class SaveImageFileOptions : public Base {
public:

    /// Creates a new SaveImageFileOptions object. The returned object can be used to define
    /// the various options to use when saving a viewport as an image. The object is passed
    /// into the ViewPort.saveAsImageFileWithOptions method to create an image of the viewport.
    /// filename : The full filename, including the path, of the image file.
    /// The type of image file to be created is inferred from the extension of the filename.
    /// Returns a SaveImageFileOptions object.
    static Ptr<SaveImageFileOptions> create(const std::string& filename);

    /// Gets and sets the full filename, including the path, of the image file.
    /// The type of image file to be created is inferred from the extension of the filename.
    std::string filename() const;
    bool filename(const std::string& value);

    /// Gets and set the height of the image to be created in pixels. A value of zero
    /// is valid and indicates the current height of the viewport is to be used. When
    /// the SaveImageFileOptions object is initially created, this is initialized to 0.
    int height() const;
    bool height(int value);

    /// Gets and set the width of the image to be created in pixels. A value of zero
    /// is valid and indicates the current width of the viewport is to be used. When
    /// the SaveImageFileOptions object is initially created, this is initialized to 0.
    int width() const;
    bool width(int value);

    /// Gets and sets if the background should be rendered as transparent. If false, the background will be the same as seen in Fusion.
    /// 
    /// When the SaveImageFileOptions object is initially created, this is initialized to false.
    bool isBackgroundTransparent() const;
    bool isBackgroundTransparent(bool value);

    /// Gets and sets if the rendered image should be antialiased or not. If false, there is no antialiasing.
    /// 
    /// When the SaveImageFileOptions object is initially created, this is initialized to true.
    bool isAntiAliased() const;
    bool isAntiAliased(bool value);

    ADSK_CORE_SAVEIMAGEFILEOPTIONS_API static const char* classType();
    ADSK_CORE_SAVEIMAGEFILEOPTIONS_API const char* objectType() const override;
    ADSK_CORE_SAVEIMAGEFILEOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SAVEIMAGEFILEOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_SAVEIMAGEFILEOPTIONS_API static SaveImageFileOptions* create_raw(const char* filename);
    virtual char* filename_raw() const = 0;
    virtual bool filename_raw(const char* value) = 0;
    virtual int height_raw() const = 0;
    virtual bool height_raw(int value) = 0;
    virtual int width_raw() const = 0;
    virtual bool width_raw(int value) = 0;
    virtual bool isBackgroundTransparent_raw() const = 0;
    virtual bool isBackgroundTransparent_raw(bool value) = 0;
    virtual bool isAntiAliased_raw() const = 0;
    virtual bool isAntiAliased_raw(bool value) = 0;
};

// Inline wrappers

inline Ptr<SaveImageFileOptions> SaveImageFileOptions::create(const std::string& filename)
{
    Ptr<SaveImageFileOptions> res = create_raw(filename.c_str());
    return res;
}

inline std::string SaveImageFileOptions::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool SaveImageFileOptions::filename(const std::string& value)
{
    return filename_raw(value.c_str());
}

inline int SaveImageFileOptions::height() const
{
    int res = height_raw();
    return res;
}

inline bool SaveImageFileOptions::height(int value)
{
    return height_raw(value);
}

inline int SaveImageFileOptions::width() const
{
    int res = width_raw();
    return res;
}

inline bool SaveImageFileOptions::width(int value)
{
    return width_raw(value);
}

inline bool SaveImageFileOptions::isBackgroundTransparent() const
{
    bool res = isBackgroundTransparent_raw();
    return res;
}

inline bool SaveImageFileOptions::isBackgroundTransparent(bool value)
{
    return isBackgroundTransparent_raw(value);
}

inline bool SaveImageFileOptions::isAntiAliased() const
{
    bool res = isAntiAliased_raw();
    return res;
}

inline bool SaveImageFileOptions::isAntiAliased(bool value)
{
    return isAntiAliased_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SAVEIMAGEFILEOPTIONS_API