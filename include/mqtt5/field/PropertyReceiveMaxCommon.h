// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PropertyReceiveMax field.

#pragma once

#include <cstdint>

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::PropertyReceiveMax field.
struct PropertyReceiveMaxMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PropertyReceiveMaxMembers::Id field.
    struct IdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::PropertyReceiveMaxMembers::Id field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::PropertyReceiveMaxMembers::Id field.
        static const char* name()
        {
            return "Property ID";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PropertyReceiveMaxMembers::Value field.
    struct ValueCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::PropertyReceiveMaxMembers::Value field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref mqtt5::field::PropertyReceiveMaxMembers::Value field.
        static const char* name()
        {
            return "Value";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions for
///     @ref mqtt5::field::PropertyReceiveMax field.
struct PropertyReceiveMaxCommon
{
    /// @brief Name of the @ref mqtt5::field::PropertyReceiveMax field.
    static const char* name()
    {
        return "Receive maximum";
    }
};

} // namespace field

} // namespace mqtt5
