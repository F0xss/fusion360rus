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
#include "ImportOptions.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_DXF2DIMPORTOPTIONS_CPP__
# define ADSK_CORE_DXF2DIMPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CORE_DXF2DIMPORTOPTIONS_API
# endif
#else
# define ADSK_CORE_DXF2DIMPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
    class Point2D;
}}

namespace adsk { namespace core {

/// Defines that a 2D DXF Import to create sketches (based on layers in the DXF file) is to be performed and
/// specifies the various options.
class DXF2DImportOptions : public ImportOptions {
public:

    /// Gets and sets the construction plane or planar face that defines the plane that the resulting sketches will
    /// be created on.
    Ptr<Base> planarEntity() const;
    bool planarEntity(const Ptr<Base>& value);

    /// Gets and sets the X,Y offset position for the origin of the imported DXF data relative to the sketch origin.
    /// This defaults to (0,0) in a newly created DXF2DImportOptions object.
    Ptr<Point2D> position() const;
    bool position(const Ptr<Point2D>& value);

    /// Returns a collection of Sketch objects. A sketch is created for each layer in the dxf file
    /// that contains 2D geometry. Any 3D geometry contained in the DXF file is ignored.
    /// The names of the resulting sketches correspond to the layer names in the DXF file.
    /// Currently, the only way to get a single sketch as a result is to supply a DXF file that only has 2D geometry
    /// on a single layer.
    Ptr<ObjectCollection> results() const;

    /// Gets and sets if importing the DXF file should create a new sketch for each layer or
    /// if the entire contents of the DXF file should be merged into a single layer. If true
    /// a single sketch will be created. If false a new sketch for each layer will be created
    /// where the sketch name will be the name of the layer. The default value for this
    /// property is false, resulting in a sketch for each layer.
    bool isSingleSketchResult() const;
    bool isSingleSketchResult(bool value);

    /// Gets and sets the names of the layers that will be imported. When the DXF2DImportOptions
    /// object is first created, the array returned is a list of all the layers in the DXF file.
    /// By default, all layers will be imported. You can set the property using a new array that
    /// contains the names of only those layers you want to import.
    std::vector<std::string> layers() const;
    bool layers(const std::vector<std::string>& value);

    /// When set to true, if there are any splines in the DXF they will be created as control
    /// point splines. Otherwise they will be created as fixed splines that cannot be edited.
    /// The default for this property is false, to create fixed splines.
    bool isCreateControlPointSplines() const;
    bool isCreateControlPointSplines(bool value);

    ADSK_CORE_DXF2DIMPORTOPTIONS_API static const char* classType();
    ADSK_CORE_DXF2DIMPORTOPTIONS_API const char* objectType() const override;
    ADSK_CORE_DXF2DIMPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_DXF2DIMPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual Base* planarEntity_raw() const = 0;
    virtual bool planarEntity_raw(Base* value) = 0;
    virtual Point2D* position_raw() const = 0;
    virtual bool position_raw(Point2D* value) = 0;
    virtual ObjectCollection* results_raw() const = 0;
    virtual bool isSingleSketchResult_raw() const = 0;
    virtual bool isSingleSketchResult_raw(bool value) = 0;
    virtual char** layers_raw(size_t& return_size) const = 0;
    virtual bool layers_raw(const char** value, size_t value_size) = 0;
    virtual bool isCreateControlPointSplines_raw() const = 0;
    virtual bool isCreateControlPointSplines_raw(bool value) = 0;
};

// Inline wrappers

inline Ptr<Base> DXF2DImportOptions::planarEntity() const
{
    Ptr<Base> res = planarEntity_raw();
    return res;
}

inline bool DXF2DImportOptions::planarEntity(const Ptr<Base>& value)
{
    return planarEntity_raw(value.get());
}

inline Ptr<Point2D> DXF2DImportOptions::position() const
{
    Ptr<Point2D> res = position_raw();
    return res;
}

inline bool DXF2DImportOptions::position(const Ptr<Point2D>& value)
{
    return position_raw(value.get());
}

inline Ptr<ObjectCollection> DXF2DImportOptions::results() const
{
    Ptr<ObjectCollection> res = results_raw();
    return res;
}

inline bool DXF2DImportOptions::isSingleSketchResult() const
{
    bool res = isSingleSketchResult_raw();
    return res;
}

inline bool DXF2DImportOptions::isSingleSketchResult(bool value)
{
    return isSingleSketchResult_raw(value);
}

inline std::vector<std::string> DXF2DImportOptions::layers() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= layers_raw(s);
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

inline bool DXF2DImportOptions::layers(const std::vector<std::string>& value)
{
    const char** value_ = value.empty() ? nullptr : (new const char*[value.size()]);
    for(size_t i = 0; i < value.size(); ++i)
    {
        value_[i] = value[i].c_str();
    }

    bool res = layers_raw(value_, value.size());
    delete[] value_;
    return res;
}

inline bool DXF2DImportOptions::isCreateControlPointSplines() const
{
    bool res = isCreateControlPointSplines_raw();
    return res;
}

inline bool DXF2DImportOptions::isCreateControlPointSplines(bool value)
{
    return isCreateControlPointSplines_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_DXF2DIMPORTOPTIONS_API