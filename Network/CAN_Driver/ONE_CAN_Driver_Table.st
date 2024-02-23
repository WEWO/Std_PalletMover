//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
#define OBJECTS_CONFIG



FUNCTION GLOBAL TAB ONE_CAN_Driver
-1$UINT, 0$UINT, 
0$UINT, 0$UINT,

6$UDINT,
TO_UDINT(529317953), "_CanLib", 1$UINT, 10$UINT, 1$UINT,
TO_UDINT(472728498), "CanBase", 1$UINT, 2$UINT, 0$UINT,
TO_UDINT(1472885325), "CanDriverBase", 0$UINT, 7$UINT, 0$UINT,
TO_UDINT(383120389), "CanDriverCPU", 0$UINT, 2$UINT, 1$UINT,
TO_UDINT(4284412609), "CanOpenBase", 1$UINT, 6$UINT, 1$UINT,
TO_UDINT(3696196759), "CanOpenCyncMaster", 0$UINT, 0$UINT, 1$UINT,

1$UINT, TO_UDINT(4202625677), "OBJCANDRIVER1\_CANLIB0", 



_NO_ATTR, TO_UDINT(415298359), "OBJCANDRIVER1", 

1$UINT, TO_UDINT(2207137903), "OBJCANSYNCMASTER\CANOPEN", 

_NO_ATTR, TO_UDINT(997636526), "OBJCANSYNCMASTER", 

//Internal connections
0$UDINT,
2$UDINT,
TO_UDINT(1), "_CanLib0", TO_UDINT(0),
TO_UDINT(3), "CanOpen", TO_UDINT(2),
0$UDINT,
2$UDINT,
TO_UDINT(1), "CanChannel", TO_UDINT(0), "Command",
TO_UDINT(3), "Driver", TO_UDINT(1), "Command",

//Initialization values
0$UDINT,
6$UDINT,
TO_UDINT(0), "CanBus", TO_UDINT(1),//|CAN_Driver.ObjCanDriver1\_CanLib0.CanBus;
TO_UDINT(1), "CanBus", TO_UDINT(1),//|CAN_Driver.ObjCanDriver1.CanBus;
TO_UDINT(1), "cBaudrate", TO_UDINT(250),//|CAN_Driver.ObjCanDriver1.cBaudrate;
TO_UDINT(2), "cNode", TO_UDINT(1),//|CAN_Driver.ObjCanSyncMaster\CanOpen.cNode;
TO_UDINT(3), "HeartbeatTime", TO_UDINT(1000),//|CAN_Driver.ObjCanSyncMaster.HeartbeatTime;
TO_UDINT(3), "cNode", TO_UDINT(1),//|CAN_Driver.ObjCanSyncMaster.cNode;

//Symbolic initialization values
0$UDINT,
0$UDINT,

//Initialization of string values
0$UDINT,
0$UDINT,

//Configuration of tasks (RealTime, Cyclic, Background)
0$UDINT,
1$UDINT,
TO_UDINT(3), (50)$UDINT, 4194303$DINT, 	//OBJCANSYNCMASTER

0$UDINT,
1$UDINT,
TO_UDINT(2), (10)$UDINT, 4194303$DINT, 	//OBJCANSYNCMASTER\CANOPEN

0$UDINT,
0$UDINT,

//External connections
0$UDINT,
0$UDINT,

//Magic internal connections
0$UDINT,
3$UDINT,
TO_UDINT(0), "To_Can", TO_UDINT(1), "To_Can",
TO_UDINT(2), "Driver", TO_UDINT(3), "Driver",
TO_UDINT(2), "cNode", TO_UDINT(3), "cNode",

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
1$UDINT,
(0)$UDINT, 	//OBJCANSYNCMASTER

0$UDINT,
1$UDINT,
(0)$UDINT, 	//OBJCANSYNCMASTER\CANOPEN

0$UDINT,
0$UDINT,

#endif //__LSLLDR_TASKID__

END_FUNCTION