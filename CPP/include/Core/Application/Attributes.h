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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_ATTRIBUTES_CPP__
# define ADSK_CORE_ATTRIBUTES_API XI_EXPORT
# else
# define ADSK_CORE_ATTRIBUTES_API
# endif
#else
# define ADSK_CORE_ATTRIBUTES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attribute;
}}

namespace adsk { namespace core {

/// Provides access to attributes associated with a specific entity,
/// Product, or Document. Also supports the creation of new attributes.
class Attributes : public Base {
public:

    /// Returns the number of attributes in the collection.
    size_t count() const;

    /// Returns the specified attribute using an index into the collection.
    /// index : The index of the attribute within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified attribute or null if an invalid index was specified.
    Ptr<Attribute> item(size_t index) const;

    /// Returns the specified attribute using the name of the attribute.
    /// groupName : The name of the attribute group this attribute will belong to.
    /// name : The name of the attribute.
    /// Returns the specified attribute or null if no attribute exists with the specified name.
    Ptr<Attribute> itemByName(const std::string& groupName, const std::string& name);

    /// Adds a new attribute to the parent entity. If an attribute already exists on the entity with the
    /// same groupName and name already exists, this will update the existing attribute with the new value.
    /// groupName : The name of the attribute group to create this attribute within.
    /// name : The name of the attribute. This must be unique with respect to other attributes in the group.
    /// value : The value of the attribute. The size of an attribute value is limited to 2MB (2097152 bytes). If
    /// you need to save data that is larger than 2MB you'll need to break it into pieces and save it in
    /// multiple attributes.
    /// Returns the newly created attribute or null if the creation failed. If an attribute with the
    /// same groupName and name already exists, it will return the existing attribute.
    Ptr<Attribute> add(const std::string& groupName, const std::string& name, const std::string& value);

    /// Returns an array of all of the attributes that belong to the specified group.
    /// groupName : The name of the group.
    /// Returns an array of attributes or will fail in the case where an invalid group name is specified.
    std::vector<Ptr<Attribute>> itemsByGroup(const std::string& groupName);

    /// Returns an array of strings that are all of the name of attribute groups that exist on this entity.
    /// An empty array can be returns if there are no attributes on the entity.
    std::vector<std::string> groupNames() const;

    typedef Attribute iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_ATTRIBUTES_API static const char* classType();
    ADSK_CORE_ATTRIBUTES_API const char* objectType() const override;
    ADSK_CORE_ATTRIBUTES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ATTRIBUTES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual Attribute* item_raw(size_t index) const = 0;
    virtual Attribute* itemByName_raw(const char* groupName, const char* name) = 0;
    virtual Attribute* add_raw(const char* groupName, const char* name, const char* value) = 0;
    virtual Attribute** itemsByGroup_raw(const char* groupName, size_t& return_size) = 0;
    virtual char** groupNames_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline size_t Attributes::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Attribute> Attributes::item(size_t index) const
{
    Ptr<Attribute> res = item_raw(index);
    return res;
}

inline Ptr<Attribute> Attributes::itemByName(const std::string& groupName, const std::string& name)
{
    Ptr<Attribute> res = itemByName_raw(groupName.c_str(), name.c_str());
    return res;
}

inline Ptr<Attribute> Attributes::add(const std::string& groupName, const std::string& name, const std::string& value)
{
    Ptr<Attribute> res = add_raw(groupName.c_str(), name.c_str(), value.c_str());
    return res;
}

inline std::vector<Ptr<Attribute>> Attributes::itemsByGroup(const std::string& groupName)
{
    std::vector<Ptr<Attribute>> res;
    size_t s;

    Attribute** p= itemsByGroup_raw(groupName.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline std::vector<std::string> Attributes::groupNames() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= groupNames_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void Attributes::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ATTRIBUTES_API