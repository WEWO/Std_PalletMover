//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
TYPE
  SvrCh__Config__PTofCls__LMCPublisher : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCPublisher::_Config_;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh__Config__PTofCls__LMCPublisher : STRUCT
    pCh : ^SvrCh__Config__PTofCls__LMCPublisher;
    dData : _LMCPublisher::_Config_;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_BDINT : STRUCT
    pMeth : ^CHMETH;
    dData : BDINT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_BDINT : STRUCT
    pCh : ^SvrCh_BDINT;
    dData : BDINT;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_DINT : STRUCT
    pMeth : ^CHMETH;
    dData : DINT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_DINT : STRUCT
    pCh : ^SvrCh_DINT;
    dData : DINT;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_eAGVMode_PTofCls_StateControl : STRUCT
    pMeth : ^CHMETH;
    dData : StateControl::eAGVMode;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_eAGVMode_PTofCls_StateControl : STRUCT
    pCh : ^SvrCh_eAGVMode_PTofCls_StateControl;
    dData : StateControl::eAGVMode;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_FeSetup : STRUCT
    pMeth : ^CHMETH;
    dData : FeSetup;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_FeSetup : STRUCT
    pCh : ^SvrCh_FeSetup;
    dData : FeSetup;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_gpt_LogData : STRUCT
    pMeth : ^CHMETH;
    dData : gpt_LogData;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_gpt_LogData : STRUCT
    pCh : ^SvrCh_gpt_LogData;
    dData : gpt_LogData;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_gt_AgvMainAuto : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMainAuto;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_gt_AgvMainAuto : STRUCT
    pCh : ^SvrCh_gt_AgvMainAuto;
    dData : gt_AgvMainAuto;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_gt_AgvMainAux : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMainAux;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_gt_AgvMainAux : STRUCT
    pCh : ^SvrCh_gt_AgvMainAux;
    dData : gt_AgvMainAux;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_gt_agvMainPeripherals : STRUCT
    pMeth : ^CHMETH;
    dData : gt_agvMainPeripherals;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_gt_agvMainPeripherals : STRUCT
    pCh : ^SvrCh_gt_agvMainPeripherals;
    dData : gt_agvMainPeripherals;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_gt_AgvManual : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvManual;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_gt_AgvManual : STRUCT
    pCh : ^SvrCh_gt_AgvManual;
    dData : gt_AgvManual;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_gt_AgvSettingsCmd : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvSettingsCmd;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_gt_AgvSettingsCmd : STRUCT
    pCh : ^SvrCh_gt_AgvSettingsCmd;
    dData : gt_AgvSettingsCmd;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_IO_State : STRUCT
    pMeth : ^CHMETH;
    dData : IO_State;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_IO_State : STRUCT
    pCh : ^SvrCh_IO_State;
    dData : IO_State;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_REAL : STRUCT
    pMeth : ^CHMETH;
    dData : REAL;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_REAL : STRUCT
    pCh : ^SvrCh_REAL;
    dData : REAL;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrCh_UDINT : STRUCT
    pMeth : ^CHMETH;
    dData : UDINT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltCh_UDINT : STRUCT
    pCh : ^SvrCh_UDINT;
    dData : UDINT;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  SvrChCmd_DINT : STRUCT
    pMeth : ^CMDMETH;
    dData : DINT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd__Can : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_Can;
  END_STRUCT;
  CltChCmd__CanLib : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_CanLib;
  END_STRUCT;
  CltChCmd__CheckSum : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_CheckSum;
  END_STRUCT;
  CltChCmd__cJSON : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_cJSON;
  END_STRUCT;
  CltChCmd__ComLogging : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_ComLogging;
  END_STRUCT;
  CltChCmd__FileSys : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_FileSys;
  END_STRUCT;
  CltChCmd__JSONReader : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_JSONReader;
  END_STRUCT;
  CltChCmd__JSONWriter : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_JSONWriter;
  END_STRUCT;
  CltChCmd__Linker : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_Linker;
  END_STRUCT;
  CltChCmd__LMCABSEncoder : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCABSEncoder;
  END_STRUCT;
  SvrChCmd__LMCAXIS_OPMODE : STRUCT
    pMeth : ^CMDMETH;
    dData : _LMCAXIS_OPMODE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd__LMCAxis : STRUCT
    pCh : ^SvrChCmd__LMCAXIS_OPMODE;
    dData : _LMCAXIS_OPMODE;
    pCmd : ^_LMCAxis;
  END_STRUCT;
  CltChCmd__LMCAxisBase : STRUCT
    pCh : ^SvrChCmd__LMCAXIS_OPMODE;
    dData : _LMCAXIS_OPMODE;
    pCmd : ^_LMCAxisBase;
  END_STRUCT;
  CltChCmd__LMCAxisRef : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisRef;
  END_STRUCT;
  CltChCmd__LMCAxisVis : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisVis;
  END_STRUCT;
  CltChCmd__LMCAxisVisInt : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisVisInt;
  END_STRUCT;
  CltChCmd__LMCAxisVisLogHandle : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisVisLogHandle;
  END_STRUCT;
  CltChCmd__LMCAxisVisLogViewer : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisVisLogViewer;
  END_STRUCT;
  CltChCmd__LMCAxisVisPara : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisVisPara;
  END_STRUCT;
  CltChCmd__LMCAxisVOVMonitoring : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCAxisVOVMonitoring;
  END_STRUCT;
  CltChCmd__LMCMathFunctions : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCMathFunctions;
  END_STRUCT;
  CltChCmd__LMCPublisher : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCPublisher;
  END_STRUCT;
  CltChCmd__LMCRefBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCRefBase;
  END_STRUCT;
  CltChCmd__LMCSafety : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_LMCSafety;
  END_STRUCT;
  SvrChCmd_UDINT : STRUCT
    pMeth : ^CMDMETH;
    dData : UDINT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd__MemoryBubbles : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^_MemoryBubbles;
  END_STRUCT;
  CltChCmd__MultiTask : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_MultiTask;
  END_STRUCT;
  CltChCmd__OpenSSL : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_OpenSSL;
  END_STRUCT;
  CltChCmd__OSKernel : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_OSKernel;
  END_STRUCT;
  CltChCmd__SerLib : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_SerLib;
  END_STRUCT;
  CltChCmd__StdLib : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_StdLib;
  END_STRUCT;
  CltChCmd__SysMsg : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_SysMsg;
  END_STRUCT;
  CltChCmd__TaskObjectControl : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_TaskObjectControl;
  END_STRUCT;
  SvrChCmd__FSM_TCP_USER : STRUCT
    pMeth : ^CMDMETH;
    dData : _FSM_TCP_USER;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd__TCPIP_CLIENT : STRUCT
    pCh : ^SvrChCmd__FSM_TCP_USER;
    dData : _FSM_TCP_USER;
    pCmd : ^_TCPIP_CLIENT;
  END_STRUCT;
  SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient : STRUCT
    pMeth : ^CMDMETH;
    dData : _TCPIPClient::_FSM_TCPIP_CLIENT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd__TCPIPClient : STRUCT
    pCh : ^SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient;
    dData : _TCPIPClient::_FSM_TCPIP_CLIENT;
    pCmd : ^_TCPIPClient;
  END_STRUCT;
  CltChCmd__TCPIPClient_MQTTClient : STRUCT
    pCh : ^SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient;
    dData : _TCPIPClient::_FSM_TCPIP_CLIENT;
    pCmd : ^_TCPIPClient_MQTTClient;
  END_STRUCT;
  CltChCmd__TCPIPClientInterface_MQTTClient : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_TCPIPClientInterface_MQTTClient;
  END_STRUCT;
  CltChCmd__XMLReader : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_XMLReader;
  END_STRUCT;
  CltChCmd__XMLStructCreator : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^_XMLStructCreator;
  END_STRUCT;
  CltChCmd_AgvConfig : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^AgvConfig;
  END_STRUCT;
  CltChCmd_AgvSettings : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^AgvSettings;
  END_STRUCT;
  CltChCmd_ASCII_BIN : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^ASCII_BIN;
  END_STRUCT;
  CltChCmd_AutomaticControl : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^AutomaticControl;
  END_STRUCT;
  CltChCmd_CanDriverBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^CanDriverBase;
  END_STRUCT;
  CltChCmd_CanOpenBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^CanOpenBase;
  END_STRUCT;
  CltChCmd_CanOpenBaseRiwo : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^CanOpenBaseRiwo;
  END_STRUCT;
  CltChCmd_CanOpenWewoBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^CanOpenWewoBase;
  END_STRUCT;
  SvrChCmd_pVoid : STRUCT
    pMeth : ^CMDMETH;
    dData : pVoid;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_CntrlAuxHmi : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^CntrlAuxHmi;
  END_STRUCT;
  CltChCmd_CntrlPeriperalPiviotWheels : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^CntrlPeriperalPiviotWheels;
  END_STRUCT;
  CltChCmd_ComDiagnosis_MQTT : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^ComDiagnosis_MQTT;
  END_STRUCT;
  CltChCmd_ConfigDefBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^ConfigDefBase;
  END_STRUCT;
  CltChCmd_Controller : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Controller;
  END_STRUCT;
  CltChCmd_CriticalSection : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^CriticalSection;
  END_STRUCT;
  CltChCmd_Curtis_1232E : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Curtis_1232E;
  END_STRUCT;
  CltChCmd_Curtis_AC2F : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Curtis_AC2F;
  END_STRUCT;
  CltChCmd_Curtis_AC2F_IO : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Curtis_AC2F_IO;
  END_STRUCT;
  CltChCmd_DiasMaster : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^DiasMaster;
  END_STRUCT;
  CltChCmd_DiasMasterC : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^DiasMasterC;
  END_STRUCT;
  CltChCmd_DiasMasterPostScan : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^DiasMasterPostScan;
  END_STRUCT;
  CltChCmd_DINT : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  CltChCmd_EEPROM : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^EEPROM;
  END_STRUCT;
  CltChCmd_EncoderpulsesToDegrees : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^EncoderpulsesToDegrees;
  END_STRUCT;
  SvrChCmd_ENV_Status : STRUCT
    pMeth : ^CMDMETH;
    dData : ENV_Status;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_EnvironmentVariable : STRUCT
    pCh : ^SvrChCmd_ENV_Status;
    dData : ENV_Status;
    pCmd : ^EnvironmentVariable;
  END_STRUCT;
  CltChCmd_ENVLib : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^ENVLib;
  END_STRUCT;
  CltChCmd_ENVStringAction : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^ENVStringAction;
  END_STRUCT;
  CltChCmd_HAL_BMS_Base : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HAL_BMS_Base;
  END_STRUCT;
  CltChCmd_HAL_BMS_MasterVolt : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HAL_BMS_MasterVolt;
  END_STRUCT;
  CltChCmd_Hal_Lidar_Base : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Hal_Lidar_Base;
  END_STRUCT;
  CltChCmd_HalBmsMastervoltinterface : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HalBmsMastervoltinterface;
  END_STRUCT;
  CltChCmd_HandleSteering : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HandleSteering;
  END_STRUCT;
  CltChCmd_HandleSteeringCurtisAC2F : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HandleSteeringCurtisAC2F;
  END_STRUCT;
  CltChCmd_HMIHandler : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HMIHandler;
  END_STRUCT;
  CltChCmd_Hub_Base : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Hub_Base;
  END_STRUCT;
  CltChCmd_Hub_Base_Root : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Hub_Base_Root;
  END_STRUCT;
  CltChCmd_HwcLogging : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HwcLogging;
  END_STRUCT;
  CltChCmd_HwControl : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HwControl;
  END_STRUCT;
  CltChCmd_HwControlBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HwControlBase;
  END_STRUCT;
  CltChCmd_HWRtPostScan : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HWRtPostScan;
  END_STRUCT;
  CltChCmd_HydroController : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^HydroController;
  END_STRUCT;
  CltChCmd_I2CCDIAS : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^I2CCDIAS;
  END_STRUCT;
  CltChCmd_I_LedControl : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^I_LedControl;
  END_STRUCT;
  CltChCmd_I_Lift : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^I_Lift;
  END_STRUCT;
  CltChCmd_I_PivotWheel : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^I_PivotWheel;
  END_STRUCT;
  CltChCmd_InterfaceAuxHmiMqtt : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^InterfaceAuxHmiMqtt;
  END_STRUCT;
  CltChCmd_KinematicNpivot : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^KinematicNpivot;
  END_STRUCT;
  CltChCmd_KinematicReverseModel : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^KinematicReverseModel;
  END_STRUCT;
  CltChCmd_LinkedObjectBase : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^LinkedObjectBase;
  END_STRUCT;
  CltChCmd_Merker : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Merker;
  END_STRUCT;
  CltChCmd_MerkerEx : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^MerkerEx;
  END_STRUCT;
  SvrChCmd_t_e_WorkerState_PTofCls_MQTTBackgroundWorker : STRUCT
    pMeth : ^CMDMETH;
    dData : MQTTBackgroundWorker::t_e_WorkerState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_MQTTBackgroundWorker : STRUCT
    pCh : ^SvrChCmd_t_e_WorkerState_PTofCls_MQTTBackgroundWorker;
    dData : MQTTBackgroundWorker::t_e_WorkerState;
    pCmd : ^MQTTBackgroundWorker;
  END_STRUCT;
  SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient : STRUCT
    pMeth : ^CMDMETH;
    dData : MQTTClient::t_e_MQTTClientStates;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_MQTTClient : STRUCT
    pCh : ^SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient;
    dData : MQTTClient::t_e_MQTTClientStates;
    pCmd : ^MQTTClient;
  END_STRUCT;
  SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient_Interface : STRUCT
    pMeth : ^CMDMETH;
    dData : MQTTClient_Interface::t_e_MQTTClientStates;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_MQTTClient_Interface : STRUCT
    pCh : ^SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient_Interface;
    dData : MQTTClient_Interface::t_e_MQTTClientStates;
    pCmd : ^MQTTClient_Interface;
  END_STRUCT;
  CltChCmd_MQTTClient_Interface_Config : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^MQTTClient_Interface_Config;
  END_STRUCT;
  CltChCmd_MqttInterface : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^MqttInterface;
  END_STRUCT;
  CltChCmd_MQTTPacketQueue : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^MQTTPacketQueue;
  END_STRUCT;
  CltChCmd_MQTTTopic_RetVals : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^MQTTTopic_RetVals;
  END_STRUCT;
  SvrChCmd_t_e_MQTT_TopicState_PTofCls_MQTTTopic : STRUCT
    pMeth : ^CMDMETH;
    dData : MQTTTopic::t_e_MQTT_TopicState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_MqttTopicText : STRUCT
    pCh : ^SvrChCmd_t_e_MQTT_TopicState_PTofCls_MQTTTopic;
    dData : MQTTTopic::t_e_MQTT_TopicState;
    pCmd : ^MqttTopicText;
  END_STRUCT;
  CltChCmd_NavitecInterface : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^NavitecInterface;
  END_STRUCT;
  CltChCmd_PivotWheel : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^PivotWheel;
  END_STRUCT;
  SvrChCmd_t_e_VaranErrors : STRUCT
    pMeth : ^CMDMETH;
    dData : t_e_VaranErrors;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_PL221 : STRUCT
    pCh : ^SvrChCmd_t_e_VaranErrors;
    dData : t_e_VaranErrors;
    pCmd : ^PL221;
  END_STRUCT;
  SvrChCmd_ProfileCommandStatus : STRUCT
    pMeth : ^CMDMETH;
    dData : ProfileCommandStatus;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_ProfileCommandStatus : STRUCT
    pCh : ^SvrChCmd_ProfileCommandStatus;
    dData : ProfileCommandStatus;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  CltChCmd_Ram : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^Ram;
  END_STRUCT;
  CltChCmd_RAMex : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^RAMex;
  END_STRUCT;
  CltChCmd_RamFile : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^RamFile;
  END_STRUCT;
  CltChCmd_RiwoAlarmCollect : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^RiwoAlarmCollect;
  END_STRUCT;
  CltChCmd_RiwoDateTimeLib : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^RiwoDateTimeLib;
  END_STRUCT;
  CltChCmd_RiwoEventLogger : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^RiwoEventLogger;
  END_STRUCT;
  CltChCmd_RiwoParamAlarm : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^RiwoParamAlarm;
  END_STRUCT;
  CltChCmd_SafetyManager : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^SafetyManager;
  END_STRUCT;
  CltChCmd_SdiasHubBase : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^SdiasHubBase;
  END_STRUCT;
  CltChCmd_SdiasManager : STRUCT
    pCh : ^SvrChCmd_t_e_VaranErrors;
    dData : t_e_VaranErrors;
    pCmd : ^SdiasManager;
  END_STRUCT;
  CltChCmd_SigCLib : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^SigCLib;
  END_STRUCT;
  CltChCmd_SpeedCalculator : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^SpeedCalculator;
  END_STRUCT;
  CltChCmd_StateControl : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^StateControl;
  END_STRUCT;
  CltChCmd_String : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^String;
  END_STRUCT;
  CltChCmd_StringRAM : STRUCT
    pCh : ^SvrChCmd_UDINT;
    dData : UDINT;
    pCmd : ^StringRAM;
  END_STRUCT;
  SvrChCmd_IO_State : STRUCT
    pMeth : ^CMDMETH;
    dData : IO_State;
    pDsc : ^SVRDSC;
  END_STRUCT;
  CltChCmd_SyncCall : STRUCT
    pCh : ^SvrChCmd_IO_State;
    dData : IO_State;
    pCmd : ^SyncCall;
  END_STRUCT;
  CltChCmd_System : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^System;
  END_STRUCT;
  CltChCmd_t_e_VaranErrors : STRUCT
    pCh : ^SvrChCmd_t_e_VaranErrors;
    dData : t_e_VaranErrors;
    pCmd : ^SVRCHCMD;
  END_STRUCT;
  CltChCmd_Varan_Base : STRUCT
    pCh : ^SvrChCmd_t_e_VaranErrors;
    dData : t_e_VaranErrors;
    pCmd : ^Varan_Base;
  END_STRUCT;
  CltChCmd_VaranManager_Base : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^VaranManager_Base;
  END_STRUCT;
  CltChCmd_WatchdogDias : STRUCT
    pCh : ^SvrChCmd_IO_State;
    dData : IO_State;
    pCmd : ^WatchdogDias;
  END_STRUCT;
  CltChCmd_Wewo_DynamicBuffer : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^Wewo_DynamicBuffer;
  END_STRUCT;
  CltChCmd_Wewo_EnumTranslator : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^Wewo_EnumTranslator;
  END_STRUCT;
  CltChCmd_Wewo_LinkedObjectBase : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^Wewo_LinkedObjectBase;
  END_STRUCT;
  CltChCmd_WewoBase : STRUCT
    pCh : ^SvrChCmd_pVoid;
    dData : pVoid;
    pCmd : ^WewoBase;
  END_STRUCT;
  CltChCmd_WewoMqtt : STRUCT
    pCh : ^SvrChCmd_t_e_MQTT_TopicState_PTofCls_MQTTTopic;
    dData : MQTTTopic::t_e_MQTT_TopicState;
    pCmd : ^WewoMqtt;
  END_STRUCT;
  CltChCmd_WewoStringUtils : STRUCT
    pCh : ^SvrChCmd_DINT;
    dData : DINT;
    pCmd : ^WewoStringUtils;
  END_STRUCT;
  SvrCh__CommandList_PTofCls__LMCAxisBase : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAxisBase::_CommandList;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient : STRUCT
    pMeth : ^CHMETH;
    dData : _TCPIPClient::_FSM_TCPIP_CLIENT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__FSM_UDP_ERROR_PTofCls_SafetyUDP : STRUCT
    pMeth : ^CHMETH;
    dData : SafetyUDP::_FSM_UDP_ERROR;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__FSM_UDP_USER_PTofCls_SafetyUDP : STRUCT
    pMeth : ^CHMETH;
    dData : SafetyUDP::_FSM_UDP_USER;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__INITSTEPS_PTofCls_SafetyUDP : STRUCT
    pMeth : ^CHMETH;
    dData : SafetyUDP::_INITSTEPS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_CMDERROR : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_CMDERROR;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_ERROR : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_ERROR;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_ERROR_CONFIG : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_ERROR_CONFIG;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_MOVE_RELATIVE_MODE : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_MOVE_RELATIVE_MODE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_MOVEDIRECTION : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_MOVEDIRECTION;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_MOVEPROFILE : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_MOVEPROFILE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_POSMODE : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_POSMODE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_POWER_OFF_MODE : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_POWER_OFF_MODE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_REFMODE : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_REFMODE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_SETPARAMETER : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_SETPARAMETER;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_SETPOSITION : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_SETPOSITION;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_SETSWENDPOS : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_SETSWENDPOS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCAXIS_STATUS : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCAXIS_STATUS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__LMCCONTROLLERTYPE : STRUCT
    pMeth : ^CHMETH;
    dData : _LMCCONTROLLERTYPE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__POSFLAGS : STRUCT
    pMeth : ^CHMETH;
    dData : _POSFLAGS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__STATE_TCPIPC_INTF_PTofCls__TCPIPClientInterface : STRUCT
    pMeth : ^CHMETH;
    dData : _TCPIPClientInterface::_STATE_TCPIPC_INTF;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh__XML_PARSE_ERROR_PTofCls__XMLReader : STRUCT
    pMeth : ^CHMETH;
    dData : _XMLReader::_XML_PARSE_ERROR;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_CanDeviceState_PTofCls_CanOpenBase : STRUCT
    pMeth : ^CHMETH;
    dData : CanOpenBase::CanDeviceState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_DATE_LSL : STRUCT
    pMeth : ^CHMETH;
    dData : DATE_LSL;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eAGVMovementMode_PTofCls_StateControl : STRUCT
    pMeth : ^CHMETH;
    dData : StateControl::eAGVMovementMode;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eAlarmLevel_PTofCls_RiwoParamAlarm : STRUCT
    pMeth : ^CHMETH;
    dData : RiwoParamAlarm::eAlarmLevel;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eCurtisDriveMode_PTofCls_Curtis_Base : STRUCT
    pMeth : ^CHMETH;
    dData : Curtis_Base::eCurtisDriveMode;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eCurtisDriveModel_PTofCls_Curtis_Universal : STRUCT
    pMeth : ^CHMETH;
    dData : Curtis_Universal::eCurtisDriveModel;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eCurtisDriveModeRequest_PTofCls_Curtis_Base : STRUCT
    pMeth : ^CHMETH;
    dData : Curtis_Base::eCurtisDriveModeRequest;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eDirection_PTofCls_Hal_Lidar_Base : STRUCT
    pMeth : ^CHMETH;
    dData : Hal_Lidar_Base::eDirection;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eProductionStatus_PTofCls_StateControl : STRUCT
    pMeth : ^CHMETH;
    dData : StateControl::eProductionStatus;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_eScannerPosition_PTofCls_Hal_Lidar_Base : STRUCT
    pMeth : ^CHMETH;
    dData : Hal_Lidar_Base::eScannerPosition;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_AgvMainFunction : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMainFunction;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_AgvMainHardware : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMainHardware;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_AgvMainState : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMainState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_AgvMotorControl : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMotorControl;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_AgvMotorState : STRUCT
    pMeth : ^CHMETH;
    dData : gt_AgvMotorState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_FifoBufMode : STRUCT
    pMeth : ^CHMETH;
    dData : gt_FifoBufMode;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_LogCmd : STRUCT
    pMeth : ^CHMETH;
    dData : gt_LogCmd;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_LogLevel : STRUCT
    pMeth : ^CHMETH;
    dData : gt_LogLevel;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_LogTarget : STRUCT
    pMeth : ^CHMETH;
    dData : gt_LogTarget;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_gt_ObjectStatus : STRUCT
    pMeth : ^CHMETH;
    dData : gt_ObjectStatus;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_HDINT : STRUCT
    pMeth : ^CHMETH;
    dData : HDINT;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_LedState_PTofCls_I_LedControl : STRUCT
    pMeth : ^CHMETH;
    dData : I_LedControl::LedState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_LiftState_PTofCls_I_Lift : STRUCT
    pMeth : ^CHMETH;
    dData : I_Lift::LiftState;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_pChar : STRUCT
    pMeth : ^CHMETH;
    dData : pChar;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_pVoid : STRUCT
    pMeth : ^CHMETH;
    dData : pVoid;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_SafetyConfigStateType : STRUCT
    pMeth : ^CHMETH;
    dData : SafetyConfigStateType;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_t_e_MQTT_TopicType_PTofCls_MQTTTopic : STRUCT
    pMeth : ^CHMETH;
    dData : MQTTTopic::t_e_MQTT_TopicType;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_t_e_READSTEPS_PTofCls__JSONReader : STRUCT
    pMeth : ^CHMETH;
    dData : _JSONReader::t_e_READSTEPS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_t_e_VaranErrors : STRUCT
    pMeth : ^CHMETH;
    dData : t_e_VaranErrors;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_t_e_WRITESTEPS_PTofCls__JSONWriter : STRUCT
    pMeth : ^CHMETH;
    dData : _JSONWriter::t_e_WRITESTEPS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tBMSAlarms_PTofCls_HAL_BMS_Base : STRUCT
    pMeth : ^CHMETH;
    dData : HAL_BMS_Base::tBMSAlarms;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tCurtisFault_PTofCls_Curtis_AC2F : STRUCT
    pMeth : ^CHMETH;
    dData : Curtis_AC2F::tCurtisFault;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tDLSday_PTofCls_RiwoDateTime : STRUCT
    pMeth : ^CHMETH;
    dData : RiwoDateTime::tDLSday;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tDLSTimeType_PTofCls_RiwoDateTime : STRUCT
    pMeth : ^CHMETH;
    dData : RiwoDateTime::tDLSTimeType;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tDLSWeekOption_PTofCls_RiwoDateTime : STRUCT
    pMeth : ^CHMETH;
    dData : RiwoDateTime::tDLSWeekOption;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tHMIAdditionalIconBMS_PTofCls_HAL_BMS_MasterVolt : STRUCT
    pMeth : ^CHMETH;
    dData : HAL_BMS_MasterVolt::tHMIAdditionalIconBMS;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_TIME_LSL : STRUCT
    pMeth : ^CHMETH;
    dData : TIME_LSL;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_tLogSetting : STRUCT
    pMeth : ^CHMETH;
    dData : tLogSetting;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrCh_XML_READ_STATE_PTofCls__XMLReader : STRUCT
    pMeth : ^CHMETH;
    dData : _XMLReader::XML_READ_STATE;
    pDsc : ^SVRDSC;
  END_STRUCT;
  SvrChCmd_iprStates : STRUCT
    pMeth : ^CMDMETH;
    dData : iprStates;
    pDsc : ^SVRDSC;
  END_STRUCT;
END_TYPE
