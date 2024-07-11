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
# ifdef __COMPILING_ADSK_CORE_SELECTIONSET_CPP__
# define ADSK_CORE_SELECTIONSET_API XI_EXPORT
# else
# define ADSK_CORE_SELECTIONSET_API
# endif
#else
# define ADSK_CORE_SELECTIONSET_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The SelectionSet object represents a Selection Set as seen in the user interface. Using a SelectionSet,
/// you can access all the associated data, activate, and delete a selection set.
/// 
/// In the user interface, selection sets are created by selecting geometry and then running the
/// "Create Selection Set" command from the context menu. All existing selection sets are shown
/// in a "Selection Sets" folder in the browser where they can be activated and deleted.
class SelectionSet : public Base {
public:

    /// Gets and sets the name of the SelectionSet object. If a name is assigned that is already
    /// used, Fusion will append a counter to the name to make it unique.
    std::string name() const;
    bool name(const std::string& value);

    /// Gets and sets the entities in the selection set. Setting this property is the equivalent
    /// of using the "Update" option for a selection set in the user-interface.
    /// 
    /// Setting the entities can fail in the case where you provide an entity that is not valid
    /// for selection. All entities must be in the context of the root component. This means if
    /// the entity isn't directly owned by the root component, it must be a proxy.
    std::vector<Ptr<Base>> entities() const;
    bool entities(const std::vector<Ptr<Base>>& value);

    /// Causes the entities in this SelectionSet object to be the active selection.
    /// Returns true if the selection was successful.
    bool select();

    /// Deletes this SelectionSet object.
    /// Returns true if the deletion was successful.
    bool deleteMe();

    ADSK_CORE_SELECTIONSET_API static const char* classType();
    ADSK_CORE_SELECTIONSET_API const char* objectType() const override;
    ADSK_CORE_SELECTIONSET_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTIONSET_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* name_raw() const = 0;
    virtual bool name_raw(const char* value) = 0;
    virtual Base** entities_raw(size_t& return_size) const = 0;
    virtual bool entities_raw(Base** value, size_t value_size) = 0;
    virtual bool select_raw() = 0;
    virtual bool deleteMe_raw() = 0;
};

// Inline wrappers

inline std::string SelectionSet::name() const
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

inline bool SelectionSet::name(const std::string& value)
{
    return name_raw(value.c_str());
}

inline std::vector<Ptr<Base>> SelectionSet::entities() const
{
    std::vector<Ptr<Base>> res;
    size_t s;

    Base** p= entities_raw(s);
    if(p)
    {
        res.assign(p, p+s);
        DeallocateArray(p);
    }
    return res;
}

inline bool SelectionSet::entities(const std::vector<Ptr<Base>>& value)
{
    Base** value_ = new Base*[value.size()];
    for(size_t i=0; i<value.size(); ++i)
        value_[i] = value[i].get();

    bool res = entities_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool SelectionSet::select()
{
    bool res = select_raw();
    return res;
}

inline bool SelectionSet::deleteMe()
{
    bool res = deleteMe_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTIONSET_API