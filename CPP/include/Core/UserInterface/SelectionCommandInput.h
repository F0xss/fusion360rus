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
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_SELECTIONCOMMANDINPUT_CPP__
# define ADSK_CORE_SELECTIONCOMMANDINPUT_API XI_EXPORT
# else
# define ADSK_CORE_SELECTIONCOMMANDINPUT_API
# endif
#else
# define ADSK_CORE_SELECTIONCOMMANDINPUT_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class Selection;
}}

namespace adsk { namespace core {

/// Provides a command input to get a selection from the user.
class SelectionCommandInput : public CommandInput {
public:

    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Bodies;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SolidBodies;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SurfaceBodies;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string MeshBodies;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Faces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SolidFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SurfaceFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string PlanarFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string CylindricalFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string ConicalFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SphericalFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string ToroidalFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SplineFaces;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Edges;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string LinearEdges;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string CircularEdges;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string EllipticalEdges;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string TangentEdges;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string NonTangentEdges;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Vertices;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string RootComponents;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Occurrences;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Sketches;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SketchCurves;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SketchLines;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SketchCircles;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SketchPoints;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string ConstructionPoints;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string ConstructionLines;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string ConstructionPlanes;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Features;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Canvases;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Decals;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string JointOrigins;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Joints;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string SketchConstraints;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Profiles;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string Texts;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const std::string CustomGraphics;

    /// Gets or sets the tooltip shown next to the cursor.
    std::string commandPrompt() const;
    bool commandPrompt(const std::string& value);

    /// Adds an additional filter to the existing filter list.
    /// filter : 
    /// The name of a selection filter to add. The valid list of selection filters can be found here: <a href="SelectionFilters_UM.htm">Selection Filters</a>.
    /// 
    /// Returns true if the filter was added successfully.
    bool addSelectionFilter(const std::string& filter);

    /// Clears the list of selection filters.
    /// Returns true if successful.
    bool clearSelectionFilter();

    /// Gets or sets the list of selection filters.
    std::vector<std::string> selectionFilters() const;
    bool selectionFilters(const std::vector<std::string>& value);

    /// Gets the current number of selections the user has made for this input.
    size_t selectionCount() const;

    /// Returns the selection at the specified index.
    /// index : The index of the selection to return.
    /// Returns the Selection at the specified index, or null on error.
    Ptr<Selection> selection(size_t index) const;

    /// Adds the selection to the list of selections associated with this input. This method is not valid within
    /// the commandCreated event but must be used later in the command lifetime. If you want to pre-populate the
    /// selection when the command is starting, you can use this method in the activate method of the Command.
    /// It's also valid to use in other events once the command is running, such as the validateInputs event.
    /// selection : The entity to add a selection of to this input. The addition may fail if the entity
    /// does not match the selection filter, or adding it would exceed the limits.
    /// Returns true if a selection to the entity was added to this input.
    bool addSelection(const Ptr<Base>& selection);

    /// Get the limits currently defined for this input.
    /// minimum : The minimum number of selections required. A value of zero means that there is no minimum limit.
    /// maximum : The maximum number of selections required. A value of zero means that there is no maximum limit.
    /// Returns true if the selection limits were successfully returned.
    bool getSelectionLimits(size_t& minimum, size_t& maximum);

    /// Defines the limits for the number of selections associated with this input.
    /// A maximum value of 0 indicates that there is no maximum.
    /// minimum : The minimum number of selections required. A value of zero means that there is no minimum limit.
    /// maximum : The maximum number of selections required. A value of zero means that there is no maximum limit.
    /// If maximum is equal to minimum, then exactly that number of selections is required.
    /// Returns true if the limits were successfully set.
    bool setSelectionLimits(size_t minimum, size_t maximum = 0);

    /// Clears the current selection so no entities are in the selection.
    /// Returns true if successful.
    bool clearSelection();

    /// Gets and sets if this selection input has focus with respect to other selection inputs on the
    /// command dialog. Only one selection input on a dialog can have focus at a time, so setting hasFocus to true
    /// will remove the focus from the selection input that previously had focus. When a selection input
    /// has focus; any user selections will be added to that selection input, and the selection rules associated
    /// with that selection input will apply.
    /// 
    /// Setting hasFocus to True for a selection input whose isVisible property is false will fail.
    bool hasFocus() const;
    bool hasFocus(bool value);

    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const char* classType();
    ADSK_CORE_SELECTIONCOMMANDINPUT_API const char* objectType() const override;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API void* queryInterface(const char* id) const override;
    ADSK_CORE_SELECTIONCOMMANDINPUT_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* commandPrompt_raw() const = 0;
    virtual bool commandPrompt_raw(const char* value) = 0;
    virtual bool addSelectionFilter_raw(const char* filter) = 0;
    virtual bool clearSelectionFilter_raw() = 0;
    virtual char** selectionFilters_raw(size_t& return_size) const = 0;
    virtual bool selectionFilters_raw(const char** value, size_t value_size) = 0;
    virtual size_t selectionCount_raw() const = 0;
    virtual Selection* selection_raw(size_t index) const = 0;
    virtual bool addSelection_raw(Base* selection) = 0;
    virtual bool getSelectionLimits_raw(size_t& minimum, size_t& maximum) = 0;
    virtual bool setSelectionLimits_raw(size_t minimum, size_t maximum) = 0;
    virtual bool clearSelection_raw() = 0;
    virtual bool hasFocus_raw() const = 0;
    virtual bool hasFocus_raw(bool value) = 0;
};

// Inline wrappers

inline std::string SelectionCommandInput::commandPrompt() const
{
    std::string res;

    char* p= commandPrompt_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool SelectionCommandInput::commandPrompt(const std::string& value)
{
    return commandPrompt_raw(value.c_str());
}

inline bool SelectionCommandInput::addSelectionFilter(const std::string& filter)
{
    bool res = addSelectionFilter_raw(filter.c_str());
    return res;
}

inline bool SelectionCommandInput::clearSelectionFilter()
{
    bool res = clearSelectionFilter_raw();
    return res;
}

inline std::vector<std::string> SelectionCommandInput::selectionFilters() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= selectionFilters_raw(s);
    if(p)
    {
        res.resize(s);
        for(size_t i=0; i<s; ++i)
        {
            char* pChar = p[i];
            if(pChar)
                res[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(p);
    }
    return res;
}

inline bool SelectionCommandInput::selectionFilters(const std::vector<std::string>& value)
{
    const char** value_ = value.empty() ? nullptr : (new const char*[value.size()]);
    for(size_t i = 0; i < value.size(); ++i)
    {
        value_[i] = value[i].c_str();
    }

    bool res = selectionFilters_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline size_t SelectionCommandInput::selectionCount() const
{
    size_t res = selectionCount_raw();
    return res;
}

inline Ptr<Selection> SelectionCommandInput::selection(size_t index) const
{
    Ptr<Selection> res = selection_raw(index);
    return res;
}

inline bool SelectionCommandInput::addSelection(const Ptr<Base>& selection)
{
    bool res = addSelection_raw(selection.get());
    return res;
}

inline bool SelectionCommandInput::getSelectionLimits(size_t& minimum, size_t& maximum)
{
    bool res = getSelectionLimits_raw(minimum, maximum);
    return res;
}

inline bool SelectionCommandInput::setSelectionLimits(size_t minimum, size_t maximum)
{
    bool res = setSelectionLimits_raw(minimum, maximum);
    return res;
}

inline bool SelectionCommandInput::clearSelection()
{
    bool res = clearSelection_raw();
    return res;
}

inline bool SelectionCommandInput::hasFocus() const
{
    bool res = hasFocus_raw();
    return res;
}

inline bool SelectionCommandInput::hasFocus(bool value)
{
    return hasFocus_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_SELECTIONCOMMANDINPUT_API