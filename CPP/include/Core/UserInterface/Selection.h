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
# ifdef __COMPILING_ADSK_CORE_SELECTION_CPP__
# define ADSK_CORE_SELECTION_API XI_EXPORT
# else
# define ADSK_CORE_SELECTION_API
# endif
#else
# define ADSK_CORE_SELECTION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace core {

/// Provides access to a selection of an entity in the user interface.
class Selection : public Base {
public:

    /// Gets the selected entity.
    Ptr<Base> entity() const;

    /// Gets the selection point on the object.
    Ptr<Point3D> point() const;

    ADSK_CORE_SELECTION_API static const char* classType();
    ADSK_CORE_SELECTION_API const char* objectType() const override;
    ADSK_CORE_SELECTION_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Base* entity_raw() const = 0;
    virtual Point3D* point_raw() const = 0;
};

// Inline wrappers

inline Ptr<Base> Selection::entity() const
{
    Ptr<Base> res = entity_raw();
    return res;
}

inline Ptr<Point3D> Selection::point() const
{
    Ptr<Point3D> res = point_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTION_API