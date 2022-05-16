// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::HandshakeProperty field.

#pragma once

#include "mqtt5/field/ReasonStrCommon.h"
#include "mqtt5/field/UserPropertyCommon.h"

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::HandshakeProperty field.
struct HandshakePropertyMembersCommon
{
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::HandshakePropertyMembers::ReasonStr field.
    using ReasonStrMembersCommon = mqtt5::field::ReasonStrMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::HandshakePropertyMembers::ReasonStr field.
    using ReasonStrCommon = mqtt5::field::ReasonStrCommon;
    
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::field::HandshakePropertyMembers::UserProperty field.
    using UserPropertyMembersCommon = mqtt5::field::UserPropertyMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::HandshakePropertyMembers::UserProperty field.
    using UserPropertyCommon = mqtt5::field::UserPropertyCommon;
    
};

/// @brief Common types and functions for
///     @ref mqtt5::field::HandshakeProperty field.
struct HandshakePropertyCommon
{
    /// @brief Name of the @ref mqtt5::field::HandshakeProperty field.
    static const char* name()
    {
        return "";
    }
    
};

} // namespace field

} // namespace mqtt5

