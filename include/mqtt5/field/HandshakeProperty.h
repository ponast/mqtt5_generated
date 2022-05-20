// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>""</b> field.

#pragma once

#include <tuple>
#include "comms/CompileControl.h"
#include "comms/field/Variant.h"
#include "comms/options.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/field/HandshakePropertyCommon.h"
#include "mqtt5/field/ReasonString.h"
#include "mqtt5/field/UserProperty.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the member fields of
///     @ref HandshakeProperty field.
/// @tparam TOpt Protocol options.
template <typename TOpt = mqtt5::options::DefaultOptions>
struct HandshakePropertyMembers
{
    /// @brief Definition of <b>"Reason String"</b> field.
    using ReasonString =
        mqtt5::field::ReasonString<
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
           ReasonString,
           UserProperty
        >;
};

/// @brief Definition of <b>""</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class HandshakeProperty : public
    comms::field::Variant<
        mqtt5::field::FieldBase<>,
        typename HandshakePropertyMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base =
        comms::field::Variant<
            mqtt5::field::FieldBase<>,
            typename HandshakePropertyMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_VARIANT_MEMBERS_NAMES macro
    ///     related to @b comms::field::Variant class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and access functions are:
    ///     @li @b FieldIdx_reasonString index, @b Field_reasonString type,
    ///         @b initField_reasonString() and @b accessField_reasonString() access functions -
    ///         for mqtt5::field::HandshakePropertyMembers::ReasonString member field.
    ///     @li @b FieldIdx_userProperty index, @b Field_userProperty type,
    ///         @b initField_userProperty() and @b accessField_userProperty() access functions -
    ///         for mqtt5::field::HandshakePropertyMembers::UserProperty member field.
    COMMS_VARIANT_MEMBERS_NAMES(
        reasonString,
        userProperty
    );

    /// @brief Optimized currFieldExec functionality.
    /// @details Replaces the currFieldExec() member function defined
    ///    by @b comms::field::Variant.
    template <typename TFunc>
    void currFieldExec(TFunc&& func)
    {
        switch (Base::currentField()) {
        case FieldIdx_reasonString:
            memFieldDispatch<FieldIdx_reasonString>(accessField_reasonString(), std::forward<TFunc>(func));
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
        case FieldIdx_reasonString:
            memFieldDispatch<FieldIdx_reasonString>(accessField_reasonString(), std::forward<TFunc>(func));
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
        return mqtt5::field::HandshakePropertyCommon::name();
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

