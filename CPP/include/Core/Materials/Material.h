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
# ifdef __COMPILING_ADSK_CORE_MATERIAL_CPP__
# define ADSK_CORE_MATERIAL_API XI_EXPORT
# else
# define ADSK_CORE_MATERIAL_API
# endif
#else
# define ADSK_CORE_MATERIAL_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Appearance;
    class Properties;
}}

namespace adsk { namespace core {

/// A material.
class Material : public Base {
public:

    /// Gets the Appearance of this material.
    Ptr<Appearance> appearance() const;

    /// Returns the unique internal ID of this material.
    std::string id() const;

    /// Returns true if this material is used in the Design
    bool isUsed() const;

    /// Returns the collection of material properties associated with this material.
    Ptr<Properties> materialProperties() const;

    /// Returns the name of this Material. This is the name of the material as seen in the user interface.
    /// The name can only be edited if the material is in a Design or the favorites list.
    std::string name() const;
    bool name(const std::string& value);

    /// Returns the Parent object (a Library or a Design).
    Ptr<Base> parent() const;

    /// Deletes the material from the Design. This method only applies to materials
    /// in a Design that are unused
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Copies this material to the specified target.
    /// ***Depricated Method: Use the addByCopyMethod on the Materials object instead, where you can rename the copied Material***
    /// target : The target can be a Design or MaterialFavorites object.
    /// Returns the new copy of the material or null if the copy failed.
    Ptr<Material> copyTo(const Ptr<Base>& target);

    ADSK_CORE_MATERIAL_API static const char* classType();
    ADSK_CORE_MATERIAL_API const char* objectType() const override;
    ADSK_CORE_MATERIAL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_MATERIAL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Appearance* appearance_raw() const = 0;
    virtual char* id_raw() const = 0;
    virtual bool isUsed_raw() const = 0;
    virtual Properties* materialProperties_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual Base* parent_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual Material* copyTo_raw(Base* target) = 0;
};

// Inline wrappers

inline Ptr<Appearance> Material::appearance() const
{
    Ptr<Appearance> res = appearance_raw();
    return res;
}

inline std::string Material::id() const
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

inline bool Material::isUsed() const
{
    bool res = isUsed_raw();
    return res;
}

inline Ptr<Properties> Material::materialProperties() const
{
    Ptr<Properties> res = materialProperties_raw();
    return res;
}

inline std::string Material::name() const
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

inline bool Material::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline Ptr<Base> Material::parent() const
{
    Ptr<Base> res = parent_raw();
    return res;
}

inline bool Material::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline Ptr<Material> Material::copyTo(const Ptr<Base>& target)
{
    Ptr<Material> res = copyTo_raw(target.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_MATERIAL_API