// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"DISCONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/DisconnectReasonCode.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/ServerDisconnectProperties.h"
#include "mqtt5/message/ServerDisconnectCommon.h"
#include "mqtt5/options/DefaultOptions.h"


namespace mqtt5
{

namespace message
{


/// @brief Fields of @ref ServerDisconnect.
/// @tparam TOpt Extra options
/// @see @ref ServerDisconnect
/// @headerfile mqtt5/message/ServerDisconnect.h
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ServerDisconnectFields
{
    /// @brief Definition of <b>"Reason Code"</b> field.
    using ReasonCode =
        mqtt5::field::DisconnectReasonCode<
            TOpt
        >;


    /// @brief Definition of <b>"Server Disconnect Properties"</b> field.
    using Properties =
        mqtt5::field::ServerDisconnectProperties<
            TOpt
        >;


    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ReasonCode,
        Properties
    >;
};

/// @brief Definition of <b>"DISCONNECT"</b> message class.
/// @details
///     See @ref ServerDisconnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile mqtt5/message/ServerDisconnect.h
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class ServerDisconnect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::ServerDisconnect,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Disconnect>,
        comms::option::def::FieldsImpl<typename ServerDisconnectFields<TOpt>::All>,
        comms::option::def::MsgType<ServerDisconnect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::ServerDisconnect,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Disconnect>,
            comms::option::def::FieldsImpl<typename ServerDisconnectFields<TOpt>::All>,
            comms::option::def::MsgType<ServerDisconnect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_reasonCode index, @b Field_reasonCode type and @b field_reasonCode() access fuction
    ///         for @ref ServerDisconnectFields::ReasonCode field.
    ///     @li @b FieldIdx_properties index, @b Field_properties type and @b field_properties() access fuction
    ///         for @ref ServerDisconnectFields::Properties field.
    COMMS_MSG_FIELDS_NAMES(
        reasonCode,
        properties
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt5::message::ServerDisconnectCommon::name();
    }


};

} // namespace message

} // namespace mqtt5


