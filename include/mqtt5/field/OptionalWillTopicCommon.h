// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::OptionalWillTopic field.

#pragma once

#include "mqtt5/field/TopicNameCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::OptionalWillTopic field.
struct OptionalWillTopicMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::OptionalWillTopicMembers::WillTopic field.
    struct WillTopicCommon : public mqtt5::field::TopicNameCommon
    {
        /// @brief Name of the @ref mqtt5::field::OptionalWillTopicMembers::WillTopic field.
        static const char* name()
        {
            return "Will topic";
        }
    };
};

/// @brief Common types and functions for
///     @ref mqtt5::field::OptionalWillTopic field.
struct OptionalWillTopicCommon
{
    /// @brief Name of the @ref mqtt5::field::OptionalWillTopic field.
    static const char* name()
    {
        return "Will topic";
    }
};

} // namespace field

} // namespace mqtt5
