// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::SubscribeProperty field.

#pragma once

#include "mqtt5/field/PropertySubscriptionIdCommon.h"
#include "mqtt5/field/PropertyUserPropertyCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::SubscribeProperty field.
struct SubscribePropertyMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::SubscribePropertyMembers::SubscriptionId field.
    using SubscriptionIdMembersCommon = mqtt5::field::PropertySubscriptionIdMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePropertyMembers::SubscriptionId field.
    using SubscriptionIdCommon = mqtt5::field::PropertySubscriptionIdCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::SubscribePropertyMembers::UserProperty field.
    using UserPropertyMembersCommon = mqtt5::field::PropertyUserPropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePropertyMembers::UserProperty field.
    using UserPropertyCommon = mqtt5::field::PropertyUserPropertyCommon;
};

/// @brief Common types and functions for
///     @ref mqtt5::field::SubscribeProperty field.
struct SubscribePropertyCommon
{
    /// @brief Name of the @ref mqtt5::field::SubscribeProperty field.
    static const char* name()
    {
        return "Property";
    }
};

} // namespace field

} // namespace mqtt5
