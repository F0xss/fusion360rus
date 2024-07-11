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
# ifdef __COMPILING_ADSK_CORE_SELECTIONSETS_CPP__
# define ADSK_CORE_SELECTIONSETS_API XI_EXPORT
# else
# define ADSK_CORE_SELECTIONSETS_API
# endif
#else
# define ADSK_CORE_SELECTIONSETS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class SelectionSet;
}}

namespace adsk { namespace core {

/// The SelectionSets object is used to create and access existing selection sets.
/// 
/// In the user interface, selection sets are created by selecting geometry and then
/// running the "Create Selection Set" command from the context menu. All existing
/// selection sets are shown in a "Selection Sets" folder in the browser.
class SelectionSets : public Base {
public:

    /// Returns the number of SelectionSet objects in the collection.
    size_t count() const;

    /// Returns the specified SelectionSet object using an index into the collection.
    /// index : The index of the SelectionSet within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified SelectionSet or null if an invalid index was specified.
    Ptr<SelectionSet> item(size_t index);

    /// Returns the specified SelectionSet object using the name of the selection set.
    /// name : The name of the SelectionSet object to return.
    /// Returns the specified SelectionSet object or null if no SelectionSet object exists with the specified name.
    Ptr<SelectionSet> itemByName(const std::string& name);

    /// Adds a new SelectionSet to the parent product.
    /// entities : An array of entities that will be in the created selection set. All entities must be in the
    /// context of the root component. This means if the entity isn't directly owned by the root
    /// component, it must be a proxy.
    /// name : The name of the selection set. This is an optional argument is if not specified, or an empty string is
    /// provided, Fusion will create a name for the selection set. If provided, the name should be unique with
    /// respect to other selection sets in the product. If a name is provided that is the same as an existing
    /// selection set, Fusion will append a counter to the name to make the name unique.
    /// Returns the created selection set or null in the case the selection set couldn't be created. This method
    /// can fail in the case where no entities are provided or if any of the provided entities are not selectable.
    Ptr<SelectionSet> add(const std::vector<Ptr<Base>>& entities, const std::string& name = "");

    typedef SelectionSet iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_SELECTIONSETS_API static const char* classType();
    ADSK_CORE_SELECTIONSETS_API const char* objectType() const override;
    ADSK_CORE_SELECTIONSETS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTIONSETS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual SelectionSet* item_raw(size_t index) = 0;
    virtual SelectionSet* itemByName_raw(const char* name) = 0;
    virtual SelectionSet* add_raw(Base** entities, size_t entities_size, const char* name) = 0;
};

// Inline wrappers

inline size_t SelectionSets::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<SelectionSet> SelectionSets::item(size_t index)
{
    Ptr<SelectionSet> res = item_raw(index);
    return res;
}

inline Ptr<SelectionSet> SelectionSets::itemByName(const std::string& name)
{
    Ptr<SelectionSet> res = itemByName_raw(name.c_str());
    return res;
}

inline Ptr<SelectionSet> SelectionSets::add(const std::vector<Ptr<Base>>& entities, const std::string& name)
{
    Base** entities_ = new Base*[entities.size()];
    for(size_t i=0; i<entities.size(); ++i)
        entities_[i] = entities[i].get();

    Ptr<SelectionSet> res = add_raw(entities_, entities.size(), name.c_str());
    delete[] entities_;
    return res;
}

template <class OutputIterator> inline void SelectionSets::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTIONSETS_API