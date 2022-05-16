// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of protocol data view default options.

#pragma once

#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace options
{

/// @brief Default data view options of the protocol.
template <typename TBase = mqtt5::options::DefaultOptions>
struct DataViewDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     mqtt5::field::BinData field.
        using BinData =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::BinData
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ProtocolName field.
        using ProtocolName =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::ProtocolName
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::String field.
        using String =
            std::tuple<
                comms::option::app::OrigDataView,
                typename TBase::field::String
            >;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message : public TBase::message
    {
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Publish message.
        struct PublishFields : public TBase::message::PublishFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::PublishFields::Payload
            ///     field.
            using Payload =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::message::PublishFields::Payload
                >;
            
        };
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref mqtt5::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqtt5::frame::FrameLayers::Data layer.
            using Data =
                std::tuple<
                    comms::option::app::OrigDataView,
                    typename TBase::frame::FrameLayers::Data
                >;
            
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref DataViewDefaultOptionsT with default template parameter.
using DataViewDefaultOptions = DataViewDefaultOptionsT<>;

} // namespace options

} // namespace mqtt5