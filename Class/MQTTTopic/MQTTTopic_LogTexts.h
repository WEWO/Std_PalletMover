//====================MQTTTopic Log Message Defines - ERROR====================

#define MQTOP_LOG_ERROR_SUBSCRIBE_CALL_SUB_FAIL_TEXT                           "Subscribe: Executing the Subscribe method in the MQTTClient_Interface failed. Para1=Mid, Para2 = MQTTClient_interface::MQTT_Subscribe() Retcode."
#define MQTOP_LOG_ERROR_SUBSCRIBE_CALL_SUB_FAIL_MSG                             0 
#define MQTOP_LOG_ERROR_SUBSCRIBE_CALL_SUB_FAIL_GRP                             30 
#define MQTOP_LOG_ERROR_SUBSCRIBE_SUB_FAIL_TEXT                                "Subscribe: The MQTTTopic instance subscription has failed. Para1=Last ApplMsgID"
#define MQTOP_LOG_ERROR_SUBSCRIBE_SUB_FAIL_MSG                                  1 
#define MQTOP_LOG_ERROR_SUBSCRIBE_SUB_FAIL_GRP                                  30 
#define MQTOP_LOG_ERROR_SUBSCRIBE_TIMEOUT_TEXT                                 "Subscribe: Waiting for the Subscription confirmation timed out. The MQTTTopic instance is now in error state. Para1 = Last ApplMsgID"
#define MQTOP_LOG_ERROR_SUBSCRIBE_TIMEOUT_MSG                                   2 
#define MQTOP_LOG_ERROR_SUBSCRIBE_TIMEOUT_GRP                                   30 
#define MQTOP_LOG_ERROR_UNSUBSCRIBE_CALL_UNSUB_FAIL_TEXT                       "Unsubscribe: Executing the Unsubscribe method in the MQTTClient_Interface failed. The MQTTTopic instance is now in error state. Para1 = RetCode. Para2 = Last ApplMsgID"
#define MQTOP_LOG_ERROR_UNSUBSCRIBE_CALL_UNSUB_FAIL_MSG                         3 
#define MQTOP_LOG_ERROR_UNSUBSCRIBE_CALL_UNSUB_FAIL_GRP                         30 
#define MQTOP_LOG_ERROR_UNSUBSCRIBE_TIMEOUT_TEXT                               "Unsubscribe: Waiting for the Unsubscribe Confirmation timed out. the MQTTTopic instance is now in error state. Para1 = Last ApplMsgID"
#define MQTOP_LOG_ERROR_UNSUBSCRIBE_TIMEOUT_MSG                                 4 
#define MQTOP_LOG_ERROR_UNSUBSCRIBE_TIMEOUT_GRP                                 30 
#define MQTOP_LOG_ERROR_PUBLISH_USERDATA_NIL_TEXT                              "Publish: The User passed NIL data to the User_GetPublishData() method, the publish cannot continue, the MQTTTopic instance is now in Error State."
#define MQTOP_LOG_ERROR_PUBLISH_USERDATA_NIL_MSG                                5 
#define MQTOP_LOG_ERROR_PUBLISH_USERDATA_NIL_GRP                                30 
#define MQTOP_LOG_ERROR_PUBLISH_CALL_PUB_FAIL_TEXT                             "Publish: Executing the Publish method in the MQTTClient_Interface failed. Para1=Retcode. Para2=ApplMsgID"
#define MQTOP_LOG_ERROR_PUBLISH_CALL_PUB_FAIL_MSG                               6 
#define MQTOP_LOG_ERROR_PUBLISH_CALL_PUB_FAIL_GRP                               30 
#define MQTOP_LOG_ERROR_PUBLISH_TIMOUET_TEXT                                   "Publish: Waiting for the Publish confirmation timed out. The MQTTTopic instance is now in Error State. Para1=Last ApplMsgID. Para2=mid"
#define MQTOP_LOG_ERROR_PUBLISH_TIMOUET_MSG                                     7 
#define MQTOP_LOG_ERROR_PUBLISH_TIMOUET_GRP                                     30 

//====================MQTTTopic Log Message Defines - INFO====================

#define MQTOP_LOG_INFO_SUBSCRIBE_SUBSCRIBED_TEXT                               "Subscribe: The MQTTTopic instance is now Subscribed. Para1=Mid, Para2=Granted QoS"
#define MQTOP_LOG_INFO_SUBSCRIBE_SUBSCRIBED_MSG                                 2000 
#define MQTOP_LOG_INFO_SUBSCRIBE_SUBSCRIBED_GRP                                 32 
#define MQTOP_LOG_INFO_UNSUBSCRIBE_UNSUBSCRIBED_TEXT                           "Unsubscribe: The MQTTTopic instance is now Unsubscribed. Para1=Mid"
#define MQTOP_LOG_INFO_UNSUBSCRIBE_UNSUBSCRIBED_MSG                             2001 
#define MQTOP_LOG_INFO_UNSUBSCRIBE_UNSUBSCRIBED_GRP                             32 
#define MQTOP_LOG_INFO_SUBSCRIBE_DATA_RX_TEXT                                  "Subscribe: Data has been received on the subscribed topic. Para1=Mid"
#define MQTOP_LOG_INFO_SUBSCRIBE_DATA_RX_MSG                                    2002 
#define MQTOP_LOG_INFO_SUBSCRIBE_DATA_RX_GRP                                    32 
#define MQTOP_LOG_INFO_PUBLISH_PUBLISHED_TEXT                                  "Publish: The Publish by the MQTTTopic instance has completed successfully. Para1=Mid"
#define MQTOP_LOG_INFO_PUBLISH_PUBLISHED_MSG                                    2003 
#define MQTOP_LOG_INFO_PUBLISH_PUBLISHED_GRP                                    32 
#define MQTOP_LOG_INFO_CONNECTION_CLI_DISCONN_TEXT                             "Connection: The MQTT Client has been disconnected, the MQTTTopic instance is now waiting for a new connection. Para1= Last ApplMsgID"
#define MQTOP_LOG_INFO_CONNECTION_CLI_DISCONN_MSG                               2004 
#define MQTOP_LOG_INFO_CONNECTION_CLI_DISCONN_GRP                               32 
#define MQTOP_LOG_INFO_PUBLISH_INTERVAL_TEXT                                   "Publish: The Publish interval has passed, the MQTTTopic instance will now attempt to publish."
#define MQTOP_LOG_INFO_PUBLISH_INTERVAL_MSG                                     2005 
#define MQTOP_LOG_INFO_PUBLISH_INTERVAL_GRP                                     32 
#define MQTOP_LOG_INFO_PUBLISH_DATACHANGED_TEXT                                "Publish: The Publish Data has chnaged, the MQTTTopic instance will now attempt to publish."
#define MQTOP_LOG_INFO_PUBLISH_DATACHANGED_MSG                                  2006 
#define MQTOP_LOG_INFO_PUBLISH_DATACHANGED_GRP                                  32 
#define MQTOP_LOG_INFO_PUBLISH_TRIGGER_TEXT                                    "Publish: The Manual Publish method has been called, the MQTTTopic instance will now attempt to publish."
#define MQTOP_LOG_INFO_PUBLISH_TRIGGER_MSG                                      2007 
#define MQTOP_LOG_INFO_PUBLISH_TRIGGER_GRP                                      32 
#define MQTOP_LOG_INFO_FSM_CONFIG_CHANGE_TEXT                                  "FSM: The MQTTTopic instance Config has changed, the instance will no reinitialize. Para1 = Last ApplMsgID"
#define MQTOP_LOG_INFO_FSM_CONFIG_CHANGE_MSG                                    2008 
#define MQTOP_LOG_INFO_FSM_CONFIG_CHANGE_GRP                                    32 

//====================MQTTTopic Log Message Defines - DEBUG====================

#define MQTOP_LOG_DEBUG_FSM_ERR_RESET_TEXT                                     "FSM: The MQTTTopic instance error has been resetted. Para1= Last ApplMsgID"
#define MQTOP_LOG_DEBUG_FSM_ERR_RESET_MSG                                       3000 
#define MQTOP_LOG_DEBUG_FSM_ERR_RESET_GRP                                       33 

