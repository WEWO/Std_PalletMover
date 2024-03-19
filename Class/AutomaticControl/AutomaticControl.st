//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
//{{LSL_DECLARATION

(*!
<Class
	Name               = "AutomaticControl"
	Revision           = "0.0"
	GUID               = "{87F69E95-E1D0-47F2-B527-28CE3B9FBD44}"
	RealtimeTask       = "false"
	CyclicTask         = "false"
	BackgroundTask     = "false"
	Sigmatek           = "false"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(366,120)">
	<Channels>
		<Server Name="ClassSvr" GUID="{68CDF7CB-E043-4049-A656-19CF481EE2FF}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
	</Channels>
</Class>
*)
AutomaticControl : CLASS
	TYPE
#pragma pack(push, 1)
	  tAutomaticControlData : STRUCT  //! <Type Public="true" Name="tAutomaticControlData"/>
	    acd_DrivingVectorAngle : REAL;
	    acd_SteeringRadius : REAL;
	    acd_DrivingSpeed : REAL;
	  END_STRUCT;
#pragma pack(pop)
	END_TYPE
  //Servers:
	ClassSvr 	: SvrChCmd_DINT;
  //Clients:
  //Variables:
  //Functions:
	
	FUNCTION VIRTUAL GLOBAL SetData
		VAR_INPUT
			data 	: tAutomaticControlData;
		END_VAR;
  //Tables:
	FUNCTION @STD
		VAR_OUTPUT
			ret_code	: CONFSTATES;
		END_VAR;
	FUNCTION GLOBAL TAB @CT_;
END_CLASS;

//}}LSL_DECLARATION


FUNCTION GLOBAL TAB AutomaticControl::@CT_
0$UINT,
2#0100000000000010$UINT, //TY_AUTOMATICCONTROL
0$UINT, 0$UINT, (SIZEOF(::AutomaticControl))$UINT, 
1$UINT, 0$UINT, 0$UINT, 
TO_UDINT(3872218593), "AutomaticControl", //Class
TO_UDINT(0), 0, 0$UINT, 0$UINT, //Baseclass
//Servers:
(::AutomaticControl.ClassSvr.pMeth)$UINT, _CH_CMD$UINT, 2#0000000000000000$UINT, TO_UDINT(619352855), "ClassSvr", 
//Clients:
END_FUNCTION


#define USER_CNT_AutomaticControl 1

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_AutomaticControl] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION AutomaticControl::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR
	VAR
		vmt	: _LSL_STD_VMETH;
	END_VAR

	//Command Methods
	InitCmdTable (nCmd := nSTDCMD + USER_CNT_AutomaticControl, pCmd := #vmt.CmdTable);
#pragma warning (disable : 74)
	vmt.UserFcts[0]		:= #SetData();

#pragma warning (default : 74)
	ClassSvr.pMeth		:= StoreCmd (pCmd := #vmt.CmdTable, SHARED);

	IF ClassSvr.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;

END_FUNCTION

//{{LSL_IMPLEMENTATION


FUNCTION VIRTUAL GLOBAL AutomaticControl::SetData
  #pragma warning(disable: 73);
  #pragma warning(disable: 76);
	VAR_INPUT
		data 	: tAutomaticControlData;
	END_VAR
  #pragma warning(default: 73);
  #pragma warning(default: 76);
END_FUNCTION