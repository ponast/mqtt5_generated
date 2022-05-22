// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Topic Alias Maximum"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertyTopicAliasMaxCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref PropertyTopicAliasMax field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PropertyTopicAliasMaxMembers
{
    /// @brief Definition of <b>"Id"</b> field.
    /// @details
    ///     Defined in section 2.2.2.2.
    class Id : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::VarLength<1U, 4U>,
            comms::option::def::DefaultNumValue<34>,
            comms::option::def::ValidNumValue<34>
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::VarLength<1U, 4U>,
                comms::option::def::DefaultNumValue<34>,
                comms::option::def::ValidNumValue<34>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::PropertyTopicAliasMaxMembersCommon::IdCommon::hasSpecials();
        }


        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::PropertyTopicAliasMaxMembersCommon::IdCommon::name();
        }


    };


    /// @brief Definition of <b>"Value"</b> field.
    /// @details
    ///     Defined in section 1.5.2.
    class Value : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint16_t
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint16_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::PropertyTopicAliasMaxMembersCommon::ValueCommon::hasSpecials();
        }


        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::PropertyTopicAliasMaxMembersCommon::ValueCommon::name();
        }


    };


    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Id,
           Value
        >;
};

/// @brief Definition of <b>"Topic Alias Maximum"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PropertyTopicAliasMax : public
    comms::field::Bundle<
        mqtt5::field::FieldBase<>,
        typename PropertyTopicAliasMaxMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename PropertyTopicAliasMaxMembers<TOpt>::All,
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
    ///         for mqtt5::field::PropertyTopicAliasMaxMembers::Id member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for mqtt5::field::PropertyTopicAliasMaxMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        id,
        value
    );


    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::PropertyTopicAliasMaxCommon::name();
    }


};


} // namespace field

} // namespace mqtt5
