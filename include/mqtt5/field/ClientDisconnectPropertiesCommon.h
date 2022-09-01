// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::ClientDisconnectProperties field.

#pragma once

#include <cstdint>
#include "mqtt5/field/ClientDisconnectPropertyCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::ClientDisconnectProperties field.
struct ClientDisconnectPropertiesMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertiesMembers::ClientDisconnectProperty field.
    using ClientDisconnectPropertyMembersCommon = mqtt5::field::ClientDisconnectPropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertiesMembers::ClientDisconnectProperty field.
    using ClientDisconnectPropertyCommon = mqtt5::field::ClientDisconnectPropertyCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertiesMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::ClientDisconnectPropertiesMembers::Length field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::ClientDisconnectPropertiesMembers::Length field.
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
///     @ref mqtt5::field::ClientDisconnectProperties field.
struct ClientDisconnectPropertiesCommon
{
    /// @brief Name of the @ref mqtt5::field::ClientDisconnectProperties field.
    static const char* name()
    {
        return "Client disconnect properties";
    }
};

} // namespace field

} // namespace mqtt5
