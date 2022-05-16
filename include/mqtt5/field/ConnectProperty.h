// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>""</b> field.

#pragma once

#include <tuple>
#include "comms/CompileControl.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "mqtt5/field/AuthData.h"
#include "mqtt5/field/AuthMethod.h"
#include "mqtt5/field/ConnectPropertyCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/MaxPacketSize.h"
#include "mqtt5/field/ReceiveMax.h"
#include "mqtt5/field/RequestProblemInfo.h"
#include "mqtt5/field/RequestResponseInfo.h"
#include "mqtt5/field/SessionExpiryInterval.h"
#include "mqtt5/field/TopicAliasMax.h"
#include "mqtt5/field/UserProperty.h"
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
    /// @brief Definition of <b>"Session Expiry Interval"</b> field.
    using SessionExpiryInterval =
        mqtt5::field::SessionExpiryInterval<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Receive Maximum"</b> field.
    using ReceiveMax =
        mqtt5::field::ReceiveMax<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Maximum Packet Size"</b> field.
    using MaxPacketSize =
        mqtt5::field::MaxPacketSize<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Topic Alias Maximum"</b> field.
    using TopicAliasMax =
        mqtt5::field::TopicAliasMax<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Request Response Information"</b> field.
    using RequestResponseInfo =
        mqtt5::field::RequestResponseInfo<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Request Problem Information"</b> field.
    using RequestProblemInfo =
        mqtt5::field::RequestProblemInfo<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"User Property"</b> field.
    using UserProperty =
        mqtt5::field::UserProperty<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Authentication Method"</b> field.
    using AuthMethod =
        mqtt5::field::AuthMethod<
            TOpt
        >;
    
    
    /// @brief Definition of <b>"Authentication Data"</b> field.
    using AuthData =
        mqtt5::field::AuthData<
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

/// @brief Definition of <b>""</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ConnectProperty : public
    comms::field::Variant<
        mqtt5::field::FieldBase<>,
        typename ConnectPropertyMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Variant<
            mqtt5::field::FieldBase<>,
            typename ConnectPropertyMembers<TOpt>::All,
            TExtraOpts...
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

