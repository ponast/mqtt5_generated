// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqtt5::field::PayloadFormatIndicator field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>

namespace mqtt5
{

namespace field
{


/// @brief Scope for all the common definitions of the member fields of
///     @ref mqtt5::field::PayloadFormatIndicator field.
struct PayloadFormatIndicatorMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PayloadFormatIndicatorMembers::Id field.
    struct IdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     mqtt5::field::PayloadFormatIndicatorMembers::Id field.
        using ValueType = std::uint32_t;
        
        /// @brief Name of the @ref mqtt5::field::PayloadFormatIndicatorMembers::Id field.
        static const char* name()
        {
            return "Id";
        }
        
        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
        
        
    };
    
    /// @brief Common types and functions for
    ///     @ref mqtt5::field::PayloadFormatIndicatorMembers::Value field.
    struct ValueCommon
    {
        /// @brief Values enumerator for
        ///     @ref mqtt5::field::PayloadFormatIndicatorMembers::Value field.
        enum class ValueType : std::uint8_t
        {
            Unspecified = 0, ///< value @b Unspecified. 
            Utf8 = 1, ///< value <b>UTF-8</b>. 
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
        };
        
        /// @brief Single value name info entry
        using ValueNameInfo = const char*;
        
        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;
        
        /// @brief Name of the @ref mqtt5::field::PayloadFormatIndicatorMembers::Value field.
        static const char* name()
        {
            return "Value";
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
                "Unspecified",
                "UTF-8"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            return std::make_pair(&Map[0], MapSize);
        }
        
        
    };
    
    /// @brief Values enumerator for
    ///     @ref mqtt5::field::PayloadFormatIndicatorMembers::Value field.
    using ValueVal = ValueCommon::ValueType;
    
    
};

/// @brief Common types and functions for
///     @ref mqtt5::field::PayloadFormatIndicator field.
struct PayloadFormatIndicatorCommon
{
    /// @brief Name of the @ref mqtt5::field::PayloadFormatIndicator field.
    static const char* name()
    {
        return "Property Format Indicator";
    }
    
};

} // namespace field

} // namespace mqtt5

