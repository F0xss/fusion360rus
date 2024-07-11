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
# ifdef __COMPILING_ADSK_CORE_NAMEDVALUES_CPP__
# define ADSK_CORE_NAMEDVALUES_API XI_EXPORT
# else
# define ADSK_CORE_NAMEDVALUES_API
# endif
#else
# define ADSK_CORE_NAMEDVALUES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ValueInput;
}}

namespace adsk { namespace core {

/// Wraps a list of named values.
class NamedValues : public Base {
public:

    /// Creates a transient NamedValues object.
    /// Returns the created NamedValue object.
    static Ptr<NamedValues> create();

    /// Adds a name value pair to the NamedValues object
    /// name : A name for the name value pair
    /// value : A ValueInput object that defines the value of the name value pair
    /// Returns true if the name value pair is added successfully.
    bool add(const std::string& name, const Ptr<ValueInput>& value);

    /// Returns the number of name value pairs in this object.
    size_t count() const;

    /// Function that returns the name and ValueInput object of a name value pair
    /// by specifying an index number
    /// index : The index of the name value pair to return. The first pair in the collection
    /// has an index of 0.
    /// name : The name
    /// value : The ValueInput object
    /// Returns true if successful
    bool getByIndex(int index, std::string& name, Ptr<ValueInput>& value);

    /// Function that returns the ValueInput object of a name value pair
    /// by specifying its name
    /// name : The name of the name value pair to return the ValueInput object from
    /// value : The ValueInput object
    /// Returns true if successful
    bool getValueByName(const std::string& name, Ptr<ValueInput>& value);

    ADSK_CORE_NAMEDVALUES_API static const char* classType();
    ADSK_CORE_NAMEDVALUES_API const char* objectType() const override;
    ADSK_CORE_NAMEDVALUES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_NAMEDVALUES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_NAMEDVALUES_API static NamedValues* create_raw();
    virtual bool add_raw(const char* name, ValueInput* value) = 0;
    virtual size_t count_raw() const = 0;
    virtual bool getByIndex_raw(int index, char*& name, ValueInput*& value) = 0;
    virtual bool getValueByName_raw(const char* name, ValueInput*& value) = 0;
};

// Inline wrappers

inline Ptr<NamedValues> NamedValues::create()
{
    Ptr<NamedValues> res = create_raw();
    return res;
}

inline bool NamedValues::add(const std::string& name, const Ptr<ValueInput>& value)
{
    bool res = add_raw(name.c_str(), value.get());
    return res;
}

inline size_t NamedValues::count() const
{
    size_t res = count_raw();
    return res;
}

inline bool NamedValues::getByIndex(int index, std::string& name, Ptr<ValueInput>& value)
{
    char* name_ = nullptr;
    ValueInput* value_ = nullptr;

    bool res = getByIndex_raw(index, name_, value_);
    name.clear();
    if (name_)
    {
        name = name_;
        DeallocateArray(name_);
    }
    value = value_;
    return res;
}

inline bool NamedValues::getValueByName(const std::string& name, Ptr<ValueInput>& value)
{
    ValueInput* value_ = nullptr;

    bool res = getValueByName_raw(name.c_str(), value_);
    value = value_;
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_NAMEDVALUES_API