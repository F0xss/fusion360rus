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
# ifdef __COMPILING_ADSK_CORE_STATUSMESSAGE_CPP__
# define ADSK_CORE_STATUSMESSAGE_API XI_EXPORT
# else
# define ADSK_CORE_STATUSMESSAGE_API
# endif
#else
# define ADSK_CORE_STATUSMESSAGE_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class StatusMessages;
}}

namespace adsk { namespace core {

/// Defines the message associated with a Status object.
class StatusMessage : public Base {
public:

    /// Gets and sets the ID of the message being used. This is a predefined ID within the Fusion message
    /// string table.
    std::string messageId() const;
    bool messageId(const std::string& value);

    /// The user visible message being used. Setting this message for custom feature errors or warnings is
    /// currently ignored.
    std::string message() const;
    bool message(const std::string& value);

    /// Returns the type of message this StatusMessage represents.
    StatusMessageTypes statusMessageType() const;

    /// Returns the collection of status codes that are children of
    /// this status message.
    Ptr<StatusMessages> childStatusMessages() const;

    ADSK_CORE_STATUSMESSAGE_API static const char* classType();
    ADSK_CORE_STATUSMESSAGE_API const char* objectType() const override;
    ADSK_CORE_STATUSMESSAGE_API void* queryInterface(const char* id) const override;
    ADSK_CORE_STATUSMESSAGE_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual char* messageId_raw() const = 0;
    virtual bool messageId_raw(const char* value) = 0;
    virtual char* message_raw() const = 0;
    virtual bool message_raw(const char* value) = 0;
    virtual StatusMessageTypes statusMessageType_raw() const = 0;
    virtual StatusMessages* childStatusMessages_raw() const = 0;
};

// Inline wrappers

inline std::string StatusMessage::messageId() const
{
    std::string res;

    char* p= messageId_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool StatusMessage::messageId(const std::string& value)
{
    return messageId_raw(value.c_str());
}

inline std::string StatusMessage::message() const
{
    std::string res;

    char* p= message_raw();
    if (p)
    {
        res = p;
        DeallocateArray(p);
    }
    return res;
}

inline bool StatusMessage::message(const std::string& value)
{
    return message_raw(value.c_str());
}

inline StatusMessageTypes StatusMessage::statusMessageType() const
{
    StatusMessageTypes res = statusMessageType_raw();
    return res;
}

inline Ptr<StatusMessages> StatusMessage::childStatusMessages() const
{
    Ptr<StatusMessages> res = childStatusMessages_raw();
    return res;
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_STATUSMESSAGE_API