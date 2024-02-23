//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
typedef struct SvrCh_BDINT 
  {
    CHMETH *pMeth;
    BDINT dData;
    SVRDSC *pDsc;
  } SvrCh_BDINT;

typedef struct CltCh_BDINT 
  {
    struct SvrCh_BDINT *pCh;
    BDINT dData;
    SVRCHCMD *pCmd;
  } CltCh_BDINT;

typedef struct SvrCh_DINT 
  {
    CHMETH *pMeth;
    DINT dData;
    SVRDSC *pDsc;
  } SvrCh_DINT;

typedef struct CltCh_DINT 
  {
    struct SvrCh_DINT *pCh;
    DINT dData;
    SVRCHCMD *pCmd;
  } CltCh_DINT;

typedef struct SvrCh_gpt_LogData 
  {
    CHMETH *pMeth;
    gpt_LogData dData;
    SVRDSC *pDsc;
  } SvrCh_gpt_LogData;

typedef struct CltCh_gpt_LogData 
  {
    struct SvrCh_gpt_LogData *pCh;
    gpt_LogData dData;
    SVRCHCMD *pCmd;
  } CltCh_gpt_LogData;

typedef struct SvrCh_gt_AgvMainAuto 
  {
    CHMETH *pMeth;
    gt_AgvMainAuto dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvMainAuto;

typedef struct CltCh_gt_AgvMainAuto 
  {
    struct SvrCh_gt_AgvMainAuto *pCh;
    gt_AgvMainAuto dData;
    SVRCHCMD *pCmd;
  } CltCh_gt_AgvMainAuto;

typedef struct SvrCh_gt_AgvMainAux 
  {
    CHMETH *pMeth;
    gt_AgvMainAux dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvMainAux;

typedef struct CltCh_gt_AgvMainAux 
  {
    struct SvrCh_gt_AgvMainAux *pCh;
    gt_AgvMainAux dData;
    SVRCHCMD *pCmd;
  } CltCh_gt_AgvMainAux;

typedef struct SvrCh_gt_agvMainPeripherals 
  {
    CHMETH *pMeth;
    gt_agvMainPeripherals dData;
    SVRDSC *pDsc;
  } SvrCh_gt_agvMainPeripherals;

typedef struct CltCh_gt_agvMainPeripherals 
  {
    struct SvrCh_gt_agvMainPeripherals *pCh;
    gt_agvMainPeripherals dData;
    SVRCHCMD *pCmd;
  } CltCh_gt_agvMainPeripherals;

typedef struct SvrCh_gt_AgvManual 
  {
    CHMETH *pMeth;
    gt_AgvManual dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvManual;

typedef struct CltCh_gt_AgvManual 
  {
    struct SvrCh_gt_AgvManual *pCh;
    gt_AgvManual dData;
    SVRCHCMD *pCmd;
  } CltCh_gt_AgvManual;

typedef struct SvrCh_gt_AgvSettingsCmd 
  {
    CHMETH *pMeth;
    gt_AgvSettingsCmd dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvSettingsCmd;

typedef struct CltCh_gt_AgvSettingsCmd 
  {
    struct SvrCh_gt_AgvSettingsCmd *pCh;
    gt_AgvSettingsCmd dData;
    SVRCHCMD *pCmd;
  } CltCh_gt_AgvSettingsCmd;

typedef struct SvrCh_REAL 
  {
    CHMETH *pMeth;
    REAL dData;
    SVRDSC *pDsc;
  } SvrCh_REAL;

typedef struct CltCh_REAL 
  {
    struct SvrCh_REAL *pCh;
    REAL dData;
    SVRCHCMD *pCmd;
  } CltCh_REAL;

typedef struct SvrCh_UDINT 
  {
    CHMETH *pMeth;
    UDINT dData;
    SVRDSC *pDsc;
  } SvrCh_UDINT;

typedef struct CltCh_UDINT 
  {
    struct SvrCh_UDINT *pCh;
    UDINT dData;
    SVRCHCMD *pCmd;
  } CltCh_UDINT;

typedef struct SvrChCmd_DINT 
  {
    CMDMETH *pMeth;
    DINT dData;
    SVRDSC *pDsc;
  } SvrChCmd_DINT;

typedef struct CltChCmd__Can 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _Can *pCmd;
  } CltChCmd__Can;

typedef struct CltChCmd__CanLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _CanLib *pCmd;
  } CltChCmd__CanLib;

typedef struct CltChCmd__CheckSum 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _CheckSum *pCmd;
  } CltChCmd__CheckSum;

typedef struct CltChCmd__cJSON 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _cJSON *pCmd;
  } CltChCmd__cJSON;

typedef struct CltChCmd__ComLogging 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _ComLogging *pCmd;
  } CltChCmd__ComLogging;

typedef struct CltChCmd__FileSys 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _FileSys *pCmd;
  } CltChCmd__FileSys;

typedef struct CltChCmd__JSONReader 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _JSONReader *pCmd;
  } CltChCmd__JSONReader;

typedef struct CltChCmd__JSONWriter 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _JSONWriter *pCmd;
  } CltChCmd__JSONWriter;

typedef struct SvrChCmd_UDINT 
  {
    CMDMETH *pMeth;
    UDINT dData;
    SVRDSC *pDsc;
  } SvrChCmd_UDINT;

typedef struct CltChCmd__MemoryBubbles 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    _MemoryBubbles *pCmd;
  } CltChCmd__MemoryBubbles;

typedef struct CltChCmd__MultiTask 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _MultiTask *pCmd;
  } CltChCmd__MultiTask;

typedef struct CltChCmd__OpenSSL 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _OpenSSL *pCmd;
  } CltChCmd__OpenSSL;

typedef struct CltChCmd__OSKernel 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _OSKernel *pCmd;
  } CltChCmd__OSKernel;

typedef struct CltChCmd__StdLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _StdLib *pCmd;
  } CltChCmd__StdLib;

typedef struct CltChCmd__SysMsg 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _SysMsg *pCmd;
  } CltChCmd__SysMsg;

typedef struct CltChCmd__TaskObjectControl 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _TaskObjectControl *pCmd;
  } CltChCmd__TaskObjectControl;

typedef struct SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient 
  {
    CMDMETH *pMeth;
    _FSM_TCPIP_CLIENT dData;
    SVRDSC *pDsc;
  } SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient;

typedef struct CltChCmd__TCPIPClient 
  {
    struct SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient *pCh;
    _FSM_TCPIP_CLIENT dData;
    _TCPIPClient *pCmd;
  } CltChCmd__TCPIPClient;

typedef struct CltChCmd__TCPIPClient_MQTTClient 
  {
    struct SvrChCmd__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient *pCh;
    _FSM_TCPIP_CLIENT dData;
    _TCPIPClient_MQTTClient *pCmd;
  } CltChCmd__TCPIPClient_MQTTClient;

typedef struct CltChCmd__TCPIPClientInterface_MQTTClient 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _TCPIPClientInterface_MQTTClient *pCmd;
  } CltChCmd__TCPIPClientInterface_MQTTClient;

typedef struct CltChCmd__XMLReader 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _XMLReader *pCmd;
  } CltChCmd__XMLReader;

typedef struct CltChCmd__XMLStructCreator 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _XMLStructCreator *pCmd;
  } CltChCmd__XMLStructCreator;

typedef struct CltChCmd_AgvConfig 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    AgvConfig *pCmd;
  } CltChCmd_AgvConfig;

typedef struct CltChCmd_AgvSettings 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    AgvSettings *pCmd;
  } CltChCmd_AgvSettings;

typedef struct CltChCmd_ASCII_BIN 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    ASCII_BIN *pCmd;
  } CltChCmd_ASCII_BIN;

typedef struct CltChCmd_CanDriverBase 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    CanDriverBase *pCmd;
  } CltChCmd_CanDriverBase;

typedef struct CltChCmd_CanOpenBase 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    CanOpenBase *pCmd;
  } CltChCmd_CanOpenBase;

typedef struct CltChCmd_CanOpenBaseRiwo 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    CanOpenBaseRiwo *pCmd;
  } CltChCmd_CanOpenBaseRiwo;

typedef struct CltChCmd_CanOpenWewoBase 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    CanOpenWewoBase *pCmd;
  } CltChCmd_CanOpenWewoBase;

typedef struct SvrChCmd_pVoid 
  {
    CMDMETH *pMeth;
    pVoid dData;
    SVRDSC *pDsc;
  } SvrChCmd_pVoid;

typedef struct CltChCmd_CntrlAuxHmi 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    CntrlAuxHmi *pCmd;
  } CltChCmd_CntrlAuxHmi;

typedef struct CltChCmd_CntrlPeriperalPiviotWheels 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    CntrlPeriperalPiviotWheels *pCmd;
  } CltChCmd_CntrlPeriperalPiviotWheels;

typedef struct CltChCmd_ComDiagnosis_MQTT 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    ComDiagnosis_MQTT *pCmd;
  } CltChCmd_ComDiagnosis_MQTT;

typedef struct CltChCmd_ConfigDefBase 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    ConfigDefBase *pCmd;
  } CltChCmd_ConfigDefBase;

typedef struct CltChCmd_CriticalSection 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    CriticalSection *pCmd;
  } CltChCmd_CriticalSection;

typedef struct CltChCmd_Curtis_1232E 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    Curtis_1232E *pCmd;
  } CltChCmd_Curtis_1232E;

typedef struct CltChCmd_Curtis_AC2F 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    Curtis_AC2F *pCmd;
  } CltChCmd_Curtis_AC2F;

typedef struct CltChCmd_Curtis_AC2F_IO 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    Curtis_AC2F_IO *pCmd;
  } CltChCmd_Curtis_AC2F_IO;

typedef struct CltChCmd_DINT 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SVRCHCMD *pCmd;
  } CltChCmd_DINT;

typedef struct CltChCmd_EncoderpulsesToDegrees 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    EncoderpulsesToDegrees *pCmd;
  } CltChCmd_EncoderpulsesToDegrees;

typedef struct SvrChCmd_ENV_Status 
  {
    CMDMETH *pMeth;
    ENV_Status dData;
    SVRDSC *pDsc;
  } SvrChCmd_ENV_Status;

typedef struct CltChCmd_EnvironmentVariable 
  {
    struct SvrChCmd_ENV_Status *pCh;
    ENV_Status dData;
    EnvironmentVariable *pCmd;
  } CltChCmd_EnvironmentVariable;

typedef struct CltChCmd_ENVLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    ENVLib *pCmd;
  } CltChCmd_ENVLib;

typedef struct CltChCmd_ENVStringAction 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    ENVStringAction *pCmd;
  } CltChCmd_ENVStringAction;

typedef struct CltChCmd_HAL_BMS_MasterVolt 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HAL_BMS_MasterVolt *pCmd;
  } CltChCmd_HAL_BMS_MasterVolt;

typedef struct CltChCmd_HalBmsMastervoltinterface 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HalBmsMastervoltinterface *pCmd;
  } CltChCmd_HalBmsMastervoltinterface;

typedef struct CltChCmd_HandleSteering 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HandleSteering *pCmd;
  } CltChCmd_HandleSteering;

typedef struct CltChCmd_HandleSteeringCurtisAC2F 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HandleSteeringCurtisAC2F *pCmd;
  } CltChCmd_HandleSteeringCurtisAC2F;

typedef struct CltChCmd_I_PivotWheel 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    I_PivotWheel *pCmd;
  } CltChCmd_I_PivotWheel;

typedef struct CltChCmd_InterfaceAuxHmiMqtt 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    InterfaceAuxHmiMqtt *pCmd;
  } CltChCmd_InterfaceAuxHmiMqtt;

typedef struct CltChCmd_LinkedObjectBase 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    LinkedObjectBase *pCmd;
  } CltChCmd_LinkedObjectBase;

typedef struct CltChCmd_Merker 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    Merker *pCmd;
  } CltChCmd_Merker;

typedef struct CltChCmd_MerkerEx 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    MerkerEx *pCmd;
  } CltChCmd_MerkerEx;

typedef struct SvrChCmd_t_e_WorkerState_PTofCls_MQTTBackgroundWorker 
  {
    CMDMETH *pMeth;
    t_e_WorkerState dData;
    SVRDSC *pDsc;
  } SvrChCmd_t_e_WorkerState_PTofCls_MQTTBackgroundWorker;

typedef struct CltChCmd_MQTTBackgroundWorker 
  {
    struct SvrChCmd_t_e_WorkerState_PTofCls_MQTTBackgroundWorker *pCh;
    t_e_WorkerState dData;
    MQTTBackgroundWorker *pCmd;
  } CltChCmd_MQTTBackgroundWorker;

typedef struct SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient 
  {
    CMDMETH *pMeth;
    t_e_MQTTClientStates dData;
    SVRDSC *pDsc;
  } SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient;

typedef struct CltChCmd_MQTTClient 
  {
    struct SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient *pCh;
    t_e_MQTTClientStates dData;
    MQTTClient *pCmd;
  } CltChCmd_MQTTClient;

typedef struct SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient_Interface 
  {
    CMDMETH *pMeth;
    t_e_MQTTClientStates dData;
    SVRDSC *pDsc;
  } SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient_Interface;

typedef struct CltChCmd_MQTTClient_Interface 
  {
    struct SvrChCmd_t_e_MQTTClientStates_PTofCls_MQTTClient_Interface *pCh;
    t_e_MQTTClientStates dData;
    MQTTClient_Interface *pCmd;
  } CltChCmd_MQTTClient_Interface;

typedef struct CltChCmd_MQTTClient_Interface_Config 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    MQTTClient_Interface_Config *pCmd;
  } CltChCmd_MQTTClient_Interface_Config;

typedef struct CltChCmd_MqttInterface 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    MqttInterface *pCmd;
  } CltChCmd_MqttInterface;

typedef struct CltChCmd_MQTTPacketQueue 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    MQTTPacketQueue *pCmd;
  } CltChCmd_MQTTPacketQueue;

typedef struct CltChCmd_MQTTTopic_RetVals 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    MQTTTopic_RetVals *pCmd;
  } CltChCmd_MQTTTopic_RetVals;

typedef struct CltChCmd_RAMex 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    RAMex *pCmd;
  } CltChCmd_RAMex;

typedef struct CltChCmd_SigCLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SigCLib *pCmd;
  } CltChCmd_SigCLib;

typedef struct CltChCmd_SpeedCalculator 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SpeedCalculator *pCmd;
  } CltChCmd_SpeedCalculator;

typedef struct CltChCmd_String 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    String *pCmd;
  } CltChCmd_String;

typedef struct CltChCmd_StringRAM 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    StringRAM *pCmd;
  } CltChCmd_StringRAM;

typedef struct CltChCmd_System 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    System *pCmd;
  } CltChCmd_System;

typedef struct CltChCmd_Wewo_DynamicBuffer 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    Wewo_DynamicBuffer *pCmd;
  } CltChCmd_Wewo_DynamicBuffer;

typedef struct CltChCmd_Wewo_EnumTranslator 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    Wewo_EnumTranslator *pCmd;
  } CltChCmd_Wewo_EnumTranslator;

typedef struct CltChCmd_Wewo_LinkedObjectBase 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    Wewo_LinkedObjectBase *pCmd;
  } CltChCmd_Wewo_LinkedObjectBase;

typedef struct CltChCmd_WewoBase 
  {
    struct SvrChCmd_pVoid *pCh;
    pVoid dData;
    WewoBase *pCmd;
  } CltChCmd_WewoBase;

typedef struct SvrChCmd_t_e_MQTT_TopicState_PTofCls_MQTTTopic 
  {
    CMDMETH *pMeth;
    t_e_MQTT_TopicState dData;
    SVRDSC *pDsc;
  } SvrChCmd_t_e_MQTT_TopicState_PTofCls_MQTTTopic;

typedef struct CltChCmd_WewoMqtt 
  {
    struct SvrChCmd_t_e_MQTT_TopicState_PTofCls_MQTTTopic *pCh;
    t_e_MQTT_TopicState dData;
    WewoMqtt *pCmd;
  } CltChCmd_WewoMqtt;

typedef struct CltChCmd_WewoStringUtils 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    WewoStringUtils *pCmd;
  } CltChCmd_WewoStringUtils;

typedef struct SvrCh__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient 
  {
    CHMETH *pMeth;
    _FSM_TCPIP_CLIENT dData;
    SVRDSC *pDsc;
  } SvrCh__FSM_TCPIP_CLIENT_PTofCls__TCPIPClient;

typedef struct SvrCh__STATE_TCPIPC_INTF_PTofCls__TCPIPClientInterface 
  {
    CHMETH *pMeth;
    _STATE_TCPIPC_INTF dData;
    SVRDSC *pDsc;
  } SvrCh__STATE_TCPIPC_INTF_PTofCls__TCPIPClientInterface;

typedef struct SvrCh__XML_PARSE_ERROR_PTofCls__XMLReader 
  {
    CHMETH *pMeth;
    _XML_PARSE_ERROR dData;
    SVRDSC *pDsc;
  } SvrCh__XML_PARSE_ERROR_PTofCls__XMLReader;

typedef struct SvrCh_CanDeviceState_PTofCls_CanOpenBase 
  {
    CHMETH *pMeth;
    CanDeviceState dData;
    SVRDSC *pDsc;
  } SvrCh_CanDeviceState_PTofCls_CanOpenBase;

typedef struct SvrCh_eCurtisDriveMode_PTofCls_Curtis_Base 
  {
    CHMETH *pMeth;
    eCurtisDriveMode dData;
    SVRDSC *pDsc;
  } SvrCh_eCurtisDriveMode_PTofCls_Curtis_Base;

typedef struct SvrCh_eCurtisDriveModel_PTofCls_Curtis_Universal 
  {
    CHMETH *pMeth;
    eCurtisDriveModel dData;
    SVRDSC *pDsc;
  } SvrCh_eCurtisDriveModel_PTofCls_Curtis_Universal;

typedef struct SvrCh_eCurtisDriveModeRequest_PTofCls_Curtis_Base 
  {
    CHMETH *pMeth;
    eCurtisDriveModeRequest dData;
    SVRDSC *pDsc;
  } SvrCh_eCurtisDriveModeRequest_PTofCls_Curtis_Base;

typedef struct SvrCh_gt_AgvMainState 
  {
    CHMETH *pMeth;
    gt_AgvMainState dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvMainState;

typedef struct SvrCh_gt_AgvMotorControl 
  {
    CHMETH *pMeth;
    gt_AgvMotorControl dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvMotorControl;

typedef struct SvrCh_gt_AgvMotorState 
  {
    CHMETH *pMeth;
    gt_AgvMotorState dData;
    SVRDSC *pDsc;
  } SvrCh_gt_AgvMotorState;

typedef struct SvrCh_gt_FifoBufMode 
  {
    CHMETH *pMeth;
    gt_FifoBufMode dData;
    SVRDSC *pDsc;
  } SvrCh_gt_FifoBufMode;

typedef struct SvrCh_gt_LogCmd 
  {
    CHMETH *pMeth;
    gt_LogCmd dData;
    SVRDSC *pDsc;
  } SvrCh_gt_LogCmd;

typedef struct SvrCh_gt_LogLevel 
  {
    CHMETH *pMeth;
    gt_LogLevel dData;
    SVRDSC *pDsc;
  } SvrCh_gt_LogLevel;

typedef struct SvrCh_gt_LogTarget 
  {
    CHMETH *pMeth;
    gt_LogTarget dData;
    SVRDSC *pDsc;
  } SvrCh_gt_LogTarget;

typedef struct SvrCh_gt_ObjectStatus 
  {
    CHMETH *pMeth;
    gt_ObjectStatus dData;
    SVRDSC *pDsc;
  } SvrCh_gt_ObjectStatus;

typedef struct SvrCh_pChar 
  {
    CHMETH *pMeth;
    pChar dData;
    SVRDSC *pDsc;
  } SvrCh_pChar;

typedef struct SvrCh_pVoid 
  {
    CHMETH *pMeth;
    pVoid dData;
    SVRDSC *pDsc;
  } SvrCh_pVoid;

typedef struct SvrCh_t_e_MQTT_TopicType_PTofCls_MQTTTopic 
  {
    CHMETH *pMeth;
    t_e_MQTT_TopicType dData;
    SVRDSC *pDsc;
  } SvrCh_t_e_MQTT_TopicType_PTofCls_MQTTTopic;

typedef struct SvrCh_t_e_READSTEPS_PTofCls__JSONReader 
  {
    CHMETH *pMeth;
    t_e_READSTEPS dData;
    SVRDSC *pDsc;
  } SvrCh_t_e_READSTEPS_PTofCls__JSONReader;

typedef struct SvrCh_t_e_WRITESTEPS_PTofCls__JSONWriter 
  {
    CHMETH *pMeth;
    t_e_WRITESTEPS dData;
    SVRDSC *pDsc;
  } SvrCh_t_e_WRITESTEPS_PTofCls__JSONWriter;

typedef struct SvrCh_tBMSAlarms_PTofCls_HAL_BMS_Base 
  {
    CHMETH *pMeth;
    tBMSAlarms dData;
    SVRDSC *pDsc;
  } SvrCh_tBMSAlarms_PTofCls_HAL_BMS_Base;

typedef struct SvrCh_tCurtisFault_PTofCls_Curtis_AC2F 
  {
    CHMETH *pMeth;
    tCurtisFault dData;
    SVRDSC *pDsc;
  } SvrCh_tCurtisFault_PTofCls_Curtis_AC2F;

typedef struct SvrCh_tHMIAdditionalIconBMS_PTofCls_HAL_BMS_MasterVolt 
  {
    CHMETH *pMeth;
    tHMIAdditionalIconBMS dData;
    SVRDSC *pDsc;
  } SvrCh_tHMIAdditionalIconBMS_PTofCls_HAL_BMS_MasterVolt;

typedef struct SvrCh_XML_READ_STATE_PTofCls__XMLReader 
  {
    CHMETH *pMeth;
    XML_READ_STATE dData;
    SVRDSC *pDsc;
  } SvrCh_XML_READ_STATE_PTofCls__XMLReader;

