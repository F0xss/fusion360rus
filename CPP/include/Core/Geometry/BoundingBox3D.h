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
# ifdef __COMPILING_ADSK_CORE_BOUNDINGBOX3D_CPP__
# define ADSK_CORE_BOUNDINGBOX3D_API XI_EXPORT
# else
# define ADSK_CORE_BOUNDINGBOX3D_API
# endif
#else
# define ADSK_CORE_BOUNDINGBOX3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
}}

namespace adsk { namespace core {

/// Transient object that represents a 3D bounding box.
/// It defines a rectangular box whose sides are parallel to the model space x, y, and z
/// planes. Because of the fixed orientation of the box it can be fully defined
/// by two points at opposing corners; the min and max points. This object is usually
/// used to provide a rough approximation of the volume in space that an entity occupies.
/// It also provides some convenience function when working with the bounding box data.
/// They are created statically using the create method of the BoundingBox3D class.
class BoundingBox3D : public Base {
public:

    /// Creates a transient bounding box object. This object is created statically using the BoundingBox3D.create method.
    /// minPoint : The point that defines the minimum corner of the bounding box.
    /// maxPoint : The point that defines the maximum corner of the bounding box.
    /// Returns the newly created bounding box or null if the creation failed.
    static Ptr<BoundingBox3D> create(const Ptr<Point3D>& minPoint, const Ptr<Point3D>& maxPoint);

    /// Gets and sets the minimum point corner of the box.
    Ptr<Point3D> minPoint() const;
    bool minPoint(const Ptr<Point3D>& value);

    /// Gets and sets the maximum point corner of the box.
    Ptr<Point3D> maxPoint() const;
    bool maxPoint(const Ptr<Point3D>& value);

    /// Determines if the specified point is within the bound box.
    /// point : The point you want to check to see if it's in the bounding box.
    /// Returns true if the point is within the bounding box.
    bool contains(const Ptr<Point3D>& point) const;

    /// Expands the size of bounding box to include the specified point.
    /// point : The point to include within the bounding box.
    /// Returns true if the expansion was successful.
    bool expand(const Ptr<Point3D>& point);

    /// Determines if the two bounding boxes intersect.
    /// boundingBox : The other bounding box to check for intersection with.
    /// Returns true if the two boxes intersect.
    bool intersects(const Ptr<BoundingBox3D>& boundingBox) const;

    /// Creates an independent copy of this bounding box.
    /// Returns the new bounding box or null if the copy failed.
    Ptr<BoundingBox3D> copy() const;

    /// Combines this bounding box with the input bounding box. If the input
    /// bounding box extends outside this bounding box then this bounding box will
    /// be extended to encompass both of the original bounding boxes.
    /// boundingBox : The other bounding box. It is not edited but is used to extend the boundaries
    /// of the bounding box the method is being called on.
    /// Returns true if the combine was successful.
    bool combine(const Ptr<BoundingBox3D>& boundingBox);

    ADSK_CORE_BOUNDINGBOX3D_API static const char* classType();
    ADSK_CORE_BOUNDINGBOX3D_API const char* objectType() const override;
    ADSK_CORE_BOUNDINGBOX3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BOUNDINGBOX3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_BOUNDINGBOX3D_API static BoundingBox3D* create_raw(Point3D* minPoint, Point3D* maxPoint);
    virtual Point3D* minPoint_raw() const = 0;
    virtual bool minPoint_raw(Point3D* value) = 0;
    virtual Point3D* maxPoint_raw() const = 0;
    virtual bool maxPoint_raw(Point3D* value) = 0;
    virtual bool contains_raw(Point3D* point) const = 0;
    virtual bool expand_raw(Point3D* point) = 0;
    virtual bool intersects_raw(BoundingBox3D* boundingBox) const = 0;
    virtual BoundingBox3D* copy_raw() const = 0;
    virtual bool combine_raw(BoundingBox3D* boundingBox) = 0;
};

// Inline wrappers

inline Ptr<BoundingBox3D> BoundingBox3D::create(const Ptr<Point3D>& minPoint, const Ptr<Point3D>& maxPoint)
{
    Ptr<BoundingBox3D> res = create_raw(minPoint.get(), maxPoint.get());
    return res;
}

inline Ptr<Point3D> BoundingBox3D::minPoint() const
{
    Ptr<Point3D> res = minPoint_raw();
    return res;
}

inline bool BoundingBox3D::minPoint(const Ptr<Point3D>& value)
{
    return minPoint_raw(value.get());
}

inline Ptr<Point3D> BoundingBox3D::maxPoint() const
{
    Ptr<Point3D> res = maxPoint_raw();
    return res;
}

inline bool BoundingBox3D::maxPoint(const Ptr<Point3D>& value)
{
    return maxPoint_raw(value.get());
}

inline bool BoundingBox3D::contains(const Ptr<Point3D>& point) const
{
    bool res = contains_raw(point.get());
    return res;
}

inline bool BoundingBox3D::expand(const Ptr<Point3D>& point)
{
    bool res = expand_raw(point.get());
    return res;
}

inline bool BoundingBox3D::intersects(const Ptr<BoundingBox3D>& boundingBox) const
{
    bool res = intersects_raw(boundingBox.get());
    return res;
}

inline Ptr<BoundingBox3D> BoundingBox3D::copy() const
{
    Ptr<BoundingBox3D> res = copy_raw();
    return res;
}

inline bool BoundingBox3D::combine(const Ptr<BoundingBox3D>& boundingBox)
{
    bool res = combine_raw(boundingBox.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_BOUNDINGBOX3D_API