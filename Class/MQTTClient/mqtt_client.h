//========================================================================================================
//==============================================PARAMATERS================================================
//========================================================================================================
//Client
#define MQTTCLIENT_DEFAULT_MULTITASK_ENABLE   0
#define MQTTCLIENT_INIT_CYCLE                 12
#define MQTTCLIENT_HOSTNAME_MAX_LEN           255
#define MQTTCLIENT_IP_MAX_LEN                 16
#define MQTTCLIENT_MAX_DATA_LEN               256MB
#define MQTTCLIENT_CONTROLPACKET_MAX_STR_LEN  65536
#define MQTTCLIENT_LASALOS_MAX_TCP_SIZE       1452
#define MQTTCLIENT_TEMP_CTLPACKET_SIZE        5kB
#define MQTTCLIENT_MIN_KEEPALIVE_INTERVAL     2secs
#define MQTTCLIENT_DEFAULT_MALLOC_MARK        9
#define MQTTCLIENT_DEFAULT_PORT               1883
#define MQTTCLIENT_DEFAULT_MAX_CONNECTIONS    1

//Timeouts
#define MQTTCLIENT_SUBSCRIBE_TIMEOUT              5secs
#define MQTTCLIENT_UNSUBSCRIBE_TIMEOUT            5secs
#define MQTTCLIENT_PUBLISH_TIMEOUT                5secs
#define MQTTCLIENT_DISCONNECT_SEND_TIMEOUT        5secs
#define MQTTCLIENT_TCP_RECEIVE_WATCHDOG           5secs
#define MQTTCLIENT_CONNECT_TIMEOUT                10secs
#define MQTTTOPIC_DEFAULT_AUTORESET_TIME          5secs

//Non Normative Defines
#define MQTTCLIENT_MAX_RERTYCOUNT             10
#define MQTTCLIENT_TOPIC_MAX_LEN              1024
#define MQTTCLIENT_WILL_TOPIC_MAX_LEN         MQTTCLIENT_TOPIC_MAX_LEN
#define MQTTCLIENT_WILL_PAYLOAD_MAX_LEN       1kB
#define MQTTCLIENT_UNDEF_CLIENT_ID            "SigmatekMQTTClient"
#define MQTTCLIENT_DEFAULT_INFLIGHT_MSGS      20
#define MQTTCLIENT_MIN_INFLIGHT_MSGS          5
#define MQTTCLIENT_RECONNECT_MIN_TIME         3secs
#define MQTTCLIENT_RECONNECT_MAX_TIME         30secs

//Callback Retcodes
#define MQTTCLIENT_DISCONNECT_RETCODE_USER    0
#define MQTTCLIENT_DISCONNECT_RETCODE_UNEXP   1
#define MQTTCLIENT_CONNECT_RETCODE_SUCCESS    0
#define MQTTCLIENT_CONNECT_RETCODE_PROTMIS    1
#define MQTTCLIENT_CONNECT_RETCODE_IDREJ      2
#define MQTTCLIENT_CONNECT_RETCODE_UNAVAIL    3

//Version
#define MQTTCLIENT_VERSION_MAJOR              0
#define MQTTCLIENT_VERSION_MINOR              1
#define MQTTCLIENT_VERSION_REVISION           1

//===================Protocol
#define MQTT_PROT_QOS_MIN                     0
#define MQTT_PROT_QOS_MAX                     2

#define MQTT_PROT_FIXHDR_LEN                      2
#define MQTT_PROT_FIXHDR_ID_CONNECT               0x10
#define MQTT_PROT_FIXHDR_ID_CONNACK               0x20
#define MQTT_PROT_FIXHDR_ID_PUBLISH               0x30
#define MQTT_PROT_FIXHDR_ID_PUBACK                0x40
#define MQTT_PROT_FIXHDR_ID_PUBREC                0x50
#define MQTT_PROT_FIXHDR_ID_PUBREL                0x60
#define MQTT_PROT_FIXHDR_ID_PUBCOMP               0x70
#define MQTT_PROT_FIXHDR_ID_SUBSCRIBE             0x80
#define MQTT_PROT_FIXHDR_ID_SUBACK                0x90
#define MQTT_PROT_FIXHDR_ID_UNSUBSCRIBE           0xA0
#define MQTT_PROT_FIXHDR_ID_UNSUBACK              0xB0
#define MQTT_PROT_FIXHDR_ID_PINGREQ               0xC0
#define MQTT_PROT_FIXHDR_ID_PINGRESP              0xD0
#define MQTT_PROT_FIXHDR_ID_DISCONNECT            0xE0

#define MQTT_PROT_FIXHDR_FLAGS_CONNECT            0x00
#define MQTT_PROT_FIXHDR_FLAGS_CONNACK            0x00
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_DUP        3
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_QOS        1
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_RET        0
#define MQTT_PROT_FIXHDR_FLAGS_PUBACK             0x00
#define MQTT_PROT_FIXHDR_FLAGS_PUBREC             0x00
#define MQTT_PROT_FIXHDR_FLAGS_PUBREL             0x02
#define MQTT_PROT_FIXHDR_FLAGS_PUBCOMP            0x00
#define MQTT_PROT_FIXHDR_FLAGS_SUBSCRIBE          0x02
#define MQTT_PROT_FIXHDR_FLAGS_SUBACK             0x00
#define MQTT_PROT_FIXHDR_FLAGS_UNSUBSCRIBE        0x02
#define MQTT_PROT_FIXHDR_FLAGS_UNSUBACK           0x00
#define MQTT_PROT_FIXHDR_FLAGS_PINGREQ            0x00
#define MQTT_PROT_FIXHDR_FLAGS_PINGRESP           0x00
#define MQTT_PROT_FIXHDR_FLAGS_DISCONNECT         0x00
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_DUP_MASK   0x08
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_QOS_MASK   0x06
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_QOS_SHR    1
#define MQTT_PROT_FIXHDR_FLAGS_PUBLISH_RET_MASK   0x01

//CONNECT
#define MQTT_PROT_PROTNAME                    "MQTT"
#define MQTT_PROT_LEVEL                       4
#define MQTT_PROT_MAX_CLIENTID_NAME_LEN       23
#define MQTTCLIENT_CONNECT_TCPCLI_TIMEOUT     0

//CONNACK
#define MQTT_PROT_CONNACK_RET_CONNACCEPTED    0x00
#define MQTT_PROT_CONNACK_RET_PROTVERSION     0x01
#define MQTT_PROT_CONNACK_RET_ID_REJECTED     0x02
#define MQTT_PROT_CONNACK_RET_SERVER_UNAVAIL  0x03
#define MQTT_PROT_CONNACK_RET_USN_PASS        0x04
#define MQTT_PROT_CONNACK_RET_NOT_AUTHD       0x05
#define MQTT_PROT_CONNACK_FLAGS_SESS_PR       0x01

//SUBACK
#define MQTTCLIENT_SUBACK_MAX_NUM_GRANTEDQOS  50

//Message Queue
#define MQTT_MESSAGEQUEUE_DATABLOCK_SIZE      200kB
#define MQTT_MESSAGEQUEUE_DATA_ID             10
#define MQTT_MESSAGEQUEUE_NUM_ITEMS           1000
#define MQTT_MESSAGEQUEUE_GROW_THRESHOLD      0.9
#define MQTT_MESSAGEQUEUE_GROWBY_BLOCKS       1
#define MQTT_MESSAGEQUEUE_COUNTER_OVF         1000

//Connect
#define MQTTCLIENT_CONNECT_MAX_FILENAME_LEN       256
#define MQTTCLIENT_CONNECT_MAX_USERNAME_LEN       1024
#define MQTTCLIENT_CONNECT_MAX_PASSWORD_LEN       1024

//========================
//Protocol FSMs:
//========================
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS0_PUBLISH         0
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS0_WAITFORPUBLISH  1
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS0_FINALIZE        2

#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS1_PUBLISH         0
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS1_WAITFORPUBLISH  1
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS1_WAITFORPUBACK   2
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS1_FINALIZE        3

#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_PUBLISH         0
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_WAITFORPUBLISH  1
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_WAITFORPUBREC   2
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_PUBREL          3
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_WAITFORPUBREL   4
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_WAITFORPUBCOMP  5
#define MQTTCLIENT_PROT_FSM_PUBLISH_OUTGOING_QOS2_FINALIZE        6

#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS0_HANDLEMSG       0
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS0_FINALIZE        1

#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS1_PUBACK          0
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS1_WAITFORPUBACK   1
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS1_FINALIZE        2

#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS2_PUBREC          0
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS2_WAITFORPUBREC   1
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS2_WAITFORPUBREL   2
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS2_PUBCOMP         3
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS2_WAITFORPUBCOMP  4
#define MQTTCLIENT_PROT_FSM_PUBLISH_INCOMING_QOS2_FINALIZE        5

//========================================================================================================
//===============================================MULTITASK================================================
//========================================================================================================
#define MQTTCLIENT_MULTITASK_TASK_STACKSIZE   16kB
#define MQTTCLIENT_MULTITASK_TASK_PRIORITY    13
#define MQTTCLIENT_MULTITASK_TASK_CREATE_MODE MT_TASK_SAVETHIS OR MT_TASK_SUSPENDED
#define MQTTCLIENT_MULTITASK_TASKNAME_MAXLEN  15
#define MQTTCLIENT_MULTITASK_TASKNAME_PREFIX  "MQTTCli"
#define MQTTCLIENT_MULTITASK_TASKINTERVAL     1
#define MQTTCLIENT_MULTITASK_THIS_MAX_LEN     8
#define MQTTCLIENT_MULTITASK_THIS_RIGHT_LEN   3


//========================================================================================================
//================================================LOGGING=================================================
//========================================================================================================
//Log Types:
#define MQTT_LOG_NONE                         0x00
#define MQTT_LOG_INFO                         0x01
#define MQTT_LOG_NOTICE                       0x02
#define MQTT_LOG_WARNING                      0x04
#define MQTT_LOG_ERR                          0x08
#define MQTT_LOG_DEBUG                        0x10
#define MQTT_LOG_SUBSCRIBE                    0x20
#define MQTT_LOG_UNSUBSCRIBE                  0x40
#define MQTT_LOG_WEBSOCKETS                   0x80
#define MQTT_LOG_ALL                          0xFFFF

//Log System Defines:
#define MQTT_LOG_MAX_TEXT_LEN                 100
#define MQTT_LOG_PARA_TEXT_LEN                15
#define MQTT_LOG_PARA_DELIM                   ", "

//Control Packet Texts:
#define MQTT_CONTROLPACKET_TEXTS_CONNECT      "CONNECT"
#define MQTT_CONTROLPACKET_TEXTS_CONNACK      "CONNACK"
#define MQTT_CONTROLPACKET_TEXTS_PUBLISH      "PUBLISH"
#define MQTT_CONTROLPACKET_TEXTS_PUBACK       "PUBACK"
#define MQTT_CONTROLPACKET_TEXTS_PUBREC       "PUBREC"
#define MQTT_CONTROLPACKET_TEXTS_PUBREL       "PUBREL"
#define MQTT_CONTROLPACKET_TEXTS_PUBCOMP      "PUBCOMP"
#define MQTT_CONTROLPACKET_TEXTS_SUBSCRIBE    "SUBSCRIBE"
#define MQTT_CONTROLPACKET_TEXTS_SUBACK       "SUBACK"
#define MQTT_CONTROLPACKET_TEXTS_UNSUBSCRIBE  "UNSUBSCRIBE"
#define MQTT_CONTROLPACKET_TEXTS_UNSUBACK     "UNSUBACK"
#define MQTT_CONTROLPACKET_TEXTS_PINGREQ      "PINGREQ"
#define MQTT_CONTROLPACKET_TEXTS_PINGRESP     "PINGRESP"
#define MQTT_CONTROLPACKET_TEXTS_DISCONNECT   "DISCONNECT"
#define MQTT_CONTROLPACKET_TEXTS_UNKNOWN      "UNKNOWN"

//State Texts:
#define MQTT_STATES_TEXTS_MCS_INITIALISE      "Initialise"
#define MQTT_STATES_TEXTS_MCS_CONNECT         "Connect"
#define MQTT_STATES_TEXTS_MCS_CONNECTED       "Connected"
#define MQTT_STATES_TEXTS_MCS_RECONNECT       "Reconnect"
#define MQTT_STATES_TEXTS_MCS_DISCONNECT      "Disconnect"
#define MQTT_STATES_TEXTS_MCS_ERROR           "Error"

//==============================================================================================Log Texts
#define MQTT_LOG_ERROR_LOGFAILED_STRINGTOOLONG                          "MQTT Client Failed to Create full Log, log string too long, truncated."

//================================================================================Errors
#define MQTTCLIENT_INTERFACE_LOG_ERROR_OPENSSL_MSGGROUP                 11