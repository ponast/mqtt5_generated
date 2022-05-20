// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::SubscribePayload field.

#pragma once

#include "mqtt5/field/SubscribePayloadElementCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::SubscribePayload field.
struct SubscribePayloadMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::SubscribePayloadMembers::Element field.
    using ElementMembersCommon = mqtt5::field::SubscribePayloadElementMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePayloadMembers::Element field.
    using ElementCommon = mqtt5::field::SubscribePayloadElementCommon;

};

/// @brief Common types and functions for
///     @ref mqtt5::field::SubscribePayload field.
struct SubscribePayloadCommon
{
    /// @brief Name of the @ref mqtt5::field::SubscribePayload field.
    static const char* name()
    {
        return "SubscribePayload";
    }

};

} // namespace field

} // namespace mqtt5
