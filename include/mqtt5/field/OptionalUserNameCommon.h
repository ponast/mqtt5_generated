// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::OptionalUserName field.

#pragma once

#include "mqtt5/field/Utf8StringCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::OptionalUserName field.
struct OptionalUserNameMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::OptionalUserNameMembers::UserName field.
    struct UserNameCommon : public mqtt5::field::Utf8StringCommon
    {
        /// @brief Name of the @ref mqtt5::field::OptionalUserNameMembers::UserName field.
        static const char* name()
        {
            return "User Name";
        }

    };

};

/// @brief Common types and functions for
///     @ref mqtt5::field::OptionalUserName field.
struct OptionalUserNameCommon
{
    /// @brief Name of the @ref mqtt5::field::OptionalUserName field.
    static const char* name()
    {
        return "User Name";
    }

};

} // namespace field

} // namespace mqtt5

