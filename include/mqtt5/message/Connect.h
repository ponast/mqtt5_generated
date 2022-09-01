// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"CONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqtt5/MsgId.h"
#include "mqtt5/field/ClientId.h"
#include "mqtt5/field/ConnectFlags.h"
#include "mqtt5/field/ConnectProperties.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/KeepAlive.h"
#include "mqtt5/field/OptionalPassword.h"
#include "mqtt5/field/OptionalUserName.h"
#include "mqtt5/field/OptionalWillPayload.h"
#include "mqtt5/field/OptionalWillProperties.h"
#include "mqtt5/field/OptionalWillTopic.h"
#include "mqtt5/field/ProtocolName.h"
#include "mqtt5/field/ProtocolVersion.h"
#include "mqtt5/message/ConnectCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace message
{

/// @brief Fields of @ref Connect.
/// @tparam TOpt Extra options
/// @see @ref Connect
/// @headerfile mqtt5/message/Connect.h
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ConnectFields
{
    /// @brief Definition of <b>"Protocol name"</b> field.
    using ProtocolName =
        mqtt5::field::ProtocolName<
            TOpt
        >;

    /// @brief Definition of <b>"Protocol version"</b> field.
    using ProtocolVersion =
        mqtt5::field::ProtocolVersion<
            TOpt
        >;

    /// @brief Definition of <b>"Flags"</b> field.
    class Flags : public
        mqtt5::field::ConnectFlags<
            TOpt
        >
    {
        using Base =
            mqtt5::field::ConnectFlags<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::ConnectFieldsCommon::FlagsCommon::name();
        }
    };

    /// @brief Definition of <b>"Keep alive"</b> field.
    using KeepAlive =
        mqtt5::field::KeepAlive<
            TOpt
        >;

    /// @brief Definition of <b>"Properties"</b> field.
    using Properties =
        mqtt5::field::ConnectProperties<
            TOpt
        >;

    /// @brief Definition of <b>"Client ID"</b> field.
    using ClientId =
        mqtt5::field::ClientId<
            TOpt
        >;

    /// @brief Definition of <b>"Will properties"</b> field.
    using WillProperties =
        mqtt5::field::OptionalWillProperties<
            TOpt
        >;

    /// @brief Definition of <b>"Will topic"</b> field.
    using WillTopic =
        mqtt5::field::OptionalWillTopic<
            TOpt
        >;

    /// @brief Definition of <b>"Will payload"</b> field.
    using WillPayload =
        mqtt5::field::OptionalWillPayload<
            TOpt
        >;

    /// @brief Definition of <b>"User name"</b> field.
    using UserName =
        mqtt5::field::OptionalUserName<
            TOpt
        >;

    /// @brief Definition of <b>"Password"</b> field.
    class Password : public
        mqtt5::field::OptionalPassword<
            TOpt
        >
    {
        using Base =
            mqtt5::field::OptionalPassword<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::message::ConnectFieldsCommon::PasswordCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ProtocolName,
        ProtocolVersion,
        Flags,
        KeepAlive,
        Properties,
        ClientId,
        WillProperties,
        WillTopic,
        WillPayload,
        UserName,
        Password
    >;
};

/// @brief Definition of <b>"CONNECT"</b> message class.
/// @details
///     See @ref ConnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile mqtt5/message/Connect.h
template <typename TMsgBase, typename TOpt = mqtt5::options::DefaultOptions>
class Connect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connect,
        comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Connect>,
        comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
        comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connect,
            comms::option::def::StaticNumIdImpl<mqtt5::MsgId_Connect>,
            comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
            comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_protocolName index, @b Field_protocolName type and @b field_protocolName() access fuction
    ///         for @ref ConnectFields::ProtocolName field.
    ///     @li @b FieldIdx_protocolVersion index, @b Field_protocolVersion type and @b field_protocolVersion() access fuction
    ///         for @ref ConnectFields::ProtocolVersion field.
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref ConnectFields::Flags field.
    ///     @li @b FieldIdx_keepAlive index, @b Field_keepAlive type and @b field_keepAlive() access fuction
    ///         for @ref ConnectFields::KeepAlive field.
    ///     @li @b FieldIdx_properties index, @b Field_properties type and @b field_properties() access fuction
    ///         for @ref ConnectFields::Properties field.
    ///     @li @b FieldIdx_clientId index, @b Field_clientId type and @b field_clientId() access fuction
    ///         for @ref ConnectFields::ClientId field.
    ///     @li @b FieldIdx_willProperties index, @b Field_willProperties type and @b field_willProperties() access fuction
    ///         for @ref ConnectFields::WillProperties field.
    ///     @li @b FieldIdx_willTopic index, @b Field_willTopic type and @b field_willTopic() access fuction
    ///         for @ref ConnectFields::WillTopic field.
    ///     @li @b FieldIdx_willPayload index, @b Field_willPayload type and @b field_willPayload() access fuction
    ///         for @ref ConnectFields::WillPayload field.
    ///     @li @b FieldIdx_userName index, @b Field_userName type and @b field_userName() access fuction
    ///         for @ref ConnectFields::UserName field.
    ///     @li @b FieldIdx_password index, @b Field_password type and @b field_password() access fuction
    ///         for @ref ConnectFields::Password field.
    COMMS_MSG_FIELDS_NAMES(
        protocolName,
        protocolVersion,
        flags,
        keepAlive,
        properties,
        clientId,
        willProperties,
        willTopic,
        willPayload,
        userName,
        password
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 9U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return mqtt5::message::ConnectCommon::name();
    }

    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_clientId>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        doRefresh();
        return Base::template doReadFrom<FieldIdx_clientId>(iter, len);
    }

    /// @brief Updated validity check
    bool doValid() const
    {
        if ((!Base::doValid()) || (!Base::flagsZeroed())) {
            return false;
        }

        return
            (!field_flags().field_high().getBitValue_passwordFlag()) ||
            (field_flags().field_high().getBitValue_userNameFlag());
    }

    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_willProperties() || updated;
        updated = refresh_willTopic() || updated;
        updated = refresh_willPayload() || updated;
        updated = refresh_userName() || updated;
        updated = refresh_password() || updated;
        return updated;
    }

private:
    template <typename TOptField>
    static bool refreshOptionalField(bool exists, TOptField& optField)
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (exists) {
            mode = comms::field::OptionalMode::Exists;
        }

        if (optField.getMode() == mode) {
            return false;
        }

        optField.setMode(mode);
        return true;
    }

    bool refresh_willProperties()
    {
        return refreshOptionalField(field_flags().field_low().getBitValue_willFlag(), field_willProperties());
    }

    bool refresh_willTopic()
    {
        return refreshOptionalField(field_flags().field_low().getBitValue_willFlag(), field_willTopic());
    }

    bool refresh_willPayload()
    {
        return refreshOptionalField(field_flags().field_low().getBitValue_willFlag(), field_willPayload());
    }

    bool refresh_userName()
    {
        return refreshOptionalField(field_flags().field_high().getBitValue_userNameFlag(), field_userName());
    }

    bool refresh_password()
    {
        return refreshOptionalField(field_flags().field_high().getBitValue_passwordFlag(), field_password());
    }
};

} // namespace message

} // namespace mqtt5
