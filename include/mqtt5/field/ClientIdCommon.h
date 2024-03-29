// Generated by commsdsl2comms v5.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::ClientId field.

#pragma once

#include "mqtt5/field/Utf8StringCommon.h"

namespace mqtt5
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqtt5::field::ClientId field.
struct ClientIdCommon : public mqtt5::field::Utf8StringCommon
{
    /// @brief Name of the @ref mqtt5::field::ClientId field.
    static const char* name()
    {
        return "Client ID";
    }
};

} // namespace field

} // namespace mqtt5
