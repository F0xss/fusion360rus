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

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_CURVE3DPATH_CPP__
# define ADSK_CORE_CURVE3DPATH_API XI_EXPORT
# else
# define ADSK_CORE_CURVE3DPATH_API
# endif
#else
# define ADSK_CORE_CURVE3DPATH_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Curve3D;
}}

namespace adsk { namespace core {

/// !!!!! Warning !!!!!
/// ! This is hidden and not officially supported
/// !!!!! Warning !!!!!
/// 
/// Object that represents a collection of connected Curve3D objects.
class Curve3DPath : public Base {
public:

    /// Returns the Curve3D at the specified index from this collection of Curve3D objects.
    /// index : The index of the Curve3D within this Curve3D collection to return. The first Curve3D in this collection has an index of 0.
    Ptr<Curve3D> item(size_t index) const;

    /// Returns the number of Curve3D objects contained in this Curve3D collection.
    size_t count() const;

    typedef Curve3D iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_CURVE3DPATH_API static const char* classType();
    ADSK_CORE_CURVE3DPATH_API const char* objectType() const override;
    ADSK_CORE_CURVE3DPATH_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CURVE3DPATH_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Curve3D* item_raw(size_t index) const = 0;
    virtual size_t count_raw() const = 0;
};

// Inline wrappers

inline Ptr<Curve3D> Curve3DPath::item(size_t index) const
{
    Ptr<Curve3D> res = item_raw(index);
    return res;
}

inline size_t Curve3DPath::count() const
{
    size_t res = count_raw();
    return res;
}

template <class OutputIterator> inline void Curve3DPath::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CURVE3DPATH_API