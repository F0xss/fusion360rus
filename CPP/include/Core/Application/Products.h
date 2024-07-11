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
# ifdef __COMPILING_ADSK_CORE_PRODUCTS_CPP__
# define ADSK_CORE_PRODUCTS_API XI_EXPORT
# else
# define ADSK_CORE_PRODUCTS_API
# endif
#else
# define ADSK_CORE_PRODUCTS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Product;
}}

namespace adsk { namespace core {

/// The Products object provides access to all of the products that exist in the document.
class Products : public Base {
public:

    /// Function that returns the specified product using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Product> item(size_t index) const;

    /// Returns the specified product, if it exists within this document.
    /// productType : The product type string. For example, to get the product that represents the design data
    /// you use "DesignProductType" or to get the product that represent the CAM data you use "CAMProductType".
    /// 
    /// A complete list of available products can be obtained by using the Application.supportedProductTypes property.
    /// Returns the specified item or null if the specified productType does not exist within this document.
    Ptr<Product> itemByProductType(const std::string& productType) const;

    /// Returns the number of products within the collection.
    size_t count() const;

    typedef Product iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_PRODUCTS_API static const char* classType();
    ADSK_CORE_PRODUCTS_API const char* objectType() const override;
    ADSK_CORE_PRODUCTS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_PRODUCTS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Product* item_raw(size_t index) const = 0;
    virtual Product* itemByProductType_raw(const char* productType) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<Product> Products::item(size_t index) const
{
    Ptr<Product> res = item_raw(index);
    return res;
}

inline Ptr<Product> Products::itemByProductType(const std::string& productType) const
{
    Ptr<Product> res = itemByProductType_raw(productType.c_str());
    return res;
}

inline size_t Products::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Products::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_PRODUCTS_API