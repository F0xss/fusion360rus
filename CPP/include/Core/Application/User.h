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
# ifdef __COMPILING_ADSK_CORE_USER_CPP__
# define ADSK_CORE_USER_API XI_EXPORT
# else
# define ADSK_CORE_USER_API
# endif
#else
# define ADSK_CORE_USER_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A class that represents a Fusion 360 User
class User : public Base {
public:

    /// Returns the Username associated with this user's Autodesk account
    std::string userName() const;

    /// Returns display name of the user. (i.e. the name that shows up in the Fusion 360 UI)
    std::string displayName() const;

    /// Returns the user's internal Autodesk account name.
    /// This can be used by applications sold through the Autodesk Exchange Store to verify that the user has in
    /// fact purchased the product.
    std::string userId() const;

    /// Get the email associated with this users Fusion 360 account
    std::string email() const;

    ADSK_CORE_USER_API static const char* classType();
    ADSK_CORE_USER_API const char* objectType() const override;
    ADSK_CORE_USER_API void* queryInterface(const char* id) const override;
    ADSK_CORE_USER_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* userName_raw() const = 0;
    virtual char* displayName_raw() const = 0;
    virtual char* userId_raw() const = 0;
    virtual char* email_raw() const = 0;
};

// Inline wrappers

inline std::string User::userName() const
{
    std::string res;

    char* p= userName_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string User::displayName() const
{
    std::string res;

    char* p= displayName_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string User::userId() const
{
    std::string res;

    char* p= userId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string User::email() const
{
    std::string res;

    char* p= email_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_USER_API