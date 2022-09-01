// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PropertyResponseTopic field.

#pragma once

#include <cstdint>
#include "mqtt5/field/TopicNameCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::PropertyResponseTopic field.
struct PropertyResponseTopicMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PropertyResponseTopicMembers::Id field.
    struct IdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::PropertyResponseTopicMembers::Id field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::PropertyResponseTopicMembers::Id field.
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
    ///     @ref mqtt5::field::PropertyResponseTopicMembers::Value field.
    struct ValueCommon : public mqtt5::field::TopicNameCommon
    {
        /// @brief Name of the @ref mqtt5::field::PropertyResponseTopicMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref mqtt5::field::PropertyResponseTopic field.
struct PropertyResponseTopicCommon
{
    /// @brief Name of the @ref mqtt5::field::PropertyResponseTopic field.
    static const char* name()
    {
        return "Response topic";
    }
};

} // namespace field

} // namespace mqtt5
