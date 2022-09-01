// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Payload element"</b> field.

#pragma once

#include <tuple>
#include "comms/field/Bundle.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/SubscribeOptions.h"
#include "mqtt5/field/SubscribePayloadElementCommon.h"
#include "mqtt5/field/TopicFilter.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref SubscribePayloadElement field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct SubscribePayloadElementMembers
{
    /// @brief Definition of <b>"TopicFilter"</b> field.
    using TopicFilter =
        mqtt5::field::TopicFilter<
            TOpt
        >;

    /// @brief Definition of <b>"SubscribeOptions"</b> field.
    using SubscribeOptions =
        mqtt5::field::SubscribeOptions<
            TOpt
        >;

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           TopicFilter,
           SubscribeOptions
        >;
};

/// @brief Definition of <b>"Payload element"</b> field.
/// @details
///     Defined in section 3.8.3.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class SubscribePayloadElement : public
    comms::field::Bundle<
        mqtt5::field::FieldBase<>,
        typename SubscribePayloadElementMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Bundle<
            mqtt5::field::FieldBase<>,
            typename SubscribePayloadElementMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
    ///     related to @b comms::field::Bundle class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_topicFilter index, @b Field_topicFilter type and @b field_topicFilter() access function -
    ///         for mqtt5::field::SubscribePayloadElementMembers::TopicFilter member field.
    ///     @li @b FieldIdx_subscribeOptions index, @b Field_subscribeOptions type and @b field_subscribeOptions() access function -
    ///         for mqtt5::field::SubscribePayloadElementMembers::SubscribeOptions member field.
    COMMS_FIELD_MEMBERS_NAMES(
        topicFilter,
        subscribeOptions
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::SubscribePayloadElementCommon::name();
    }
};

} // namespace field

} // namespace mqtt5
