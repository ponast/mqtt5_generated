// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"Handshake Properties"</b> field.

#pragma once

#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/HandshakePropertyList.h"
#include "mqtt5/field/SubackPropertyListCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Definition of <b>"Handshake Properties"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
using SubackPropertyList =
    mqtt5::field::HandshakePropertyList<
        TOpt,
        TExtraOpts...
    >;


} // namespace field

} // namespace mqtt5
