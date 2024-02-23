(***************************************************************************
  File:         SafanGeneral.h
  Description:  General definitions available for all safan objects
                Because SafanBase will be always used in projects this include 
                file is added to class SafanBase.
                
                SafanFrameWork
  Author:       Henk odink
 ***************************************************************************)
#define PASSED      FALSE
#define FAILED      TRUE

#define VALUE_OFF   FALSE               
#define VALUE_ON    TRUE                
 
 
// General result status OK
#define RESULT_STATUS_OK                  0                   // Result status OK 
// General result status FAILED
#define RESULT_STATUS_FAILED              -1                  // Result status FAILED
  
// General result status Errors  -100 .. -199 
#define SW_ERROR_NIL_POINTER              -100   // SOFTWARE ERROR: NIL pointer found. 
#define SW_ERROR_INDEX_NR                 -101   // SOFTWARE ERROR: Invalid index number found (out of array). 




// Format of a (Error/Warning) Message Id =  0GGGLMMMMM
//           M = Internal Message id 
//           L = Level = cirtical error, application error, internal error or warning
//           G = Group = part of application object is used for.
//           General Message Id = level*LVL_FACTOR + group*GRP_FACTOR + Id
//           In decimal value presentation we can find quickly the source of the message
#define MSG_FACTOR                          1        //      00001 -     99999   (Msg   00001 .. 99999)
#define LVL_FACTOR                          100000   //     1MMMMM -    9MMMMM   (level     1 ..     9)
#define GRP_FACTOR                          1000000  // 0001LMMMMM - 3999MMMMM   (group  0001 ..  3999)  (note maximum UDINT = 4294 9 67295)

#define CONVERT_2_EXT_MSGLOG_ID(grpId,lvlId,msgId)    ( (GRP_FACTOR*(grpId)) + (LVL_FACTOR*(lvlId)) + (MSG_FACTOR*(msgId)))

#define GET_GROUP(msgLogId)                       (   (msgLogId) / GRP_FACTOR )
#define GET_LEVEL(msgLogId)                       ( ( (msgLogId) - (GET_GROUP(msgLogId)*GRP_FACTOR) ) / LVL_FACTOR )
#define GET_MSG(msgLogId)                         (   (msgLogId) - (GET_GROUP(msgLogId)*GRP_FACTOR) - (GET_LEVEL(msgLogId)*LVL_FACTOR) )


// ****** Start defines for message logging  ******
// General software (error or warning) message Id's  range: 00001 - 9999

#define MSGID_NONE                          0     // None
#define MSGID_NIL_POINTER                   1     // NIL pointer found. 
#define MSGID_INDEX_NR                      2     // Invalid index number found (out of array). 
#define MSGID_INVALID_OBJECT                3     // Object is not valid (has an error)
#define MSGID_UNKNOWN_OBJECT                4     // Selected object is not known/not found
#define MSGID_INTERFACE                     5     // Interface problem detected
#define MSGID_UNEXPECTED_SITUATION          7     // Unexpected situation
#define MSGID_NOT_IMPLEMENTED               8     // Not implemented yet. 
#define MSGID_TIMEOUT                       9     // Timeout occurred. 
#define MSGID_COMMUNICATION                 10    // Communication problem
#define MSGID_MULTIPLE_ACCESS               11    // Simultanuous multple access
#define MSGID_NO_DATA                       12    // No data available
#define MSGID_INVALID_DATA                  13    // Invalid data
#define MSGID_DEBUG_ACTIVE                  14    // Debug Code activated
#define MSGID_MAIN_FAILER                   15    // General main failer
#define MSGID_SETTING                       16    // Setting(s) failed
#define MSGID_COMMAND                       17    // Command failed
#define MSGID_FILE                          18    // File handling failed
#define MSGID_MEM_ALLOC                     19    // Memory allocation failed
#define MSGID_BUFFER                        20    // Buffer problem found



//WriteActiveErrorWarning(ErrorWarningId:=

// Application software (error or warning) message Id's  range: >= 10000
#define FIRST_APPLICATION_MSGID             10000 // Setting(s) failed

// ****** End defines for message logging  ******


// *****   Start defines for Realtime datalogging  *******
#define RT_LOG_RESERVED_RANGE               9999  // Range of reserverd id's for realtime logging

// Base id's used to find the source of the logged data
// 1 - 9999             reserved area for temporary (adhoc) loggings
#define RT_LOG_BASE_ID_TEMPORARY            0     

// 000001-109999        Reserved area for Safan Framework
#define RT_LOG_BASE_ID_FRAMEWORK            100000 
#define RT_LOG_ID_INSERT_START_LOG_NR       100001

// 110001 - MAX UDINT   Application area
#define RT_LOG_BASE_ID_APPLICATION          110000

// *****   End defines for Realtime datalogging  *******


#define REGISTER_Wewo_OBJECT 1234321               // Identification to register Wewo_Objects

 
 
#define L_OR      |        // Logic OR
#define L_AND     &        // Logic AND

#define B_NOT     NOT      // Bitwise NOT
#define B_OR      OR       // Bitwise OR
#define B_AND     AND      // Bitwise AND
#define B_XOR     XOR      // Bitwise XOR


// ASCII table for special characters
#ifndef cNUL
  #define cNUL			16#00		// NUL	- Nil
  #define cSOH			16#01		// SOH	- Start of heading
  #define cSTX			16#02		// STX	- Start of text
  #define cETX			16#03		// ETX	- End of text
  #define cEOT			16#04		// EOT	- End of transmission
  #define cENQ			16#05		// Enq	- Enquiry
  #define cACK			16#06		// Ack	- Acknowledge
  #define cBEL			16#07		// Bel	- Bel
  #define cBS				16#08		// BS	  - BackSpace
  #define cHT   		16#09		// HT	  - Horizontal Tabulation
  #define cLF 			16#0A		// LF	  - LineFeed
  #define cVT  			16#0B		// VT	  - Vertcal Tabulation
  #define cFF				16#0C		// FF	  - Form Feed
  #define cCR 			16#0D		// CR	  - Caridge return
  #define cSO				16#0E		// SO	  - Shift out
  #define cSI				16#0F		// SI	  - Shift in
  #define cDLE			16#10		// DLE	- Data link escape
  #define cDC1			16#11		// DC1	- Device control 1
  #define cDC2			16#12		// DC2	- Device control 2
  #define cDC3			16#13		// DC3	- Device control 3
  #define cWACK			16#13		// WACK	- Wait for Ack
  #define cDC4			16#14		// DC4	- Device control 4
  #define cNAK			16#15		// NAK	- Negative acknowledge
  #define cSYN			16#16		// SYN	- Synchroous idle
  #define cETB			16#17		// ETB	- End of transmission block
  #define cCAN			16#18		// CAN	- Cancel
  #define cEM				16#19		// EM	  - End of medium
  #define cSUB			16#1A		// SUB	- Substitute
  #define cESC			16#1B		// ESC	- Escape
  #define cFS				16#1C		// FS	  - File separator
  #define cGS				16#1D		// GS	  - Group separator
  #define cRS				16#1E		// RS	  - Record separator 
  #define cUS				16#1F		// US	  - Unit separator
  #define cSPACE  	16#20		// SPACE- Space
#endif


#define MAX_UDINT_VALUE   (0xFFFFFFFF $UDINT)
#define MAX_DINT_VALUE    (0x7FFFFFFF $DINT)

#define MAX_UINT_VALUE    (0xFFFF $UINT)
#define MAX_INT_VALUE     (0x7FFF $INT)  

#define MAX_USINT_VALUE   (0xFF $USINT)
#define MAX_SINT_VALUE    (0x7F $UINT)


#define MIN_UDINT_VALUE   (0 $UDINT)
#define MIN_DINT_VALUE    (-MAX_DINT_VALUE)

#define MIN_UINT_VALUE    (0 $UINT)
#define MIN_INT_VALUE     (-MAX_INT_VALUE)

#define MIN_USINT_VALUE   ( 0 $USINT)
#define MIN_SINT_VALUE    (-MAX_SINT_VALUE)
