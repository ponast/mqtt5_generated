// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"BinDataLength"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/BinDataLengthCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Definition of <b>"BinDataLength"</b> field.
/// @details
///     Defined in section 1.5.6.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class BinDataLength : public
    comms::field::IntValue<
        mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::UnitsBytes
    >
{
    using Base =
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::UnitsBytes
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return mqtt5::field::BinDataLengthCommon::hasSpecials();
    }


    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::BinDataLengthCommon::name();
    }


};


} // namespace field

} // namespace mqtt5
