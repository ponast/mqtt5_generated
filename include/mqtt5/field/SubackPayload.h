// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"SubackPayload"</b> field.

#pragma once

#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/SubackPayloadCommon.h"
#include "mqtt5/field/SubackReasonCode.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Definition of <b>"SubackPayload"</b> field.
/// @details
///     Defined in section 3.9.3.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class SubackPayload : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        mqtt5::field::SubackReasonCode<TOpt>,
        TExtraOpts...,
        typename TOpt::field::SubackPayload
    >
{
    using Base =
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            mqtt5::field::SubackReasonCode<TOpt>,
            TExtraOpts...,
            typename TOpt::field::SubackPayload
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::SubackPayloadCommon::name();
    }


};


} // namespace field

} // namespace mqtt5
