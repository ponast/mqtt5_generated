// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Qos"</b> field.

#pragma once

#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/QosCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Definition of <b>"Qos"</b> field.
/// @details
///     Quality of service for MQTT control packet flows. Defined in
///     section 4.3.
/// @see @ref mqtt5::field::QosCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class Qos : public
    comms::field::EnumValue<
        mqtt5::field::FieldBase<>,
        mqtt5::field::QosCommon::ValueType,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>
    >
{
    using Base =
        comms::field::EnumValue<
            mqtt5::field::FieldBase<>,
            mqtt5::field::QosCommon::ValueType,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 2>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = mqtt5::field::QosCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref mqtt5::field::QosCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = mqtt5::field::QosCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref mqtt5::field::QosCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return mqtt5::field::QosCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref mqtt5::field::QosCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return mqtt5::field::QosCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::QosCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
