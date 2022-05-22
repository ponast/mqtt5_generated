// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::WillProperties field.

#pragma once

#include <cstdint>
#include "mqtt5/field/WillPropertyCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::WillProperties field.
struct WillPropertiesMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::WillPropertiesMembers::WillProperty field.
    using WillPropertyMembersCommon = mqtt5::field::WillPropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertiesMembers::WillProperty field.
    using WillPropertyCommon = mqtt5::field::WillPropertyCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertiesMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::WillPropertiesMembers::Length field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref mqtt5::field::WillPropertiesMembers::Length field.
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
///     @ref mqtt5::field::WillProperties field.
struct WillPropertiesCommon
{
    /// @brief Name of the @ref mqtt5::field::WillProperties field.
    static const char* name()
    {
        return "Will Properties";
    }

};

} // namespace field

} // namespace mqtt5
