// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Puback message and its fields.

#pragma once

#include "mqtt5/field/PacketIdentifierCommon.h"
#include "mqtt5/field/PubackPropertiesCommon.h"
#include "mqtt5/field/PubackReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of
///     @ref mqtt5::message::Puback message.
/// @see mqtt5::message::PubackFields
struct PubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubackFields::PacketId field.
    struct PacketIdCommon : public mqtt5::field::PacketIdentifierCommon
    {
        /// @brief Name of the @ref mqtt5::message::PubackFields::PacketId field.
        static const char* name()
        {
            return "Packet ID";
        }
    };

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubackFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::PubackReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::PubackFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::PubackPropertiesMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubackFields::Properties field.
    using PropertiesCommon = mqtt5::field::PubackPropertiesCommon;
};

/// @brief Common types and functions of
///     @ref mqtt5::message::Puback message.
struct PubackCommon
{
    /// @brief Name of the @ref mqtt5::message::Puback message.
    static const char* name()
    {
        return "PUBACK";
    }
};

} // namespace message

} // namespace mqtt5
