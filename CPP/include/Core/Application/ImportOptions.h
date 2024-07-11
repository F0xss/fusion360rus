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
# ifdef __COMPILING_ADSK_CORE_IMPORTOPTIONS_CPP__
# define ADSK_CORE_IMPORTOPTIONS_API XI_EXPORT
# else
# define ADSK_CORE_IMPORTOPTIONS_API
# endif
#else
# define ADSK_CORE_IMPORTOPTIONS_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// The base class for the different import types. This class is never directly used
/// in an import because you need the specific import type to specify the type of
/// import to be performed.
class ImportOptions : public Base {
public:

    /// Gets and sets the filename or URL of the file to be imported.
    std::string filename() const;
    bool filename(const std::string& value);

    /// Specifies if the camera should be adjusted to fit the geometry of the import.
    /// This defaults to true, which will cause a change in the current view. Setting this
    /// to false will leave the view as-is and just import the geometry.
    bool isViewFit() const;
    bool isViewFit(bool value);

    ADSK_CORE_IMPORTOPTIONS_API static const char* classType();
    ADSK_CORE_IMPORTOPTIONS_API const char* objectType() const override;
    ADSK_CORE_IMPORTOPTIONS_API void* queryInterface(const char* id) const override;
    ADSK_CORE_IMPORTOPTIONS_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* filename_raw() const = 0;
    virtual bool filename_raw(const char* value) = 0;
    virtual bool isViewFit_raw() const = 0;
    virtual bool isViewFit_raw(bool value) = 0;
    virtual void placeholderImportOptions0() {}
    virtual void placeholderImportOptions1() {}
    virtual void placeholderImportOptions2() {}
    virtual void placeholderImportOptions3() {}
    virtual void placeholderImportOptions4() {}
    virtual void placeholderImportOptions5() {}
    virtual void placeholderImportOptions6() {}
    virtual void placeholderImportOptions7() {}
    virtual void placeholderImportOptions8() {}
    virtual void placeholderImportOptions9() {}
    virtual void placeholderImportOptions10() {}
    virtual void placeholderImportOptions11() {}
};

// Inline wrappers

inline std::string ImportOptions::filename() const
{
    std::string res;

    char* p= filename_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool ImportOptions::filename(const std::string& value)
{
    return filename_raw(value.c_str());
}

inline bool ImportOptions::isViewFit() const
{
    bool res = isViewFit_raw();
    return res;
}

inline bool ImportOptions::isViewFit(bool value)
{
    return isViewFit_raw(value);
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_IMPORTOPTIONS_API