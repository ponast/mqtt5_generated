// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"UNSUBACK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketIdentifier.h"
#include "mqtt5/field/UnsubackPayload.h"
#include "mqtt5/field/UnsubackProperties.h"
#include "mqtt5/message/UnsubackCommon.h"
#include "mqtt5/options/DefaultOptions.h"


namespace mqtt5
{

namespace message
{


/// @brief Fields of @ref Unsuback.
/// @tparam TOpt Extra options
/// @see @ref Unsuback
/// @headerfile mqtt5/message/Unsuback.h
template <typename TOpt = mqtt5::options::DefaultOptions>
struct UnsubackFields
{
    /// @brief Definition of <b>"PacketId"</b> field.
    class PacketId : public
        mqtt5::field::PacketIdentifier<
            TOpt
        >
    {
        using Base =
            mqtt5::field::PacketIdentifier<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::UnsubackFieldsCommon::PacketIdCommon::name();
        }


    };


    /// @brief Definition of <b>"Puback Properties"</b> field.
    using Properties =
        mqtt5::field::UnsubackProperties<
            TOpt
        >;


    /// @brief Definition of <b>"Payload"</b> field.
    class Payload : public
        mqtt5::field::UnsubackPayload<
            TOpt
        >
    {
        using Base =
            mqtt5::field::UnsubackPayload<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::UnsubackFieldsCommon::PayloadCommon::name();
        }


    };


    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        Properties,
        Payload
    >;
};

/// @brief Definition of <b>"UNSUBACK"</b> message class.
/// @details
///     See @ref UnsubackFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile mqtt5/message/Unsuback.h
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Unsuback : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Unsuback,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Unsuback>,
        comms::option::def::FieldsImpl<typename UnsubackFields<TOpt>::All>,
        comms::option::def::MsgType<Unsuback<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Unsuback,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Unsuback>,
            comms::option::def::FieldsImpl<typename UnsubackFields<TOpt>::All>,
            comms::option::def::MsgType<Unsuback<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_packetId index, @b Field_packetId type and @b field_packetId() access fuction
    ///         for @ref UnsubackFields::PacketId field.
    ///     @li @b FieldIdx_properties index, @b Field_properties type and @b field_properties() access fuction
    ///         for @ref UnsubackFields::Properties field.
    ///     @li @b FieldIdx_payload index, @b Field_payload type and @b field_payload() access fuction
    ///         for @ref UnsubackFields::Payload field.
    COMMS_MSG_FIELDS_NAMES(
        packetId,
        properties,
        payload
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt5::message::UnsubackCommon::name();
    }

    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }


};

} // namespace message

} // namespace mqtt5


