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
#include "CommandInput.h"
#include <string>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DIRECTIONCOMMANDINPUT_CPP__
# define ADSK_CORE_DIRECTIONCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_DIRECTIONCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_DIRECTIONCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Point3D;
    class Vector3D;
}}

namespace adsk { namespace core {

/// Represents a command input that gets a direction from the user. This displays
/// a button or a check-box in the command dialog where the user can flip the direction if desired and also displays
/// a manipulator in the graphics window to allow flipping the direction by clicking and dragging on the manipulator.
class DirectionCommandInput : public CommandInput {
public:

    /// Defines a direction manipulator arrow in the graphics viewport whose direction can be flipped by the
    /// toggling the check box, clicking the button or by the user clicking and dragging on the manipulator arrow.
    /// origin : The origin point of the direction manipulator (arrow) in the model space of the root component.
    /// direction : The direction of the manipulator (arrow) in the model space of the root component.
    /// Returns true if successful
    bool setManipulator(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction);

    /// Gets the origin point of the direction manipulator (arrow) in the model space of the root component.
    /// To set the origin use the setManipulator method.
    Ptr<Point3D> manipulatorOrigin() const;

    /// Gets the direction of the manipulator (arrow) in the model space of the root component.
    /// To set the direction use the setManipulator method.
    Ptr<Vector3D> manipulatorDirection() const;

    /// Gets and sets if the direction manipulator displayed is flipped (reversed 180 degrees as compared to the
    /// direction defined by the manipulatorDirection property). This is false for a newly created DirectionCommandInput.
    bool isDirectionFlipped() const;
    bool isDirectionFlipped(bool value);

    /// Gets and sets the folder that contains the image to display on the button.
    /// The input is shown as a check box if set resource folder to empty.
    std::string resourceFolder() const;
    bool resourceFolder(const std::string& value);

    ADSK_CORE_DIRECTIONCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_DIRECTIONCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_DIRECTIONCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DIRECTIONCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool setManipulator_raw(Point3D* origin, Vector3D* direction) = 0;
    virtual Point3D* manipulatorOrigin_raw() const = 0;
    virtual Vector3D* manipulatorDirection_raw() const = 0;
    virtual bool isDirectionFlipped_raw() const = 0;
    virtual bool isDirectionFlipped_raw(bool value) = 0;
    virtual char* resourceFolder_raw() const = 0;
    virtual bool resourceFolder_raw(const char* value) = 0;
};

// Inline wrappers

inline bool DirectionCommandInput::setManipulator(const Ptr<Point3D>& origin, const Ptr<Vector3D>& direction)
{
    bool res = setManipulator_raw(origin.get(), direction.get());
    return res;
}

inline Ptr<Point3D> DirectionCommandInput::manipulatorOrigin() const
{
    Ptr<Point3D> res = manipulatorOrigin_raw();
    return res;
}

inline Ptr<Vector3D> DirectionCommandInput::manipulatorDirection() const
{
    Ptr<Vector3D> res = manipulatorDirection_raw();
    return res;
}

inline bool DirectionCommandInput::isDirectionFlipped() const
{
    bool res = isDirectionFlipped_raw();
    return res;
}

inline bool DirectionCommandInput::isDirectionFlipped(bool value)
{
    return isDirectionFlipped_raw(value);
}

inline std::string DirectionCommandInput::resourceFolder() const
{
    std::string res;

    char* p= resourceFolder_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool DirectionCommandInput::resourceFolder(const std::string& value)
{
    return resourceFolder_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DIRECTIONCOMMANDINPUT_API