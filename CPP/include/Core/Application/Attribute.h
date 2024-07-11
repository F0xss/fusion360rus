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
# ifdef __COMPILING_ADSK_CORE_ATTRIBUTE_CPP__
# define ADSK_CORE_ATTRIBUTE_API XI_EXPORT
# else
# define ADSK_CORE_ATTRIBUTE_API
# endif
#else
# define ADSK_CORE_ATTRIBUTE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}

namespace adsk { namespace core {

/// Represents an attribute associated with a specific entity, Product, or Document.
/// An attribute is a named value.
class Attribute : public Base {
public:

    /// Gets the name of the group this attribute is a part of.
    std::string groupName() const;

    /// Gets the name of the attribute.
    std::string name() const;

    /// Gets and sets the value of this attribute.
    /// 
    /// The size of an attribute value is limited to 2MB (2097152 bytes). If you need to
    /// save data that is larger than 2MB you'll need to break the data into pieces and
    /// save it in multiple attributes.
    std::string value() const;
    bool value(const std::string& value);

    /// Returns the parent entity this attribute is associated with. This can return null
    /// in some cases. For example a BRepEdge might have been consumed by a fillet
    /// feature but can come back if the model is rolled back or the fillet is deleted.
    /// 
    /// It's possible that the original parent that an attribute was placed on has been
    /// split. For example, if an attribute is placed on a face and then a slot is created
    /// that cuts the face into two pieces and the attribute is available from each face.
    /// In this case the parent property will return the "primary" face, which in most cases
    /// is somewhat arbitrary. You can get the other entities the attribute is associated
    /// with by using the otherParents property.
    Ptr<Base> parent() const;

    /// Deletes this attribute.
    /// Returns true if the delete was successful.
    bool deleteMe();

    /// In the case where the entity the attribute was originally placed on has been split,
    /// this property will return the other entities the attribute is associated with.
    /// For example, if an attribute is placed on a face and then a slot is created
    /// that cuts the face into two pieces and the attribute is available from both faces.
    /// The parent property returns the "primary" entity and this property returns any other
    /// entities, if any. If there aren't any other associated entities the ObjectCollection
    /// returned will be empty.
    Ptr<ObjectCollection> otherParents() const;

    ADSK_CORE_ATTRIBUTE_API static const char* classType();
    ADSK_CORE_ATTRIBUTE_API const char* objectType() const override;
    ADSK_CORE_ATTRIBUTE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ATTRIBUTE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* groupName_raw() const = 0;
    virtual char* name_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
    virtual Base* parent_raw() const = 0;
    virtual bool deleteMe_raw() = 0;
    virtual ObjectCollection* otherParents_raw() const = 0;
};

// Inline wrappers

inline std::string Attribute::groupName() const
{
    std::string res;

    char* p= groupName_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string Attribute::name() const
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

inline std::string Attribute::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool Attribute::value(const std::string& value)
{
    return value_raw(value.c_str());
}

inline Ptr<Base> Attribute::parent() const
{
    Ptr<Base> res = parent_raw();
    return res;
}

inline bool Attribute::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}

inline Ptr<ObjectCollection> Attribute::otherParents() const
{
    Ptr<ObjectCollection> res = otherParents_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ATTRIBUTE_API