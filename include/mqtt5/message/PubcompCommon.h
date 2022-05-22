// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Pubcomp message and its fields.

#pragma once

#include "mqtt5/field/PacketIdentifierCommon.h"
#include "mqtt5/field/PubcompPropertiesCommon.h"
#include "mqtt5/field/PubcompReasonCodeCommon.h"

namespace mqtt5
{

namespace message
{


/// @brief Common types and functions for fields of
///     @ref mqtt5::message::Pubcomp message.
/// @see mqtt5::message::PubcompFields
struct PubcompFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubcompFields::PacketId field.
    struct PacketIdCommon : public mqtt5::field::PacketIdentifierCommon
    {
        /// @brief Name of the @ref mqtt5::message::PubcompFields::PacketId field.
        static const char* name()
        {
            return "PacketId";
        }

    };

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubcompFields::ReasonCode field.
    using ReasonCodeCommon = mqtt5::field::PubcompReasonCodeCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::PubcompFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::PubcompPropertiesMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::PubcompFields::Properties field.
    using PropertiesCommon = mqtt5::field::PubcompPropertiesCommon;

};

/// @brief Common types and functions of
///     @ref mqtt5::message::Pubcomp message.
struct PubcompCommon
{
    /// @brief Name of the @ref mqtt5::message::Pubcomp message.
    static const char* name()
    {
        return "PUBCOMP";
    }

};

} // namespace message

} // namespace mqtt5



