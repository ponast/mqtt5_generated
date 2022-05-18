// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::ClientDisconnectProperty field.

#pragma once

#include "mqtt5/field/ReasonStrCommon.h"
#include "mqtt5/field/ServerRefCommon.h"
#include "mqtt5/field/SessionExpiryIntervalCommon.h"
#include "mqtt5/field/UserPropertyCommon.h"

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
    using SessionExpiryIntervalMembersCommon = mqtt5::field::SessionExpiryIntervalMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::SessionExpiryInterval field.
    using SessionExpiryIntervalCommon = mqtt5::field::SessionExpiryIntervalCommon;
    
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ReasonStr field.
    using ReasonStrMembersCommon = mqtt5::field::ReasonStrMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ReasonStr field.
    using ReasonStrCommon = mqtt5::field::ReasonStrCommon;
    
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::UserProperty field.
    using UserPropertyMembersCommon = mqtt5::field::UserPropertyMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::UserProperty field.
    using UserPropertyCommon = mqtt5::field::UserPropertyCommon;
    
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ServerRef field.
    using ServerRefMembersCommon = mqtt5::field::ServerRefMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::ClientDisconnectPropertyMembers::ServerRef field.
    using ServerRefCommon = mqtt5::field::ServerRefCommon;
    
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
