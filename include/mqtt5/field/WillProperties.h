// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Will properties"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/WillPropertiesCommon.h"
#include "mqtt5/field/WillProperty.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref WillProperties field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct WillPropertiesMembers
{
    /// @brief Definition of <b>"Property"</b> field.
    using WillProperty =
        mqtt5::field::WillProperty<
            TOpt
        >;

    /// @brief Definition of <b>"Length"</b> field.
    /// @details
    ///     Defined in section 2.2.2.1.
    class Length : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::VarLength<1U, 4U>,
            comms::option::def::UnitsBytes
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::VarLength<1U, 4U>,
                comms::option::def::UnitsBytes
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::WillPropertiesMembersCommon::LengthCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::WillPropertiesMembersCommon::LengthCommon::name();
        }
    };
};

/// @brief Definition of <b>"Will properties"</b> field.
/// @details
///     Defined in section 3.1.3.2.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class WillProperties : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        typename WillPropertiesMembers<TOpt>::WillProperty,
        TExtraOpts...,
        typename TOpt::field::WillProperties,
        comms::option::def::SequenceSerLengthFieldPrefix<typename WillPropertiesMembers<TOpt>::Length>
    >
{
    using Base =
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            typename WillPropertiesMembers<TOpt>::WillProperty,
            TExtraOpts...,
            typename TOpt::field::WillProperties,
            comms::option::def::SequenceSerLengthFieldPrefix<typename WillPropertiesMembers<TOpt>::Length>
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::WillPropertiesCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
