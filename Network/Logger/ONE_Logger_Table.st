//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
#define OBJECTS_CONFIG

//Define part of class WewoFileBase
#define SF_FILE_BUFFER_SIZE         1000                        //size of the buffer used to store the
#include "..\..\Class\WewoFileBase\FileDef.h"
//Define part of class WewoMainLogger
#ifndef RT_DATALOGGING_FILE
  #define RT_DATALOGGING_FILE   "Z:\RT_DEBUG.LOG"

#endif


FUNCTION GLOBAL TAB ONE_Logger
-1$UINT, 0$UINT, 
0$UINT, 0$UINT,

9$UDINT,
TO_UDINT(1418958529), "Wewo_DynamicBuffer", 0$UINT, 5$UINT, 1$UINT,
TO_UDINT(195451389), "Wewo_EnumTranslator", 0$UINT, 0$UINT, 1$UINT,
TO_UDINT(2533728641), "Wewo_LinkedListControlBase", 0$UINT, 11$UINT, 0$UINT,
TO_UDINT(3571739257), "Wewo_LinkedObjectBase", 0$UINT, 10$UINT, 0$UINT,
TO_UDINT(817841270), "WewoBase", 0$UINT, 29$UINT, 0$UINT,
TO_UDINT(3477584769), "WewoFileBase", 0$UINT, 4$UINT, 0$UINT,
TO_UDINT(413350294), "WewoLogger", 0$UINT, 8$UINT, 0$UINT,
TO_UDINT(1736662504), "WewoMainLogger", 0$UINT, 2$UINT, 1$UINT,
TO_UDINT(1771708268), "WewoStringUtils", 0$UINT, 10$UINT, 3$UINT,

1$UINT, TO_UDINT(1257216193), "OBJMLOG\_BASE\OBJ_RTLOGDATABUFFER", 

_NO_ATTR, TO_UDINT(1088145231), "WEWO_ENUMTRANSLATOR1", 






_NO_ATTR, TO_UDINT(4032512732), "OBJMLOG", 

1$UINT, TO_UDINT(1639338490), "OBJMLOG\_BASE\OBJ_RTLOGDATABUFFER\_BASE\_BASE\OBJ_STRINGUTILS", 
1$UINT, TO_UDINT(2970784515), "OBJMLOG\_BASE\_BASE\_BASE\OBJ_STRINGUTILS", 
1$UINT, TO_UDINT(3970261357), "WEWO_ENUMTRANSLATOR1\_BASE\_BASE\OBJ_STRINGUTILS", 

//Internal connections
0$UDINT,
4$UDINT,
TO_UDINT(0), "Obj_StringUtils", TO_UDINT(3),
TO_UDINT(1), "Obj_StringUtils", TO_UDINT(5),
TO_UDINT(2), "Obj_StringUtils", TO_UDINT(4),
TO_UDINT(2), "Obj_RtLogDataBuffer", TO_UDINT(0),
0$UDINT,
1$UDINT,
TO_UDINT(2), "toEnumTranslator", TO_UDINT(1), "ToObject",

//Initialization values
0$UDINT,
7$UDINT,
TO_UDINT(2), "MsgLogLevel", TO_UDINT(LL_INFO),//|Logger.ObjMLog.MsgLogLevel;
TO_UDINT(2), "MsgLogTarget", TO_UDINT(LT_SCREEN),//|Logger.ObjMLog.MsgLogTarget;
TO_UDINT(2), "RtLogBufMode", TO_UDINT(FIFOBUFMODE_ONCE),//|Logger.ObjMLog.RtLogBufMode;
TO_UDINT(2), "Command", TO_UDINT(LOGCMD_IDLE),//|Logger.ObjMLog.Command;
TO_UDINT(2), "c_FlushTime", TO_UDINT(1000),//|Logger.ObjMLog.c_FlushTime;
TO_UDINT(2), "c_RtNrOfLogEntries", TO_UDINT(10000),//|Logger.ObjMLog.c_RtNrOfLogEntries;
TO_UDINT(2), "o_RtTriggerEvent", TO_UDINT(0),//|Logger.ObjMLog.o_RtTriggerEvent;

//Symbolic initialization values
0$UDINT,
0$UDINT,

//Initialization of string values
0$UDINT,
0$UDINT,

//Configuration of tasks (RealTime, Cyclic, Background)
0$UDINT,
0$UDINT,

0$UDINT,
0$UDINT,

0$UDINT,
1$UDINT,
TO_UDINT(2), (100)$UDINT, 4194303$DINT, 	//OBJMLOG

//External connections
0$UDINT,
0$UDINT,

//Magic internal connections
0$UDINT,
2$UDINT,
TO_UDINT(0), "op_LogData", TO_UDINT(2), "op_LogData",
TO_UDINT(0), "c_Group", TO_UDINT(2), "c_Group",

//Configuration of timeslots of tasks (RealTime, Cyclic)
#ifdef __LSLLDR_TIMESLOTS__
0$UDINT,
0$UDINT,

0$UDINT,
0$UDINT,

#endif //__LSLLDR_TIMESLOTS__

//MultiMaster connections
#ifdef __LSLLDR_MULTIMASTER__
0$UDINT,
0$UDINT,
#endif //__LSLLDR_MULTIMASTER__

//Configuration for task ID (RealTime, CyclicTime)
#ifdef __LSLLDR_TASKID__
"\\\\TASKS2  "
0$UDINT,
0$UDINT,

0$UDINT,
0$UDINT,

0$UDINT,
1$UDINT,
(0)$UDINT, 	//OBJMLOG

#endif //__LSLLDR_TASKID__

END_FUNCTION