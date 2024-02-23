//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
#define  ALIGNMENT 4
#include <Class.h>
#include <RTOS_Globals.h>
#include <RTOS_Variables.h>
#include <RTOS_PRIVATE.h>
#include <RTOS_header.h>
#include <RTOS_PRIVDefs.H>
#include <RTOS_Scan.h>

#include <Lsl_String.h>

//Project Headerfiles
#include <SystemTypes.h>
#include "..\Class\WewoBase\SafanGeneral.h"
#include <File_IOTypes.h>
#include <SysMsgTypes.h>
#include "..\Class\StringInternal\StringDefs.h"
#include <MultiTaskTypes.h>
#include <lsl_st_tcp_user.h>
#include <lsl_st_syssernum.h>
#include "..\Class\MQTTClient\mqtt_client.h"
#include "..\Class\_XMLStructCreator\XML_Defines.h"
#include <CanTypes.h>
#include "..\Class\Ram\Ram.h"
#include <St_grconst.h>
#include <St_graph.h>
#include <GraphicTypes.h>
#include "..\Class\CanDriverBase\GlCanDriverBase.h"
#include "..\Class\CanBase\CanBaseGl.h"
#include "..\Class\CanOpenBase\CanOpenBaseGl.h"

#include "unit.h"
#include "UserDef.h"
#include "types.h"
#include "lslpublictypes.h"
#include "channels.h"

#define LSL_SWAP(x)  (((x) SHL 24) OR ((x AND 16#0000ff00) SHL 8) OR((x AND 16#00ff0000) SHR 8) OR ((x) SHR 24))
#define LSL_GUID(g0,g1,g2,g3,g4) g0$DINT, g1$INT, g2$INT, LSL_SWAP(g3)$DINT, LSL_SWAP(g4)$DINT
