// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Subscribe message and its fields.

#pragma once

#include "mqtt5/field/PacketIdentifierCommon.h"
#include "mqtt5/field/SubscribePayloadCommon.h"
#include "mqtt5/field/SubscribePropertiesCommon.h"

namespace mqtt5
{

namespace message
{

/// @brief Common types and functions for fields of
///     @ref mqtt5::message::Subscribe message.
/// @see mqtt5::message::SubscribeFields
struct SubscribeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::PacketId field.
    struct PacketIdCommon : public mqtt5::field::PacketIdentifierCommon
    {
        /// @brief Name of the @ref mqtt5::message::SubscribeFields::PacketId field.
        static const char* name()
        {
            return "Packet ID";
        }
    };

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::SubscribeFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::SubscribePropertiesMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::Properties field.
    struct PropertiesCommon : public mqtt5::field::SubscribePropertiesCommon
    {
        /// @brief Name of the @ref mqtt5::message::SubscribeFields::Properties field.
        static const char* name()
        {
            return "Properties";
        }
    };

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::SubscribeFields::Payload field.
    using PayloadMembersCommon = mqtt5::field::SubscribePayloadMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::Payload field.
    struct PayloadCommon : public mqtt5::field::SubscribePayloadCommon
    {
        /// @brief Name of the @ref mqtt5::message::SubscribeFields::Payload field.
        static const char* name()
        {
            return "Payload";
        }
    };
};

/// @brief Common types and functions of
///     @ref mqtt5::message::Subscribe message.
struct SubscribeCommon
{
    /// @brief Name of the @ref mqtt5::message::Subscribe message.
    static const char* name()
    {
        return "SUBSCRIBE";
    }
};

} // namespace message

} // namespace mqtt5
