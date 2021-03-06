#pragma once

#include <limits>
#include "utf8_decode.h"

namespace utf8
{
    constexpr uint32_t const static utf8_invalid = std::numeric_limits< uint32_t >::max();

    using Codepoint = std::uint32_t;
    using Octet     = std::uint8_t;
    using const_octet_iter = Octet const *;
    //____________________________________________________________________________________

    bool inline is_ascii_control( Codepoint arg )
    {
        return arg <= 0x1f or ( arg >= 0x7f and arg < 0x80 );
    }
    //____________________________________________________________________________________

    bool inline valid_mqtt_string_codepoint( Codepoint arg )
    {
        return not is_ascii_control( arg );
    }
    //____________________________________________________________________________________

    bool inline valid_mqtt_topic_filter_codepoint( Codepoint prv, Codepoint cur, Codepoint nxt )
    {
        return valid_mqtt_string_codepoint( cur )
            and (( cur != '#' and cur != '+')
                 or ( cur == '#' and prv == '/' and nxt == '\0')
                 or ( cur == '+' and prv == '/' and ( nxt == '/' or nxt == '\0')));
    }
    //____________________________________________________________________________________

    bool inline valid_mqtt_topic_name_codepoint( Codepoint arg )
    {
        return valid_mqtt_string_codepoint( arg ) and arg != '#' and arg != '+';
    }
    //____________________________________________________________________________________

    Codepoint inline next_codepoint( const_octet_iter & iter )
    {
        if ( * iter == '\0' )
        {
            return utf8_invalid;
        }

        uint32_t  state = utf8_accept;
        Codepoint cp    = 0;
        do
        {
            ::utf8::decode( & state, & cp, *(iter++));
            if ( state == utf8_accept ) return cp;
        }
        while ( *iter != '\0' and state != utf8_reject );

        return utf8_invalid;
    }
    //____________________________________________________________________________________

    bool inline valid_mqtt_string( const_octet_iter arg )
    {
        const_octet_iter iter = arg;
        while ( * iter != '\0' )
        {
            Codepoint cp = next_codepoint( iter );
            if ( cp == utf8_invalid or not valid_mqtt_string_codepoint( cp ))
            {
                return false;
            }
        }
        return true;
    }
    //____________________________________________________________________________________

    bool inline valid_mqtt_topic_filter( const_octet_iter arg )
    {
        const_octet_iter iter = arg;
        Codepoint prev_cp = '/';
        while ( * iter != '\0' )
        {
            Codepoint cp = next_codepoint( iter );
            if ( cp == utf8_invalid
                 or not valid_mqtt_topic_filter_codepoint( prev_cp, cp, * iter ))
            {
                return false;
            }
            prev_cp = cp;
        }
        return true;
    }
    //____________________________________________________________________________________

    bool inline valid_mqtt_topic_name( const_octet_iter arg )
    {
        const_octet_iter iter = arg;
        while ( * iter != '\0' )
        {
            Codepoint cp = next_codepoint( iter );
            if ( cp == utf8_invalid or not valid_mqtt_topic_name_codepoint( cp ))
            {
                return false;
            }
        }
        return true;
    }
}
