#include <limits>

#include "utf8_decode.h"

namespace utf8
{
    constexpr uint32_t const static utf8_invalid = std::numeric_limits< uint32_t >::max();

    using Codepoint = std::uint32_t;
    using Octet     = std::uint8_t;
    using const_octet_iter = Octet const *;
    //____________________________________________________________________________________

    static bool is_ascii_control( Codepoint arg )
    {
        char const arg_trunc = static_cast< char >( arg );
        return arg < 0x80 and ( arg <= 0x1f or arg >= 0x7f );
    }
    //____________________________________________________________________________________

    static bool valid_mqtt_string_codepoint( Codepoint arg )
    {
        return not is_ascii_control( arg );
    }
    //____________________________________________________________________________________

    bool valid_mqtt_topic_filter_codepoint( Codepoint prv, Codepoint cur, Codepoint nxt )
    {
        return valid_mqtt_string_codepoint( cur )
            and (( cur != '#' and cur != '+')
                 or ( cur == '#' and prv == '/' and nxt == '\0')
                 or ( cur == '+' and prv == '/' and ( nxt == '/' or nxt == '\0')));
    }
    //____________________________________________________________________________________

    static bool valid_mqtt_topic_name_codepoint( Codepoint arg )
    {
        return valid_mqtt_string_codepoint( arg ) and arg != '#' and arg != '+';
    }
    //____________________________________________________________________________________

    static Codepoint next_codepoint( const_octet_iter & iter )
    {
        if ( * iter == '\0' )
        {
            throw Fault::End_of_string( "next_codepoint(): Reached end of string" );
        }

        const_octet_iter begin = iter;
        uint32_t         state = utf8_accept;
        Codepoint        cp    = 0;
        do
        {
            ::utf8::decode( & state, & cp, *(iter++));
            if ( state == utf8_accept ) return cp;
        } while ( *iter != '\0' and state != utf8_reject );
        return utf8_invalid;
    }
    //____________________________________________________________________________________

    static bool valid_mqtt_string( const_octet_iter arg )
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

    static bool valid_mqtt_topic_filter( const_octet_iter arg )
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

    static bool valid_mqtt_topic_name( const_octet_iter arg )
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
