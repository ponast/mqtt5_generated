// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"UnsubscribePayload"</b> field.

#pragma once

#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/TopicFilter.h"
#include "mqtt5/field/UnsubscribePayloadCommon.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref UnsubscribePayload field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct UnsubscribePayloadMembers
{
    /// @brief Definition of <b>"Payload"</b> field.
    class TopicFilter : public
        mqtt5::field::TopicFilter<
            TOpt
        >
    {
        using Base =
            mqtt5::field::TopicFilter<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return mqtt5::field::UnsubscribePayloadMembersCommon::TopicFilterCommon::name();
        }
    };
};

/// @brief Definition of <b>"UnsubscribePayload"</b> field.
/// @details
///     Defined in section 3.10.3.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class UnsubscribePayload : public
    comms::field::ArrayList<
        mqtt5::field::FieldBase<>,
        typename UnsubscribePayloadMembers<TOpt>::TopicFilter,
        TExtraOpts...,
        typename TOpt::field::UnsubscribePayload
    >
{
    using Base =
        comms::field::ArrayList<
            mqtt5::field::FieldBase<>,
            typename UnsubscribePayloadMembers<TOpt>::TopicFilter,
            TExtraOpts...,
            typename TOpt::field::UnsubscribePayload
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::UnsubscribePayloadCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
