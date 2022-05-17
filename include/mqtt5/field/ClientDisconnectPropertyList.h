// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Client Disconnect Properties"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/ClientDisconnectProperty.h"
#include "mqtt5/field/ClientDisconnectPropertyListCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref ClientDisconnectPropertyList field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ClientDisconnectPropertyListMembers
{
    /// @brief Definition of <b>"Length"</b> field.
    class Length : public
        comms::field::IntValue<
            mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::VarLength<1U, 4U>
        >
    {
        using Base =
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::VarLength<1U, 4U>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
        
        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return mqtt5::field::ClientDisconnectPropertyListMembersCommon::LengthCommon::hasSpecials();
        }
        
        
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::ClientDisconnectPropertyListMembersCommon::LengthCommon::name();
        }
        
    
    };
    
    
};

/// @brief Definition of <b>"Client Disconnect Properties"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ClientDisconnectPropertyList : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        mqtt5::field::ClientDisconnectProperty<TOpt>,
        TExtraOpts...,
        typename TOpt::field::ClientDisconnectPropertyList,
        comms::option::def::SequenceSerLengthFieldPrefix<typename ClientDisconnectPropertyListMembers<TOpt>::Length>
    >
{
    using Base =
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            mqtt5::field::ClientDisconnectProperty<TOpt>,
            TExtraOpts...,
            typename TOpt::field::ClientDisconnectPropertyList,
            comms::option::def::SequenceSerLengthFieldPrefix<typename ClientDisconnectPropertyListMembers<TOpt>::Length>
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::ClientDisconnectPropertyListCommon::name();
    }
    

};


} // namespace field

} // namespace mqtt5

