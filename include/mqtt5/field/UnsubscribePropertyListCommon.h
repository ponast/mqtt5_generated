// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::UnsubscribePropertyList field.

#pragma once

#include <cstdint>
#include "mqtt5/field/UnsubscribePropertyCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::UnsubscribePropertyList field.
struct UnsubscribePropertyListMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::UnsubscribePropertyListMembers::UnsubscribeProperty field.
    using UnsubscribePropertyMembersCommon = mqtt5::field::UnsubscribePropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::UnsubscribePropertyListMembers::UnsubscribeProperty field.
    using UnsubscribePropertyCommon = mqtt5::field::UnsubscribePropertyCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::UnsubscribePropertyListMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::UnsubscribePropertyListMembers::Length field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::UnsubscribePropertyListMembers::Length field.
        static const char* name()
        {
            return "Length";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }


    };

};

/// @brief Common types and functions for
///     @ref mqtt5::field::UnsubscribePropertyList field.
struct UnsubscribePropertyListCommon
{
    /// @brief Name of the @ref mqtt5::field::UnsubscribePropertyList field.
    static const char* name()
    {
        return "Unsubscribe Properties";
    }

};

} // namespace field

} // namespace mqtt5

