// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Receive Maximum"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/ReceiveMaxCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref ReceiveMax field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ReceiveMaxMembers
{
    /// @brief Definition of <b>"Id"</b> field.
    class Id : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::VarLength<1U, 4U>,
            comms::option::def::DefaultNumValue<33>,
            comms::option::def::ValidNumValue<33>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::VarLength<1U, 4U>,
                comms::option::def::DefaultNumValue<33>,
                comms::option::def::ValidNumValue<33>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::ReceiveMaxMembersCommon::IdCommon::hasSpecials();
        }


        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::ReceiveMaxMembersCommon::IdCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::value() = static_cast<ValueType>(33);
            return true;

        }



    };


    /// @brief Definition of <b>"Value"</b> field.
    class Value : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::DefaultNumValue<65535L>,
            comms::option::def::ValidNumValueRange<1, 65535L>
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::DefaultNumValue<65535L>,
                comms::option::def::ValidNumValueRange<1, 65535L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::ReceiveMaxMembersCommon::ValueCommon::hasSpecials();
        }


        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::ReceiveMaxMembersCommon::ValueCommon::name();
        }


    };


    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Id,
           Value
        >;
};

/// @brief Definition of <b>"Receive Maximum"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ReceiveMax : public
    comms::field::Bundle<
        mqtt5::field::FieldBase<>,
        typename ReceiveMaxMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename ReceiveMaxMembers<TOpt>::All,
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
    ///         for mqtt5::field::ReceiveMaxMembers::Id member field.
    ///     @li @b FieldIdx_value index, @b Field_value type and @b field_value() access function -
    ///         for mqtt5::field::ReceiveMaxMembers::Value member field.
    COMMS_FIELD_MEMBERS_NAMES(
        id,
        value
    );


    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::ReceiveMaxCommon::name();
    }


};


} // namespace field

} // namespace mqtt5

