//________________________________________________________________________________________________________________
//
// Defines by Riwo
//
// General
#define  TAGLENGTH            100
#define  HWONLINETIME         5000

#define   MAXUDINT            4294967295
#define   MAXDINT             2147483647
#define   MAXREAL             3.4E+38

// define init cyles
#define  INIT_CYCLE_1         1
#define  INIT_CYCLE_2         2
#define  INIT_CYCLE_3         3
#define  INIT_CYCLE_4         4
#define  INIT_CYCLE_5         5
#define  INIT_CYCLE_6         6
#define  INIT_CYCLE_7         7
#define  INIT_CYCLE_8         8
#define  INIT_CYCLE_9         9
#define  INIT_CYCLE_10        10
#define  INIT_CYCLE_11        11
#define  INIT_CYCLE_12        12


// Error messaging, Constants used for file handling
#define PATH_ERROR				    "c:\Textlist\Alarmlist\Alarmlist_NL.txt"
#define PATH_ERROR_DUITS      "c:\Textlist\Alarmlist\Alarmlist_DE.txt"
#define PATH_ERROR_ENGELS     "c:\Textlist\Alarmlist\Alarmlist_EN.txt"
#define PATH_ERROR_NEDERLANDS "c:\Textlist\Alarmlist\Alarmlist_NL.txt"
#define PATH_ERROR_DEENS      "c:\Textlist\Alarmlist\Alarmlist_DK.txt"
#define PATH_ERROR_FRANS      "c:\Textlist\Alarmlist\Alarmlist_FR.txt"
#define PATH_ERROR_US_ENGELS  "c:\Textlist\Alarmlist\Alarmlist_EN.txt"

#define LANG_DUITS            0
#define LANG_ENGELS           1
#define LANG_NEDERLANDS       2
#define LANG_DEENS            3
#define LANG_FRANS            4
#define LANG_US_ENGELS        5

#define ALM_ALARM             0
#define ALM_SMS               1
#define ALM_WARNING           2
#define ALM_WARNSMS           3
#define ALM_INFO              4

//TEXT CODE

#define UNICODE               2
#define ASCII                 1

// 1 character (ascii or unicode)
#define  _CHAR                UINT

// used special characters
#define HOR_TAB				        9		    // horizontal tabulator
#define LF					          10		  // Line feed
#define CR					          13		  // Carriage return
#define TXT_EOL				        "<EOL>" // End of line used in textfiles
#define WHITE_SPACE			      32		  // Spatie
#define DUBBEL_QUOTE		      34		  // quote
#define cSPC	                '0'     // Space character
#define cSEP		              ','     // Seperator character
#define cCOLON                ':'     // Colon
#define cSMCOLON              ';'     // Semi Colon
#define cHASH                 '#'     // HashTag
#define cPERC                 '%'     // percent