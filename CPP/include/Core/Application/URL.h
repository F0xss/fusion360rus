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
# ifdef __COMPILING_ADSK_CORE_URL_CPP__
# define ADSK_CORE_URL_API XI_EXPORT
# else
# define ADSK_CORE_URL_API
# endif
#else
# define ADSK_CORE_URL_API XI_IMPORT
#endif

namespace adsk { namespace core {

/// A URL object provides useful and easy-to-use methods for creating, modifying, and analyzing URLs.
class URL : public Base {
public:

    /// Create a new URL by given string.
    /// url : The string is used to define the URL.
    /// Returns the new URL object.
    static Ptr<URL> create(const std::string& url);

    /// Get the protocol scheme of the URL, including the final ':'.
    /// Returns the protocol scheme of the URL.
    std::string protocol() const;

    /// Get the path name of the URL, including the last '/' of the protocol followed by the path of the URL.
    /// Returns the path of the URL.
    std::string pathName() const;

    /// Get the leaf name of the URL, which is the section behind the last '/'.
    /// Returns the leaf name of the URL.
    std::string leafName() const;

    /// Get the entire URL as string.
    /// Returns the entire URL as string.
    std::string toString() const;

    /// Get the parent URL, represented by the section before the last '/'.
    /// Returns the parent URL object.
    Ptr<URL> parent() const;

    /// Join this URL with givent path and return the resulting URL. The operation does not alter the current URL.
    /// Join inserts a slash '/' to properly extend the path, so that "http://foo".join("bar") will return "http://foo/bar", not "http://foobar".
    /// path : The path to join to this URL.
    /// Returns the joined URL.
    Ptr<URL> join(const std::string& path) const;

    /// Check whether the URL is valid. Ensures that the URL is formatted with a protocol followed by a path which can be empty.
    /// The check is independent of the existence of the resource the URL may point to.
    bool isURLValid() const;

    ADSK_CORE_URL_API static const char* classType();
    ADSK_CORE_URL_API const char* objectType() const override;
    ADSK_CORE_URL_API void* queryInterface(const char* id) const override;
    ADSK_CORE_URL_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    ADSK_CORE_URL_API static URL* create_raw(const char* url);
    virtual char* protocol_raw() const = 0;
    virtual char* pathName_raw() const = 0;
    virtual char* leafName_raw() const = 0;
    virtual char* toString_raw() const = 0;
    virtual URL* parent_raw() const = 0;
    virtual URL* join_raw(const char* path) const = 0;
    virtual bool isURLValid_raw() const = 0;
    virtual void placeholderURL0() {}
    virtual void placeholderURL1() {}
    virtual void placeholderURL2() {}
    virtual void placeholderURL3() {}
    virtual void placeholderURL4() {}
    virtual void placeholderURL5() {}
    virtual void placeholderURL6() {}
    virtual void placeholderURL7() {}
    virtual void placeholderURL8() {}
    virtual void placeholderURL9() {}
    virtual void placeholderURL10() {}
    virtual void placeholderURL11() {}
    virtual void placeholderURL12() {}
    virtual void placeholderURL13() {}
    virtual void placeholderURL14() {}
    virtual void placeholderURL15() {}
    virtual void placeholderURL16() {}
    virtual void placeholderURL17() {}
    virtual void placeholderURL18() {}
    virtual void placeholderURL19() {}
    virtual void placeholderURL20() {}
    virtual void placeholderURL21() {}
    virtual void placeholderURL22() {}
    virtual void placeholderURL23() {}
    virtual void placeholderURL24() {}
};

// Inline wrappers

inline Ptr<URL> URL::create(const std::string& url)
{
    Ptr<URL> res = create_raw(url.c_str());
    return res;
}

inline std::string URL::protocol() const
{
    std::string res;

    char* p= protocol_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string URL::pathName() const
{
    std::string res;

    char* p= pathName_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string URL::leafName() const
{
    std::string res;

    char* p= leafName_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline std::string URL::toString() const
{
    std::string res;

    char* p= toString_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline Ptr<URL> URL::parent() const
{
    Ptr<URL> res = parent_raw();
    return res;
}

inline Ptr<URL> URL::join(const std::string& path) const
{
    Ptr<URL> res = join_raw(path.c_str());
    return res;
}

inline bool URL::isURLValid() const
{
    bool res = isURLValid_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_URL_API