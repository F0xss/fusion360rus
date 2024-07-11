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
# ifdef __COMPILING_ADSK_CORE_APPEARANCE_CPP__
# define ADSK_CORE_APPEARANCE_API XI_EXPORT
# else
# define ADSK_CORE_APPEARANCE_API
# endif
#else
# define ADSK_CORE_APPEARANCE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Properties;
}}

namespace adsk { namespace core {

/// An appearance.
class Appearance : public Base {
public:

    /// The unique internal ID of this Appearance.
    std::string id() const;

    /// Returns true if this Appearance is used in the Design.
    bool isUsed() const;

    /// Returns a collection of the entities currently using this appearance. This
    /// property is only valid for an appearance in a Design and where the IsUsed
    /// property returns true. The collection returned can contain
    Ptr<ObjectCollection> usedBy() const;

    /// Returns the name of this Appearance. This is the localized name
    /// shown in the UI.
    std::string name() const;
    bool name(const std::string& value);

    /// Property that returns the Parent object of this Appearance (a MaterialLibrary, Design, or AppearanceFavorites collection).
    Ptr<Base> parent() const;

    /// Property that indicates if this appearance has a texture associated with it.
    bool hasTexture() const;

    /// returns the collection of Properties that define this appearance
    Ptr<Properties> appearanceProperties() const;

    /// Deletes the Appearance from the Design. This method is only valid for appearances
    /// that are in a Design and are unused.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// Copies this appearance to the specified target.
    /// ***Depricated Method: Use the addByCopyMethod on the Appearances object instead, where you can rename the copied Appearance
    /// and the return type is Appearance rather than bool.***
    /// target : The target can be a Design or MaterialFavorites object.
    /// Returns true if the copy was successful.
    bool copyTo(const Ptr<Base>& target);

    ADSK_CORE_APPEARANCE_API static const char* classType();
    ADSK_CORE_APPEARANCE_API const char* objectType() const override;
    ADSK_CORE_APPEARANCE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_APPEARANCE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* id_raw() const = 0;
    virtual bool isUsed_raw() const = 0;
    virtual ObjectCollection* usedBy_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual Base* parent_raw() const = 0;
    virtual bool hasTexture_raw() const = 0;
    virtual Properties* appearanceProperties_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual bool copyTo_raw(Base* target) = 0;
    virtual bool name__raw(const char* value) = 0;
};

// Inline wrappers

inline std::string Appearance::id() const
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

inline bool Appearance::isUsed() const
{
    bool res = isUsed_raw();
    return res;
}

inline Ptr<ObjectCollection> Appearance::usedBy() const
{
    Ptr<ObjectCollection> res = usedBy_raw();
    return res;
}

inline std::string Appearance::name() const
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

inline bool Appearance::name(const std::string& value)
{
    return name__raw(value.c_str());
}

inline Ptr<Base> Appearance::parent() const
{
    Ptr<Base> res = parent_raw();
    return res;
}

inline bool Appearance::hasTexture() const
{
    bool res = hasTexture_raw();
    return res;
}

inline Ptr<Properties> Appearance::appearanceProperties() const
{
    Ptr<Properties> res = appearanceProperties_raw();
    return res;
}

inline bool Appearance::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline bool Appearance::copyTo(const Ptr<Base>& target)
{
    bool res = copyTo_raw(target.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_APPEARANCE_API