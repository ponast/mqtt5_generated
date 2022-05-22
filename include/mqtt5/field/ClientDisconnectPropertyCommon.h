// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::ClientDisconnectProperty field.

#pragma once

#include "mqtt5/field/PropertyReasonStringCommon.h"
#include "mqtt5/field/PropertyServerReferenceCommon.h"
#include "mqtt5/field/PropertySessionExpiryIntervalCommon.h"
#include "mqtt5/field/PropertyUserPropertyCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::ClientDisconnectProperty field.
struct ClientDisconnectPropertyMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::SessionExpiryInterval field.
    using SessionExpiryIntervalMembersCommon = mqtt5::field::PropertySessionExpiryIntervalMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::SessionExpiryInterval field.
    using SessionExpiryIntervalCommon = mqtt5::field::PropertySessionExpiryIntervalCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ReasonString field.
    using ReasonStringMembersCommon = mqtt5::field::PropertyReasonStringMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ReasonString field.
    using ReasonStringCommon = mqtt5::field::PropertyReasonStringCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::UserProperty field.
    using UserPropertyMembersCommon = mqtt5::field::PropertyUserPropertyMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::UserProperty field.
    using UserPropertyCommon = mqtt5::field::PropertyUserPropertyCommon;

    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ServerReference field.
    using ServerReferenceMembersCommon = mqtt5::field::PropertyServerReferenceMembersCommon;

    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ServerReference field.
    using ServerReferenceCommon = mqtt5::field::PropertyServerReferenceCommon;

};

/// @brief Common types and functions for
///     @ref mqtt5::field::ClientDisconnectProperty field.
struct ClientDisconnectPropertyCommon
{
    /// @brief Name of the @ref mqtt5::field::ClientDisconnectProperty field.
    static const char* name()
    {
        return "";
    }

};

} // namespace field

} // namespace mqtt5

