//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
//{{LSL_DECLARATION

(*!
<Class
	Name               = "I_WewoMes"
	Revision           = "0.0"
	GUID               = "{AEBB5BF0-1D61-4E0C-95CD-EE960F84FC70}"
	RealtimeTask       = "false"
	CyclicTask         = "false"
	BackgroundTask     = "false"
	Sigmatek           = "false"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(284,120)">
	<Channels>
		<Server Name="ClassSvr" GUID="{B7188359-F1C8-4494-A611-644337EB1537}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
	</Channels>
</Class>
*)
I_WewoMes : CLASS
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


FUNCTION GLOBAL TAB I_WewoMes::@CT_
0$UINT,
2#0100000000000010$UINT, //TY_I_WEWOMES
0$UINT, 0$UINT, (SIZEOF(::I_WewoMes))$UINT, 
1$UINT, 0$UINT, 0$UINT, 
TO_UDINT(4021547603), "I_WewoMes", //Class
TO_UDINT(0), 0, 0$UINT, 0$UINT, //Baseclass
//Servers:
(::I_WewoMes.ClassSvr.pMeth)$UINT, _CH_CMD$UINT, 2#0000000000000000$UINT, TO_UDINT(619352855), "ClassSvr", 
//Clients:
END_FUNCTION


#define USER_CNT_I_WewoMes 0

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_I_WewoMes] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION I_WewoMes::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR

	ret_code := C_OK;

END_FUNCTION

//{{LSL_IMPLEMENTATION