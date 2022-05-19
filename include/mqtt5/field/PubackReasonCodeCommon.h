// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PubackReasonCode field.

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
///     @ref mqtt5::field::PubackReasonCode field.
struct PubackReasonCodeCommon
{
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::PubackReasonCode field.
    enum class ValueType : std::uint8_t
    {
        Success = 0, ///< value @b Success.
        NoMatchingSubscribers = 16, ///< value <b>No Matching Subscribers</b>.
        UnspecifiedError = 128, ///< value <b>Unspecified error</b>.
        ImplSpecificError = 131, ///< value <b>Impl. Specific Error</b>.
        NotAuthorized = 135, ///< value <b>Not authorized</b>.
        TopicNameInvalid = 144, ///< value <b>Topic Name invalid</b>.
        PacketIdInUse = 145, ///< value <b>Packet ID in use</b>.
        QuotaExceeded = 151, ///< value <b>Quota exceeded</b>.
        PayloadFormatInvalid = 153, ///< value <b>Payload format invalid</b>.

        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 153, ///< Last defined value.
        ValuesLimit = 154, ///< Upper limit for defined values.
    };

    /// @brief Single value name info entry
    using ValueNameInfo = std::pair<ValueType, const char*>;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

    /// @brief Name of the @ref mqtt5::field::PubackReasonCode field.
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
            std::make_pair(ValueType::NoMatchingSubscribers, "No Matching Subscribers"),
            std::make_pair(ValueType::UnspecifiedError, "Unspecified error"),
            std::make_pair(ValueType::ImplSpecificError, "Impl. Specific Error"),
            std::make_pair(ValueType::NotAuthorized, "Not authorized"),
            std::make_pair(ValueType::TopicNameInvalid, "Topic Name invalid"),
            std::make_pair(ValueType::PacketIdInUse, "Packet ID in use"),
            std::make_pair(ValueType::QuotaExceeded, "Quota exceeded"),
            std::make_pair(ValueType::PayloadFormatInvalid, "Payload format invalid")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }


};

/// @brief Values enumerator for
///     @ref mqtt5::field::PubackReasonCode field.
using PubackReasonCodeVal = PubackReasonCodeCommon::ValueType;


} // namespace field

} // namespace mqtt5

