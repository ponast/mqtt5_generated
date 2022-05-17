// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::message::Subscribe message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>
#include "mqtt5/field/PacketIdCommon.h"
#include "mqtt5/field/QosCommon.h"
#include "mqtt5/field/SubscribePropertyListCommon.h"
#include "mqtt5/field/TopicFilterCommon.h"

namespace mqtt5
{

namespace message
{


/// @brief Common types and functions for fields of 
///     @ref mqtt5::message::Subscribe message.
/// @see mqtt5::message::SubscribeFields
struct SubscribeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::PacketId field.
    using PacketIdCommon = mqtt5::field::PacketIdCommon;
    
    /// @brief Common definitions of the member fields of
    ///     @ref mqtt5::message::SubscribeFields::Properties field.
    using PropertiesMembersCommon = mqtt5::field::SubscribePropertyListMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::Properties field.
    using PropertiesCommon = mqtt5::field::SubscribePropertyListCommon;
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqtt5::message::SubscribeFields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref mqtt5::message::SubscribeFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::TopicFilter field.
            using TopicFilterCommon = mqtt5::field::TopicFilterCommon;
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options field.
            struct OptionsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Qos field.
                using QosCommon = mqtt5::field::QosCommon;
                
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit of
                    ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "NL",
                            "RAP"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                    
                };
                
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                struct RetainHandlingCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                    enum class ValueType : std::uint8_t
                    {
                        Send = 0, ///< value @b Send. 
                        SendIfNotExists = 1, ///< value @b SendIfNotExists. 
                        DontSend = 2, ///< value @b DontSend. 
                        
                        // --- Extra values generated for convenience ---
                        FirstValue = 0, ///< First defined value.
                        LastValue = 2, ///< Last defined value.
                        ValuesLimit = 3, ///< Upper limit for defined values.
                    };
                    
                    /// @brief Single value name info entry
                    using ValueNameInfo = const char*;
                    
                    /// @brief Type returned from @ref valueNamesMap() member function.
                    /// @details The @b first value of the pair is pointer to the map array,
                    ///     The @b second value of the pair is the size of the array.
                    using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;
                    
                    /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                    static const char* name()
                    {
                        return "Retain Handling";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ValueType val)
                    {
                        auto namesMapInfo = valueNamesMap();
                        if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return namesMapInfo.first[static_cast<std::size_t>(val)];
                    }
                    
                    /// @brief Retrieve map of enum value names
                    static ValueNamesMapInfo valueNamesMap()
                    {
                        static const char* Map[] = {
                            "Send",
                            "SendIfNotExists",
                            "DontSend"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        return std::make_pair(&Map[0], MapSize);
                    }
                    
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::RetainHandling field.
                using RetainHandlingVal = RetainHandlingCommon::ValueType;
                
                
                /// @brief Common types and functions for
                ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved field.
                    using ValueType = std::uint8_t;
                    
                    /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::OptionsMembers::Reserved field.
                    static const char* name()
                    {
                        return "Reserved";
                    }
                    
                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                    
                    
                };
                
            };
            
            /// @brief Common types and functions for
            ///     @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options field.
            struct OptionsCommon
            {
                /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::ElementMembers::Options field.
                static const char* name()
                {
                    return "Options";
                }
                
            };
            
        };
        
        /// @brief Common types and functions for
        ///     @ref mqtt5::message::SubscribeFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref mqtt5::message::SubscribeFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::message::SubscribeFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref mqtt5::message::SubscribeFields::List field.
        static const char* name()
        {
            return "List";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref mqtt5::message::Subscribe message.
struct SubscribeCommon
{
    /// @brief Name of the @ref mqtt5::message::Subscribe message.
    static const char* name()
    {
        return "SUBSCRIBE";
    }
    
};

} // namespace message

} // namespace mqtt5



