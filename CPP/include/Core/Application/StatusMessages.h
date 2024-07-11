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
# ifdef __COMPILING_ADSK_CORE_STATUSMESSAGES_CPP__
# define ADSK_CORE_STATUSMESSAGES_API XI_EXPORT
# else
# define ADSK_CORE_STATUSMESSAGES_API
# endif
#else
# define ADSK_CORE_STATUSMESSAGES_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class StatusMessage;
}}

namespace adsk { namespace core {

/// A collection of status messages associated with a Status object. The primary purpose of the messages is to
/// describe the reason for a warning or failure and display the messages in the alert dialog.
class StatusMessages : public Base {
public:

    /// Returns the number of status messages in this collection.
    size_t count() const;

    /// Returns the specified status message using an index into the collection.
    /// index : The index of the status message within the collection to return. The first item in the collection has an index of 0.
    /// Returns the specified StatusMessage or null if an invalid index was specified.
    Ptr<StatusMessage> item(size_t index) const;

    /// Adds a new error status message to the list of warning and error messages.
    /// messageId : 
    /// The ID of a predefined message or if an empty string is provided, the
    /// default error message will be used. The displayed message is localized based on the
    /// current default language in Fusion. Below is a list of some valid message ID's and
    /// the corresponding English message.
    /// <br/><br/>
    /// "API_COMPUTE_ERROR" - "Cannot compute this feature."<br />
    /// "API_COMPUTE_WARNING" - "This feature computed with warnings."<br />
    /// "CFLANGE_INVALID_GEOM" - "Invalid input sketch curve."<br />
    /// "DRAFT_MISSING_FACE_REFERENCES" - "Missing face references"<br />
    /// "DRAFT_MISSING_REFERENCE_PLANE" - "Missing reference plane"<br />
    /// "FEATURE_ENTITY_TYPE_INVALID" - "Entity type is invalid"<br />
    /// "FEATURE_FAILED_TO_CREATE" - "Failed to create feature"<br />
    /// "FEATURE_MISSING_INPUTS" - "Missing inputs"<br />
    /// "FEATURE_REFERENCE_LOST" - "Reference is lost"<br />
    /// "Feature_Compute_Error" - "Compute Failed"<br />
    /// "Feature_Input_Compute_Error" - "Reference Failures"<br />
    /// "InvalidWPntInput" - "Invalid input"<br />
    /// "NO_TARGET_BODY" - "No target body!"<br />
    /// "ORIGIN_SELECTION_MISSING" - "Origin geometry is missing."<br />
    /// "DRPOINT_COMPUTE_FAILED" - "Failed to evaluate the point due to the invalid input"<br />
    /// 
    /// message : This is not currently supported for custom feature compute errors and will be ignored.
    /// Returns true if the error message was successfully added.
    Ptr<StatusMessage> addError(const std::string& messageId = "", const std::string& message = "");

    /// Adds a new warning status message to the list of warning and error messages.
    /// messageId : 
    /// The ID of a predefined message or if an empty string is provided, the
    /// default error message will be used. The displayed message is localized based on the
    /// current default language in Fusion. Below is a list of some valid message ID's and
    /// the corresponding English message.
    /// <br/><br/>
    /// "API_COMPUTE_ERROR" - "Cannot compute this feature."<br />
    /// "API_COMPUTE_WARNING" - "This feature computed with warnings."<br />
    /// "CFLANGE_INVALID_GEOM" - "Invalid input sketch curve."<br />
    /// "DRAFT_MISSING_FACE_REFERENCES" - "Missing face references"<br />
    /// "DRAFT_MISSING_REFERENCE_PLANE" - "Missing reference plane"<br />
    /// "FEATURE_ENTITY_TYPE_INVALID" - "Entity type is invalid"<br />
    /// "FEATURE_FAILED_TO_CREATE" - "Failed to create feature"<br />
    /// "FEATURE_MISSING_INPUTS" - "Missing inputs"<br />
    /// "FEATURE_REFERENCE_LOST" - "Reference is lost"<br />
    /// "Feature_Compute_Error" - "Compute Failed"<br />
    /// "Feature_Input_Compute_Error" - "Reference Failures"<br />
    /// "InvalidWPntInput" - "Invalid input"<br />
    /// "NO_TARGET_BODY" - "No target body!"<br />
    /// "ORIGIN_SELECTION_MISSING" - "Origin geometry is missing."<br />
    /// "DRPOINT_COMPUTE_FAILED" - "Failed to evaluate the point due to the invalid input"<br />
    /// 
    /// message : This is not currently supported for custom feature compute errors and will be ignored.
    /// Returns true if the warning message was successfully added.
    Ptr<StatusMessage> addWarning(const std::string& messageId = "", const std::string& message = "");

    typedef StatusMessage iterable_type;
    template <class OutputIterator> void copyTo(OutputIterator result);

    ADSK_CORE_STATUSMESSAGES_API static const char* classType();
    ADSK_CORE_STATUSMESSAGES_API const char* objectType() const override;
    ADSK_CORE_STATUSMESSAGES_API void* queryInterface(const char* id) const override;
    ADSK_CORE_STATUSMESSAGES_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual size_t count_raw() const = 0;
    virtual StatusMessage* item_raw(size_t index) const = 0;
    virtual StatusMessage* addError_raw(const char* messageId, const char* message) = 0;
    virtual StatusMessage* addWarning_raw(const char* messageId, const char* message) = 0;
};

// Inline wrappers

inline size_t StatusMessages::count() const
{
    size_t res = count_raw();
    return res;
}

inline Ptr<StatusMessage> StatusMessages::item(size_t index) const
{
    Ptr<StatusMessage> res = item_raw(index);
    return res;
}

inline Ptr<StatusMessage> StatusMessages::addError(const std::string& messageId, const std::string& message)
{
    Ptr<StatusMessage> res = addError_raw(messageId.c_str(), message.c_str());
    return res;
}

inline Ptr<StatusMessage> StatusMessages::addWarning(const std::string& messageId, const std::string& message)
{
    Ptr<StatusMessage> res = addWarning_raw(messageId.c_str(), message.c_str());
    return res;
}

template <class OutputIterator> inline void StatusMessages::copyTo(OutputIterator result)
{
    for (size_t i = 0;i < count();++i)
    {
        *result = item(i);
        ++result;
    }
}
}// namespace core
}// namespace adsk

#undef ADSK_CORE_STATUSMESSAGES_API