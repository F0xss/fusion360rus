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
# ifdef __COMPILING_ADSK_CORE_ORIENTEDBOUNDINGBOX3D_CPP__
# define ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API XI_EXPORT
# else
# define ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API
# endif
#else
# define ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Transient object that represents an oriented 3D bounding box. An oriented 3D bounding box is a rectangular box that
/// can be in any orientation in model space. They are created statically using the create method of the OrientedBoundingBox3D class
/// and are used by some functions to return oriented box information.
class OrientedBoundingBox3D : public Base {
public:

    /// Creates a transient oriented bounding box object.
    /// centerPoint : The center point of the oriented box.
    /// lengthDirection : A Vector3D object that defines the direction of the length of the oriented bounding box. The magnitude of
    /// the vector is ignored and just the direction is used.
    /// widthDirection : A Vector3D object that defines the direction of the width of the oriented bounding box. The magnitude of
    /// the vector is ignored and just the direction is used. The width direction must be perpendicular to
    /// the length direction.
    /// length : The length of the oriented bounding box in centimeters.
    /// width : The width of the oriented bounding box in centimeters. The width of the box is always perpendicular to the length.
    /// height : The height of the oriented bounding box in centimeters. The height of the box is perpendicular to the length-width plane
    /// using the right-hand rule where you cross the length into the width.
    /// Returns the new oriented bounding box.
    static Ptr<OrientedBoundingBox3D> create(const Ptr<Point3D>& centerPoint, const Ptr<Vector3D>& lengthDirection, const Ptr<Vector3D>& widthDirection, double length, double width, double height);

    /// Gets and sets the centerPoint point of the oriented box.
    Ptr<Point3D> centerPoint() const;
    bool centerPoint(const Ptr<Point3D>& value);

    /// Sets the orientation of the oriented bounding box.
    /// lengthDirection : A Vector3D object that defines the direction of the length of the oriented bounding box. The magnitude of
    /// the vector is ignored and just the direction is used.
    /// widthDirection : A Vector3D object that defines the direction of the width of the oriented bounding box. The magnitude of
    /// the vector is ignored and just the direction is used. The width direction must be perpendicular to
    /// the length direction.
    /// 
    bool setOrientation(const Ptr<Vector3D>& lengthDirection, const Ptr<Vector3D>& widthDirection);

    /// Gets the direction of the length of the oriented bounding box.
    /// A unit vector is always returned.
    Ptr<Vector3D> lengthDirection() const;

    /// Gets and sets the length of the oriented bounding box in centimeters.
    double length() const;
    bool length(double value);

    /// Gets the direction of the width of the oriented bounding box.
    /// A unit vector is always returned.
    Ptr<Vector3D> widthDirection() const;

    /// Gets and sets the width of the oriented bounding box in centimeters.
    double width() const;
    bool width(double value);

    /// Gets the direction of the height of the oriented bounding box.
    /// A unit vector is always returned.
    Ptr<Vector3D> heightDirection() const;

    /// Gets and sets the height of the oriented bounding box in centimeters.
    double height() const;
    bool height(double value);

    /// Determines if the specified point lies within the oriented bounding box.
    /// point : The point to test containment with.
    /// Returns true if the point lies within the bounding box.
    bool contains(const Ptr<Point3D>& point) const;

    /// Create a copy of this oriented bounding box.
    /// Returns the new oriented bounding box copy.
    Ptr<OrientedBoundingBox3D> copy() const;

    ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API static const char* classType();
    ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API const char* objectType() const override;
    ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API void* queryInterface(const char* id) const override;
    ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API static OrientedBoundingBox3D* create_raw(Point3D* centerPoint, Vector3D* lengthDirection, Vector3D* widthDirection, double length, double width, double height);
    virtual Point3D* centerPoint_raw() const = 0;
    virtual bool centerPoint_raw(Point3D* value) = 0;
    virtual bool setOrientation_raw(Vector3D* lengthDirection, Vector3D* widthDirection) = 0;
    virtual Vector3D* lengthDirection_raw() const = 0;
    virtual double length_raw() const = 0;
    virtual bool length_raw(double value) = 0;
    virtual Vector3D* widthDirection_raw() const = 0;
    virtual double width_raw() const = 0;
    virtual bool width_raw(double value) = 0;
    virtual Vector3D* heightDirection_raw() const = 0;
    virtual double height_raw() const = 0;
    virtual bool height_raw(double value) = 0;
    virtual bool contains_raw(Point3D* point) const = 0;
    virtual OrientedBoundingBox3D* copy_raw() const = 0;
};

// Inline wrappers

inline Ptr<OrientedBoundingBox3D> OrientedBoundingBox3D::create(const Ptr<Point3D>& centerPoint, const Ptr<Vector3D>& lengthDirection, const Ptr<Vector3D>& widthDirection, double length, double width, double height)
{
    Ptr<OrientedBoundingBox3D> res = create_raw(centerPoint.get(), lengthDirection.get(), widthDirection.get(), length, width, height);
    return res;
}

inline Ptr<Point3D> OrientedBoundingBox3D::centerPoint() const
{
    Ptr<Point3D> res = centerPoint_raw();
    return res;
}

inline bool OrientedBoundingBox3D::centerPoint(const Ptr<Point3D>& value)
{
    return centerPoint_raw(value.get());
}

inline bool OrientedBoundingBox3D::setOrientation(const Ptr<Vector3D>& lengthDirection, const Ptr<Vector3D>& widthDirection)
{
    bool res = setOrientation_raw(lengthDirection.get(), widthDirection.get());
    return res;
}

inline Ptr<Vector3D> OrientedBoundingBox3D::lengthDirection() const
{
    Ptr<Vector3D> res = lengthDirection_raw();
    return res;
}

inline double OrientedBoundingBox3D::length() const
{
    double res = length_raw();
    return res;
}

inline bool OrientedBoundingBox3D::length(double value)
{
    return length_raw(value);
}

inline Ptr<Vector3D> OrientedBoundingBox3D::widthDirection() const
{
    Ptr<Vector3D> res = widthDirection_raw();
    return res;
}

inline double OrientedBoundingBox3D::width() const
{
    double res = width_raw();
    return res;
}

inline bool OrientedBoundingBox3D::width(double value)
{
    return width_raw(value);
}

inline Ptr<Vector3D> OrientedBoundingBox3D::heightDirection() const
{
    Ptr<Vector3D> res = heightDirection_raw();
    return res;
}

inline double OrientedBoundingBox3D::height() const
{
    double res = height_raw();
    return res;
}

inline bool OrientedBoundingBox3D::height(double value)
{
    return height_raw(value);
}

inline bool OrientedBoundingBox3D::contains(const Ptr<Point3D>& point) const
{
    bool res = contains_raw(point.get());
    return res;
}

inline Ptr<OrientedBoundingBox3D> OrientedBoundingBox3D::copy() const
{
    Ptr<OrientedBoundingBox3D> res = copy_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_ORIENTEDBOUNDINGBOX3D_API