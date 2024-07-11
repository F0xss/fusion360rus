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
#include "Property.h"
#include <string>
#include <vector>

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../OSMacros.h"

#ifdef XINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_CORE_FILENAMEPROPERTY_CPP__
# define ADSK_CORE_FILENAMEPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_FILENAMEPROPERTY_API
# endif
#else
# define ADSK_CORE_FILENAMEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A file name property associated with an appearance.
class FilenameProperty : public Property {
public:

    /// Gets the boolean flag that indicates if this property has multiple values or not.
    bool hasMultipleValues() const;

    /// Gets and sets the value of this property.
    std::string value() const;
    bool value(const std::string& value);

    /// Gets and sets the values associated with this property. HasMultipleValues
    /// property indicates if this property will be returning more than one value.
    std::vector<std::string> values() const;
    bool values(const std::vector<std::string>& value);

    ADSK_CORE_FILENAMEPROPERTY_API static const char* classType();
    ADSK_CORE_FILENAMEPROPERTY_API const char* objectType() const override;
    ADSK_CORE_FILENAMEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_FILENAMEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool hasMultipleValues_raw() const = 0;
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
    virtual char** values_raw(size_t& return_size) const = 0;
    virtual bool values_raw(const char** value, size_t value_size) = 0;
};

// Inline wrappers

inline bool FilenameProperty::hasMultipleValues() const
{
    bool res = hasMultipleValues_raw();
    return res;
}

inline std::string FilenameProperty::value() const
{
    std::string res;

    char* p= value_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool FilenameProperty::value(const std::string& value)
{
    return value_raw(value.c_str());
}

inline std::vector<std::string> FilenameProperty::values() const
{
    std::vector<std::string> res;
    size_t s;

    char** p= values_raw(s);
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

inline bool FilenameProperty::values(const std::vector<std::string>& value)
{
    const char** value_ = value.empty() ? nullptr : (new const char*[value.size()]);
    for(size_t i = 0; i < value.size(); ++i)
    {
        value_[i] = value[i].c_str();
    }

    bool res = values_raw(value_, value.size());
    delete[] value_;
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_FILENAMEPROPERTY_API