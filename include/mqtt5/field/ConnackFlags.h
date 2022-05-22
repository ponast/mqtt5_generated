// Generated by commsdsl2comms v4.0.0

/// @file
/// @brief Contains definition of <b>"ConnackFlags"</b> field.

#pragma once

#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "mqtt5/field/ConnackFlagsCommon.h"
#include "mqtt5/field/FieldBase.h"
#include "mqtt5/options/DefaultOptions.h"

namespace mqtt5
{

namespace field
{


/// @brief Definition of <b>"ConnackFlags"</b> field.
/// @details
///     Defined in section 3.2.2.1.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqtt5::options::DefaultOptions, typename... TExtraOpts>
class ConnackFlags : public
    comms::field::BitmaskValue<
        mqtt5::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<1U>,
        comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
    >
{
    using Base =
        comms::field::BitmaskValue<
            mqtt5::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >;
public:
    /// @brief Provides names and generates access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values and functions are:
    ///      @li @b BitIdx_SessionPresent, @b getBitValue_SessionPresent() and @b setBitValue_SessionPresent().
    COMMS_BITMASK_BITS_SEQ(
        SessionPresent
    );

    /// @brief Retrieve name of the bit.
    /// @see @ref mqtt5::field::ConnackFlagsCommon::bitName().
    static const char* bitName(BitIdx idx)
    {
        return
            mqtt5::field::ConnackFlagsCommon::bitName(
                static_cast<std::size_t>(idx));
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return mqtt5::field::ConnackFlagsCommon::name();
    }


};


} // namespace field

} // namespace mqtt5

