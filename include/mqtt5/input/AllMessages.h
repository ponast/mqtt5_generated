// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of the AllMessages messages bundle.

#pragma once

#include <tuple>
#include "mqtt5/message/Auth.h"
#include "mqtt5/message/Connack.h"
#include "mqtt5/message/Connect.h"
#include "mqtt5/message/Disconnect.h"
#include "mqtt5/message/Pingreq.h"
#include "mqtt5/message/Pingresp.h"
#include "mqtt5/message/Puback.h"
#include "mqtt5/message/Pubcomp.h"
#include "mqtt5/message/Publish.h"
#include "mqtt5/message/Pubrec.h"
#include "mqtt5/message/Pubrel.h"
#include "mqtt5/message/Suback.h"
#include "mqtt5/message/Subscribe.h"
#include "mqtt5/message/Unsuback.h"
#include "mqtt5/message/Unsubscribe.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = mqtt5::options::DefaultOptions>
using AllMessages =
    std::tuple<
        mqtt5::message::Connect<TBase, TOpt>,
        mqtt5::message::Connack<TBase, TOpt>,
        mqtt5::message::Publish<TBase, TOpt>,
        mqtt5::message::Puback<TBase, TOpt>,
        mqtt5::message::Pubrec<TBase, TOpt>,
        mqtt5::message::Pubrel<TBase, TOpt>,
        mqtt5::message::Pubcomp<TBase, TOpt>,
        mqtt5::message::Subscribe<TBase, TOpt>,
        mqtt5::message::Suback<TBase, TOpt>,
        mqtt5::message::Unsubscribe<TBase, TOpt>,
        mqtt5::message::Unsuback<TBase, TOpt>,
        mqtt5::message::Pingreq<TBase, TOpt>,
        mqtt5::message::Pingresp<TBase, TOpt>,
        mqtt5::message::Disconnect<TBase, TOpt>,
        mqtt5::message::Auth<TBase, TOpt>
    >;

} // namespace input

} // namespace mqtt5
