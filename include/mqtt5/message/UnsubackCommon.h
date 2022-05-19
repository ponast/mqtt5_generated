// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Unsuback message and its fields.

#pragma once

#include "mqtt5/field/PacketIdCommon.h"
#include "mqtt5/field/UnsubackPropertyListCommon.h"

namespace mqtt5
{

namespace message
{


/// @brief Common types and functions for fields of
///     @ref mqtt5::message::Unsuback message.
/// @see mqtt5::message::UnsubackFields
struct UnsubackFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::UnsubackFields::PacketId field.
    using PacketIdCommon = mqtt5::field::PacketIdCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::UnsubackFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::UnsubackPropertyListMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::UnsubackFields::Properties field.
    using PropertiesCommon = mqtt5::field::UnsubackPropertyListCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::message::UnsubackFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref mqtt5::message::UnsubackFields::List field.
        static const char* name()
        {
            return "List";
        }

    };

};

/// @brief Common types and functions of
///     @ref mqtt5::message::Unsuback message.
struct UnsubackCommon
{
    /// @brief Name of the @ref mqtt5::message::Unsuback message.
    static const char* name()
    {
        return "UNSUBACK";
    }

};

} // namespace message

} // namespace mqtt5



