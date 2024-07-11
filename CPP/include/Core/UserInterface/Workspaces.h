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
# ifdef __COMPILING_ADSK_CORE_WORKSPACES_CPP__
# define ADSK_CORE_WORKSPACES_API XI_EXPORT
# else
# define ADSK_CORE_WORKSPACES_API
# endif
#else
# define ADSK_CORE_WORKSPACES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Workspace;
}}

namespace adsk { namespace core {

/// Provides access to all of the existing workspaces.
class Workspaces : public Base {
public:

    /// Returns the specified work space using an index into the collection.
    /// index : The index of the item within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified item or null if an invalid index was specified.
    Ptr<Workspace> item(size_t index) const;

    /// Returns the Workspace of the specified ID.
    /// id : The ID of the workspace to get.
    /// Returns the specified workspace or null in the case where there isn't a workspace with the specified ID.
    Ptr<Workspace> itemById(const std::string& id) const;

    /// Gets the number of workspaces in the collection.
    size_t count() const;

    /// Creates a new workspace for a specific product.
    /// productType : The name of the product this workspace will be displayed with. You can obtain a list of the available
    /// products by using the supportedProductTypes property of the Application object.
    /// id : The unique ID for this workspace. It must be unique with respect to all other workspaces.
    /// name : The displayed name of this workspace.
    /// resourceFolder : The resource folder should contain two files; 49X31.png and 98x62.png. The larger is used for the Apple Retina display.
    /// Returns the created workspace or null if the creation failed.
    Ptr<Workspace> add(const std::string& productType, const std::string& id, const std::string& name, const std::string& resourceFolder);

    typedef Workspace iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_WORKSPACES_API static const char* classType();
    ADSK_CORE_WORKSPACES_API const char* objectType() const override;
    ADSK_CORE_WORKSPACES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_WORKSPACES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Workspace* item_raw(size_t index) const = 0;
    virtual Workspace* itemById_raw(const char* id) const = 0;
    virtual size_t count_raw() const = 0;
    virtual Workspace* add_raw(const char* productType, const char* id, const char* name, const char* resourceFolder) = 0;
};

// Inline wrappers

inline Ptr<Workspace> Workspaces::item(size_t index) const
{
    Ptr<Workspace> res = item_raw(index);
    return res;
}

inline Ptr<Workspace> Workspaces::itemById(const std::string& id) const
{
    Ptr<Workspace> res = itemById_raw(id.c_str());
    return res;
}

inline size_t Workspaces::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<Workspace> Workspaces::add(const std::string& productType, const std::string& id, const std::string& name, const std::string& resourceFolder)
{
    Ptr<Workspace> res = add_raw(productType.c_str(), id.c_str(), name.c_str(), resourceFolder.c_str());
    return res;
}

template <class OutputIterator> inline void Workspaces::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_WORKSPACES_API