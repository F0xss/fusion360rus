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
# ifdef __COMPILING_ADSK_CORE_CHOICEPROPERTY_CPP__
# define ADSK_CORE_CHOICEPROPERTY_API XI_EXPORT
# else
# define ADSK_CORE_CHOICEPROPERTY_API
# endif
#else
# define ADSK_CORE_CHOICEPROPERTY_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A material or appearance property that is a pre-defined list of choices.
class ChoiceProperty : public Property {
public:

    /// Method that returns the list of available choices.
    /// names : An array of the names of the choices. These coincide with the array of choices returned by the choices argument.
    /// choices : An array of the choices. These coincide with the array of names returned by the names argument.
    /// Returns true if the call was successful.
    bool getChoices(std::vector<std::string>& names, std::vector<std::string>& choices);

    /// Gets and sets the which choice is selected from the set of choices.
    /// The value is a string that matches one of the pre-defined choices.
    /// The names of the available choices can be obtained using GetChoices method.
    std::string value() const;
    bool value(const std::string& value);

    ADSK_CORE_CHOICEPROPERTY_API static const char* classType();
    ADSK_CORE_CHOICEPROPERTY_API const char* objectType() const override;
    ADSK_CORE_CHOICEPROPERTY_API void* queryInterface(const char* id) const override;
    ADSK_CORE_CHOICEPROPERTY_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual bool getChoices_raw(char**& names, size_t& names_size, char**& choices, size_t& choices_size) = 0;
    virtual char* value_raw() const = 0;
    virtual bool value_raw(const char* value) = 0;
};

// Inline wrappers

inline bool ChoiceProperty::getChoices(std::vector<std::string>& names, std::vector<std::string>& choices)
{
    char** names_ = nullptr;
    size_t names_size;
    char** choices_ = nullptr;
    size_t choices_size;

    bool res = getChoices_raw(names_, names_size, choices_, choices_size);
    if(names_)
    {
        names.resize( names_size);
        for(size_t i=0; i< names_size; ++i)
        {
            char* pChar = names_[i];
            if(pChar)
                names[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(names_);
    }
    if(choices_)
    {
        choices.resize( choices_size);
        for(size_t i=0; i< choices_size; ++i)
        {
            char* pChar = choices_[i];
            if(pChar)
                choices[i] = pChar;
            DeallocateArray(pChar);
        }
        DeallocateArray(choices_);
    }
    return res;
}

inline std::string ChoiceProperty::value() const
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

inline bool ChoiceProperty::value(const std::string& value)
{
    return value_raw(value.c_str());
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_CHOICEPROPERTY_API