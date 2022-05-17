// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"PUBREC"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PacketId.h"
#include "mqtt5/field/PubackPropertyList.h"
#include "mqtt5/field/PubackReasonCode.h"
#include "mqtt5/message/PubrecCommon.h"
#include "mqtt5/options/DefaultOptions.h"


namespace mqtt5
{

namespace message
{


/// @brief Fields of @ref Pubrec.
/// @tparam TOpt Extra options
/// @see @ref Pubrec
/// @headerfile mqtt5/message/Pubrec.h
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PubrecFields
{
    /// @brief Definition of <b>"Packet ID"</b> field.
    using PacketId =
        mqtt5::field::PacketId<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Reason Code"</b> field.
    using ReasonCode =
        mqtt5::field::PubackReasonCode<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Handshake Properties"</b> field.
    using Properties =
        mqtt5::field::PubackPropertyList<
            TOpt
        >;
    
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PacketId,
        ReasonCode,
        Properties
    >;
};

/// @brief Definition of <b>"PUBREC"</b> message class.
/// @details
///     See @ref PubrecFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile mqtt5/message/Pubrec.h
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Pubrec : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Pubrec>,
        comms::option::def::FieldsImpl<typename PubrecFields<TOpt>::All>,
        comms::option::def::MsgType<Pubrec<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Pubrec>,
            comms::option::def::FieldsImpl<typename PubrecFields<TOpt>::All>,
            comms::option::def::MsgType<Pubrec<TMsgBase, TOpt> >,
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
    ///         for @ref PubrecFields::PacketId field.
    ///     @li @b FieldIdx_reasonCode index, @b Field_reasonCode type and @b field_reasonCode() access fuction
    ///         for @ref PubrecFields::ReasonCode field.
    ///     @li @b FieldIdx_properties index, @b Field_properties type and @b field_properties() access fuction
    ///         for @ref PubrecFields::Properties field.
    COMMS_MSG_FIELDS_NAMES(
        packetId,
        reasonCode,
        properties
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt5::message::PubrecCommon::name();
    }
    
    /// @brief Updated validity check
    bool doValid() const
    {
        return Base::doValid() && Base::flagsZeroed();
    }
    

};

} // namespace message

} // namespace mqtt5


