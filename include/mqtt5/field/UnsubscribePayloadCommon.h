// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::UnsubscribePayload field.

#pragma once

#include "mqtt5/field/TopicFilterCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::UnsubscribePayload field.
struct UnsubscribePayloadMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::UnsubscribePayloadMembers::TopicFilter field.
    struct TopicFilterCommon : public mqtt5::field::TopicFilterCommon
    {
        /// @brief Name of the @ref mqtt5::field::UnsubscribePayloadMembers::TopicFilter field.
        static const char* name()
        {
            return "Payload";
        }
    };
};

/// @brief Common types and functions for
///     @ref mqtt5::field::UnsubscribePayload field.
struct UnsubscribePayloadCommon
{
    /// @brief Name of the @ref mqtt5::field::UnsubscribePayload field.
    static const char* name()
    {
        return "UnsubscribePayload";
    }
};

} // namespace field

} // namespace mqtt5
