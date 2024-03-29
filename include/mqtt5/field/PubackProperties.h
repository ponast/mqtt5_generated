// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Properties"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PubackPropertiesCommon.h"
#include "mqtt5/field/PubackProperty.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref PubackProperties field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PubackPropertiesMembers
{
    /// @brief Definition of <b>"Property"</b> field.
    using Property =
        mqtt5::field::PubackProperty<
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
            return mqtt5::field::PubackPropertiesMembersCommon::LengthCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::PubackPropertiesMembersCommon::LengthCommon::name();
        }
    };
};

/// @brief Definition of <b>"Properties"</b> field.
/// @details
///     Defined in section 3.4.2.2.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PubackProperties : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        typename PubackPropertiesMembers<TOpt>::Property,
        TExtraOpts...,
        typename TOpt::field::PubackProperties,
        comms::option::def::SequenceSerLengthFieldPrefix<typename PubackPropertiesMembers<TOpt>::Length>
    >
{
    using Base =
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            typename PubackPropertiesMembers<TOpt>::Property,
            TExtraOpts...,
            typename TOpt::field::PubackProperties,
            comms::option::def::SequenceSerLengthFieldPrefix<typename PubackPropertiesMembers<TOpt>::Length>
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::PubackPropertiesCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
