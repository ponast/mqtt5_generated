// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::ConnectAcknowledgeFlags field.

#pragma once

#include <type_traits>

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::ConnectAcknowledgeFlags field.
struct ConnectAcknowledgeFlagsCommon
{
    /// @brief Name of the @ref mqtt5::field::ConnectAcknowledgeFlags field.
    static const char* name()
    {
        return "ConnectAcknowledgeFlags";
    }

    /// @brief Retrieve name of the bit of
    ///     @ref mqtt5::field::ConnectAcknowledgeFlags field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "Session present"
        };

        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }

        return Map[idx];
    }
};

} // namespace field

} // namespace mqtt5
