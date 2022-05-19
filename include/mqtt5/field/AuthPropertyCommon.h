// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::AuthProperty field.

#pragma once

#include "mqtt5/field/AuthDataCommon.h"
#include "mqtt5/field/AuthMethodCommon.h"
#include "mqtt5/field/ReasonStrCommon.h"
#include "mqtt5/field/UserPropertyCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::AuthProperty field.
struct AuthPropertyMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::AuthPropertyMembers::AuthMethod field.
    using AuthMethodMembersCommon = mqtt5::field::AuthMethodMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::AuthPropertyMembers::AuthMethod field.
    using AuthMethodCommon = mqtt5::field::AuthMethodCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::AuthPropertyMembers::AuthData field.
    using AuthDataMembersCommon = mqtt5::field::AuthDataMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::AuthPropertyMembers::AuthData field.
    using AuthDataCommon = mqtt5::field::AuthDataCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::AuthPropertyMembers::ReasonStr field.
    using ReasonStrMembersCommon = mqtt5::field::ReasonStrMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::AuthPropertyMembers::ReasonStr field.
    using ReasonStrCommon = mqtt5::field::ReasonStrCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::AuthPropertyMembers::UserProperty field.
    using UserPropertyMembersCommon = mqtt5::field::UserPropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::AuthPropertyMembers::UserProperty field.
    using UserPropertyCommon = mqtt5::field::UserPropertyCommon;

};

/// @brief Common types and functions for
///     @ref mqtt5::field::AuthProperty field.
struct AuthPropertyCommon
{
    /// @brief Name of the @ref mqtt5::field::AuthProperty field.
    static const char* name()
    {
        return "";
    }

};

} // namespace field

} // namespace mqtt5

