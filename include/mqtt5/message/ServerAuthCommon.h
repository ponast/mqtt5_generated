// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::ServerAuth message and its fields.

#pragma once

#include "mqtt5/field/AuthPropertiesCommon.h"
#include "mqtt5/field/ServerAuthReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of
///     @ref mqtt5::message::ServerAuth message.
/// @see mqtt5::message::ServerAuthFields
struct ServerAuthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::ServerAuthFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::ServerAuthReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::ServerAuthFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::AuthPropertiesMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::ServerAuthFields::Properties field.
    struct PropertiesCommon : public mqtt5::field::AuthPropertiesCommon
    {
        /// @brief Name of the @ref mqtt5::message::ServerAuthFields::Properties field.
        static const char* name()
        {
            return "Properties";
        }
    };
};

/// @brief Common types and functions of
///     @ref mqtt5::message::ServerAuth message.
struct ServerAuthCommon
{
    /// @brief Name of the @ref mqtt5::message::ServerAuth message.
    static const char* name()
    {
        return "SERVER AUTH";
    }
};

} // namespace message

} // namespace mqtt5
