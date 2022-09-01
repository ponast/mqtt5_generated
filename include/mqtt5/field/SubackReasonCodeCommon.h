// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::SubackReasonCode field.

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
///     @ref mqtt5::field::SubackReasonCode field.
struct SubackReasonCodeCommon
{
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::SubackReasonCode field.
    enum class ValueType : std::uint8_t
    {
        GrantedQos0 = 0, ///< value <b>Granted QoS0</b>.
        GrantedQos1 = 1, ///< value <b>Granted QoS1</b>.
        GrantedQos2 = 2, ///< value <b>Granted QoS2</b>.
        UnspecifiedError = 128, ///< value <b>Unspecified error</b>.
        ImplSpecificError = 131, ///< value <b>Implementation specific error</b>.
        NotAuthorized = 135, ///< value <b>Not authorized</b>.
        TopicFilterInvalid = 143, ///< value <b>Topic filter invalid</b>.
        PacketIdInUse = 145, ///< value <b>Packet ID in use</b>.
        QuotaExceeded = 151, ///< value <b>Quota exceeded</b>.
        SharedSubNotSuppored = 158, ///< value <b>Shared subscriptions not supported</b>.
        SubIdsNotSupported = 161, ///< value <b>Subscription ID:s not supported</b>.
        WildcardSubsNotSupported = 162, ///< value <b>Wildcard subscriptions not supported</b>.

        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 162, ///< Last defined value.
        ValuesLimit = 163, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = std::pair<ValueType, const char*>;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref mqtt5::field::SubackReasonCode field.
    static const char* name()
    {
        return "Reason code";
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
            std::make_pair(ValueType::GrantedQos0, "Granted QoS0"),
            std::make_pair(ValueType::GrantedQos1, "Granted QoS1"),
            std::make_pair(ValueType::GrantedQos2, "Granted QoS2"),
            std::make_pair(ValueType::UnspecifiedError, "Unspecified error"),
            std::make_pair(ValueType::ImplSpecificError, "Implementation specific error"),
            std::make_pair(ValueType::NotAuthorized, "Not authorized"),
            std::make_pair(ValueType::TopicFilterInvalid, "Topic filter invalid"),
            std::make_pair(ValueType::PacketIdInUse, "Packet ID in use"),
            std::make_pair(ValueType::QuotaExceeded, "Quota exceeded"),
            std::make_pair(ValueType::SharedSubNotSuppored, "Shared subscriptions not supported"),
            std::make_pair(ValueType::SubIdsNotSupported, "Subscription ID:s not supported"),
            std::make_pair(ValueType::WildcardSubsNotSupported, "Wildcard subscriptions not supported")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

/// @brief Values enumerator for
///     @ref mqtt5::field::SubackReasonCode field.
using SubackReasonCodeVal = SubackReasonCodeCommon::ValueType;

} // namespace field

} // namespace mqtt5
