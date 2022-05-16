// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Publish Properties"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PublishProperty.h"
#include "mqtt5/field/PublishPropertyListCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref PublishPropertyList field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PublishPropertyListMembers
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
            return mqtt5::field::PublishPropertyListMembersCommon::LengthCommon::hasSpecials();
        }
        
        
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::PublishPropertyListMembersCommon::LengthCommon::name();
        }
        
    
    };
    
    
};

/// @brief Definition of <b>"Publish Properties"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PublishPropertyList : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        mqtt5::field::PublishProperty<TOpt>,
        TExtraOpts...,
        typename TOpt::field::PublishPropertyList,
        comms::option::def::SequenceSerLengthFieldPrefix<typename PublishPropertyListMembers<TOpt>::Length>
    >
{
    using Base =
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            mqtt5::field::PublishProperty<TOpt>,
            TExtraOpts...,
            typename TOpt::field::PublishPropertyList,
            comms::option::def::SequenceSerLengthFieldPrefix<typename PublishPropertyListMembers<TOpt>::Length>
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::PublishPropertyListCommon::name();
    }
    

};


} // namespace field

} // namespace mqtt5
