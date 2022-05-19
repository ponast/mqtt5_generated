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
#include "mqtt5/field/AuthPropertyCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/ReasonStr.h"
#include "mqtt5/field/UserProperty.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref AuthProperty field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct AuthPropertyMembers
{
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


    /// @brief Definition of <b>"Reason String"</b> field.
    using ReasonStr =
        mqtt5::field::ReasonStr<
            TOpt
        >;


    /// @brief Definition of <b>"User Property"</b> field.
    using UserProperty =
        mqtt5::field::UserProperty<
            TOpt
        >;


    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           AuthMethod,
           AuthData,
           ReasonStr,
           UserProperty
        >;
};

/// @brief Definition of <b>""</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class AuthProperty : public
    comms::field::Variant<
        mqtt5::field::FieldBase<>,
        typename AuthPropertyMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Variant<
            mqtt5::field::FieldBase<>,
            typename AuthPropertyMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_authMethod index, @b Field_authMethod type,
    ///         @b initField_authMethod() and @b accessField_authMethod() access functions -
    ///         for mqtt5::field::AuthPropertyMembers::AuthMethod member field.
    ///     @li @b FieldIdx_authData index, @b Field_authData type,
    ///         @b initField_authData() and @b accessField_authData() access functions -
    ///         for mqtt5::field::AuthPropertyMembers::AuthData member field.
    ///     @li @b FieldIdx_reasonStr index, @b Field_reasonStr type,
    ///         @b initField_reasonStr() and @b accessField_reasonStr() access functions -
    ///         for mqtt5::field::AuthPropertyMembers::ReasonStr member field.
    ///     @li @b FieldIdx_userProperty index, @b Field_userProperty type,
    ///         @b initField_userProperty() and @b accessField_userProperty() access functions -
    ///         for mqtt5::field::AuthPropertyMembers::UserProperty member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        authMethod,
        authData,
        reasonStr,
        userProperty
    );

    /// @brief Optimized currFieldExec functionality.
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func)
    {
        switch (Base::currentField()) {
        case FieldIdx_authMethod:
            memFieldDispatch<FieldIdx_authMethod>(accessField_authMethod(), std::forward<TFunc>(func));
            break;
        case FieldIdx_authData:
            memFieldDispatch<FieldIdx_authData>(accessField_authData(), std::forward<TFunc>(func));
            break;
        case FieldIdx_reasonStr:
            memFieldDispatch<FieldIdx_reasonStr>(accessField_reasonStr(), std::forward<TFunc>(func));
            break;
        case FieldIdx_userProperty:
            memFieldDispatch<FieldIdx_userProperty>(accessField_userProperty(), std::forward<TFunc>(func));
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
        case FieldIdx_authMethod:
            memFieldDispatch<FieldIdx_authMethod>(accessField_authMethod(), std::forward<TFunc>(func));
            break;
        case FieldIdx_authData:
            memFieldDispatch<FieldIdx_authData>(accessField_authData(), std::forward<TFunc>(func));
            break;
        case FieldIdx_reasonStr:
            memFieldDispatch<FieldIdx_reasonStr>(accessField_reasonStr(), std::forward<TFunc>(func));
            break;
        case FieldIdx_userProperty:
            memFieldDispatch<FieldIdx_userProperty>(accessField_userProperty(), std::forward<TFunc>(func));
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
        return mqtt5::field::AuthPropertyCommon::name();
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

