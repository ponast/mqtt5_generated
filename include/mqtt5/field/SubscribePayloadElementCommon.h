// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::SubscribePayloadElement field.

#pragma once

#include "mqtt5/field/SubscribeOptionsCommon.h"
#include "mqtt5/field/TopicFilterCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::SubscribePayloadElement field.
struct SubscribePayloadElementMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePayloadElementMembers::TopicFilter field.
    using TopicFilterCommon = mqtt5::field::TopicFilterCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::SubscribePayloadElementMembers::SubscribeOptions field.
    using SubscribeOptionsMembersCommon = mqtt5::field::SubscribeOptionsMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePayloadElementMembers::SubscribeOptions field.
    using SubscribeOptionsCommon = mqtt5::field::SubscribeOptionsCommon;

};

/// @brief Common types and functions for
///     @ref mqtt5::field::SubscribePayloadElement field.
struct SubscribePayloadElementCommon
{
    /// @brief Name of the @ref mqtt5::field::SubscribePayloadElement field.
    static const char* name()
    {
        return "";
    }

};

} // namespace field

} // namespace mqtt5

