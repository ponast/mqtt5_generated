// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of protocol bare metal default options.

#pragma once

#include "mqtt5/options/DefaultOptions.h"

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

namespace mqtt5
{

namespace options
{

/// @brief Default bare metal options of the protocol.
template <typename TBase = mqtt5::options::DefaultOptions>
struct BareMetalDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     mqtt5::field::AuthPropertyList field.
        using AuthPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::AuthPropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::BinData field.
        using BinData =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::BinData
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ClientDisconnectPropertyList
        ///     field.
        using ClientDisconnectPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ClientDisconnectPropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ConnackPropertyList field.
        using ConnackPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ConnackPropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ConnectPropertyList field.
        using ConnectPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ConnectPropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::HandshakePropertyList
        ///     field.
        using HandshakePropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::HandshakePropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ProtocolName field.
        using ProtocolName =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ProtocolName
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::PublishPropertyList field.
        using PublishPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::PublishPropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::ServerDisconnectPropertyList
        ///     field.
        using ServerDisconnectPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ServerDisconnectPropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::String field.
        using String =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::String
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::SubscribePropertyList
        ///     field.
        using SubscribePropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::SubscribePropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::UnsubscribePropertyList
        ///     field.
        using UnsubscribePropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::UnsubscribePropertyList
            >;
        
        /// @brief Extra options for @ref
        ///     mqtt5::field::WillPropertyList field.
        using WillPropertyList =
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::WillPropertyList
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
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::PublishFields::Payload
                >;
            
        };
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Suback message.
        struct SubackFields : public TBase::message::SubackFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::SubackFields::List
            ///     field.
            using List =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::SubackFields::List
                >;
            
        };
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Subscribe message.
        struct SubscribeFields : public TBase::message::SubscribeFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::SubscribeFields::List
            ///     field.
            using List =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::SubscribeFields::List
                >;
            
        };
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Unsuback message.
        struct UnsubackFields : public TBase::message::UnsubackFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::UnsubackFields::List
            ///     field.
            using List =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::UnsubackFields::List
                >;
            
        };
        
        /// @brief Extra options for fields of
        ///     @ref mqtt5::message::Unsubscribe message.
        struct UnsubscribeFields : public TBase::message::UnsubscribeFields
        {
            /// @brief Extra options for @ref
            ///     mqtt5::message::UnsubscribeFields::List
            ///     field.
            using List =
                std::tuple<
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                    typename TBase::message::UnsubscribeFields::List
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
                    comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                    typename TBase::frame::FrameLayers::Data
                >;
            
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref BareMetalDefaultOptionsT with default template parameter.
using BareMetalDefaultOptions = BareMetalDefaultOptionsT<>;

} // namespace options

} // namespace mqtt5
