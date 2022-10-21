/****************************************************************************
  find.h/macfuncs.h/user.h depend on this file

  Included by bind.*, iconfig (macro) and sc
 ****************************************************************************/

/*
    What about hTOPIC ... remove these from help.h
 */

#define PATHLEN             255             //$$$ probably OS max path, or ours?
#define TEMP_STRING_SIZE    255             //$$$ ???

#define NUMERIC      0x0001    /* 0..9 */
#define PLUSMINUS    0x0002    /* + or - */
#define NUMERIC2     (NUMERIC | PLUSMINUS)
#define FN_COMP      0x0004    /* <tab> invokes filename completion */
#define TRIM_SPACES  0x0008    /* remove leading/trailing spaces */
#define SHOWDIR      0x0010
#define MULTISELECT  0x0020
#define ASK_IN_USE   0x0040

/* hack - needed by bindlist pickdr - also defined in edit.h */
#define BROWSE_MODE         0x40    // also passed by EditFile to AddFileToRing

#define MUST_EXIST   0x0100
#define WRITE_ACCESS 0x0200
#define FULL_PATH    0x0400
#define EDIT_FILE    0x0800

#define MAXFINDLEN 255                          //$$$ ???
#define OPTIONSIZE 12

#define CLIPBOARD_ID      1
#define GLOBAL_VARS_ID    2 // only used to push and pop strings
#define KILLBUFFER_ID     3
#define PUBLIC_ID         4
#define KBD_MACRO_ID      5
#define HISTORY_ID        6
#define HELP_HEADER_ID    7
#define HELP_TOPIC_ID     8
#define HELP_CONTROL_ID   9
#define HELP_INDEX_ID    10
#define VISITED_DIRS_ID  11 // used by pickfile
#define CAPTURE_ID       12

#define FIRST_WORK_BUFFER_ID    13
#define TOTAL_WORK_BUFFERS       8
#define LAST_WORK_BUFFER_ID     (FIRST_WORK_BUFFER_ID + TOTAL_WORK_BUFFERS - 1)

#define TOTAL_PREFAB_BUFFERS    (LAST_WORK_BUFFER_ID)

#define PUBLIC_OFFSET_OFF   1
#define PUBLIC_FLAG_OFF     3
#define PUBLIC_ID_OFF       4
#define PUBLIC_NAME_LEN_OFF 12
#define PUBLIC_NAME_OFF     13

#define PUBLIC_FLAG_NAME 0x00
#define PUBLIC_FLAG_FILE 0x01
#define PUBLIC_HIDDEN    0x02

#define MOUSE_SCANCODE    0xe8
//#define HELPLINE_SCANCODE 0xe9

#define flVSCROLL       0x0001  /* allow vert scrolling/display vscrollbar if boxed */
#define flHSCROLL       0x0002  /* allow horz scrolling/display hscrollbar if boxed */
#define flZOOM          0x0004  /* display zoom symbol if boxed  */
#define flCLOSE         0x0008  /* display close symbol if boxed */
#define flBOX           0x0010  /* is display boxed ? */
#define flBORDERMASK    (flVSCROLL | flHSCROLL | flZOOM | flCLOSE | flBOX)
                        /* mask for mouse flags above */

#define flWIN           0x0200  /* Can dispatch be called? vwin/hwin and friends */
#define flEDIT          0x0400  /* is current window editable    */
#define flWINEDIT       (flWIN | flEDIT)
#define flDISPLAY       0x0800  /* can updatedisplay be called ? */
#define flPROCESSWIN    0x1000  // is called from ProcessInWindow
#define flMAINLOOP      0x2000
#define flREAD          0x4000

#define EXCLUSIVE                   0x01
#define NON_EXCLUSIVE               0x02
#define ENABLE_TYPEABLES            0x04

#define ENABLE_SEARCH               0x01
#define ANCHOR_SEARCH               0x02
#define BLOCK_SEARCH                0x04
#define HSCROLL                     0x08
#define FIXED_HEIGHT                0x10
#define FIXED_WIDTH                 0x20
#define PRESERVE_HELPLINE           0x40
#define DRAW_CLOSE_BUTTON           0x80
#define DONT_ALLOW_CENTERING        0x1000  // avoid (flVSCROLL..flCLOSE shl 8) above

// EditFile flags
#define QUIET                       0x01    /* must = _DONT_PROMPT_ */
#define FROM_CMDLINE                0x02    /* must not conflict with _DONT_PROMPT_ */
#define DONT_LOAD                   0x04

#define DONT_EXPAND                 0x100   /* avoid conflicts! */
#define PROMPTED                    0x200   // for EditFile()

#define INVALID_HANDLE              -1      // for fReadFile

//------------------------------------ Help system -----------------------------------

#define hTOPIC_INDEX    20
#define hTOPIC          19
#define hHIDE            8      // i.e. backspace character
#define hLINK           12
#define hINFO            4
#define hUNDERLINE       3
#define hBOLD            2
#define hITALICS         1
#define hOPEN          174
#define hCLOSE         175
#define hSUB            26

#define chTAG_START         '®'
#define chTAG_NEGATE        '/'
#define chTAG_END           '¯'

#define chBOLD              'B'
#define chITALICS           'I'
#define chLINK              'L'
#define chTOPIC             'T'
#define chSUBTOPIC          'S'
#define chREPLACE           'R'
#define chLITERAL           '#'
#define chINFOLINK          'I'
#define chTOPIC_SEPARATOR   ';'
#define chFN_SEPARATOR      '|'

#define TOPIC_SIZE          128
#define INDEX_FLAG_COLUMN     7
#define INDEX_TOPIC_COLUMN    8

#define ndxVISIBLE         0x01
#define ndxREDIRECTED      0x02
#define ndxSUBSTITUTIONS   0x04
#define ndxCOLUMNAR        0x08
#define ndxREPLACE         0x10
#define ndxCOMMAND         0x20

//-------------------------------------------------------------------------------------

#define LOAD_INDEX      0x01
#define PREV_TOPIC      0x02
#define SEARCH_HELP     0x04

#define   EDIT_HELPLINE 0x01
#define   PUT_HEADER    0x02
#define   PUT_FOOTER    0x04

#define   DRAW_SHADOW       0x80    // used by DrawBox - don't confuse with _DRAW_SHADOWS_
#define   REFRESH_BORDER    0x2000  // used by DrawBox
#define   REFRESH_HEADER    0x4000  // used by DrawBox
#define   REFRESH_FOOTER    0x8000  // used by DrawBox

/* View finds file first char, "File" in english, "Datei" */
#ifndef GERMAN
    #define  VIEW_FINDS_CHAR    0x46        /* 'F' */
#else
    #define  VIEW_FINDS_CHAR    0x44        /* 'D' */
#endif

/* flags for the Sort() command */

#define SORT_DESCENDING     0x0001
#define SORT_IGNORE_CASE    0x0002
#define SORT_COUNTRY        0x0004
#define SORT_PICK           0x0008
#define SORT_DECIMAL        0x0010

/* flags for the Dos() command */

#define DONT_PROMPT             0x0001
#define DONT_CLEAR              0x0002
#define RUN_DETACHED            0x0004
#define PRESERVE_SCREEN         0x0008
#define ALLOW_DETACHMENT        0x0010
#define RETURN_CODE             0x0020
#define TEE_OUTPUT              0x0040
#define RETURN_PROCESS_HANDLE   0x0080
#define _DONT_CHANGE_VIDEO      0x0100
#define _CREATE_NEW_CONSOLE     0x0200
#define _DONT_WAIT              0x0400
#define _START_HIDDEN           0x0800
#define _START_MAXIMIZED        0x1000
#define _START_MINIMIZED        0x2000
#define DONT_CHANGE_TITLE       0x4000
#define _USE_CMD_PROCESSOR      0x8000
#define WAIT_FOR_EXIT           0x10000
#define USE_COMSPEC             0x20000
#define _START_NOACTIVATE       0x40000
#define _PIPE_OUTPUT            0x80000
#define _SHELL                  0x100000

/* flags for the PickFileFlags variable */

#define ADD_DIRS       0x01
#define DIRS_AT_TOP    0x02
#define ADD_SLASH      0x04
#define SHOW_LAST_DIR  0x08
#define USE_LAST_ACCESS_DATE    0x10

// flags for the BuildPickBufferEx() function

#define INSERT_PATH     1
#define RECURSE_DIRS    2

/*
    Configuration options Max Lengths
*/

#define MAX_CONFIG_STR_LEN      255 /* for Set/Query string */      //$$$ review

#define HELPFILE_MAXLEN          65
#define KBDPATH_MAXLEN           65

#define PICKFILEPATH_MAXLEN     255         /* used with expandpath */  //$$$ review
#define SWAPPATH_MAXLEN          80         /* should be PATHLEN */

#define DOSCMDLINE_MAXLEN       255                                 //$$$ review
#define MACROCMDLINE_MAXLEN     255

#define PRINTHEADER_MAXLEN        4
#define PRINTFOOTER_MAXLEN        4

#define BACKUPEXT_MAXLEN         32

#define FINDOPTIONS_MAXLEN        6
#define REPLACEOPTIONS_MAXLEN     6

#define PICKSORT_MAXLEN           7

#define VARTABS_MAXLEN           32
#define WORDSET_MAXLEN           32

#define PRINTDEVICE_MAXLEN       48

#define DEFAULTEXT_MAXLEN       128

#define PRINTINIT_MAXLEN         60

#define TSEPATH_MAXLEN          255                                 //$$$ review

#define MAX_PROMPTSTRING_LEN    80

// common definitions for syntax hiliting - needed by:
// iconfig.si, syntax.si, synhi.c, and projects.h

#ifdef MORE_KEYWORDS
    #define MAX_SYN_COLORS          41  // u. structure colors ??? if > 16, need to change lots of stuff.  See synhi.c note at top of file
#else
    #define MAX_SYN_COLORS          26  // u. structure colors ??? if > 16, need to change lots of stuff.  See synhi.c note at top of file
#endif

#define MAX_TOKS                3   // maximum number of non-keyword tokens
#define MAX_KEYWORD_TOKS        16  // maximum number of keyword tokens (e.g, keyword1=, keyword2=..keyword9=)
#define MAX_OPTION_COLORS       2
#define NUM_OPTIONS             6

#define MAX_SYMBOLS             4096     // max non-alphnum symbols
#define MAX_TOK_LEN             80

#define INCOMPLETE_QUOTE_COLOR      0
#define NUMBER_COLOR                1

#define WHITESPACE_FLAG            0x01
#define MULTILINE_DELIMITED_FLAG   0x02
#define TO_END_OF_LINE_FLAG        0x04
#define QUOTE_FLAG                 0x08
#define DIRECTIVE_FLAG             0x10
#define SINGLELINE_DELIMITED_FLAG  0x20
#define KEYWORD_FLAG               0x40
#define SYMBOL_FLAG                0x80
#define NUMBER_FLAG                0x100
#define ALL_COLOR_FLAGS (WHITESPACE_FLAG|DIRECTIVE_FLAG|TO_END_OF_LINE_FLAG|MULTILINE_DELIMITED_FLAG|QUOTE_FLAG|SINGLELINE_DELIMITED_FLAG|KEYWORD_FLAG|SYMBOL_FLAG|NUMBER_FLAG)

// different types of tokens
#define TOK_ALPHANUM                0x01
#define TOK_ALPHANUM_BEGIN          0x02
#define TOK_ALPHANUM_END            0x04

// numeric flags
#define NUMERIC_INTEGER             0x001   // digit {digit}
#define NUMERIC_C_HEX               0x002   // '0' 'X'|'x' hex {hex}
#define NUMERIC_ASM_HEX             0x004   // digit {hex} 'H'|'h'
#define NUMERIC_PASCAL_HEX          0x008   // '$' hex {hex}
#define NUMERIC_BINARY              0x010   // '%' bin {bin}
#define NUMERIC_REAL                0x020   // {digit} ['.'] digit {digit}
#define NUMERIC_SCI_NOTATION        0x040
#define NUMERIC_COMMA               0x080
#define NUMERIC_C_UL                0x100
#define NUMERIC_BASIC_HEX           0x200   // '&' 'H'|'h' hex {hex}
#define NUMERIC_DP_SCI_NOTATION     0x400   // similar to SCI_NOTATION, except a 'd' is used for the 'e'
#define NUMERIC_EUPHORIA_HEX        0x800   // '#' up-hex {up-hex}
#define NUMERIC_SAL_BINARY          0x1000
#define NUMERIC_UNDERLINE           0x2000

#define TOTAL_NUMERIC_FLAGS         14
