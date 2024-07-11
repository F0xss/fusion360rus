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
# ifdef __COMPILING_ADSK_CORE_BOUNDINGBOX2D_CPP__
# define ADSK_CORE_BOUNDINGBOX2D_API XI_EXPORT
# else
# define ADSK_CORE_BOUNDINGBOX2D_API
# endif
#else
# define ADSK_CORE_BOUNDINGBOX2D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point2D;
}}

namespace adsk { namespace core {

/// Transient object that represents a 2D bounding box. A 2D bounding box is a rectangle box that is parallel
/// to the x and y axes. The box is defined by a minimum point (smallest x-y values) and maximum point (largest x-y values).
/// This object is a wrapper for these points and serves as a way to pass bounding box information
/// in and out of functions. It also provides some convenience function when working with the bounding box data.
/// They are created statically using the create method of the BoundingBox2D class.
class BoundingBox2D : public Base {
public:

    /// Creates a transient bounding box object.
    /// minPoint : The minimum point of the box.
    /// maxPoint : The maximum point of the box.
    /// Returns the new bounding box.
    static Ptr<BoundingBox2D> create(const Ptr<Point2D>& minPoint, const Ptr<Point2D>& maxPoint);

    /// Gets and sets the minimum point of the box.
    Ptr<Point2D> minPoint() const;
    bool minPoint(const Ptr<Point2D>& value);

    /// Gets and sets the maximum point of the box.
    Ptr<Point2D> maxPoint() const;
    bool maxPoint(const Ptr<Point2D>& value);

    /// Determines if the specified point lies within the bounding box.
    /// point : The point to test containment with.
    /// Returns true if the point lies within the bounding box.
    bool contains(const Ptr<Point2D>& point) const;

    /// Expand this bounding box to contain the specified point.
    /// point : The point to expand the box to.
    /// Returns true if successful.
    bool expand(const Ptr<Point2D>& point);

    /// Test if this bounding box intersects with the specified bounding box.
    /// boundingBox : The bounding box to test intersection with.
    /// Returns true if the bounding boxes intersect.
    bool intersects(const Ptr<BoundingBox2D>& boundingBox) const;

    /// Create a copy of this bounding box.
    /// Returns the new bounding box copy.
    Ptr<BoundingBox2D> copy() const;

    /// Combines this bounding box with the input bounding box. If the input
    /// bounding box extends outside this bounding box then this bounding box will
    /// be extended to encompass both of the original bounding boxes.
    /// boundingBox : The other bounding box. It is not edited but is used to extend the boundaries
    /// of the bounding box the method is being called on.
    /// Returns true if the combine was successful.
    bool combine(const Ptr<BoundingBox2D>& boundingBox);

    ADSK_CORE_BOUNDINGBOX2D_API static const char* classType();
    ADSK_CORE_BOUNDINGBOX2D_API const char* objectType() const override;
    ADSK_CORE_BOUNDINGBOX2D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_BOUNDINGBOX2D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_BOUNDINGBOX2D_API static BoundingBox2D* create_raw(Point2D* minPoint, Point2D* maxPoint);
    virtual Point2D* minPoint_raw() const = 0;
    virtual bool minPoint_raw(Point2D* value) = 0;
    virtual Point2D* maxPoint_raw() const = 0;
    virtual bool maxPoint_raw(Point2D* value) = 0;
    virtual bool contains_raw(Point2D* point) const = 0;
    virtual bool expand_raw(Point2D* point) = 0;
    virtual bool intersects_raw(BoundingBox2D* boundingBox) const = 0;
    virtual BoundingBox2D* copy_raw() const = 0;
    virtual bool combine_raw(BoundingBox2D* boundingBox) = 0;
};

// Inline wrappers

inline Ptr<BoundingBox2D> BoundingBox2D::create(const Ptr<Point2D>& minPoint, const Ptr<Point2D>& maxPoint)
{
    Ptr<BoundingBox2D> res = create_raw(minPoint.get(), maxPoint.get());
    return res;
}

inline Ptr<Point2D> BoundingBox2D::minPoint() const
{
    Ptr<Point2D> res = minPoint_raw();
    return res;
}

inline bool BoundingBox2D::minPoint(const Ptr<Point2D>& value)
{
    return minPoint_raw(value.get());
}

inline Ptr<Point2D> BoundingBox2D::maxPoint() const
{
    Ptr<Point2D> res = maxPoint_raw();
    return res;
}

inline bool BoundingBox2D::maxPoint(const Ptr<Point2D>& value)
{
    return maxPoint_raw(value.get());
}

inline bool BoundingBox2D::contains(const Ptr<Point2D>& point) const
{
    bool res = contains_raw(point.get());
    return res;
}

inline bool BoundingBox2D::expand(const Ptr<Point2D>& point)
{
    bool res = expand_raw(point.get());
    return res;
}

inline bool BoundingBox2D::intersects(const Ptr<BoundingBox2D>& boundingBox) const
{
    bool res = intersects_raw(boundingBox.get());
    return res;
}

inline Ptr<BoundingBox2D> BoundingBox2D::copy() const
{
    Ptr<BoundingBox2D> res = copy_raw();
    return res;
}

inline bool BoundingBox2D::combine(const Ptr<BoundingBox2D>& boundingBox)
{
    bool res = combine_raw(boundingBox.get());
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_BOUNDINGBOX2D_API