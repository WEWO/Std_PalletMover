//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
#pragma pack(push, 4)
typedef struct _XML_ATTRIBUTE 
  {
    USINT *Name;  //! <Type Comment="Name of the attribute" Name="_XML_ATTRIBUTE.Name"/>
    USINT *Value;  //! <Type Comment="Value of the attribute" Name="_XML_ATTRIBUTE.Value"/>
  } _XML_ATTRIBUTE;
#pragma pack(pop)

#pragma pack(push, 4)
typedef struct _XML_ATTRIBUTE_LIST 
  {
    UDINT no;  //! <Type Comment="Number of attributes" Name="_XML_ATTRIBUTE_LIST.no"/>
    _XML_ATTRIBUTE *pList;  //! <Type Comment="Pointer at the list of attributes" Name="_XML_ATTRIBUTE_LIST.pList"/>
  } _XML_ATTRIBUTE_LIST;
#pragma pack(pop)

#pragma pack(push, 4)
typedef struct _XML_ELEMENT 
  {
    USINT *Name;  //! <Type Comment="Name of the element" Name="_XML_ELEMENT.Name"/>
    _XML_ATTRIBUTE_LIST Attributes;  //! <Type Comment="Attribute list of the element" Name="_XML_ELEMENT.Attributes"/>
    USINT *pText;  //! <Type Comment="Pointer at the text of the element" Name="_XML_ELEMENT.pText"/>
    _XML_ELEMENT *pChildren;  //! <Type Comment="Pointer at the child-elements" Name="_XML_ELEMENT.pChildren"/>
    _XML_ELEMENT *pFather;  //! <Type Comment="Pointer at the father element" Name="_XML_ELEMENT.pFather"/>
    _XML_ELEMENT *pNext;  //! <Type Comment="Pointer at the next element at the same level" Name="_XML_ELEMENT.pNext"/>
    _XML_ELEMENT *pPrevious;  //! <Type Comment="Pointer at the previous element at the same level" Name="_XML_ELEMENT.pPrevious"/>
    BOOL isClosed;  //! <Type Comment="True if element is already closed" Name="_XML_ELEMENT.isClosed"/>
  } _XML_ELEMENT;
#pragma pack(pop)

#pragma pack(push, 4)
typedef struct _XML_FILE 
  {
    USINT *Header;  //! <Type Comment="Header in the XML file" Name="_XML_FILE.Header"/>
    _XML_ELEMENT *MajorElement;  //! <Type Comment="Major and first element in the XML file" Name="_XML_FILE.MajorElement"/>
  } _XML_FILE;
#pragma pack(pop)

typedef UDINT ENV_Status; 
    #define ENV_NoVariableName 0
    #define ENV_ValidValue 1
    #define ENV_NoInterface 2
    #define ENV_VariableNameNotFound 3
    #define ENV_NoValueString 4

typedef UDINT gt_LogLevel;   //! <Type Comment="OWNER: SF_Logger&#13;&#10;Message logging level" Name="gt_LogLevel"/>
    #define LL_NONE 0
    #define LL_DEBUG_RT 1
    #define LL_DEBUG 2
    #define LL_INFO 3
    #define LL_WARNING 4
    #define LL_ERROR_APPLICATION 5
    #define LL_ERROR_INTERNAL 6
    #define LL_ERROR_CRITICAL 7

#pragma pack(push, 1)
typedef struct gt_LogData   //! <Type Comment="OWNER: SF_Logger&#13;&#10;Log data, interface between safan logger &#13;&#10;and other classes." Name="gt_LogData"/>
  {
    gt_LogLevel LogLevel;  //! <Type Comment="Identify loglevel " Name="gt_LogData.LogLevel"/>
    CHAR *p_ObjName;  //! <Type Comment="Name of source object " Name="gt_LogData.p_ObjName"/>
    CHAR *p_Msg;  //! <Type Comment="for Message logging:&#13;&#10;Pointer to message " Name="gt_LogData.p_Msg"/>
    UDINT Id;  //! <Type Comment="For Message logging:&#13;&#10;Id to identify message.&#13;&#10;&#13;&#10;For RealTime data logging:&#13;&#10;Id to identify value that is stored in dValue." Name="gt_LogData.Id"/>
    DINT dValue;  //! <Type Comment="For realtime data logging:&#13;&#10;Log value " Name="gt_LogData.dValue"/>
    BOOL rtCall;
  } gt_LogData;
#pragma pack(pop)

typedef gt_LogData *gpt_LogData;  //! <Type Comment="OWNER: SF_Logger&#13;&#10;Pointer to logdata, interface between safan logger and other classes." Name="gpt_LogData"/>

typedef UDINT gt_AgvHandleState; 
    #define HandleOperational 0
    #define HandleStartUp 1
    #define HandleConfiguration 2
    #define HandleDisabled 3

typedef UDINT gt_AgvMainAuto; 
    #define AutoConfig 0
    #define AutoStartUp 1
    #define AutoIdle 2
    #define AutoRunning 3
    #define AutoError 4
    #define AutoReset 5

typedef UDINT gt_AgvMainAux; 
    #define AuxMainConfig 0
    #define AuxMainStartUp 1
    #define AuxMainOperational 2
    #define AuxMainError 3
    #define AuxMainIdle 4

typedef UDINT gt_agvMainPeripherals; 
    #define PerConfig 0
    #define PerStartup 1
    #define PerOperational 2
    #define PerError 3
    #define PerIdle 4

typedef UDINT gt_AgvMainState; 
    #define Agv_Configuration 0
    #define Agv_StartUp 1
    #define Agv_idle 2
    #define Agv_Auto 3
    #define Agv_Manual 4
    #define Agv_InError 5
    #define Agv_Recover_Error 6

typedef UDINT gt_AgvManual; 
    #define ManualConfig 0
    #define ManualStartUp 1
    #define ManualIdle 2
    #define ManualRunning 3
    #define ManualError 4
    #define ManualReset 5

typedef UDINT gt_AgvSettingsCmd; 
    #define LoadSettings 0
    #define LoadReadyOk 1
    #define LoadReadError 2

typedef UDINT gt_FifoBufMode;   //! <Type Comment="OWNER: SF_DynamicBuffer&#13;&#10;FiFo Buffer mode &#13;&#10;- Cyclic (overwrite buffer if buffer is full)&#13;&#10;- Once   (Stop writing if buffer is full)&#13;&#10;&#13;&#10;&#13;&#10;FiFo := First In First Out" Name="gt_FifoBufMode"/>
    #define FIFOBUFMODE_ONCE 0
    #define FIFOBUFMODE_CYCLIC 1

typedef UDINT gt_LogCmd;   //! <Type Comment="OWNER: SF_Logger&#13;&#10;Log commands" Name="gt_LogCmd"/>
    #define LOGCMD_IDLE 0
    #define LOGCMD_BUSY 1
    #define LOGCMD_ERROR 2
    #define LOGCMD_RESET 3
    #define LOGCMD_FLUSH_MSG_LOG 4
    #define LOGCMD_START_RT_LOG 5
    #define LOGCMD_STARTTRIGGER_RT_LOG 6
    #define LOGCMD_STOPTRIGGER_RT_LOG 7
    #define LOGCMD_STOP_RT_LOG 8
    #define LOGCMD_SENDFILE_RT_LOG 9
    #define LOGCMD_TEST_MSG_LOG 10

typedef UDINT gt_LogTarget;   //! <Type Comment="OWNER: SF_Logger&#13;&#10;Target for Log message strings&#13;&#10;" Name="gt_LogTarget"/>
    #define LT_FILE 0
    #define LT_SCREEN 1
    #define LT_FILE_SCREEN 2
    #define LT_EVENT 3

typedef struct   //! <Type Comment="OWNER: SF_Base&#13;&#10;&#13;&#10;Object status.&#13;&#10;&#13;&#10;Generic object status interface.&#13;&#10;Bit 0 - 15 is reserved for generic Safan framework&#13;&#10;Bit 16 -31 can be used by the application" Name="gt_ObjectStatus"/>
  {
    long Error : 1;  //! <Type Comment="1: Object has an internal, application or critical error.&#13;&#10;0: Object has no error&#13;&#10;&#13;&#10;Note:&#13;&#10;This flag is only updated via methode:&#13;&#10;UpdateObjectStatusError&#13;&#10;" Name="gt_ObjectStatus.Error"/>
    long CriticalError : 1;  //! <Type Comment="Object has an critical error detected&#13;&#10;which can not be solved runtime.&#13;&#10;&#13;&#10;Criticals are reserved for dangerous &#13;&#10;situations.&#13;&#10;&#13;&#10;" Name="gt_ObjectStatus.CriticalError"/>
    long InternalError : 1;  //! <Type Comment="Object has an internal error detected&#13;&#10;which can not be solved runtime.&#13;&#10;" Name="gt_ObjectStatus.InternalError"/>
    long ApplicationError : 1;  //! <Type Comment="Application error detected.&#13;&#10;This error could be detected &#13;&#10;internal or set by an external object&#13;&#10;&#13;&#10;Error can be solved runtime" Name="gt_ObjectStatus.ApplicationError"/>
    long dummy0 : 3;
    long Enabled : 1;  //! <Type Comment="1: Object is config, mode and extern mode enbled&#13;&#10;0: Object is disabled&#13;&#10;&#13;&#10;Note:&#13;&#10;Write this flag only via methode:&#13;&#10;UpdateObjectStatusEnable" Name="gt_ObjectStatus.Enabled"/>
    long ConfigEnable : 1;  //! <Type Comment="Object is configurated to be enabled.&#13;&#10;&#13;&#10;" Name="gt_ObjectStatus.ConfigEnable"/>
    long ModeEnable : 1;  //! <Type Comment="Object is set runtime to be enabled or disabled &#13;&#10;Typically controlled internaly by object.&#13;&#10;&#13;&#10;1: Object is Enabled&#13;&#10;0: Object is disabled&#13;&#10;" Name="gt_ObjectStatus.ModeEnable"/>
    long ExtModeEnable : 1;  //! <Type Comment="Object is set runtime to be enabled or disabled &#13;&#10;Typically controlled by external objects.&#13;&#10;&#13;&#10;1: Object is Enabled&#13;&#10;0: Object is disabled&#13;&#10;" Name="gt_ObjectStatus.ExtModeEnable"/>
    long dummy1 : 3;
    long DebugRtLogEnabled : 1;  //! <Type Comment="Realtime Debug log is enabled" Name="gt_ObjectStatus.DebugRtLogEnabled"/>
    long LogConnected : 1;  //! <Type Comment="Client op_LogData is is connected to central Logger " Name="gt_ObjectStatus.LogConnected"/>
    long ApplicationStatus_1 : 1;
    long ApplicationStatus_2 : 1;
    long ApplicationStatus_3 : 1;
    long ApplicationStatus_4 : 1;
    long ApplicationStatus_5 : 1;
    long ApplicationStatus_6 : 1;
    long ApplicationStatus_7 : 1;
    long ApplicationStatus_8 : 1;
    long ApplicationStatus_9 : 1;
    long ApplicationStatus_10 : 1;
    long ApplicationStatus_11 : 1;
    long ApplicationStatus_12 : 1;
    long ApplicationStatus_13 : 1;
    long ApplicationStatus_14 : 1;
    long ApplicationStatus_15 : 1;
    long ApplicationStatus_16 : 1;
  }gt_ObjectStatus;

#pragma pack(push, 1)
typedef struct gt_RtLogTrigger   //! <Type Comment="OWNER: SF_Logger&#13;&#10;Trigger settings used for realtime data logging" Name="gt_RtLogTrigger"/>
  {
    struct   //! <Type Comment="Flags to enable trigger conditions&#13;&#10;&#13;&#10;&#13;&#10;trigger = (    EnabledId and Id match&#13;&#10;   AND (  (EnableValueEqual  AND value equal)&#13;&#10;              OR (EnableValueLower  AND value lower)&#13;&#10;       OR (EnableValueHigher AND value higher)&#13;&#10;              )&#13;&#10;           )" Name="gt_RtLogTrigger.Control"/>
    {
      char EnableId : 1;  //! <Type Comment="Id used for trigger condition&#13;&#10;0: disabled&#13;&#10;1: enabled&#13;&#10;&#13;&#10;If enabled Id should match also &#13;&#10;to find trigger" Name="gt_RtLogTrigger.Control.EnableId"/>
      char EnableValueEqual : 1;  //! <Type Comment="Value used for trigger condition&#13;&#10;TriggerEvent if value is equal&#13;&#10;0: disabled&#13;&#10;1: enabled" Name="gt_RtLogTrigger.Control.EnableValueEqual"/>
      char EnableValueLower : 1;  //! <Type Comment="Value used for trigger condition&#13;&#10;TriggerEvent if value is lower&#13;&#10;0: disabled&#13;&#10;1: enabled" Name="gt_RtLogTrigger.Control.EnableValueLower"/>
      char EnableValueHigher : 1;  //! <Type Comment="Value used for trigger condition&#13;&#10;TriggerEvent if value is higher&#13;&#10;0: disabled&#13;&#10;1: enabled" Name="gt_RtLogTrigger.Control.EnableValueHigher"/>
    }Control;
    UDINT Id;  //! <Type Comment="Id of logged data" Name="gt_RtLogTrigger.Id"/>
    DINT Value;  //! <Type Comment="Data value" Name="gt_RtLogTrigger.Value"/>
  } gt_RtLogTrigger;
#pragma pack(pop)

