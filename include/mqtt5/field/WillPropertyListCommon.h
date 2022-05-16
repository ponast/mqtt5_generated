// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::WillPropertyList field.

#pragma once

#include <cstdint>

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::WillPropertyList field.
struct WillPropertyListMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::WillPropertyListMembers::Length field.
    struct LengthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::WillPropertyListMembers::Length field.
        using ValueType = std::uint32_t;
        
        /// @brief Name of the @ref mqtt5::field::WillPropertyListMembers::Length field.
        static const char* name()
        {
            return "Length";
        }
        
        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
        
        
    };
    
};

/// @brief Common types and functions for
///     @ref mqtt5::field::WillPropertyList field.
struct WillPropertyListCommon
{
    /// @brief Name of the @ref mqtt5::field::WillPropertyList field.
    static const char* name()
    {
        return "Will Properties";
    }
    
};

} // namespace field

} // namespace mqtt5
