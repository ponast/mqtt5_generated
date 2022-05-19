// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Reason Code"</b> field.

#pragma once

#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/DisconnectReasonCodeCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Definition of <b>"Reason Code"</b> field.
/// @see @ref mqtt5::field::DisconnectReasonCodeCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class DisconnectReasonCode : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        mqtt5::field::DisconnectReasonCodeCommon::ValueType,
        TExtraOpts...
    >
{
    using Base =
        comms::field::EnumValue<
            mqtt5::field::FieldBase<>,
            mqtt5::field::DisconnectReasonCodeCommon::ValueType,
            TExtraOpts...
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = mqtt5::field::DisconnectReasonCodeCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref mqtt5::field::DisconnectReasonCodeCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = mqtt5::field::DisconnectReasonCodeCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref mqtt5::field::DisconnectReasonCodeCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return mqtt5::field::DisconnectReasonCodeCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::value());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref mqtt5::field::DisconnectReasonCodeCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return mqtt5::field::DisconnectReasonCodeCommon::valueNamesMap();
    }


    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::DisconnectReasonCodeCommon::name();
    }

    /// @brief Generated validity check functionality.
    bool valid() const
    {
        if (!Base::valid()) {
            return false;
        }

        static const ValueType Values[] = {
            ValueType::NormalDisconnection,
            ValueType::DisconnectWithWill,
            ValueType::UnspecifiedError,
            ValueType::MalformedPacket,
            ValueType::ProtocolError,
            ValueType::ImplSpecificError,
            ValueType::NotAuthorized,
            ValueType::ServerBusy,
            ValueType::ServerShuttingDown,
            ValueType::KeepAliveTimeout,
            ValueType::SessionTakenOver,
            ValueType::TopicFilterInvalid,
            ValueType::TopicNameInvalid,
            ValueType::ReceiveMaxExceeded,
            ValueType::TopicAliasInvalid,
            ValueType::PacketTooLarge,
            ValueType::MsgRateTooHigh,
            ValueType::QuotaExceeded,
            ValueType::AdministrativeAction,
            ValueType::PayloadFormatInvalid,
            ValueType::RetainNotSupported,
            ValueType::QosNotSupported,
            ValueType::UseAnotherServer,
            ValueType::ServerMoved,
            ValueType::SharedSubNotSuppored,
            ValueType::ConnectionRateExceeded,
            ValueType::MaxConnectTime,
            ValueType::SubIdsNotSupported,
            ValueType::WildcardSubsNotSupported
        };

        auto iter =
            std::lower_bound(std::begin(Values), std::end(Values), Base::value());

        if ((iter == std::end(Values)) || (*iter != Base::value())) {
            return false;
        }

        return true;

    }



};


} // namespace field

} // namespace mqtt5

