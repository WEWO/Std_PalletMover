//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)

//{{LSL_DEFINES
#define MQTTTOPIC_STRING_MAX_PUBLISH_STRING_LENGTH (1024)
//}}LSL_DEFINES

//{{LSL_DECLARATION

(*!
<Class
	Name               = "MQTTTopicString"
	Revision           = "1.1"
	GUID               = "{1E7C8EF1-97DE-4C4C-8BE0-C9811E214661}"
	RealtimeTask       = "false"
	CyclicTask         = "true"
	DefCyclictime      = "10 ms"
	BackgroundTask     = "false"
	Sigmatek           = "true"
	OSInterface        = "false"
	HighPriority       = "false"
	Automatic          = "false"
	UpdateMode         = "Prescan"
	SharedCommandTable = "true"
	Objectsize         = "(1830,540)"
	Comment            = "Derivation of the base class MQTTTopic.&#13;&#10;&#13;&#10;Can be used to receive or publish general data strings with a length of up to 1024 charachters.&#13;&#10;If a longer string is required, the MQTTTopic Class can be derived to implement a User Specific Class with the required String Properties.">
	<Channels>
		<Server Name="DataString" GUID="{7A2EC243-DD04-4FA1-A1FA-EFE0E92C1A13}" Class="String" Visualized="true" Initialize="true" WriteProtected="false" Retentive="false" Comment="use this channel to access the string functions"/>
		<Client Name="ocStdLib" Required="false" Internal="false"/>
		<Client Name="PubSubDataString" Required="true" Internal="true"/>
	</Channels>
	<Dependencies>
		<Files>
			<File Path=".\Class\MQTTTopicString\MQTTTopicString_de.pdf"/>
			<File Path=".\Class\MQTTTopicString\MQTTTopicString_en.pdf"/>
		</Files>
	</Dependencies>
	<RevDoku>
		<Owner Company="Sigmatek"/>
		<Dokumentation Revision="1.1" Date="2020-03-05" Author="VelGer" Company="Sigmatek" Description="1. BugFix: Null Terminator of the String has been removed, this ensures that the string published complies to the OASIS Protocol Standard V3.1.1."/>
		<Dokumentation Revision="1.0" Date="2019-02-27" Author="SchMax" Company="Sigmatek" Description="creation of class."/>
	</RevDoku>
	<Network Name="MQTTTopicString">
		<!-- List of Components in this network -->
		<Components>
			<Object
				Name       = "_base"
				GUID       = "{F8D06025-142F-4993-BC12-A5F602ABD0F1}"
				Class      = "MQTTTopic"
				Position   = "(218,120)"
				Visualized = "true"
				Remotely   = "true">
				<Channels>
					<Server Name="GrantedQoS"/>
					<Server Name="PublishInterval" Value="10 sec"/>
					<Server Name="QoS"/>
					<Server Name="RetainData"/>
					<Server Name="TopicName"/>
					<Server Name="TopicState"/>
					<Server Name="TopicType"/>
					<Client Name="cAutoResetTime"/>
					<Client Name="cPublishTimeout" Value="MQTTTOPIC_DEFAULT_PUBLISH_TIMEOUT"/>
					<Client Name="cSubscribeTimeout" Value="MQTTTOPIC_DEFAULT_SUBSCRIBE_TIMEOUT"/>
					<Client Name="cUnsubscribeTimeout" Value="MQTTTOPIC_DEFAULT_UNSUBSCRIBE_TIMEOUT"/>
					<Client Name="ocMQTTClient_Interface"/>
					<Client Name="ocSigCLib"/>
				</Channels>
			</Object>
			<Object
				Name       = "PubSubDataString"
				GUID       = "{7A35CC6A-98F4-4C4B-BB22-731CC48560E0}"
				Class      = "String"
				Position   = "(210,630)"
				Visualized = "true"
				Remotely   = "true">
				<Channels>
					<Server Name="Data"/>
					<Client Name="SingleRealloc" Value="1"/>
				</Channels>
			</Object>
		</Components>
		<Comments>
		</Comments>
		<!-- List of Connections in this network -->
		<Connections>
			<Connection Source="this.TopicState" Destination="_base.TopicState" Vertices="(1136,210),(964,210),"/>
			<Connection Source="this.TopicType" Destination="_base.TopicType" Vertices="(1136,270),(964,270),"/>
			<Connection Source="this.TopicName" Destination="_base.TopicName" Vertices="(1136,330),(964,330),"/>
			<Connection Source="this.PublishInterval" Destination="_base.PublishInterval" Vertices="(1136,390),(964,390),"/>
			<Connection Source="this.QoS" Destination="_base.QoS" Vertices="(1136,510),(964,510),"/>
			<Connection Source="this.RetainData" Destination="_base.RetainData" Vertices="(1136,450),(964,450),"/>
			<Connection Source="this.GrantedQoS" Destination="_base.GrantedQoS" Vertices="(1136,570),(964,570),"/>
			<Connection Source="_base.ocMQTTClient_Interface" Destination="this.ocMQTTClient_Interface" Vertices="(218,210),(38,210),"/>
			<Connection Source="_base.ocSigCLib" Destination="this.ocSigCLib" Vertices="(218,270),(38,270),"/>
			<Connection Source="this.PubSubDataString" Destination="PubSubDataString.Data"/>
			<Connection Source="this.DataString" Destination="PubSubDataString.Data" Vertices="(1136,630),(990,630),(960,660),(960,690),(930,720),(946,720),"/>
			<Connection Source="_base.cAutoResetTime" Destination="this.cAutoResetTime" Vertices="(218,330),(38,330),"/>
			<Connection Source="_base.cSubscribeTimeout" Destination="this.cSubscribeTimeout" Vertices="(218,390),(38,390),"/>
			<Connection Source="_base.cPublishTimeout" Destination="this.cPublishTimeout" Vertices="(218,450),(38,450),"/>
			<Connection Source="_base.cUnsubscribeTimeout" Destination="this.cUnsubscribeTimeout" Vertices="(218,510),(38,510),"/>
		</Connections>
		<!-- Headerfiles -->
		<Options>
		</Options>
	</Network>
</Class>
*)
#pragma using MQTTTopic

MQTTTopicString : CLASS
: MQTTTopic
  //Servers:
	DataString 	: SvrChCmd_UDINT;
  //Clients:
	ocStdLib 	: CltChCmd__StdLib;
	PubSubDataString 	: CltChCmd_String;
  //Variables:
		aPublishString : ARRAY [0..MQTTTOPIC_STRING_MAX_PUBLISH_STRING_LENGTH-1] OF CHAR;

  //Functions:
				//! <Function Comment="Will be called to the get the data for publishing it to the defined topic." Name="User_GetPublishData"/>
	FUNCTION VIRTUAL User_GetPublishData
		VAR_OUTPUT
			PublishData 	: t_s_MQTT_TopicPublishData;			//! <Variable Comment="Return struct, which must be filled with the data that should be published." Name="User_GetPublishData.PublishData"/>
		END_VAR;
				//! <Function Comment="Will be called if data from the subscribed topic was received.&#13;&#10;&#13;&#10;Note: the pointer to the data is only valid in the actual call of this method." Name="User_SubscribeData"/>
	FUNCTION VIRTUAL User_SubscribeData
		VAR_INPUT
			pData 	: ^void;			//! <Variable Comment="Pointer to the payload of the MQTT message, if data is available. Otherwise the pointer is NIL." Name="User_SubscribeData.pData"/>
			udLen 	: UDINT;			//! <Variable Comment="Size of the data in byte." Name="User_SubscribeData.udLen"/>
		END_VAR;
				//! <Function Comment="Returns the length of the data string, without 0-termination." Name="GetDataStringLength"/>
	FUNCTION GLOBAL GetDataStringLength
		VAR_OUTPUT
			outDataStringLen 	: UDINT;			//! <Variable Comment="Length of the data string without 0-termination." Name="GetDataStringLength.outDataStringLen"/>
		END_VAR;
	
	FUNCTION GLOBAL WriteDataOff
		VAR_INPUT
			udLen 	: UDINT;
			udOff 	: UDINT;
			pData 	: ^USINT;
		END_VAR;
	
	FUNCTION GLOBAL ReadDataOff
		VAR_INPUT
			udOff 	: UDINT;
			pData 	: ^USINT;
			udMax 	: UDINT;
		END_VAR
		VAR_OUTPUT
			udLen 	: UDINT;
		END_VAR;
	
	FUNCTION VIRTUAL GLOBAL DataString::Read
		VAR_OUTPUT
			output (EAX) 	: UDINT;
		END_VAR;
	
	FUNCTION VIRTUAL GLOBAL DataString::Write
		VAR_INPUT
			input (EAX) 	: UDINT;
		END_VAR
		VAR_OUTPUT
			result (EAX) 	: UDINT;
		END_VAR;
  //Tables:
	FUNCTION @STD
		VAR_OUTPUT
			ret_code	: CONFSTATES;
		END_VAR;
	FUNCTION GLOBAL TAB @CT_;
END_CLASS;

#pragma using String
#pragma usingLtd _StdLib


//}}LSL_DECLARATION


FUNCTION GLOBAL TAB MQTTTopicString::@CT_
0$UINT,
2#0100000000000000$UINT, //TY_MQTTTOPICSTRING
1$UINT, 1$UINT, (SIZEOF(::MQTTTopicString))$UINT, 
1$UINT, 2$UINT, 0$UINT, 
TO_UDINT(3831352762), "MQTTTopicString", //Class
TO_UDINT(3169546069), "MQTTTopic", 1$UINT, 14$UINT, //Baseclass
//Servers:
(::MQTTTopicString.DataString.pMeth)$UINT, _CH_SVR_OBJ$UINT, 2#0000000001000000$UINT, TO_UDINT(1369870229), "DataString", 
//Clients:
(::MQTTTopicString.ocStdLib.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000000$UINT, TO_UDINT(1936333984), "ocStdLib", TO_UDINT(3689364044), "_StdLib", 0$UINT, 0$UINT, 
(::MQTTTopicString.PubSubDataString.pCh)$UINT, _CH_CLT_OBJ$UINT, 2#0000000000000010$UINT, TO_UDINT(364633018), "PubSubDataString", TO_UDINT(1850111279), "String", 1$UINT, 11$UINT, 
END_FUNCTION


#define USER_CNT_MQTTTopicString 8

TYPE
	_LSL_STD_VMETH	: STRUCT
			CmdTable	: CMDMETH;
			UserFcts	: ARRAY[0..USER_CNT_MQTTTopicString] OF ^Void;
	END_STRUCT;
END_TYPE

FUNCTION MQTTTopicString::@STD
	VAR_OUTPUT
		ret_code	: CONFSTATES;
	END_VAR
	VAR
		vmt	: _LSL_STD_VMETH;
		nCmdSize	: UINT;
	END_VAR

	ret_code	:= MQTTTopic::@STD();
	IF ret_code <> C_OK THEN
		RETURN;
	END_IF;
	nCmdSize		:= MQTTTopic::TopicState.pMeth^.nCmds$UINT*SIZEOF(pVoid) + CMDMETH.Init;

	_memcpy((#vmt.CmdTable)$^USINT, MQTTTopic::TopicState.pMeth, nCmdSize);
	vmt.CmdTable.nCmds		:= nSTDCMD + USER_CNT_MQTTTopicString;
#pragma warning (disable : 74)
	vmt.UserFcts[5]		:= #User_GetPublishData();

#pragma warning (default : 74)
#pragma warning (disable : 74)
	vmt.UserFcts[7]		:= #User_SubscribeData();

#pragma warning (default : 74)
	MQTTTopic::TopicState.pMeth		:= StoreCmd (pCmd := #vmt.CmdTable, SHARED);

	IF MQTTTopic::TopicState.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;
	_memcpy((#vmt.CmdTable)$^USINT, DataString.pMeth, SIZEOF(CMDMETH));
	vmt.CmdTable.nCmds		:= nSTDCMD;
	vmt.CmdTable.Read		:= #DataString::Read();
	vmt.CmdTable.Write		:= #DataString::Write();
	DataString.pMeth		:= StoreCmd (pCmd := #vmt.CmdTable, SHARED);

	IF DataString.pMeth THEN
		ret_code	:= C_OK;
	ELSE
		ret_code	:= C_OUTOF_NEAR;
		RETURN;
	END_IF;

END_FUNCTION

//{{LSL_IMPLEMENTATION

//############################################################################################
//#                                   Public Methods                                         #
//############################################################################################
FUNCTION GLOBAL MQTTTopicString::GetDataStringLength
	VAR_OUTPUT
		outDataStringLen 	: UDINT;
	END_VAR
  
  outDataStringLen := PubSubDataString.StrLen();

END_FUNCTION

//############################################################################################
//#                                  Private Methods                                         #
//############################################################################################

FUNCTION VIRTUAL MQTTTopicString::User_GetPublishData
	VAR_OUTPUT
		PublishData 	: t_s_MQTT_TopicPublishData;
	END_VAR
  
  PubSubDataString.TxtGet(pdst    :=  #aPublishString[0], 
                          dstsize :=  sizeof(aPublishString) - 1);
  
  PublishData.pData := #aPublishString[0];
  PublishData.udLen := PubSubDataString.GetLength();
 
END_FUNCTION

FUNCTION VIRTUAL MQTTTopicString::User_SubscribeData
	VAR_INPUT
		pData 	: ^void;
		udLen 	: UDINT;
	END_VAR
  
  if pData <> NIL then
    PubSubDataString.WriteDataOff(udLen :=  udLen, 
                                  udOff :=  0, 
                                  pData :=  pData$^USINT);
  end_if;

END_FUNCTION

//############################################################################################
//#                                Server Read/Write                                         #
//############################################################################################


FUNCTION VIRTUAL GLOBAL MQTTTopicString::DataString::Read
	VAR_OUTPUT
		output (EAX) 	: UDINT;
	END_VAR

	DataString := PubSubDataString.Data.Read();
	output := DataString;

END_FUNCTION


FUNCTION VIRTUAL GLOBAL MQTTTopicString::DataString::Write
	VAR_INPUT
		input (EAX) 	: UDINT;
	END_VAR
	VAR_OUTPUT
		result (EAX) 	: UDINT;
	END_VAR

	DataString := input;
	result := (PubSubDataString.Data.Write(DataString))$UDINT;

END_FUNCTION


FUNCTION GLOBAL MQTTTopicString::WriteDataOff
	VAR_INPUT
		udLen 	: UDINT;
		udOff 	: UDINT;
		pData 	: ^USINT;
	END_VAR
  
  PubSubDataString.WriteDataOff(udLen :=  udLen, 
                                udOff :=  udOff, 
                                pData :=  pData);
  
END_FUNCTION


FUNCTION GLOBAL MQTTTopicString::ReadDataOff
	VAR_INPUT
		udOff 	: UDINT;
		pData 	: ^USINT;
		udMax 	: UDINT;
	END_VAR
	VAR_OUTPUT
		udLen 	: UDINT;
	END_VAR
  
  udLen := PubSubDataString.ReadDataOff(  udOff :=  udOff, 
                                          pData :=  pData,  
                                          udMax :=  udMax);
            
END_FUNCTION