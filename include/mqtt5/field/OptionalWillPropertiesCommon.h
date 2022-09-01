// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::OptionalWillProperties field.

#pragma once

#include "mqtt5/field/WillPropertiesCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::OptionalWillProperties field.
struct OptionalWillPropertiesMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::OptionalWillPropertiesMembers::WillProperties field.
    using WillPropertiesMembersCommon = mqtt5::field::WillPropertiesMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::OptionalWillPropertiesMembers::WillProperties field.
    using WillPropertiesCommon = mqtt5::field::WillPropertiesCommon;
};

/// @brief Common types and functions for
///     @ref mqtt5::field::OptionalWillProperties field.
struct OptionalWillPropertiesCommon
{
    /// @brief Name of the @ref mqtt5::field::OptionalWillProperties field.
    static const char* name()
    {
        return "Will properties";
    }
};

} // namespace field

} // namespace mqtt5
