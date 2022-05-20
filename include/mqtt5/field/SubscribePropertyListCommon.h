// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::SubscribePropertyList field.

#pragma once

#include <cstdint>
#include "mqtt5/field/SubscribePropertyCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::SubscribePropertyList field.
struct SubscribePropertyListMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::SubscribePropertyListMembers::SubscribeProperty field.
    using SubscribePropertyMembersCommon = mqtt5::field::SubscribePropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePropertyListMembers::SubscribeProperty field.
    using SubscribePropertyCommon = mqtt5::field::SubscribePropertyCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::SubscribePropertyListMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::SubscribePropertyListMembers::Length field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::SubscribePropertyListMembers::Length field.
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
///     @ref mqtt5::field::SubscribePropertyList field.
struct SubscribePropertyListCommon
{
    /// @brief Name of the @ref mqtt5::field::SubscribePropertyList field.
    static const char* name()
    {
        return "Subscribe Properties";
    }

};

} // namespace field

} // namespace mqtt5

