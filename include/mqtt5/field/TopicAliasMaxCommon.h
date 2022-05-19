// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::TopicAliasMax field.

#pragma once

#include <cstdint>

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::TopicAliasMax field.
struct TopicAliasMaxMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::TopicAliasMaxMembers::Id field.
    struct IdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::TopicAliasMaxMembers::Id field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::TopicAliasMaxMembers::Id field.
        static const char* name()
        {
            return "Id";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }


    };

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::TopicAliasMaxMembers::Value field.
    struct ValueCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::TopicAliasMaxMembers::Value field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref mqtt5::field::TopicAliasMaxMembers::Value field.
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
///     @ref mqtt5::field::TopicAliasMax field.
struct TopicAliasMaxCommon
{
    /// @brief Name of the @ref mqtt5::field::TopicAliasMax field.
    static const char* name()
    {
        return "Topic Alias Maximum";
    }

};

} // namespace field

} // namespace mqtt5

