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
# ifdef __COMPILING_ADSK_CORE_MATERIALLIBRARY_CPP__
# define ADSK_CORE_MATERIALLIBRARY_API XI_EXPORT
# else
# define ADSK_CORE_MATERIALLIBRARY_API
# endif
#else
# define ADSK_CORE_MATERIALLIBRARY_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearances;
    class Materials;
}}

namespace adsk { namespace core {

/// A material library.
class MaterialLibrary : public Base {
public:

    /// Property that gets the name of this Library. This is the localized name
    /// shown in the user interface.
    std::string name() const;

    /// The unique internal ID of this Library.
    std::string id() const;

    /// Returns the appearances defined within this library.
    Ptr<Appearances> appearances() const;

    /// Returns the materials defined within this library.
    Ptr<Materials> materials() const;

    /// Gets if this is a native material library. Native libraries are
    /// those that are delivered with Fusion 360 and are always available. And
    /// non-native libraries are user created. If This returns True then there
    /// are some limitations to what can be done with the library. For example,
    /// if this is a native material library it cannot be unloaded.
    bool isNative() const;

    /// Unloads this material from Fusion 360. Only non-native material libraries
    /// can be unloaded. You can determine this by checking the isNative property.
    /// Returns True if the library was successfully unloaded.
    bool unload();

    ADSK_CORE_MATERIALLIBRARY_API static const char* classType();
    ADSK_CORE_MATERIALLIBRARY_API const char* objectType() const override;
    ADSK_CORE_MATERIALLIBRARY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATERIALLIBRARY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual Appearances* appearances_raw() const = 0;
    virtual Materials* materials_raw() const = 0;
    virtual bool isNative_raw() const = 0;
    virtual bool unload_raw() = 0;
};

// Inline wrappers

inline std::string MaterialLibrary::name() const
{
    std::string res;

    char* p= name_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string MaterialLibrary::id() const
{
    std::string res;

    char* p= id_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<Appearances> MaterialLibrary::appearances() const
{
    Ptr<Appearances> res = appearances_raw();
    return res;
}

inline Ptr<Materials> MaterialLibrary::materials() const
{
    Ptr<Materials> res = materials_raw();
    return res;
}

inline bool MaterialLibrary::isNative() const
{
    bool res = isNative_raw();
    return res;
}

inline bool MaterialLibrary::unload()
{
    bool res = unload_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATERIALLIBRARY_API