//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
//{{LSL_DECLARATION

(*!
<Class
	Name               = "I_Bms"
	Revision           = "0.0"
	GUID               = "{A39DA7CD-3D0C-444E-A47D-6E1DF32136F1}"
	RealtimeTask       = "false"
	CyclicTask         = "false"
	BackgroundTask     = "false"
	Sigmatek           = "false"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(840,120)">
	<Channels>
		<Server Name="ClassSvr" GUID="{48D134A9-CBDC-445B-956B-648DA20D5295}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
	</Channels>
</Class>
*)
I_Bms : CLASS
  //Servers:
	ClassSvr 	: SvrChCmd_DINT;
  //Clients:
  //Variables:
  //Functions:
  //Tables:
	FUNCTION @STD
		VAR_OUTPUT
			ret_code	: CONFSTATES;
		END_VAR;
	FUNCTION GLOBAL TAB @CT_;
END_CLASS;

//}}LSL_DECLARATION


FUNCTION GLOBAL TAB I_Bms::@CT_
0$UINT,
2#0100000000000010$UINT, //TY_I_BMS
0$UINT, 0$UINT, (SIZEOF(::I_Bms))$UINT, 
1$UINT, 0$UINT, 0$UINT, 
TO_UDINT(3288644217), "I_Bms", //Class
TO_UDINT(0), 0, 0$UINT, 0$UINT, //Baseclass
//Servers:
(::I_Bms.ClassSvr.pMeth)$UINT, _CH_CMD$UINT, 2#0000000000000000$UINT, TO_UDINT(619352855), "ClassSvr", 
//Clients:
END_FUNCTION


#define USER_CNT_I_Bms 0

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_I_Bms] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION I_Bms::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR

	ret_code := C_OK;

END_FUNCTION

//{{LSL_IMPLEMENTATION