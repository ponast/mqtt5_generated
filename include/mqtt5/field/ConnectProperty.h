// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains definition of <b>"Property"</b> field.

#pragma once

#include <tuple>
#include "comms/Assert.h"
#include "comms/CompileControl.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "mqtt5/field/ConnectPropertyCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/PropertyAuthData.h"
#include "mqtt5/field/PropertyAuthMethod.h"
#include "mqtt5/field/PropertyMaxPacketSize.h"
#include "mqtt5/field/PropertyReceiveMax.h"
#include "mqtt5/field/PropertyRequestProblemInfo.h"
#include "mqtt5/field/PropertyRequestResponseInfo.h"
#include "mqtt5/field/PropertySessionExpiryInterval.h"
#include "mqtt5/field/PropertyTopicAliasMax.h"
#include "mqtt5/field/PropertyUserProperty.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref ConnectProperty field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct ConnectPropertyMembers
{
    /// @brief Definition of <b>"Session expiry interval"</b> field.
    using SessionExpiryInterval =
        mqtt5::field::PropertySessionExpiryInterval<
            TOpt
        >;

    /// @brief Definition of <b>"Receive maximum"</b> field.
    using ReceiveMax =
        mqtt5::field::PropertyReceiveMax<
            TOpt
        >;

    /// @brief Definition of <b>"Maximum packet size"</b> field.
    using MaxPacketSize =
        mqtt5::field::PropertyMaxPacketSize<
            TOpt
        >;

    /// @brief Definition of <b>"Topic alias maximum"</b> field.
    using TopicAliasMax =
        mqtt5::field::PropertyTopicAliasMax<
            TOpt
        >;

    /// @brief Definition of <b>"Request response information"</b> field.
    using RequestResponseInfo =
        mqtt5::field::PropertyRequestResponseInfo<
            TOpt
        >;

    /// @brief Definition of <b>"Request problem information"</b> field.
    using RequestProblemInfo =
        mqtt5::field::PropertyRequestProblemInfo<
            TOpt
        >;

    /// @brief Definition of <b>"User property"</b> field.
    using UserProperty =
        mqtt5::field::PropertyUserProperty<
            TOpt
        >;

    /// @brief Definition of <b>"Authentication method"</b> field.
    using AuthMethod =
        mqtt5::field::PropertyAuthMethod<
            TOpt
        >;

    /// @brief Definition of <b>"Authentication data"</b> field.
    using AuthData =
        mqtt5::field::PropertyAuthData<
            TOpt
        >;

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           SessionExpiryInterval,
           ReceiveMax,
           MaxPacketSize,
           TopicAliasMax,
           RequestResponseInfo,
           RequestProblemInfo,
           UserProperty,
           AuthMethod,
           AuthData
        >;
};

/// @brief Definition of <b>"Property"</b> field.
/// @details
///     Defined in section 3.1.2.11.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ConnectProperty : public
    comms::field::Variant<
        mqtt5::field::FieldBase<>,
        typename ConnectPropertyMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasCustomRead
    >
{
    using Base =
        comms::field::Variant<
            mqtt5::field::FieldBase<>,
            typename ConnectPropertyMembers<TOpt>::All,
            TExtraOpts...,
            comms::option::def::HasCustomRead
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_sessionExpiryInterval index, @b Field_sessionExpiryInterval type,
    ///         @b initField_sessionExpiryInterval() and @b accessField_sessionExpiryInterval() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::SessionExpiryInterval member field.
    ///     @li @b FieldIdx_receiveMax index, @b Field_receiveMax type,
    ///         @b initField_receiveMax() and @b accessField_receiveMax() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::ReceiveMax member field.
    ///     @li @b FieldIdx_maxPacketSize index, @b Field_maxPacketSize type,
    ///         @b initField_maxPacketSize() and @b accessField_maxPacketSize() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::MaxPacketSize member field.
    ///     @li @b FieldIdx_topicAliasMax index, @b Field_topicAliasMax type,
    ///         @b initField_topicAliasMax() and @b accessField_topicAliasMax() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::TopicAliasMax member field.
    ///     @li @b FieldIdx_requestResponseInfo index, @b Field_requestResponseInfo type,
    ///         @b initField_requestResponseInfo() and @b accessField_requestResponseInfo() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::RequestResponseInfo member field.
    ///     @li @b FieldIdx_requestProblemInfo index, @b Field_requestProblemInfo type,
    ///         @b initField_requestProblemInfo() and @b accessField_requestProblemInfo() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::RequestProblemInfo member field.
    ///     @li @b FieldIdx_userProperty index, @b Field_userProperty type,
    ///         @b initField_userProperty() and @b accessField_userProperty() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::UserProperty member field.
    ///     @li @b FieldIdx_authMethod index, @b Field_authMethod type,
    ///         @b initField_authMethod() and @b accessField_authMethod() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::AuthMethod member field.
    ///     @li @b FieldIdx_authData index, @b Field_authData type,
    ///         @b initField_authData() and @b accessField_authData() access functions -
    ///         for mqtt5::field::ConnectPropertyMembers::AuthData member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        sessionExpiryInterval,
        receiveMax,
        maxPacketSize,
        topicAliasMax,
        requestResponseInfo,
        requestProblemInfo,
        userProperty,
        authMethod,
        authData
    );

    /// @brief Optimized currFieldExec functionality.
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func)
    {
        switch (Base::currentField()) {
        case FieldIdx_sessionExpiryInterval:
            memFieldDispatch<FieldIdx_sessionExpiryInterval>(accessField_sessionExpiryInterval(), std::forward<TFunc>(func));
            break;
        case FieldIdx_receiveMax:
            memFieldDispatch<FieldIdx_receiveMax>(accessField_receiveMax(), std::forward<TFunc>(func));
            break;
        case FieldIdx_maxPacketSize:
            memFieldDispatch<FieldIdx_maxPacketSize>(accessField_maxPacketSize(), std::forward<TFunc>(func));
            break;
        case FieldIdx_topicAliasMax:
            memFieldDispatch<FieldIdx_topicAliasMax>(accessField_topicAliasMax(), std::forward<TFunc>(func));
            break;
        case FieldIdx_requestResponseInfo:
            memFieldDispatch<FieldIdx_requestResponseInfo>(accessField_requestResponseInfo(), std::forward<TFunc>(func));
            break;
        case FieldIdx_requestProblemInfo:
            memFieldDispatch<FieldIdx_requestProblemInfo>(accessField_requestProblemInfo(), std::forward<TFunc>(func));
            break;
        case FieldIdx_userProperty:
            memFieldDispatch<FieldIdx_userProperty>(accessField_userProperty(), std::forward<TFunc>(func));
            break;
        case FieldIdx_authMethod:
            memFieldDispatch<FieldIdx_authMethod>(accessField_authMethod(), std::forward<TFunc>(func));
            break;
        case FieldIdx_authData:
            memFieldDispatch<FieldIdx_authData>(accessField_authData(), std::forward<TFunc>(func));
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
        case FieldIdx_sessionExpiryInterval:
            memFieldDispatch<FieldIdx_sessionExpiryInterval>(accessField_sessionExpiryInterval(), std::forward<TFunc>(func));
            break;
        case FieldIdx_receiveMax:
            memFieldDispatch<FieldIdx_receiveMax>(accessField_receiveMax(), std::forward<TFunc>(func));
            break;
        case FieldIdx_maxPacketSize:
            memFieldDispatch<FieldIdx_maxPacketSize>(accessField_maxPacketSize(), std::forward<TFunc>(func));
            break;
        case FieldIdx_topicAliasMax:
            memFieldDispatch<FieldIdx_topicAliasMax>(accessField_topicAliasMax(), std::forward<TFunc>(func));
            break;
        case FieldIdx_requestResponseInfo:
            memFieldDispatch<FieldIdx_requestResponseInfo>(accessField_requestResponseInfo(), std::forward<TFunc>(func));
            break;
        case FieldIdx_requestProblemInfo:
            memFieldDispatch<FieldIdx_requestProblemInfo>(accessField_requestProblemInfo(), std::forward<TFunc>(func));
            break;
        case FieldIdx_userProperty:
            memFieldDispatch<FieldIdx_userProperty>(accessField_userProperty(), std::forward<TFunc>(func));
            break;
        case FieldIdx_authMethod:
            memFieldDispatch<FieldIdx_authMethod>(accessField_authMethod(), std::forward<TFunc>(func));
            break;
        case FieldIdx_authData:
            memFieldDispatch<FieldIdx_authData>(accessField_authData(), std::forward<TFunc>(func));
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
        return mqtt5::field::ConnectPropertyCommon::name();
    }

    COMMS_MSVC_WARNING_PUSH
    COMMS_MSVC_WARNING_DISABLE(4702)
    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus read(TIter& iter, std::size_t len)
    {
        using CommonKeyField=
            comms::field::IntValue<
                mqtt5::field::FieldBase<comms::option::def::LittleEndian>,
                std::uint32_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::VarLength<1U, 4U>
            >;
        CommonKeyField commonKeyField;

        auto origIter = iter;
        auto es = commonKeyField.read(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }

        auto consumedLen = static_cast<std::size_t>(std::distance(origIter, iter));
        COMMS_ASSERT(consumedLen <= len);
        len -= consumedLen;

        switch (commonKeyField.getValue()) {
        case 17U /* 0x00000011U */:
            {
                auto& field_sessionExpiryInterval = initField_sessionExpiryInterval();
                COMMS_ASSERT(field_sessionExpiryInterval.field_id().getValue() == commonKeyField.getValue());
                return field_sessionExpiryInterval.template readFrom<1>(iter, len);
            }
        case 33U /* 0x00000021U */:
            {
                auto& field_receiveMax = initField_receiveMax();
                COMMS_ASSERT(field_receiveMax.field_id().getValue() == commonKeyField.getValue());
                return field_receiveMax.template readFrom<1>(iter, len);
            }
        case 39U /* 0x00000027U */:
            {
                auto& field_maxPacketSize = initField_maxPacketSize();
                COMMS_ASSERT(field_maxPacketSize.field_id().getValue() == commonKeyField.getValue());
                return field_maxPacketSize.template readFrom<1>(iter, len);
            }
        case 34U /* 0x00000022U */:
            {
                auto& field_topicAliasMax = initField_topicAliasMax();
                COMMS_ASSERT(field_topicAliasMax.field_id().getValue() == commonKeyField.getValue());
                return field_topicAliasMax.template readFrom<1>(iter, len);
            }
        case 25U /* 0x00000019U */:
            {
                auto& field_requestResponseInfo = initField_requestResponseInfo();
                COMMS_ASSERT(field_requestResponseInfo.field_id().getValue() == commonKeyField.getValue());
                return field_requestResponseInfo.template readFrom<1>(iter, len);
            }
        case 23U /* 0x00000017U */:
            {
                auto& field_requestProblemInfo = initField_requestProblemInfo();
                COMMS_ASSERT(field_requestProblemInfo.field_id().getValue() == commonKeyField.getValue());
                return field_requestProblemInfo.template readFrom<1>(iter, len);
            }
        case 38U /* 0x00000026U */:
            {
                auto& field_userProperty = initField_userProperty();
                COMMS_ASSERT(field_userProperty.field_id().getValue() == commonKeyField.getValue());
                return field_userProperty.template readFrom<1>(iter, len);
            }
        case 21U /* 0x00000015U */:
            {
                auto& field_authMethod = initField_authMethod();
                COMMS_ASSERT(field_authMethod.field_id().getValue() == commonKeyField.getValue());
                return field_authMethod.template readFrom<1>(iter, len);
            }
        case 22U /* 0x00000016U */:
            {
                auto& field_authData = initField_authData();
                COMMS_ASSERT(field_authData.field_id().getValue() == commonKeyField.getValue());
                return field_authData.template readFrom<1>(iter, len);
            }
        default:
            break;
        };

        return comms::ErrorStatus::InvalidMsgData;
    }
    COMMS_MSVC_WARNING_POP

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
