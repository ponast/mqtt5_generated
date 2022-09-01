// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Payload format indicator"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertyPayloadFormatIndicatorCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref PropertyPayloadFormatIndicator field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PropertyPayloadFormatIndicatorMembers
{
    /// @brief Definition of <b>"Property ID"</b> field.
    /// @details
    ///     Defined in section 2.2.2.2.
    class Id : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::VarLength<1U, 4U>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::VarLength<1U, 4U>,
                comms::option::def::DefaultNumValue<1>,
                comms::option::def::ValidNumValue<1>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::IdCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::IdCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(1);
            return true;
        }
    };

    /// @brief Definition of <b>"Value"</b> field.
    /// @see @ref mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::ValueType
    class Value : public
        comms::field::EnumValue<
            mqtt5::field::FieldBase<>,
            mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::ValueType,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base =
            comms::field::EnumValue<
                mqtt5::field::FieldBase<>,
                mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::ValueType,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::ValueNamesMapInfo.
        using ValueNamesMapInfo = mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::valueName().
        static const char* valueName(ValueType val)
        {
            return mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::PropertyPayloadFormatIndicatorMembersCommon::ValueCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Id,
           Value
        >;
};

/// @brief Definition of <b>"Payload format indicator"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PropertyPayloadFormatIndicator : public
    comms::field::Bundle<
        mqtt5::field::FieldBase<>,
        typename PropertyPayloadFormatIndicatorMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename PropertyPayloadFormatIndicatorMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_id index, @b Field_id type and @b field_id() access function -
    ///         for mqtt5::field::PropertyPayloadFormatIndicatorMembers::Id member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for mqtt5::field::PropertyPayloadFormatIndicatorMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        id,
        value
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::PropertyPayloadFormatIndicatorCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
