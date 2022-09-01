// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Protocol version"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/ProtocolVersionCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Protocol version"</b> field.
/// @details
///     Defined in section 3.1.2.2.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ProtocolVersion : public
    comms::field::IntValue<
        mqtt5::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::def::DefaultNumValue<5>,
        comms::option::def::ValidNumValue<5>
    >
{
    using Base =
        comms::field::IntValue<
            mqtt5::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...,
            comms::option::def::DefaultNumValue<5>,
            comms::option::def::ValidNumValue<5>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return mqtt5::field::ProtocolVersionCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::ProtocolVersionCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
