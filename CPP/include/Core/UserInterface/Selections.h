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
# ifdef __COMPILING_ADSK_CORE_SELECTIONS_CPP__
# define ADSK_CORE_SELECTIONS_API XI_EXPORT
# else
# define ADSK_CORE_SELECTIONS_API
# endif
#else
# define ADSK_CORE_SELECTIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Selection;
}}

namespace adsk { namespace core {

/// Provides access to and control over the set of selected entities in the user interface.
class Selections : public Base {
public:

    /// Returns the specified selection using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Selection> item(size_t index) const;

    /// Gets the number of entities currently selected.
    size_t count() const;

    /// Gets or sets all entities currently selected.
    Ptr<ObjectCollection> all() const;
    bool all(const Ptr<ObjectCollection>& value);

    /// Adds the entity to the set of currently selected entities.
    /// The user will see the entity become selected in the user interface.
    /// entity : The entity to select and add to this selection set.
    /// Returns true if successful.
    bool add(const Ptr<Base>& entity);

    /// Clears the selection set so no entities are currently selected.
    /// Returns true if successful.
    bool clear();

    /// Removes the specified selection from the set of selected entities.
    /// selection : The selection to remove.
    /// Returns true if the item was removed or not currently selected.
    bool removeBySelection(const Ptr<Selection>& selection);

    /// Removes the selections that are associated with the specified entity from the set of selected entities.
    /// entity : The entity to remove selections of.
    /// Returns true if the item was removed or not currently selected.
    bool removeByEntity(const Ptr<Base>& entity);

    /// Removes an item from the set of selected entities.
    /// index : The index of the selection to remove.
    /// Returns true if the item was removed successfully.
    bool removeByIndex(int index);

    /// Returns an array containing all of the current selections. This is
    /// useful in cases where you need to iterate over the set of selected entities but need
    /// to create or edit data as you process each one. Selections are fragile and creation and
    /// edit operations will clear the selections so you won't have access to the complete list
    /// after processing the first one.
    /// Returns an array of all of the current selections. Selection objects are returned so
    /// you'll need to call their entity properties to get the actual selected entity.
    std::vector<Ptr<Selection>> asArray();

    typedef Selection iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_SELECTIONS_API static const char* classType();
    ADSK_CORE_SELECTIONS_API const char* objectType() const override;
    ADSK_CORE_SELECTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Selection* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
    virtual ObjectCollection* all_raw() const = 0;
    virtual bool all_raw(ObjectCollection* value) = 0;
    virtual bool add_raw(Base* entity) = 0;
    virtual bool clear_raw() = 0;
    virtual bool removeBySelection_raw(Selection* selection) = 0;
    virtual bool removeByEntity_raw(Base* entity) = 0;
    virtual bool removeByIndex_raw(int index) = 0;
    virtual Selection** asArray_raw(size_t& return_size) = 0;
};

// Inline wrappers

inline Ptr<Selection> Selections::item(size_t index) const
{
    Ptr<Selection> res = item_raw(index);
    return res;
}

inline size_t Selections::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<ObjectCollection> Selections::all() const
{
    Ptr<ObjectCollection> res = all_raw();
    return res;
}

inline bool Selections::all(const Ptr<ObjectCollection>& value)
{
    return all_raw(value.get());
}

inline bool Selections::add(const Ptr<Base>& entity)
{
    bool res = add_raw(entity.get());
    return res;
}

inline bool Selections::clear()
{
    bool res = clear_raw();
    return res;
}

inline bool Selections::removeBySelection(const Ptr<Selection>& selection)
{
    bool res = removeBySelection_raw(selection.get());
    return res;
}

inline bool Selections::removeByEntity(const Ptr<Base>& entity)
{
    bool res = removeByEntity_raw(entity.get());
    return res;
}

inline bool Selections::removeByIndex(int index)
{
    bool res = removeByIndex_raw(index);
    return res;
}

inline std::vector<Ptr<Selection>> Selections::asArray()
{
    std::vector<Ptr<Selection>> res;
    size_t s;

    Selection** p= asArray_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

template <class OutputIterator> inline void Selections::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTIONS_API