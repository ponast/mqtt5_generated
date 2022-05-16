// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>""</b> field.

#pragma once

#include <tuple>
#include "comms/CompileControl.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "mqtt5/field/ContentType.h"
#include "mqtt5/field/CorrelationData.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/MessageExpiryInterval.h"
#include "mqtt5/field/PayloadFormatIndicator.h"
#include "mqtt5/field/PublishPropertyCommon.h"
#include "mqtt5/field/ResponseTopic.h"
#include "mqtt5/field/SubscriptionId.h"
#include "mqtt5/field/TopicAlias.h"
#include "mqtt5/field/UserProperty.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref PublishProperty field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct PublishPropertyMembers
{
    /// @brief Definition of <b>"Property Format Indicator"</b> field.
    using PayloadFormatIndicator =
        mqtt5::field::PayloadFormatIndicator<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Message Expiry Interval"</b> field.
    using MessageExpiryInterval =
        mqtt5::field::MessageExpiryInterval<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Topic Alias"</b> field.
    using TopicAlias =
        mqtt5::field::TopicAlias<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Response Topic"</b> field.
    using ResponseTopic =
        mqtt5::field::ResponseTopic<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Correlation Data"</b> field.
    using CorrelationData =
        mqtt5::field::CorrelationData<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"User Property"</b> field.
    using UserProperty =
        mqtt5::field::UserProperty<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Subscription ID"</b> field.
    using SubscriptionId =
        mqtt5::field::SubscriptionId<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Content Type"</b> field.
    using ContentType =
        mqtt5::field::ContentType<
            TOpt
        >;
    
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           PayloadFormatIndicator,
           MessageExpiryInterval,
           TopicAlias,
           ResponseTopic,
           CorrelationData,
           UserProperty,
           SubscriptionId,
           ContentType
        >;
};

/// @brief Definition of <b>""</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class PublishProperty : public
    comms::field::Variant<
        mqtt5::field::FieldBase<>,
        typename PublishPropertyMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Variant<
            mqtt5::field::FieldBase<>,
            typename PublishPropertyMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_payloadFormatIndicator index, @b Field_payloadFormatIndicator type,
    ///         @b initField_payloadFormatIndicator() and @b accessField_payloadFormatIndicator() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::PayloadFormatIndicator member field.
    ///     @li @b FieldIdx_messageExpiryInterval index, @b Field_messageExpiryInterval type,
    ///         @b initField_messageExpiryInterval() and @b accessField_messageExpiryInterval() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::MessageExpiryInterval member field.
    ///     @li @b FieldIdx_topicAlias index, @b Field_topicAlias type,
    ///         @b initField_topicAlias() and @b accessField_topicAlias() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::TopicAlias member field.
    ///     @li @b FieldIdx_responseTopic index, @b Field_responseTopic type,
    ///         @b initField_responseTopic() and @b accessField_responseTopic() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::ResponseTopic member field.
    ///     @li @b FieldIdx_correlationData index, @b Field_correlationData type,
    ///         @b initField_correlationData() and @b accessField_correlationData() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::CorrelationData member field.
    ///     @li @b FieldIdx_userProperty index, @b Field_userProperty type,
    ///         @b initField_userProperty() and @b accessField_userProperty() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::UserProperty member field.
    ///     @li @b FieldIdx_subscriptionId index, @b Field_subscriptionId type,
    ///         @b initField_subscriptionId() and @b accessField_subscriptionId() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::SubscriptionId member field.
    ///     @li @b FieldIdx_contentType index, @b Field_contentType type,
    ///         @b initField_contentType() and @b accessField_contentType() access functions -
    ///         for mqtt5::field::PublishPropertyMembers::ContentType member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        payloadFormatIndicator,
        messageExpiryInterval,
        topicAlias,
        responseTopic,
        correlationData,
        userProperty,
        subscriptionId,
        contentType
    );
    
    /// @brief Optimized currFieldExec functionality.
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) 
    {
        switch (Base::currentField()) {
        case FieldIdx_payloadFormatIndicator:
            memFieldDispatch<FieldIdx_payloadFormatIndicator>(accessField_payloadFormatIndicator(), std::forward<TFunc>(func));
            break;
        case FieldIdx_messageExpiryInterval:
            memFieldDispatch<FieldIdx_messageExpiryInterval>(accessField_messageExpiryInterval(), std::forward<TFunc>(func));
            break;
        case FieldIdx_topicAlias:
            memFieldDispatch<FieldIdx_topicAlias>(accessField_topicAlias(), std::forward<TFunc>(func));
            break;
        case FieldIdx_responseTopic:
            memFieldDispatch<FieldIdx_responseTopic>(accessField_responseTopic(), std::forward<TFunc>(func));
            break;
        case FieldIdx_correlationData:
            memFieldDispatch<FieldIdx_correlationData>(accessField_correlationData(), std::forward<TFunc>(func));
            break;
        case FieldIdx_userProperty:
            memFieldDispatch<FieldIdx_userProperty>(accessField_userProperty(), std::forward<TFunc>(func));
            break;
        case FieldIdx_subscriptionId:
            memFieldDispatch<FieldIdx_subscriptionId>(accessField_subscriptionId(), std::forward<TFunc>(func));
            break;
        case FieldIdx_contentType:
            memFieldDispatch<FieldIdx_contentType>(accessField_contentType(), std::forward<TFunc>(func));
            break;
        default:
            static constexpr bool Invalid_field_execution = false;
            static_cast<void>(Invalid_field_execution);
            COMMS_ASSERT(Invalid_field_execution);
            break;
        }
    }
    
    /// @brief Optimized currFieldExec functionality (const variant).
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func) const
    {
        switch (Base::currentField()) {
        case FieldIdx_payloadFormatIndicator:
            memFieldDispatch<FieldIdx_payloadFormatIndicator>(accessField_payloadFormatIndicator(), std::forward<TFunc>(func));
            break;
        case FieldIdx_messageExpiryInterval:
            memFieldDispatch<FieldIdx_messageExpiryInterval>(accessField_messageExpiryInterval(), std::forward<TFunc>(func));
            break;
        case FieldIdx_topicAlias:
            memFieldDispatch<FieldIdx_topicAlias>(accessField_topicAlias(), std::forward<TFunc>(func));
            break;
        case FieldIdx_responseTopic:
            memFieldDispatch<FieldIdx_responseTopic>(accessField_responseTopic(), std::forward<TFunc>(func));
            break;
        case FieldIdx_correlationData:
            memFieldDispatch<FieldIdx_correlationData>(accessField_correlationData(), std::forward<TFunc>(func));
            break;
        case FieldIdx_userProperty:
            memFieldDispatch<FieldIdx_userProperty>(accessField_userProperty(), std::forward<TFunc>(func));
            break;
        case FieldIdx_subscriptionId:
            memFieldDispatch<FieldIdx_subscriptionId>(accessField_subscriptionId(), std::forward<TFunc>(func));
            break;
        case FieldIdx_contentType:
            memFieldDispatch<FieldIdx_contentType>(accessField_contentType(), std::forward<TFunc>(func));
            break;
        default:
            static constexpr bool Invalid_field_execution = false;
            static_cast<void>(Invalid_field_execution);
            COMMS_ASSERT(Invalid_field_execution);
            break;
        }
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::PublishPropertyCommon::name();
    }
    

private:
    template <std::size_t TIdx, typename TField, typename TFunc>
    static void memFieldDispatch(TField&& f, TFunc&& func)
    {
        #ifdef _MSC_VER
            func.operator()<TIdx>(std::forward<TField>(f)); // VS compiler
        #else // #ifdef _MSC_VER
            func.template operator()<TIdx>(std::forward<TField>(f)); // All other compilers
        #endif // #ifdef _MSC_VER
    }
    

};


} // namespace field

} // namespace mqtt5

