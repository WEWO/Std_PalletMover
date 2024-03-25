//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)

//{{LSL_DEFINES
#define VTDOCKINGMODE 50
#define VTCHARGER     55
#define VTTOCHARGER   56

#define CUSTOMATT_SAFETYFIELDS "Special safety fields"
#define CUSTOMATT_BUFFERLANEMES "Buffer lane MES"
#define CUSTOMATT_SOUNDOPTION "Sound option"
#define CUSTOMATT_OVERHANGSCAN "Overhang scanner"

#define REMOTECONTROLRESETREQUESTTIME 100
#define READYFORAUTOTIME 5000
#define KSITIME 5 SEC
#define SC_INITALARMDELAY 10 SEC
#define HMITIMEOUT 5 SEC
//}}LSL_DEFINES

//{{LSL_DECLARATION

(*!
<Class
	Name               = "Standard"
	Revision           = "0.0"
	GUID               = "{98E3C436-59F2-4DA9-AA1A-D61424EBCF53}"
	RealtimeTask       = "false"
	CyclicTask         = "true"
	BackgroundTask     = "false"
	Sigmatek           = "false"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(798,120)">
	<Channels>
		<Server Name="AGVMode" GUID="{8B23A94D-32EA-43E9-87CF-47C6BFDCBC7D}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="AGVMovementMode" GUID="{96F0BE41-E3A2-48CE-B67A-4C589E4B46A7}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="BrakeReleased" GUID="{473B9839-751A-4D13-8F83-F7DB85B34CDD}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="Charging" GUID="{7B700DF0-D2A4-4B31-966A-404FAAD35BD5}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="ClassSvr" GUID="{2472008D-1385-4F6B-9FE3-661429B3880D}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="DockingModeActive" GUID="{A94BA3FD-4449-4CFA-B0AE-DB11AF8DF258}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="EStopActive" GUID="{DAD59A24-2966-4763-85EB-48C9890D1EFE}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="GeneralAlarm" GUID="{7455CC38-88B9-452A-A08E-77CEE904379D}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="GeneralWarning" GUID="{9604E292-0381-4F11-A62C-4EED5565EB75}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="HMIOffline" GUID="{7B9F3EA7-AC89-418C-A3B2-9CE752DBA3DC}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="InProduction" GUID="{711791A4-9608-4BF0-8B28-ADB415C72244}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="LifebitToHMI" GUID="{6B16904B-9E4E-490A-A45B-931DB10D7852}" Visualized="false" Remotely="true" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="ReadyForAutomaticControl" GUID="{86900252-0563-44DF-BD23-F4BF741EDAAE}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Server Name="ResetDrive" GUID="{A5827B3D-BDDB-4710-BEB6-A85737C197A2}" Visualized="false" Initialize="false" WriteProtected="false" Retentive="false"/>
		<Server Name="StartingToDrive" GUID="{3E798F2A-9194-409F-A17F-01887E6E7B1E}" Visualized="false" Initialize="false" WriteProtected="false" Retentive="false"/>
		<Server Name="WaitingForTask" GUID="{6289C252-AB1C-4C48-9BB8-3882C7176605}" Visualized="false" Initialize="false" WriteProtected="true" Retentive="false"/>
		<Client Name="_Alarm_Error_ChargerLidOpen" Required="true" Internal="true"/>
		<Client Name="AlarmStartID" Required="true" Internal="false"/>
		<Client Name="ChargerCableInside" Required="false" Internal="false"/>
		<Client Name="EmergencyStopOk" Required="false" Internal="false"/>
		<Client Name="KSI" Required="true" Internal="false"/>
		<Client Name="LifebitFromHMI" Required="true" Internal="false"/>
		<Client Name="NoAlarms" Required="true" Internal="false"/>
		<Client Name="NoWarnings" Required="true" Internal="false"/>
		<Client Name="objMasterInterface" Required="true" Internal="false"/>
		<Client Name="objScanner1" Required="true" Internal="false"/>
		<Client Name="objScanner2" Required="true" Internal="false"/>
		<Client Name="RemoteControlConnected" Required="true" Internal="false"/>
		<Client Name="RemoteControlResetRequest" Required="true" Internal="false"/>
		<Client Name="RiwoAlarmCollect1" Required="true" Internal="true"/>
		<Client Name="SafetyScannerOverruled" Required="true" Internal="false"/>
	</Channels>
	<Network Name="Standard">
		<!-- List of Components in this network -->
		<Components>
			<Object
				Name       = "_Alarm_Error_ChargerLidOpen"
				GUID       = "{A6467251-EC5E-4AB2-A9B2-92B63B2FE7D5}"
				Class      = "RiwoParamAlarm"
				Position   = "(840,690)"
				Visualized = "true"
				Remotely   = "true">
				<Channels>
					<Server Name="ClassSvr"/>
					<Server Name="GroupId"/>
					<Server Name="Id"/>
					<Server Name="Level"/>
					<Server Name="Parameter1"/>
					<Server Name="Parameter2"/>
					<Server Name="Parameter3"/>
					<Server Name="Parameter4"/>
					<Server Name="Report"/>
					<Server Name="ResetReq"/>
					<Client Name="objNextRiwoParamAlarm"/>
					<Client Name="objRiwoEventLogger"/>
				</Channels>
			</Object>
			<Object
				Name           = "RiwoAlarmCollect1"
				GUID           = "{6E627138-9752-45F7-B6E4-35B326F8CB2C}"
				Class          = "RiwoAlarmCollect"
				Position       = "(1530,690)"
				Visualized     = "true"
				BackgroundTime = "100 ms">
				<Channels>
					<Server Name="ClassSvr"/>
					<Server Name="ErrorReportConfig"/>
					<Server Name="Errors"/>
					<Server Name="Warnings"/>
					<Client Name="objFirstRiwoParamAlarm"/>
				</Channels>
			</Object>
		</Components>
		<Comments>
		</Comments>
		<!-- List of Connections in this network -->
		<Connections>
			<Connection Source="this.RiwoAlarmCollect1" Destination="RiwoAlarmCollect1.ClassSvr"/>
			<Connection Source="this._Alarm_Error_ChargerLidOpen" Destination="_Alarm_Error_ChargerLidOpen.ClassSvr"/>
			<Connection Source="RiwoAlarmCollect1.objFirstRiwoParamAlarm" Destination="_Alarm_Error_ChargerLidOpen.ClassSvr" Vertices="(1530,780),(1306,780),"/>
			<Connection Source="_Alarm_Error_ChargerLidOpen.objNextRiwoParamAlarm" Destination="_Alarm_Error_CurrentSensorFault.ClassSvr"/>
		</Connections>
		<!-- Headerfiles -->
		<Options>
		</Options>
	</Network>
</Class>
*)
Standard : CLASS
	TYPE
	  _eSafetyFieldOptions :  //! <Type Public="true" Name="_eSafetyFieldOptions"/>
	  (
	    sfo_None,
	    sfo_DockingMode,
	    sfo_ManualMode,
	    sfo_ChargerLocation
	  )$UDINT;
	  _eSoundOptions :
	  (
	    so_None,
	    so_WarningSound,
	    so_ErrorSound
	  )$UDINT;
#pragma pack(push, 1)
	  _tcustomAttributes : STRUCT
	    ca_SpecialSafetyFields : _eSafetyFieldOptions;
	    ca_BufferLaneMESActive : BOOL;
	    ca_SoundOption : _eSoundOptions;
	    ca_OverhangSensorDisabled : BOOL;
	  END_STRUCT;
#pragma pack(pop)
#pragma pack(push, 1)
	  _tspeedLimit : STRUCT
	    sl_Active : BINT
	    [
	      1 Bit1,
	      2 Bit2,
	      3 Bit3,
	      4 Bit4,
	      5 Bit5,
	      6 Bit6,
	      7 Bit7,
	      8 Bit8,
	      9 Bit9,
	      10 Bit10,
	      11 Bit11,
	      12 Bit12,
	      13 Bit13,
	      14 Bit14,
	      15 Bit15,
	      16 Bit16,
	    ];
	    sl_Limit : REAL;
	  END_STRUCT;
#pragma pack(pop)
	  _tVirtualTags : BDINT
	  [
	    1 DockingMode,
	    2 Charger,
	    3 ToCharger,
	    4 Bit4,
	    5 Bit5,
	    6 Bit6,
	    7 Bit7,
	    8 Bit8,
	    9 Bit9,
	    10 Bit10,
	    11 Bit11,
	    12 Bit12,
	    13 Bit13,
	    14 Bit14,
	    15 Bit15,
	    16 Bit16,
	    17 Bit17,
	    18 Bit18,
	    19 Bit19,
	    20 Bit20,
	    21 Bit21,
	    22 Bit22,
	    23 Bit23,
	    24 Bit24,
	    25 Bit25,
	    26 Bit26,
	    27 Bit27,
	    28 Bit28,
	    29 Bit29,
	    30 Bit30,
	    31 Bit31,
	    32 Bit32,
	  ];
	  eAGVMode :  //! <Type Public="true" Name="eAGVMode"/>
	  (
	    am_Manual:=1,
	    am_Auto:=2,
	    am_SemiAuto:=3
	  )$DINT;
	  eAGVMovementMode :  //! <Type Public="true" Name="eAGVMovementMode"/>
	  (
	    amm_FastMovement,
	    amm_NormalMovement,
	    amm_SlowMovement,
	    amm_NoMovement
	  )$UDINT;
	  eEstopStatus :  //! <Type Public="true" Name="eEstopStatus"/>
	  (
	    es_Clear,
	    es_Pressed,
	    es_PendingReset
	  )$UDINT;
	  eMasterState :  //! <Type Public="true" Name="eMasterState"/>
	  (
	    ms_Undefined,
	    ms_StartState,
	    ms_StandbyState,
	    ms_AutoState,
	    ms_FstopState,
	    ms_LoadState,
	    ms_HoldState,
	    ms_ManualState,
	    ms_PauseState
	  )$UDINT;
	  eProductionStatus :  //! <Type Public="true" Name="eProductionStatus"/>
	  (
	    ps_Idle,
	    ps_InProduction,
	    ps_NotInProduction
	  )$UDINT;
#pragma pack(push, 1)
	  tCustomAttributeMaster : STRUCT
	    Value : REAL;
	    Name : ARRAY [0..32] OF CHAR;
	  END_STRUCT;
#pragma pack(pop)
	  tCustomAttributesMaster : ARRAY [1..5] OF tCustomAttributeMaster;  //! <Type Public="true" Name="tCustomAttributesMaster"/>
#pragma pack(push, 1)
	  tMasterCurrentStatus : STRUCT  //! <Type Public="true" Name="tMasterCurrentStatus"/>
	    mcs_MasterState : eMasterState;
	    mcs_AGVX : REAL;
	    mcs_AGVY : REAL;
	    mcs_AGVAngle : REAL;
	    mcs_AGVLevel : DINT;
	    mcs_AGVSpeed : REAL;
	    mcs_PositionInitializeStatus : BOOL;
	    mcs_PositionConfidence : DINT;
	    mcs_ErrorStatus : BOOL;
	  END_STRUCT;
#pragma pack(pop)
#pragma pack(push, 1)
	  tMasterStatusControl : STRUCT  //! <Type Public="true" Name="tMasterStatusControl"/>
	    msc_Error : DINT;
	    msc_ControlEnable : DINT;
	    msc_BrakeRelease : DINT;
	  END_STRUCT;
#pragma pack(pop)
	  tRemoteControlInputs : BDINT  //! <Type Public="true" Name="tRemoteControlInputs"/>
	  [
	    1 rci_Reference,
	    2 rci_Up,
	    3 rci_Down,
	    4 rci_Reset,
	    5 rci_SlowMode,
	    6 rci_FastMode,
	    7 rci_NormalMode,
	    8 rci_OverruleSafetyFields,
	    9 rci_SwitchModeRequest,
	    10 Bit10,
	    11 Bit11,
	    12 Bit12,
	    13 Bit13,
	    14 Bit14,
	    15 Bit15,
	    16 Bit16,
	    17 Bit17,
	    18 Bit18,
	    19 Bit19,
	    20 Bit20,
	    21 Bit21,
	    22 Bit22,
	    23 Bit23,
	    24 Bit24,
	    25 Bit25,
	    26 Bit26,
	    27 Bit27,
	    28 Bit28,
	    29 Bit29,
	    30 Bit30,
	    31 Bit31,
	    32 Bit32,
	  ];
#pragma pack(push, 1)
	  tRouteInformation : STRUCT  //! <Type Public="true" Name="tRouteInformation"/>
	    ri_TargetPositionID : UDINT;
	    ri_TargetReached : BOOL;
	    ri_TargetPositionName : ARRAY [0..31] OF CHAR;
	    ri_OriginPositionName : ARRAY [0..31] OF CHAR;
	  END_STRUCT;
#pragma pack(pop)
	  tSafetyScannerFieldStatus :  //! <Type Public="true" Name="tSafetyScannerFieldStatus"/>
	  (
	    ssf_Clear,
	    ssf_Warning,
	    ssf_Stop,
	    ssf_Estop
	  )$UDINT;
#pragma pack(push, 1)
	  tSafetyStatus : STRUCT  //! <Type Public="true" Name="tSafetyStatus"/>
	    ss_Scanner1 : tSafetyScannerFieldStatus;
	    ss_Scanner2 : tSafetyScannerFieldStatus;
	    ss_Scanner3 : tSafetyScannerFieldStatus;
	    ss_OverhangScanner : BOOL;
	    ss_ForkCollision : BOOL;
	    ss_Estop : eEstopStatus;
	  END_STRUCT;
#pragma pack(pop)
#pragma pack(push, 1)
	  tStateData : STRUCT  //! <Type Public="true" Name="tStateData"/>
	    sd_AGVMode : eAGVMode;
	    sd_GeneralAlarm : BOOL;
	    sd_GeneralWarning : DINT;
	    sd_EStopActive : BOOL;
	    sd_BrakeReleased : BOOL;
	    sd_ReadyForAutomaticControl : BOOL;
	    sd_WaitingForTask : BOOL;
	    sd_StartingToDrive : BOOL;
	    sd_PrecautionNotification : BOOL;
	    sd_DockingModeActive : BOOL;
	    sd_Charging : BOOL;
	    sd_InProduction : eProductionStatus;
	    sd_AGVMovementMode : eAGVMovementMode;
	  END_STRUCT;
#pragma pack(pop)
#pragma pack(push, 1)
	  tVirtualTagsMaster : STRUCT  //! <Type Public="true" Name="tVirtualTagsMaster"/>
	    vtm_TagActive : BOOL;
	    vtm_ValueTag1 : UDINT;
	    vtm_ValueTag2 : UDINT;
	  END_STRUCT;
#pragma pack(pop)
	END_TYPE
  //Servers:
	ClassSvr 	: SvrChCmd_DINT;
	AGVMode 	: SvrCh_eAGVMode_PTofCls_Standard;
	GeneralAlarm 	: SvrCh_DINT;
	GeneralWarning 	: SvrCh_DINT;
	EStopActive 	: SvrCh_DINT;
	BrakeReleased 	: SvrCh_DINT;
	ReadyForAutomaticControl 	: SvrCh_DINT;
	WaitingForTask 	: SvrCh_DINT;
	StartingToDrive 	: SvrCh_DINT;
	DockingModeActive 	: SvrCh_DINT;
	Charging 	: SvrCh_DINT;
	InProduction 	: SvrCh_eProductionStatus_PTofCls_Standard;
	AGVMovementMode 	: SvrCh_eAGVMovementMode_PTofCls_Standard;
	ResetDrive 	: SvrCh_DINT;
	LifebitToHMI 	: SvrCh_DINT;
	HMIOffline 	: SvrCh_DINT;
  //Clients:
	AlarmStartID 	: CltCh_DINT;
	objMasterInterface 	: CltChCmd_NavitecInterface;
	NoWarnings 	: CltCh_DINT;
	NoAlarms 	: CltCh_DINT;
	EmergencyStopOk 	: CltCh_DINT;
	KSI 	: CltCh_DINT;
	RemoteControlResetRequest 	: CltCh_DINT;
	objScanner1 	: CltChCmd_Hal_Lidar_Base;
	objScanner2 	: CltChCmd_Hal_Lidar_Base;
	SafetyScannerOverruled 	: CltCh_DINT;
	ChargerCableInside 	: CltCh_DINT;
	RemoteControlConnected 	: CltCh_DINT;
	LifebitFromHMI 	: CltCh_DINT;
	RiwoAlarmCollect1 	: CltChCmd_RiwoAlarmCollect;
	_Alarm_Error_ChargerLidOpen 	: CltChCmd_RiwoParamAlarm;
  //Variables:
		_alarmBits : ARRAY [0..9] OF BDINT
		[
		];

		_warningBits : ARRAY [0..9] OF BDINT
		[
		];

		_masterStatusControl 	: tMasterStatusControl;
		_masterCurrentStatus 	: tMasterCurrentStatus;
		_routeInformation 	: tRouteInformation;
		_virtualTags 	: _tVirtualTags;
		_customAttributes 	: _tcustomAttributes;
		_speedLimit 	: _tspeedLimit;
		_driveOrderOK 	: BOOL;
		_actualProductionStatus 	: eProductionStatus;
		_MESStatus 	: BOOL;
		_BMSData 	: HAL_BMS_Base::tBMSData;
		_stateData 	: tStateData;
		_safetyStatus 	: tSafetyStatus;
		_remoteControlInputs 	: tRemoteControlInputs;
		_resetDriveTimer 	: UDINT;
		_remoteControlResetRequestTimer 	: UDINT;
		_scanner1Data 	: Hal_Lidar_Base::tScanFieldStatus;
		_scanner2Data 	: Hal_Lidar_Base::tScanFieldStatus;
		_previousSwitchStateRequest 	: DINT;
		_AGVReadyForAutoTimer 	: UDINT;
		_SelectedMode 	: eAGVMode;
		_initCounter 	: DINT;
		_initAlarmDelayTimer 	: UDINT;
		_HMINoConnectionTimer 	: UDINT;
  //Functions:
	
	FUNCTION VIRTUAL GLOBAL Init;
	
	FUNCTION VIRTUAL GLOBAL CyWork
		VAR_INPUT
			EAX 	: UDINT;
		END_VAR
		VAR_OUTPUT
			state (EAX) 	: UDINT := READY;
		END_VAR;
	
	FUNCTION GLOBAL GetSafetyStatus
		VAR_OUTPUT
			returnValue 	: tSafetyStatus;
		END_VAR;
	
	FUNCTION GLOBAL GetStateData
		VAR_OUTPUT
			returnValue 	: tStateData;
		END_VAR;
	
	FUNCTION GLOBAL SetBMSData
		VAR_INPUT
			bmsData 	: HAL_BMS_Base::tBMSData;
		END_VAR;
	
	FUNCTION GLOBAL SetCustomAttributes
		VAR_INPUT
			customAttributes 	: tCustomAttributesMaster;
		END_VAR;
	
	FUNCTION GLOBAL SetDriveReadyFeedback
		VAR_INPUT
			driveOrderOK 	: BOOL;			//! <Variable Comment="TRUE = Drive Order successfully executed" Name="SetDriveReadyFeedback.driveOrderOK"/>
		END_VAR;
	
	FUNCTION GLOBAL SetMasterCurrentStatus
		VAR_INPUT
			masterCurrentStatus 	: tMasterCurrentStatus;
		END_VAR;
	
	FUNCTION GLOBAL SetMasterStatusControl
		VAR_INPUT
			masterStatusControl 	: tMasterStatusControl;
		END_VAR;
	
	FUNCTION GLOBAL SetMESStatus
		VAR_INPUT
			online 	: BOOL;
		END_VAR;
	
	FUNCTION GLOBAL SetProductionStatusFeedback
		VAR_INPUT
			ProductionStatus 	: eProductionStatus;
		END_VAR;
	
	FUNCTION GLOBAL SetRouteInformation
		VAR_INPUT
			routeInfo 	: tRouteInformation;
		END_VAR;
	
	FUNCTION GLOBAL SetSpeedLimitFeedback
		VAR_INPUT
			SpeedLimitActive 	: BOOL;
			SpeedLimit 	: REAL;			//! <Variable Comment="in m/s" Name="SetSpeedLimitFeedback.SpeedLimit"/>
		END_VAR;
	
	FUNCTION GLOBAL SetVirtualTags
		VAR_INPUT
			virtualTags 	: tVirtualTagsMaster;
		END_VAR;
	
	FUNCTION _readClients;
	
	FUNCTION _handleAGVMode;
	
	FUNCTION GLOBAL SetRemoteControlInputs
		VAR_INPUT
			ControlInputs 	: tRemoteControlInputs;
		END_VAR;
	
	FUNCTION VIRTUAL GLOBAL StartingToDrive::Write
		VAR_INPUT
			input (EAX) 	: DINT;
		END_VAR
		VAR_OUTPUT
			result (EAX) 	: DINT;
		END_VAR;
	
	FUNCTION VIRTUAL GLOBAL ResetDrive::Write
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

#pragma using RiwoAlarmCollect
#pragma using RiwoParamAlarm
#pragma usingLtd Hal_Lidar_Base
#pragma usingLtd NavitecInterface


//}}LSL_DECLARATION


FUNCTION GLOBAL TAB Standard::@CT_
0$UINT,
2#0100000000000010$UINT, //TY_STANDARD
0$UINT, 0$UINT, (SIZEOF(::Standard))$UINT, 
16$UINT, 15$UINT, 0$UINT, 
TO_UDINT(3603188683), "Standard", //Class
TO_UDINT(0), 0, 0$UINT, 0$UINT, //Baseclass
//Servers:
(::Standard.ClassSvr.pMeth)$UINT, _CH_CMD$UINT, 2#0000000000000000$UINT, TO_UDINT(619352855), "ClassSvr", 
(::Standard.AGVMode.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(1510331407), "AGVMode", 
(::Standard.GeneralAlarm.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(1145794551), "GeneralAlarm", 
(::Standard.GeneralWarning.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(3279813692), "GeneralWarning", 
(::Standard.EStopActive.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(1749650081), "EStopActive", 
(::Standard.BrakeReleased.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(3207133426), "BrakeReleased", 
(::Standard.ReadyForAutomaticControl.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(2737795219), "ReadyForAutomaticControl", 
(::Standard.WaitingForTask.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(533053860), "WaitingForTask", 
(::Standard.StartingToDrive.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(703881477), "StartingToDrive", 
(::Standard.DockingModeActive.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(1436827831), "DockingModeActive", 
(::Standard.Charging.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(3435725928), "Charging", 
(::Standard.InProduction.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(1775877454), "InProduction", 
(::Standard.AGVMovementMode.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(1053427561), "AGVMovementMode", 
(::Standard.ResetDrive.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(3380632691), "ResetDrive", 
(::Standard.LifebitToHMI.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(4086734948), "LifebitToHMI", 
(::Standard.HMIOffline.pMeth)$UINT, _CH_SVR$UINT, 2#0000000000000000$UINT, TO_UDINT(232576482), "HMIOffline", 
//Clients:
(::Standard.AlarmStartID.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(688888888), "AlarmStartID", 
(::Standard.objMasterInterface.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(2514584286), "objMasterInterface", TO_UDINT(256278040), "NavitecInterface", 0$UINT, 0$UINT, 
(::Standard.NoWarnings.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(2827630212), "NoWarnings", 
(::Standard.NoAlarms.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(1230279207), "NoAlarms", 
(::Standard.EmergencyStopOk.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000000$UINT, TO_UDINT(1447848124), "EmergencyStopOk", 
(::Standard.KSI.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(488131728), "KSI", 
(::Standard.RemoteControlResetRequest.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(576869623), "RemoteControlResetRequest", 
(::Standard.objScanner1.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(2793470248), "objScanner1", TO_UDINT(2283001402), "Hal_Lidar_Base", 0$UINT, 0$UINT, 
(::Standard.objScanner2.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(1065986194), "objScanner2", TO_UDINT(2283001402), "Hal_Lidar_Base", 0$UINT, 0$UINT, 
(::Standard.SafetyScannerOverruled.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(1944316393), "SafetyScannerOverruled", 
(::Standard.ChargerCableInside.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000000$UINT, TO_UDINT(598401259), "ChargerCableInside", 
(::Standard.RemoteControlConnected.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(1418505335), "RemoteControlConnected", 
(::Standard.LifebitFromHMI.pCh)$UINT, _CH_CLT_DATA$UINT, 2#0000000000000010$UINT, TO_UDINT(547491547), "LifebitFromHMI", 
(::Standard.RiwoAlarmCollect1.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(3609966480), "RiwoAlarmCollect1", TO_UDINT(688852726), "RiwoAlarmCollect", 0$UINT, 1$UINT, 
(::Standard._Alarm_Error_ChargerLidOpen.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(2360566005), "_Alarm_Error_ChargerLidOpen", TO_UDINT(1396228774), "RiwoParamAlarm", 0$UINT, 2$UINT, 
END_FUNCTION


#define USER_CNT_Standard 0

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_Standard] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION Standard::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR
	VAR
		vmt	: _LSL_STD_VMETH;
	END_VAR

	//Command Methods
	InitCmdTable (nCmd := nSTDCMD + USER_CNT_Standard, pCmd := #vmt.CmdTable);
	vmt.CmdTable.Init		:= #Init();
	vmt.CmdTable.CyWork		:= #CyWork();
	ClassSvr.pMeth		:= StoreCmd (pCmd := #vmt.CmdTable, SHARED);

	IF ClassSvr.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;
	StartingToDrive.pMeth			:= StoreMethod( #M_RD_DIRECT(), #StartingToDrive::Write() );
	IF StartingToDrive.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;
	ResetDrive.pMeth			:= StoreMethod( #M_RD_DIRECT(), #ResetDrive::Write() );
	IF ResetDrive.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;

END_FUNCTION

//{{LSL_IMPLEMENTATION
FUNCTION VIRTUAL GLOBAL Standard::Init
  _initCounter += 1;

  if (_initCounter = INIT_CYCLE_10) then

    KSI := KSI.Write(input:=1);
    AGVMode := am_Manual;
    _SelectedMode := am_Manual;
    
    AlarmStartId := AlarmStartId.Read();
    
    _Alarm_Error_ChargerLidOpen.SetAlarmIds(startId:=AlarmStartId);
    _Alarm_Error_ChargerLidOpen.Level := RiwoParamAlarm::eal_Info;
    _Alarm_Error_ChargerLidOpen.Report := RiwoParamAlarm::ear_Yes; 

    _initAlarmDelayTimer := ops.tAbsolute;
  
  end_if;
  
END_FUNCTION

FUNCTION VIRTUAL GLOBAL Standard::CyWork
	VAR_INPUT
		EAX 	: UDINT;
	END_VAR
	VAR_OUTPUT
		state (EAX) 	: UDINT;(* := READY *)
	END_VAR
  
  _readClients();
  
  GeneralAlarm := (NoAlarms > 0) | (HMIOffline = TRUE);
  GeneralWarning := (NoWarnings > 0);
  EStopActive := !!EmergencyStopOk;

  _handleAGVMode();

  ReadyForAutomaticControl := (AGVMode = am_Auto);
  WaitingForTask := ReadyForAutomaticControl & !!_masterStatusControl.msc_ControlEnable;
  
  
  if (ops.tAbsolute - _resetDriveTimer) > 5 SEC then
    KSI := KSI.Write(input:=1);
    ResetDrive := 0;
  elsif ResetDrive = 1 then
    KSI := KSI.Write(input:=0);
  end_if;  
  
  if _remoteControlInputs.rci_Reset = FALSE then
    _remoteControlResetRequestTimer := ops.tAbsolute;
  end_if;
  
  
  if _remoteControlInputs.rci_Reset = TRUE & (ops.tAbsolute - _remoteControlResetRequestTimer) < REMOTECONTROLRESETREQUESTTIME then
    if RemoteControlResetRequest <> TRUE then
      RemoteControlResetRequest.Write(TRUE);
    end_if;
  else
    if RemoteControlResetRequest <> FALSE then
      RemoteControlResetRequest.Write(FALSE);
    end_if;
  end_if;

  _scanner1Data := objScanner1.GetScannerData();
  _scanner2Data := objScanner2.GetScannerData();
  
  if _scanner1Data.sfs_EStopFieldDetection = TRUE then
    _safetyStatus.ss_Scanner1 := ssf_Estop;
  elsif _scanner1Data.sfs_StopFieldDetection = TRUE then
    _safetyStatus.ss_Scanner1 := ssf_Stop;
  elsif _scanner1Data.sfs_WarningFieldDetection = TRUE then
    _safetyStatus.ss_Scanner1 := ssf_Warning;
  else  
    _safetyStatus.ss_Scanner1 := ssf_Clear;
  end_if;
  if _scanner2Data.sfs_EStopFieldDetection = TRUE then
    _safetyStatus.ss_Scanner2 := ssf_Estop;
  elsif _scanner2Data.sfs_StopFieldDetection = TRUE then
    _safetyStatus.ss_Scanner2 := ssf_Stop;
  elsif _scanner2Data.sfs_WarningFieldDetection = TRUE then
    _safetyStatus.ss_Scanner2 := ssf_Warning;
  else  
    _safetyStatus.ss_Scanner2 := ssf_Clear;
  end_if;
  
  if EStopActive = TRUE then
    _safetyStatus.ss_Estop := es_Pressed;
  else
    _safetyStatus.ss_Estop := es_Clear;
  end_if;   

  if EStopActive = TRUE | ((GeneralAlarm) = TRUE & ((AGVMode = am_Auto) | ((AGVMode = am_Manual) & (SafetyScannerOverruled = FALSE)))) | ((_scanner1Data.sfs_StopFieldDetection = TRUE | _scanner2Data.sfs_StopFieldDetection = TRUE) & !!SafetyScannerOverruled) | ChargerCableInside = FALSE then
    AGVMovementMode := amm_NoMovement;
  elsif (_remoteControlInputs.rci_SlowMode = TRUE & AGVMode = am_Manual) | SafetyScannerOverruled = TRUE | _scanner1Data.sfs_WarningFieldDetection = TRUE | _scanner2Data.sfs_WarningFieldDetection = TRUE then
    AGVMovementMode := amm_SlowMovement;
  elsif _remoteControlInputs.rci_NormalMode = TRUE | AGVMode = am_Auto then
    AGVMovementMode := amm_NormalMovement;
  elsif _remoteControlInputs.rci_FastMode = TRUE then
    AGVMovementMode := amm_FastMovement;
  end_if;
  
  if ChargerCableInside = FALSE then
    if _Alarm_Error_ChargerLidOpen.ClassSvr = false then
      _Alarm_Error_ChargerLidOpen.SetActive();
    end_if;
  else
    if _Alarm_Error_ChargerLidOpen.ClassSvr = true then
      _Alarm_Error_ChargerLidOpen.SetInActive();
    end_if;
  end_if;
  
  if (ops.tAbsolute - _initAlarmDelayTimer) > SC_INITALARMDELAY then
    
    if LifebitFromHMI = LifebitToHMI then
      _HMINoConnectionTimer := ops.tAbsolute;
    end_if;

    HMIOffline := ((ops.tAbsolute - _HMINoConnectionTimer) > HMITIMEOUT);
  
    LifebitToHMI := !!LifebitFromHMI;
  end_if;
  
END_FUNCTION



FUNCTION GLOBAL Standard::GetStateData
	VAR_OUTPUT
		returnValue 	: tStateData;
	END_VAR

  _stateData.sd_AGVMode := AGVMode;
  _stateData.sd_GeneralAlarm := to_bool(GeneralAlarm);
  _stateData.sd_GeneralWarning := to_bool(GeneralWarning);
  _stateData.sd_EStopActive := to_bool(EStopActive);
  _stateData.sd_BrakeReleased := TRUE;
  _stateData.sd_ReadyForAutomaticControl := to_bool(ReadyForAutomaticControl);
  _stateData.sd_WaitingForTask := to_bool(WaitingForTask);
  _stateData.sd_StartingToDrive := to_bool(StartingToDrive);
  _stateData.sd_PrecautionNotification := FALSE;
  _stateData.sd_DockingModeActive := to_bool(DockingModeActive);
  _stateData.sd_Charging := to_bool(Charging);
  _stateData.sd_InProduction := InProduction;
  _stateData.sd_AGVMovementMode := AGVMovementMode;
  
  returnValue := _stateData;

END_FUNCTION


FUNCTION GLOBAL Standard::SetMasterStatusControl
	VAR_INPUT
		masterStatusControl 	: tMasterStatusControl;
	END_VAR
  
  _masterStatusControl := masterStatusControl;

END_FUNCTION


FUNCTION GLOBAL Standard::SetMasterCurrentStatus
	VAR_INPUT
		masterCurrentStatus 	: tMasterCurrentStatus;
	END_VAR

  _masterCurrentStatus := masterCurrentStatus;

END_FUNCTION


FUNCTION GLOBAL Standard::SetVirtualTags
	VAR_INPUT
		virtualTags 	: tVirtualTagsMaster;
	END_VAR
  
  case virtualTags.vtm_ValueTag1 of
    VTDOCKINGMODE:
      _virtualTags.DockingMode := virtualTags.vtm_TagActive;
    VTCHARGER:
      _virtualTags.Charger := virtualTags.vtm_TagActive;
    VTTOCHARGER:
      _virtualTags.ToCharger := virtualTags.vtm_TagActive;
  end_case;
  
  case virtualTags.vtm_ValueTag2 of
    VTDOCKINGMODE:
      _virtualTags.DockingMode := virtualTags.vtm_TagActive;
    VTCHARGER:
      _virtualTags.Charger := virtualTags.vtm_TagActive;
    VTTOCHARGER:
      _virtualTags.ToCharger := virtualTags.vtm_TagActive;
  end_case;
  
  DockingModeActive := _virtualTags.DockingMode;
  
END_FUNCTION


FUNCTION GLOBAL Standard::SetRouteInformation
	VAR_INPUT
		routeInfo 	: tRouteInformation;
	END_VAR
  
  _routeInformation := routeInfo;
  
END_FUNCTION


FUNCTION GLOBAL Standard::SetCustomAttributes
	VAR_INPUT
		customAttributes 	: tCustomAttributesMaster;
	END_VAR
  VAR
  	i : UDINT;
    tmpUDINT : UDINT;
  END_VAR

  for i:=1 to 5 do
      if _strcmp(str1:=#customAttributes[i].Name[0], str2:=CUSTOMATT_SAFETYFIELDS) = 0 then
        tmpUDINT := to_udint(customAttributes[i].Value)  ;
        _customAttributes.ca_SpecialSafetyFields := tmpUDINT$_eSafetyFieldOptions;
      elsif _strcmp(str1:=#customAttributes[i].Name[0], str2:=CUSTOMATT_BUFFERLANEMES) = 0 then
        _customAttributes.ca_BufferLaneMESActive := to_bool(customAttributes[i].Value);
      elsif _strcmp(str1:=#customAttributes[i].Name[0], str2:=CUSTOMATT_SOUNDOPTION) = 0 then
        tmpUDINT := to_udint(customAttributes[i].Value)  ;
        _customAttributes.ca_SoundOption := tmpUDINT$_eSoundOptions;
      elsif _strcmp(str1:=#customAttributes[i].Name[0], str2:=CUSTOMATT_OVERHANGSCAN) = 0 then
        _customAttributes.ca_OverhangSensorDisabled := to_bool(customAttributes[i].Value);
      end_if;
  end_for;

END_FUNCTION


FUNCTION GLOBAL Standard::SetSpeedLimitFeedback
	VAR_INPUT
		SpeedLimitActive 	: BOOL;
		SpeedLimit 	: REAL;
	END_VAR
  
  _speedLimit.sl_Active := SpeedLimitActive;
  _speedLimit.sl_Limit := SpeedLimit;

END_FUNCTION


FUNCTION GLOBAL Standard::SetDriveReadyFeedback
	VAR_INPUT
		driveOrderOK 	: BOOL;
	END_VAR
  
  _driveOrderOK := driveOrderOK;

END_FUNCTION


FUNCTION GLOBAL Standard::SetProductionStatusFeedback
	VAR_INPUT
		ProductionStatus 	: eProductionStatus;
	END_VAR
  
  _actualProductionStatus := ProductionStatus;

END_FUNCTION


FUNCTION GLOBAL Standard::SetMESStatus
	VAR_INPUT
		online 	: BOOL;
	END_VAR
  
  _MESStatus := online;

END_FUNCTION


FUNCTION GLOBAL Standard::SetBMSData
	VAR_INPUT
		bmsData 	: HAL_BMS_Base::tBMSData;
	END_VAR

  _BMSData := bmsData;
  Charging := _BMSData.bd_BatteryCharging;

END_FUNCTION


FUNCTION GLOBAL Standard::GetSafetyStatus
	VAR_OUTPUT
		returnValue 	: tSafetyStatus;
	END_VAR
  
  returnValue := _safetyStatus;

END_FUNCTION



FUNCTION Standard::_readClients

  NoWarnings := NoWarnings.Read();
  NoAlarms := NoAlarms.Read();
  EmergencyStopOk := EmergencyStopOk.Read();
  RemoteControlResetRequest := RemoteControlResetRequest.Read();
  SafetyScannerOverruled := SafetyScannerOverruled.Read();
  ChargerCableInside := ChargerCableInside.Read();
  RemoteControlConnected := RemoteControlConnected.Read();
  LifebitFromHMI := LifebitFromHMI.Read();

END_FUNCTION


FUNCTION Standard::_handleAGVMode

  if EmergencyStopOk = FALSE | GeneralAlarm = TRUE then
    AGVMode := am_Manual;
  else
    if _remoteControlInputs.rci_SwitchModeRequest = TRUE & _previousSwitchStateRequest = FALSE & AGVMode = am_Auto then
      AGVMode := am_Manual;
      _SelectedMode := am_Manual;
    elsif _remoteControlInputs.rci_SwitchModeRequest = TRUE & _previousSwitchStateRequest = FALSE & AGVMode = am_Manual then // & GeneralAlarm = FALSE then
      AGVMode := am_Auto;
      _SelectedMode := am_Auto;
    end_if; 
  end_if;
  
  
    if EmergencyStopOk = TRUE & GeneralAlarm = FALSE then
      AGVMode := _SelectedMode;
    end_if;

  
  _previousSwitchStateRequest := _remoteControlInputs.rci_SwitchModeRequest;

  case AGVMode of
    am_Manual:
      InProduction := ps_NotInProduction;
    am_Auto:
      InProduction := ps_InProduction;
  end_case;

END_FUNCTION


FUNCTION GLOBAL Standard::SetRemoteControlInputs
	VAR_INPUT
		ControlInputs 	: tRemoteControlInputs;
	END_VAR

  _remoteControlInputs := ControlInputs;
  
END_FUNCTION


FUNCTION VIRTUAL GLOBAL Standard::StartingToDrive::Write
	VAR_INPUT
		input (EAX) 	: DINT;
	END_VAR
	VAR_OUTPUT
		result (EAX) 	: DINT;
	END_VAR

	StartingToDrive := input;
	result := StartingToDrive;

END_FUNCTION


FUNCTION VIRTUAL GLOBAL Standard::ResetDrive::Write
	VAR_INPUT
		input (EAX) 	: DINT;
	END_VAR
	VAR_OUTPUT
		result (EAX) 	: DINT;
	END_VAR

	ResetDrive := input;
  _resetDriveTimer := ops.tAbsolute;
	result := ResetDrive;

END_FUNCTION


