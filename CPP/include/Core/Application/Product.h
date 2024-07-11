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
# ifdef __COMPILING_ADSK_CORE_PRODUCT_CPP__
# define ADSK_CORE_PRODUCT_API XI_EXPORT
# else
# define ADSK_CORE_PRODUCT_API
# endif
#else
# define ADSK_CORE_PRODUCT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Attribute;
    class Attributes;
    class Document;
    class ObjectCollection;
    class SelectionSets;
    class UnitsManager;
    class WorkspaceList;
}}

namespace adsk { namespace core {

/// The base class for the various product specific containers. For
/// Fusion 360 this is the Design object. For manufacturing this is a CAM object.
class Product : public Base {
public:

    /// Returns the parent Document object.
    Ptr<Document> parentDocument() const;

    /// Returns the UnitsManager object associated with this product.
    Ptr<UnitsManager> unitsManager() const;

    /// Returns the workspaces associated with this product.
    Ptr<WorkspaceList> workspaces() const;

    /// Returns the product type name of this product. A list of all of
    /// the possible product types can be obtained by using the
    /// Application.supportedProductTypes property.
    std::string productType() const;

    /// Find attributes attached to objects in this product that match the group and or attribute name.
    /// This does not find attributes attached directly to the Product or Document objects but finds the
    /// attributes attached to entities within the product.
    /// 
    /// The search string for both the groupName and attributeName arguments can be either an absolute
    /// name value, or a regular expression. With an absolute name, the search string must match the
    /// entire groupName or attributeName, including case. An empty string will match everything.
    /// For example if you have an attribute group named "MyStuff" that contains the attribute "Length1",
    /// using the search string "MyStuff" as the group name and "Length1" as the attribute name will
    /// find the attributes with those names. Searching for "MyStuff" as the group name and "" as the
    /// attribute name will find all attributes that have "MyStuff" as the group name.
    /// 
    /// Regular expressions provide a more flexible way of searching. To use a regular expression,
    /// prefix the input string for the groupName or attributeName arguments with "re:". The regular
    /// expression much match the entire group or attribute name. For example if you have a group that
    /// contains attributes named "Length1", "Length2", "Width1", and "Width2" and want to find any
    /// of the length attributes you can use a regular expression using the string "re:Length.*". For more
    /// information on attributes see the Attributes topic in the user manual.
    /// groupName : The search string for the group name. See above for more details.
    /// attributeName : The search string for the attribute name. See above for more details.
    /// An array of Attribute objects that were found. An empty array is returned if no attributes were found.
    std::vector<Ptr<Attribute>> findAttributes(const std::string& groupName, const std::string& attributeName) const;

    /// Returns the collection of attributes associated with this product.
    Ptr<Attributes> attributes() const;

    /// Deletes the specified set of entities that are associated with this product.
    /// entities : An ObjectCollection containing the list of entities to delete.
    /// Returns True if any of the entities provided in the list were deleted. If
    /// entities were specified that can't be deleted or aren't owned by this product,
    /// they are ignored.
    bool deleteEntities(const Ptr<ObjectCollection>& entities);

    /// Returns the SelectionSets object associated with this product. If the product does
    /// not support selection sets, null is returned. The SelectionSets object is used to
    /// create and access existing selection sets.
    Ptr<SelectionSets> selectionSets() const;

    ADSK_CORE_PRODUCT_API static const char* classType();
    ADSK_CORE_PRODUCT_API const char* objectType() const override;
    ADSK_CORE_PRODUCT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PRODUCT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Document* parentDocument_raw() const = 0;
    virtual UnitsManager* unitsManager_raw() const = 0;
    virtual WorkspaceList* workspaces_raw() const = 0;
    virtual char* productType_raw() const = 0;
    virtual Attribute** findAttributes_raw(const char* groupName, const char* attributeName, size_t& return_size) const = 0;
    virtual Attributes* attributes_raw() const = 0;
    virtual bool deleteEntities_raw(ObjectCollection* entities) = 0;
    virtual SelectionSets* selectionSets_raw() const = 0;
    virtual void placeholderProduct0() {}
    virtual void placeholderProduct1() {}
    virtual void placeholderProduct2() {}
    virtual void placeholderProduct3() {}
    virtual void placeholderProduct4() {}
    virtual void placeholderProduct5() {}
    virtual void placeholderProduct6() {}
    virtual void placeholderProduct7() {}
    virtual void placeholderProduct8() {}
    virtual void placeholderProduct9() {}
    virtual void placeholderProduct10() {}
    virtual void placeholderProduct11() {}
    virtual void placeholderProduct12() {}
    virtual void placeholderProduct13() {}
    virtual void placeholderProduct14() {}
    virtual void placeholderProduct15() {}
    virtual void placeholderProduct16() {}
    virtual void placeholderProduct17() {}
    virtual void placeholderProduct18() {}
    virtual void placeholderProduct19() {}
    virtual void placeholderProduct20() {}
    virtual void placeholderProduct21() {}
    virtual void placeholderProduct22() {}
    virtual void placeholderProduct23() {}
};

// Inline wrappers

inline Ptr<Document> Product::parentDocument() const
{
    Ptr<Document> res = parentDocument_raw();
    return res;
}

inline Ptr<UnitsManager> Product::unitsManager() const
{
    Ptr<UnitsManager> res = unitsManager_raw();
    return res;
}

inline Ptr<WorkspaceList> Product::workspaces() const
{
    Ptr<WorkspaceList> res = workspaces_raw();
    return res;
}

inline std::string Product::productType() const
{
    std::string res;

    char* p= productType_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::vector<Ptr<Attribute>> Product::findAttributes(const std::string& groupName, const std::string& attributeName) const
{
    std::vector<Ptr<Attribute>> res;
    size_t s;

    Attribute** p= findAttributes_raw(groupName.c_str(), attributeName.c_str(), s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<Attributes> Product::attributes() const
{
    Ptr<Attributes> res = attributes_raw();
    return res;
}

inline bool Product::deleteEntities(const Ptr<ObjectCollection>& entities)
{
    bool res = deleteEntities_raw(entities.get());
    return res;
}

inline Ptr<SelectionSets> Product::selectionSets() const
{
    Ptr<SelectionSets> res = selectionSets_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PRODUCT_API