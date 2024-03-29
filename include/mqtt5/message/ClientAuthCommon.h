// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::ClientAuth message and its fields.

#pragma once

#include "mqtt5/field/AuthPropertiesCommon.h"
#include "mqtt5/field/ClientAuthReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of
///     @ref mqtt5::message::ClientAuth message.
/// @see mqtt5::message::ClientAuthFields
struct ClientAuthFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::ClientAuthFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::ClientAuthReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::ClientAuthFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::AuthPropertiesMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::ClientAuthFields::Properties field.
    struct PropertiesCommon : public mqtt5::field::AuthPropertiesCommon
    {
        /// @brief Name of the @ref mqtt5::message::ClientAuthFields::Properties field.
        static const char* name()
        {
            return "Properties";
        }
    };
};

/// @brief Common types and functions of
///     @ref mqtt5::message::ClientAuth message.
struct ClientAuthCommon
{
    /// @brief Name of the @ref mqtt5::message::ClientAuth message.
    static const char* name()
    {
        return "CLIENT AUTH";
    }
};

} // namespace message

} // namespace mqtt5
