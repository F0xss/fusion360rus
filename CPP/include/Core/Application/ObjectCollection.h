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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_OBJECTCOLLECTION_CPP__
# define ADSK_CORE_OBJECTCOLLECTION_API XI_EXPORT
# else
# define ADSK_CORE_OBJECTCOLLECTION_API
# endif
#else
# define ADSK_CORE_OBJECTCOLLECTION_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// Generic collection used to handle lists of any object type.
class ObjectCollection : public Base {
public:

    /// Function that returns the specified object using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Base> item(size_t index) const;

    /// Returns the number of occurrences in the collection.
    size_t count() const;

    /// Adds an object to the end of the collection.
    /// Duplicates can be added to the collection.
    /// item : The item to add to the list.
    /// Returns false if the item was not added.
    bool add(const Ptr<Base>& item);

    /// Function that removes an item from the collection.
    /// item : The object to remove from the collection.
    /// Returns true if the removal was successful.
    bool removeByItem(const Ptr<Base>& item);

    /// Function that removes an item from the list.
    /// Will fail if the list is read only.
    /// index : The index of the item to remove from the collection. The first item has an index of 0.
    /// Returns true if the removal was successful.
    bool removeByIndex(size_t index);

    /// Finds the specified component in the collection.
    /// item : The item to search for within the collection.
    /// startIndex : The index to begin the search.
    /// Returns the index of the found item. If not found, -1 is returned.
    int find(const Ptr<Base>& item, size_t startIndex = 0) const;

    /// Returns whether the specified object exists within the collection.
    /// item : The item to look for in the collection.
    /// Returns true if the specified item is found in the collection.
    bool contains(const Ptr<Base>& item) const;

    /// Clears the entire contents of the collection.
    /// Returns true if successful.
    bool clear();

    /// Creates a new ObjectCollection object.
    /// Returns the newly created ObjectCollection.
    static Ptr<ObjectCollection> create();

    /// Creates a new ObjectCollection that is initialized with the content
    /// of the provided array.
    /// 
    /// For this method to succeed, getting the input type correct is critical. The
    /// term "array" is used generically in the API documentation and describes different
    /// things depending on the language being used.
    /// 
    /// When using C++, std::vector is used to input and output a list of items. However,
    /// this particular method requires that the content of the vector be of type core.base. If you have
    /// a vector of other types, you can convert it using the code below.
    /// 
    /// vector<Ptr<Point3D>> points = ...
    /// vector<Ptr<Base>> objects{points.begin(), points.end()};
    /// 
    /// When using Python, a Python List is used as input, but when an array is returned from a method
    /// or property, an API-specific vector class is returned. Typically, you don't notice this is
    /// a list because it supports python iteration as a List does. This method requires a
    /// standard Python list as input, so if you've got an "array" as output from an API method
    /// or property, you'll need to convert it to a standard list before using it here. Assuming the
    /// variable "vec" is the output from a method or property the conversion can be done
    /// with the code below:
    /// 
    /// newList = list(vec)
    /// array : An array of Fusion objects that are used to populate the ObjectCollection.
    /// Returns the newly created ObjectCollection or null in the case of failure.
    static Ptr<ObjectCollection> createWithArray(const std::vector<Ptr<Base>>& array);

    /// Gets the content of the ObjectCollection as an array.
    /// Returns an array of the Fusion objects in the ObjectCollection.
    std::vector<Ptr<Base>> asArray() const;

    typedef Base iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);
    template <class Container> static Ptr<ObjectCollection> create(Container container);
    template <class InputIterator> static Ptr<ObjectCollection> create(InputIterator first, InputIterator last);

    ADSK_CORE_OBJECTCOLLECTION_API static const char* classType();
    ADSK_CORE_OBJECTCOLLECTION_API const char* objectType() const override;
    ADSK_CORE_OBJECTCOLLECTION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_OBJECTCOLLECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Base* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual bool add_raw(Base* item) = 0;
    virtual bool removeByItem_raw(Base* item) = 0;
    virtual bool removeByIndex_raw(size_t index) = 0;
    virtual int find_raw(Base* item, size_t startIndex) const = 0;
    virtual bool contains_raw(Base* item) const = 0;
    virtual bool clear_raw() = 0;
    ADSK_CORE_OBJECTCOLLECTION_API static ObjectCollection* create_raw();
    ADSK_CORE_OBJECTCOLLECTION_API static ObjectCollection* createWithArray_raw(Base** array, size_t array_size);
    virtual Base** asArray_raw(size_t& return_size) const = 0;
};

// Inline wrappers

inline Ptr<Base> ObjectCollection::item(size_t index) const
{
    Ptr<Base> res = item_raw(index);
    return res;
}

inline size_t ObjectCollection::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool ObjectCollection::add(const Ptr<Base>& item)
{
    bool res = add_raw(item.get());
    return res;
}

inline bool ObjectCollection::removeByItem(const Ptr<Base>& item)
{
    bool res = removeByItem_raw(item.get());
    return res;
}

inline bool ObjectCollection::removeByIndex(size_t index)
{
    bool res = removeByIndex_raw(index);
    return res;
}

inline int ObjectCollection::find(const Ptr<Base>& item, size_t startIndex) const
{
    int res = find_raw(item.get(), startIndex);
    return res;
}

inline bool ObjectCollection::contains(const Ptr<Base>& item) const
{
    bool res = contains_raw(item.get());
    return res;
}

inline bool ObjectCollection::clear()
{
    bool res = clear_raw();
    return res;
}

inline Ptr<ObjectCollection> ObjectCollection::create()
{
    Ptr<ObjectCollection> res = create_raw();
    return res;
}

inline Ptr<ObjectCollection> ObjectCollection::createWithArray(const std::vector<Ptr<Base>>& array)
{
    Base** array_ = new Base*[array.size()];
    for(size_t i=0; i<array.size(); ++i)
        array_[i] = array[i].get();

    Ptr<ObjectCollection> res = createWithArray_raw(array_, array.size());
    delete[] array_;
    return res;
}

inline std::vector<Ptr<Base>> ObjectCollection::asArray() const
{
    std::vector<Ptr<Base>> res;
    size_t s;

    Base** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void ObjectCollection::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}

template <class Container> inline Ptr<ObjectCollection> ObjectCollection::create(Container container)
{
   return create(container.begin(), container.end());
}

template <class InputIterator> inline Ptr<ObjectCollection> ObjectCollection::create(InputIterator first, InputIterator last)
{
    Ptr<ObjectCollection> list = create();
    if (list)
        for (;first != last;++first)
            list->add(*first);
    return list;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_OBJECTCOLLECTION_API