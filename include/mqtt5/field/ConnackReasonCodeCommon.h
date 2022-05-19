// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::ConnackReasonCode field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace mqtt5
{

namespace field
{


/// @brief Common types and functions for
///     @ref mqtt5::field::ConnackReasonCode field.
struct ConnackReasonCodeCommon
{
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::ConnackReasonCode field.
    enum class ValueType : std::uint8_t
    {
        Success = 0, ///< value @b Success.
        UnspecifiedError = 128, ///< value <b>Unspecified error</b>.
        MalformedPacket = 129, ///< value <b>Malformed Packet</b>.
        ProtocolError = 130, ///< value <b>Protocol Error</b>.
        ImplSpecificError = 131, ///< value <b>Impl. Specific Error</b>.
        UnsupportedVersion = 132, ///< value <b>Unsupported Version</b>.
        ClientIdInvalid = 133, ///< value <b>Client ID Invalid</b>.
        BadUserPassword = 134, ///< value <b>Bad Username/Password</b>.
        NotAuthorized = 135, ///< value <b>Not authorized</b>.
        ServerUnavailable = 136, ///< value <b>Server unavailable</b>.
        ServerBusy = 137, ///< value <b>Server busy</b>.
        Banned = 138, ///< value <b>Banned</b>.
        BadAuthMethod = 140, ///< value <b>Bad auth method</b>.
        TopicNameInvalid = 144, ///< value <b>Topic Name invalid</b>.
        PacketTooLarge = 149, ///< value <b>Packet too large</b>.
        QuotaExceeded = 151, ///< value <b>Quota exceeded</b>.
        PayloadFormatInvalid = 153, ///< value <b>Payload format invalid</b>.
        RetainNotSupported = 154, ///< value <b>Retain not supported</b>.
        QosNotSupported = 155, ///< value <b>QoS not supported</b>.
        UseAnotherServer = 156, ///< value <b>Use another server</b>.
        ServerMoved = 157, ///< value <b>Server moved</b>.
        ConnectionRateExceeded = 159, ///< value <b>Connection rate exceeded</b>.

        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 159, ///< Last defined value.
        ValuesLimit = 160, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = std::pair<ValueType, const char*>;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref mqtt5::field::ConnackReasonCode field.
    static const char* name()
    {
        return "Reason Code";
    }

    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        auto namesMapInfo = valueNamesMap();
        auto begIter = namesMapInfo.first;
        auto endIter = begIter + namesMapInfo.second;
        auto iter = std::lower_bound(
            begIter, endIter, val,
            [](const ValueNameInfo& info, ValueType v) -> bool
            {
                return info.first < v;
            });

        if ((iter == endIter) || (iter->first != val)) {
            return nullptr;
        }

        return iter->second;
    }

    /// @brief Retrieve map of enum value names
    static ValueNamesMapInfo valueNamesMap()
    {
        static const ValueNameInfo Map[] = {
            std::make_pair(ValueType::Success, "Success"),
            std::make_pair(ValueType::UnspecifiedError, "Unspecified error"),
            std::make_pair(ValueType::MalformedPacket, "Malformed Packet"),
            std::make_pair(ValueType::ProtocolError, "Protocol Error"),
            std::make_pair(ValueType::ImplSpecificError, "Impl. Specific Error"),
            std::make_pair(ValueType::UnsupportedVersion, "Unsupported Version"),
            std::make_pair(ValueType::ClientIdInvalid, "Client ID Invalid"),
            std::make_pair(ValueType::BadUserPassword, "Bad Username/Password"),
            std::make_pair(ValueType::NotAuthorized, "Not authorized"),
            std::make_pair(ValueType::ServerUnavailable, "Server unavailable"),
            std::make_pair(ValueType::ServerBusy, "Server busy"),
            std::make_pair(ValueType::Banned, "Banned"),
            std::make_pair(ValueType::BadAuthMethod, "Bad auth method"),
            std::make_pair(ValueType::TopicNameInvalid, "Topic Name invalid"),
            std::make_pair(ValueType::PacketTooLarge, "Packet too large"),
            std::make_pair(ValueType::QuotaExceeded, "Quota exceeded"),
            std::make_pair(ValueType::PayloadFormatInvalid, "Payload format invalid"),
            std::make_pair(ValueType::RetainNotSupported, "Retain not supported"),
            std::make_pair(ValueType::QosNotSupported, "QoS not supported"),
            std::make_pair(ValueType::UseAnotherServer, "Use another server"),
            std::make_pair(ValueType::ServerMoved, "Server moved"),
            std::make_pair(ValueType::ConnectionRateExceeded, "Connection rate exceeded")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }


};

/// @brief Values enumerator for
///     @ref mqtt5::field::ConnackReasonCode field.
using ConnackReasonCodeVal = ConnackReasonCodeCommon::ValueType;


} // namespace field

} // namespace mqtt5

