/*
    See bind.si for actual signon screen
                     The SemWare Editor Professional v4.30
       Copyright 1996-2007 SemWare Corp.   All rights reserved worldwide
*/

#define HELP_VERSION       0x8008
#define SE_CONFIG_VERSION  0x0303e
//#define SE_VERSION      " "

#ifdef INCLUDE_SC_VERSION

    #ifdef _MSC_VER
        #define WHAT_COMPILER    " (msvc version)"
    #else
    #ifdef __WATCOMC__
        #define WHAT_COMPILER    " (ow version)"
    #else
    #ifdef __GNUC__
        #define WHAT_COMPILER    " (gcc version)"
    #else
    #ifdef __BORLANDC__
        #define WHAT_COMPILER    " (bcc version)"
    #else
        #error unknown compiler!
    #endif
    #endif
    #endif
    #endif
#endif

#ifdef SC_INVOKED
//    #ifdef BETA
//        string VER_STR[] = "V4.41.23"
//    #else
//        string VER_STR[] = "V4.50"
//    #endif
//
//    string VER_DATE[]  = "2020 Jan 15"
//    string COPYRIGHT[] = "Copyright 1991-2020 SemWare Corp.  All rights reserved worldwide."
    #define PLACE_HOLDER 0
#else
    #ifdef BETA
        #define VER_STR     "V4.48"
    #else
        #define VER_STR     "V4.48"
    #endif

    #define VER_DATE   "2022 Oct 27"
    #define COPYRIGHT  "Copyright 1991-2022 SemWare Corp.  All rights reserved worldwide."
    #define SC_TITLE   "SAL Compiler " VER_STR WHAT_COMPILER
#endif
