//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
//{{LSL_DECLARATION

(*!
<Class
	Name               = "NavigationKinematicPivots"
	Revision           = "0.0"
	GUID               = "{B90B630C-E2A9-4A62-9586-D2BF12850CDB}"
	RealtimeTask       = "false"
	CyclicTask         = "false"
	BackgroundTask     = "false"
	Sigmatek           = "false"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(1140,180)">
	<Channels>
		<Server Name="NumberOfPivotWheels" GUID="{61888223-B8AE-4374-ABCC-0EFA885A80E8}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="ReferenceWheel1" GUID="{EF99BD5C-824E-4FF2-B92B-B4AA423653C6}" Visualized="false" Initialize="true" WriteProtected="false" Retentive="false"/>
		<Client Name="AGVMode" Required="true" Internal="false"/>
		<Client Name="AgvSettings" Required="true" Internal="false"/>
		<Client Name="KinematicReverseModel1" Required="true" Internal="true"/>
		<Client Name="ObjKinematicNpivot" Required="true" Internal="true"/>
		<Client Name="objPivotWheel1" Required="false" Internal="false"/>
		<Client Name="objPivotWheel2" Required="false" Internal="false"/>
		<Client Name="objPivotWheel3" Required="false" Internal="false"/>
		<Client Name="objPivotWheel4" Required="false" Internal="false"/>
		<Client Name="objPivotWheel5" Required="false" Internal="false"/>
		<Client Name="objPivotWheel6" Required="false" Internal="false"/>
		<Client Name="objPivotWheel7" Required="false" Internal="false"/>
		<Client Name="objPivotWheel8" Required="false" Internal="false"/>
	</Channels>
	<Network Name="NavigationKinematicPivots">
		<!-- List of Components in this network -->
		<Components>
			<Object
				Name       = "_base"
				GUID       = "{BCC1C86B-5296-4F6D-A7AA-529B968C9BDF}"
				Class      = "FunctionBase"
				Position   = "(218,120)"
				Visualized = "false">
				<Channels>
					<Server Name="ObjectStatus"/>
					<Server Name="ToObject"/>
					<Client Name="op_LogData"/>
					<Client Name="p_NextObject"/>
				</Channels>
			</Object>
			<Object
				Name       = "KinematicReverseModel1"
				GUID       = "{E858C572-4135-4B48-9865-E5D248B1FBC8}"
				Class      = "KinematicReverseModel"
				Position   = "(210,1290)"
				Visualized = "false">
				<Channels>
					<Server Name="ActualTotalDirection"/>
					<Server Name="ActualTotalRadius"/>
					<Server Name="ActualTotalSpeed"/>
					<Server Name="ClassSvr"/>
					<Client Name="objPivotWheel1"/>
					<Client Name="objPivotWheel2"/>
					<Client Name="objPivotWheel3"/>
					<Client Name="objPivotWheel4"/>
					<Client Name="Wheel1Angle"/>
					<Client Name="Wheel1Speed"/>
					<Client Name="Wheel2Angle"/>
					<Client Name="Wheel2Speed"/>
					<Client Name="Wheel3Angle"/>
					<Client Name="Wheel3Speed"/>
					<Client Name="Wheel4Angle"/>
					<Client Name="Wheel4Speed"/>
				</Channels>
			</Object>
			<Object
				Name       = "ObjKinematicNpivot"
				GUID       = "{1BEC927E-6FF2-4B49-ADD7-DE166385273E}"
				Class      = "KinematicNpivot"
				Position   = "(210,360)"
				Visualized = "false">
				<Channels>
					<Server Name="ACTIVATE" Value="1"/>
					<Server Name="AGVInMotion"/>
					<Server Name="ChaoticManualFrontDirection"/>
					<Server Name="ChaoticManualFrontSpeed"/>
					<Server Name="ChaoticManualRearDirection"/>
					<Server Name="ChaoticManualRearSpeed"/>
					<Server Name="ClassSvr"/>
					<Server Name="Direction"/>
					<Server Name="NumberOfPivotWheels"/>
					<Server Name="Radius"/>
					<Server Name="ReferenceWheel1"/>
					<Server Name="ReferenceWheel2"/>
					<Server Name="Speed"/>
					<Client Name="AGVMode"/>
					<Client Name="chaoticManualModeActive"/>
					<Client Name="objPivotWheel1"/>
					<Client Name="objPivotWheel2"/>
					<Client Name="objPivotWheel3"/>
					<Client Name="objPivotWheel4"/>
					<Client Name="objPivotWheel5"/>
					<Client Name="objPivotWheel6"/>
					<Client Name="objPivotWheel7"/>
					<Client Name="objPivotWheel8"/>
					<Client Name="sigClib"/>
				</Channels>
			</Object>
		</Components>
		<Comments>
		</Comments>
		<!-- List of Connections in this network -->
		<Connections>
			<Connection Source="this.ToObject" Destination="_base.ToObject" Vertices="(1088,210),(804,210),"/>
			<Connection Source="this.ObjectStatus" Destination="_base.ObjectStatus" Vertices="(1088,270),(804,270),"/>
			<Connection Source="this.ObjKinematicNpivot" Destination="ObjKinematicNpivot.ClassSvr"/>
			<Connection Source="_base.p_NextObject" Destination="this.p_NextObject" Vertices="(218,270),(38,270),"/>
			<Connection Source="_base.op_LogData" Destination="this.op_LogData" Vertices="(218,210),(38,210),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel1" Destination="this.objPivotWheel1" Vertices="(210,450),(38,390),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel2" Destination="this.objPivotWheel2" Vertices="(210,510),(38,450),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel3" Destination="this.objPivotWheel3" Vertices="(210,570),(38,510),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel4" Destination="this.objPivotWheel4" Vertices="(210,630),(38,570),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel5" Destination="this.objPivotWheel5" Vertices="(210,690),(38,630),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel6" Destination="this.objPivotWheel6" Vertices="(210,750),(38,690),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel7" Destination="this.objPivotWheel7" Vertices="(210,810),(38,750),"/>
			<Connection Source="ObjKinematicNpivot.objPivotWheel8" Destination="this.objPivotWheel8" Vertices="(210,870),(38,810),"/>
			<Connection Source="this.NumberOfPivotWheels" Destination="ObjKinematicNpivot.NumberOfPivotWheels" Vertices="(1088,330),(912,510),"/>
			<Connection Source="this.ReferenceWheel1" Destination="ObjKinematicNpivot.ReferenceWheel1" Vertices="(1088,390),(912,570),"/>
			<Connection Source="ObjKinematicNpivot.AGVMode" Destination="this.AGVMode" Vertices="(210,1050),(38,870),"/>
			<Connection Source="this.KinematicReverseModel1" Destination="KinematicReverseModel1.ClassSvr"/>
		</Connections>
		<!-- Headerfiles -->
		<Options>
		</Options>
	</Network>
</Class>
*)
#pragma using FunctionBase

NavigationKinematicPivots : CLASS
: FunctionBase
  //Servers:
	NumberOfPivotWheels 	: SvrCh_DINT;
	ReferenceWheel1 	: SvrCh_DINT;
  //Clients:
	ObjKinematicNpivot 	: CltChCmd_KinematicNpivot;
	AgvSettings 	: CltCh_DINT;
	objPivotWheel1 	: CltChCmd_I_PivotWheel;
	objPivotWheel2 	: CltChCmd_I_PivotWheel;
	objPivotWheel3 	: CltChCmd_I_PivotWheel;
	objPivotWheel4 	: CltChCmd_I_PivotWheel;
	objPivotWheel5 	: CltChCmd_I_PivotWheel;
	objPivotWheel6 	: CltChCmd_I_PivotWheel;
	objPivotWheel7 	: CltChCmd_I_PivotWheel;
	objPivotWheel8 	: CltChCmd_I_PivotWheel;
	AGVMode 	: CltCh_eAGVMode_PTofCls_StateControl;
	KinematicReverseModel1 	: CltChCmd_KinematicReverseModel;
  //Variables:
  //Functions:
	
	FUNCTION VIRTUAL GLOBAL NumberOfPivotWheels::Read
		VAR_OUTPUT
			output (EAX) 	: DINT;
		END_VAR;
	
	FUNCTION VIRTUAL GLOBAL ReferenceWheel1::Read
		VAR_OUTPUT
			output (EAX) 	: DINT;
		END_VAR;
	
	FUNCTION VIRTUAL GLOBAL ReferenceWheel1::Write
		VAR_INPUT
			input (EAX) 	: DINT;
		END_VAR
		VAR_OUTPUT
			result (EAX) 	: DINT;
		END_VAR;
  //Tables:
	FUNCTION @STD
		VAR_OUTPUT
			ret_code	: CONFSTATES;
		END_VAR;
	FUNCTION GLOBAL TAB @CT_;
END_CLASS;

#pragma using KinematicNpivot
#pragma using KinematicReverseModel
#pragma usingLtd I_PivotWheel


//}}LSL_DECLARATION


FUNCTION GLOBAL TAB NavigationKinematicPivots::@CT_
0$UINT,
2#0100000000000010$UINT, //TY_NAVIGATIONKINEMATICPIVOTS
0$UINT, 0$UINT, (SIZEOF(::NavigationKinematicPivots))$UINT, 
2$UINT, 12$UINT, 0$UINT, 
TO_UDINT(1720314757), "NavigationKinematicPivots", //Class
TO_UDINT(73003526), "FunctionBase", 0$UINT, 0$UINT, //Baseclass
//Servers:
(::NavigationKinematicPivots.NumberOfPivotWheels.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(3732336522), "NumberOfPivotWheels", 
(::NavigationKinematicPivots.ReferenceWheel1.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(3503252186), "ReferenceWheel1", 
//Clients:
(::NavigationKinematicPivots.ObjKinematicNpivot.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(4105540354), "ObjKinematicNpivot", TO_UDINT(1530409541), "KinematicNpivot", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.AgvSettings.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(1195094022), "AgvSettings", 
(::NavigationKinematicPivots.objPivotWheel1.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(1407998262), "objPivotWheel1", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel2.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(3404007564), "objPivotWheel2", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel3.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(3185719322), "objPivotWheel3", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel4.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(596028857), "objPivotWheel4", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel5.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(1417780527), "objPivotWheel5", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel6.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(3448294549), "objPivotWheel6", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel7.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(3129998339), "objPivotWheel7", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.objPivotWheel8.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000100$UINT, TO_UDINT(707846546), "objPivotWheel8", TO_UDINT(282033681), "I_PivotWheel", 0$UINT, 0$UINT, 
(::NavigationKinematicPivots.AGVMode.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000110$UINT, TO_UDINT(1510331407), "AGVMode", 
(::NavigationKinematicPivots.KinematicReverseModel1.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(1124628336), "KinematicReverseModel1", TO_UDINT(1861511807), "KinematicReverseModel", 0$UINT, 0$UINT, 
END_FUNCTION


#define USER_CNT_NavigationKinematicPivots 19

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_NavigationKinematicPivots] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION NavigationKinematicPivots::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR
	VAR
		vmt	: _LSL_STD_VMETH;
		nCmdSize	: UINT;
	END_VAR

	ret_code	:= FunctionBase::@STD();
	IF ret_code <> C_OK THEN
		RETURN;
	END_IF;
	nCmdSize		:= WewoBase::ToObject.pMeth^.nCmds$UINT*SIZEOF(pVoid) + CMDMETH.Init;

	_memcpy((#vmt.CmdTable)$^USINT, WewoBase::ToObject.pMeth, nCmdSize);
	vmt.CmdTable.nCmds		:= nSTDCMD + USER_CNT_NavigationKinematicPivots;
	WewoBase::ToObject.pMeth		:= StoreCmd (pCmd := #vmt.CmdTable, SHARED);

	IF WewoBase::ToObject.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;
	NumberOfPivotWheels.pMeth			:= StoreMethod( #NumberOfPivotWheels::Read(), #M_NO_F() );
	IF NumberOfPivotWheels.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;
	ReferenceWheel1.pMeth			:= StoreMethod( #ReferenceWheel1::Read(), #ReferenceWheel1::Write() );
	IF ReferenceWheel1.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;

END_FUNCTION

//{{LSL_IMPLEMENTATION


FUNCTION VIRTUAL GLOBAL NavigationKinematicPivots::NumberOfPivotWheels::Read
	VAR_OUTPUT
		output (EAX) 	: DINT;
	END_VAR

	NumberOfPivotWheels := ObjKinematicNpivot.NumberOfPivotWheels.Read();
	output := NumberOfPivotWheels;

END_FUNCTION


FUNCTION VIRTUAL GLOBAL NavigationKinematicPivots::ReferenceWheel1::Read
	VAR_OUTPUT
		output (EAX) 	: DINT;
	END_VAR

	ReferenceWheel1 := ObjKinematicNpivot.ReferenceWheel1.Read();
	output := ReferenceWheel1;

END_FUNCTION


FUNCTION VIRTUAL GLOBAL NavigationKinematicPivots::ReferenceWheel1::Write
	VAR_INPUT
		input (EAX) 	: DINT;
	END_VAR
	VAR_OUTPUT
		result (EAX) 	: DINT;
	END_VAR

	ReferenceWheel1 := input;
	result := (ObjKinematicNpivot.ReferenceWheel1.Write(ReferenceWheel1))$DINT;

END_FUNCTION