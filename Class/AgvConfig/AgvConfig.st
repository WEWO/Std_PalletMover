//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
//{{LSL_DECLARATION

(*!
<Class
	Name               = "AgvConfig"
	Revision           = "0.0"
	GUID               = "{DFBE98FE-4908-4A87-AC78-3241B37C404E}"
	RealtimeTask       = "false"
	CyclicTask         = "false"
	BackgroundTask     = "false"
	Sigmatek           = "false"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(690,240)">
	<Channels>
		<Server Name="Command" GUID="{A10D0889-258F-4E9B-A2B3-1E85E6A851F3}" Visualized="false" Initialize="false" WriteProtected="false" Retentive="false"/>
	</Channels>
	<Network Name="AgvConfig">
		<!-- List of Components in this network -->
		<Components>
			<Object
				Name       = "_base"
				GUID       = "{9E61C4BA-C5D0-4C02-B9E0-D3CE96CAA5EF}"
				Class      = "_SettingsBase"
				Position   = "(218,120)"
				Visualized = "false">
				<Channels>
					<Server Name="ClassSvr"/>
					<Server Name="ItemError"/>
					<Server Name="ItemOk"/>
					<Client Name="op_LogData"/>
				</Channels>
			</Object>
		</Components>
		<Comments>
		</Comments>
		<!-- List of Connections in this network -->
		<Connections>
			<Connection Source="this.ClassSvr" Destination="_base.ClassSvr" Vertices="(826,210),(654,210),"/>
			<Connection Source="this.ItemOk" Destination="_base.ItemOk" Vertices="(826,270),(654,270),"/>
			<Connection Source="this.ItemError" Destination="_base.ItemError" Vertices="(826,330),(654,330),"/>
			<Connection Source="_base.op_LogData" Destination="this.op_LogData" Vertices="(218,210),(38,210),"/>
		</Connections>
		<!-- Headerfiles -->
		<Options>
		</Options>
	</Network>
</Class>
*)
#pragma using _Settingsbase

AgvConfig : CLASS
: _Settingsbase
  //Servers:
	Command 	: SvrCh_gt_AgvSettingsCmd;
  //Clients:
  //Variables:
  //Functions:
	
	FUNCTION VIRTUAL GLOBAL Command::Write
		VAR_INPUT
			input (EAX) 	: gt_AgvSettingsCmd;
		END_VAR
		VAR_OUTPUT
			result (EAX) 	: gt_AgvSettingsCmd;
		END_VAR;
  //Tables:
	FUNCTION @STD
		VAR_OUTPUT
			ret_code	: CONFSTATES;
		END_VAR;
	FUNCTION GLOBAL TAB @CT_;
END_CLASS;

//}}LSL_DECLARATION


FUNCTION GLOBAL TAB AgvConfig::@CT_
0$UINT,
2#0100000000000010$UINT, //TY_AGVCONFIG
0$UINT, 0$UINT, (SIZEOF(::AgvConfig))$UINT, 
1$UINT, 0$UINT, 0$UINT, 
TO_UDINT(3641531850), "AgvConfig", //Class
TO_UDINT(3394779963), "_Settingsbase", 0$UINT, 0$UINT, //Baseclass
//Servers:
(::AgvConfig.Command.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(2978944206), "Command", 
//Clients:
END_FUNCTION


#define USER_CNT_AgvConfig 0

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_AgvConfig] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION AgvConfig::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR
	VAR
		vmt	: _LSL_STD_VMETH;
		nCmdSize	: UINT;
	END_VAR

	ret_code	:= _Settingsbase::@STD();
	IF ret_code <> C_OK THEN
		RETURN;
	END_IF;
	nCmdSize		:= _Settingsbase::ClassSvr.pMeth^.nCmds$UINT*SIZEOF(pVoid) + CMDMETH.Init;

	_memcpy((#vmt.CmdTable)$^USINT, _Settingsbase::ClassSvr.pMeth, nCmdSize);
	vmt.CmdTable.nCmds		:= nSTDCMD + USER_CNT_AgvConfig;
	_Settingsbase::ClassSvr.pMeth		:= StoreCmd (pCmd := #vmt.CmdTable, SHARED);

	IF _Settingsbase::ClassSvr.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;
	Command.pMeth			:= StoreMethod( #M_RD_DIRECT(), #Command::Write() );
	IF Command.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;

END_FUNCTION

//{{LSL_IMPLEMENTATION


FUNCTION VIRTUAL GLOBAL AgvConfig::Command::Write
	VAR_INPUT
		input (EAX) 	: gt_AgvSettingsCmd;
	END_VAR
	VAR_OUTPUT
		result (EAX) 	: gt_AgvSettingsCmd;
	END_VAR

	Command := input;
    case  Command  of
        
        LoadSettings:

            if UpdateFile(Name:="c:\settings\machinesettings.json") = true then
    	        result := LoadReadyOk;
            else
                result:= LoadReadError;
            end_if;
            
            else
            
                   result:= LoadReadError;
      end_case;
       Command := result;
END_FUNCTION