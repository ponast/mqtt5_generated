// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PropertyContentType field.

#pragma once

#include <cstdint>
#include "mqtt5/field/Utf8StringCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::PropertyContentType field.
struct PropertyContentTypeMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PropertyContentTypeMembers::Id field.
    struct IdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::PropertyContentTypeMembers::Id field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::PropertyContentTypeMembers::Id field.
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
    ///     @ref mqtt5::field::PropertyContentTypeMembers::Value field.
    struct ValueCommon : public mqtt5::field::Utf8StringCommon
    {
        /// @brief Name of the @ref mqtt5::field::PropertyContentTypeMembers::Value field.
        static const char* name()
        {
            return "Value";
        }
    };
};

/// @brief Common types and functions for
///     @ref mqtt5::field::PropertyContentType field.
struct PropertyContentTypeCommon
{
    /// @brief Name of the @ref mqtt5::field::PropertyContentType field.
    static const char* name()
    {
        return "Content type";
    }
};

} // namespace field

} // namespace mqtt5
