// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::WillProperty field.

#pragma once

#include "mqtt5/field/PropertyContentTypeCommon.h"
#include "mqtt5/field/PropertyCorrelationDataCommon.h"
#include "mqtt5/field/PropertyMessageExpiryIntervalCommon.h"
#include "mqtt5/field/PropertyPayloadFormatIndicatorCommon.h"
#include "mqtt5/field/PropertyResponseTopicCommon.h"
#include "mqtt5/field/PropertyUserPropertyCommon.h"
#include "mqtt5/field/PropertyWillDelayIntervalCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::WillProperty field.
struct WillPropertyMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::WillDelayInterval field.
    using WillDelayIntervalMembersCommon = mqtt5::field::PropertyWillDelayIntervalMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::WillDelayInterval field.
    using WillDelayIntervalCommon = mqtt5::field::PropertyWillDelayIntervalCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::PayloadFormatIndicator field.
    using PayloadFormatIndicatorMembersCommon = mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::PayloadFormatIndicator field.
    using PayloadFormatIndicatorCommon = mqtt5::field::PropertyPayloadFormatIndicatorCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::MessageExpiryInterval field.
    using MessageExpiryIntervalMembersCommon = mqtt5::field::PropertyMessageExpiryIntervalMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::MessageExpiryInterval field.
    using MessageExpiryIntervalCommon = mqtt5::field::PropertyMessageExpiryIntervalCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::ContentType field.
    using ContentTypeMembersCommon = mqtt5::field::PropertyContentTypeMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::ContentType field.
    using ContentTypeCommon = mqtt5::field::PropertyContentTypeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::ResponseTopic field.
    using ResponseTopicMembersCommon = mqtt5::field::PropertyResponseTopicMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::ResponseTopic field.
    using ResponseTopicCommon = mqtt5::field::PropertyResponseTopicCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::CorrelationData field.
    using CorrelationDataMembersCommon = mqtt5::field::PropertyCorrelationDataMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::CorrelationData field.
    using CorrelationDataCommon = mqtt5::field::PropertyCorrelationDataCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertyMembers::UserProperty field.
    using UserPropertyMembersCommon = mqtt5::field::PropertyUserPropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyMembers::UserProperty field.
    using UserPropertyCommon = mqtt5::field::PropertyUserPropertyCommon;
};

/// @brief Common types and functions for
///     @ref mqtt5::field::WillProperty field.
struct WillPropertyCommon
{
    /// @brief Name of the @ref mqtt5::field::WillProperty field.
    static const char* name()
    {
        return "Property";
    }
};

} // namespace field

} // namespace mqtt5
