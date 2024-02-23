//====================MQTTClient_Interface Log Message Defines - ERROR====================

#define MQCLIINF_LOG_ERROR_INIT_DATAMAP_PUBSUB_MALLOC_TEXT                     "Init: Failed to assign memory for DataMap Pub & Sub Entries"
#define MQCLIINF_LOG_ERROR_INIT_DATAMAP_PUBSUB_MALLOC_MSG                       0 
#define MQCLIINF_LOG_ERROR_INIT_DATAMAP_PUBSUB_MALLOC_GRP                       10 
#define MQCLIINF_LOG_ERROR_INIT_DATAMAP_MALLOC_TEXT                            "Init: Failed to assign memory for DataMap Entries"
#define MQCLIINF_LOG_ERROR_INIT_DATAMAP_MALLOC_MSG                              1 
#define MQCLIINF_LOG_ERROR_INIT_DATAMAP_MALLOC_GRP                              10 
#define MQCLIINF_LOG_ERROR_INIT_PUBSUBLIST_MALLOC_TEXT                         "Init: Failed to assign Memory for PubSubList Main Structure"
#define MQCLIINF_LOG_ERROR_INIT_PUBSUBLIST_MALLOC_MSG                           2 
#define MQCLIINF_LOG_ERROR_INIT_PUBSUBLIST_MALLOC_GRP                           10 
#define MQCLIINF_LOG_ERROR_INIT_PUBSUBLIST_ENTRIES_MALLOC_TEXT                 "Init: Failed to assign Memory for PubSubList Entries"
#define MQCLIINF_LOG_ERROR_INIT_PUBSUBLIST_ENTRIES_MALLOC_MSG                   3 
#define MQCLIINF_LOG_ERROR_INIT_PUBSUBLIST_ENTRIES_MALLOC_GRP                   10 
#define MQCLIINF_LOG_ERROR_FSM_CONNECTION_FAILED_TEXT                          "FSM: Creating Connection the the MQTT Broker Failed, Para1 = MQTTClient Retcode"
#define MQCLIINF_LOG_ERROR_FSM_CONNECTION_FAILED_MSG                            4 
#define MQCLIINF_LOG_ERROR_FSM_CONNECTION_FAILED_GRP                            10 
#define MQCLIINF_LOG_ERROR_FSM_INIT_READ_FILE_FAILED_TEXT                      "FSM Initialze: Failed to read the specified XML File."
#define MQCLIINF_LOG_ERROR_FSM_INIT_READ_FILE_FAILED_MSG                        5 
#define MQCLIINF_LOG_ERROR_FSM_INIT_READ_FILE_FAILED_GRP                        10 
#define MQCLIINF_LOG_ERROR_FSM_INIT_DATAMAP_PTR_TEXT                           "FSM Initialize: Preparing DataMap Failed - Pointer to DataMap Entries is NIL."
#define MQCLIINF_LOG_ERROR_FSM_INIT_DATAMAP_PTR_MSG                             6 
#define MQCLIINF_LOG_ERROR_FSM_INIT_DATAMAP_PTR_GRP                             10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_INIT_FAIL_NOMEM_TEXT                       "FSM Prepare: Setting client ID failed, not enough memory."
#define MQCLIINF_LOG_ERROR_FSM_PREP_INIT_FAIL_NOMEM_MSG                         7 
#define MQCLIINF_LOG_ERROR_FSM_PREP_INIT_FAIL_NOMEM_GRP                         10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_INIT_FAIL_INPUT_TEXT                       "FSM Prepare: Error during setting MQTTClient Parameters from XML File, Setting ClientID Failed, Input Value / Client State Not OK."
#define MQCLIINF_LOG_ERROR_FSM_PREP_INIT_FAIL_INPUT_MSG                         8 
#define MQCLIINF_LOG_ERROR_FSM_PREP_INIT_FAIL_INPUT_GRP                         10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_USNPW_FAIL_NOMEM_TEXT                      "FSM Prepare: Error during setting MQTTClient Parameters from XML File, Setting Username & Password Failed, Not Enough memory"
#define MQCLIINF_LOG_ERROR_FSM_PREP_USNPW_FAIL_NOMEM_MSG                        9 
#define MQCLIINF_LOG_ERROR_FSM_PREP_USNPW_FAIL_NOMEM_GRP                        10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_USNPW_FAIL_INPUT_TEXT                      "FSM Prepare: Error during setting MQTTClient Parameters from XML File, Setting Username & Password Failed, Input Value / Client State Not OK"
#define MQCLIINF_LOG_ERROR_FSM_PREP_USNPW_FAIL_INPUT_MSG                        10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_USNPW_FAIL_INPUT_GRP                        10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_INFLIGHT_TEXT                          "FSM Prepare: Error during setting MQTTClient Parameters from XML File, Setting Max Inflight Messages Failed, Input Value / Client State Not OK"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_INFLIGHT_MSG                            11 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_INFLIGHT_GRP                            10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_NOMEM_TEXT                        "FSM Prepare: Setting will failed. Not enough memory"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_NOMEM_MSG                          12 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_NOMEM_GRP                          10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_INPUT_TEXT                        "FSM Prepare: Setting will failed. Invalid input parameters or wrong client state"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_INPUT_MSG                          13 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_INPUT_GRP                          10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_PAYLOAD_TEXT                      "FSM Prepare: Setting will failed. Invalid Payload size. Para1 = Payload size"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_PAYLOAD_MSG                        14 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_PAYLOAD_GRP                        10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_UTF8_TEXT                         "FSM Prepare: Setting will failed. Malformed UTF8"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_UTF8_MSG                           15 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_WILL_UTF8_GRP                           10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_RECONNECT_INPUT_TEXT                   "FSM Prepare: Setting reconnect failed. Invalid input values or state. Para1 = T Min. Para2 = T Max. Para3 = Exp"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_RECONNECT_INPUT_MSG                     16 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_RECONNECT_INPUT_GRP                     10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_TLS_NOMEM_TEXT                         "FSM Prepare: Setting TLS Data failed. Not enough Memory"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_TLS_NOMEM_MSG                           17 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_TLS_NOMEM_GRP                           10 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_TLS_INPUT_TEXT                         "FSM Prepare: Setting TLS Data failed. Invalid input parameters or invalid client state"
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_TLS_INPUT_MSG                           18 
#define MQCLIINF_LOG_ERROR_FSM_PREP_SET_TLS_INPUT_GRP                           10 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_INVALID_INPUT_TEXT             "Subscribe: Subscribe failed, Incorrect Input Para. Para1= pTopic. Para2=Qos. Para3=pThis. Para4 = pCallback"
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_INVALID_INPUT_MSG               19 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_INVALID_INPUT_GRP               10 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_INTERFACE_STATE_TEXT           "Subscribe: Subscribe Failed, incorrect state. Para1 = InterfaceState"
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_INTERFACE_STATE_MSG             20 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_INTERFACE_STATE_GRP             10 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_LIST_FULL_TEXT                 "Subscribe: Subscribe failed, No Mem in PubSub list. Para1=NumEntries. Para2=Max Num Entries"
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_LIST_FULL_MSG                   21 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_LIST_FULL_GRP                   10 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_TEXT                           "Subscribe: Subscribe failed, Para1=ReturnCode from client"
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_MSG                             22 
#define MQCLIINF_LOG_ERROR_SUBSCRIBE_SUB_FAILED_GRP                             10 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_INVALID_INPUT_TEXT               "Publish: Publish failed, invalid input para. Para1=pTopic. Para2=QoS. Para3=Payload Len. Para4 =pPayload"
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_INVALID_INPUT_MSG                 23 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_INVALID_INPUT_GRP                 10 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_INTERFACE_STATE_TEXT             "Publish: Publish failed, No Broker connection or not initialized. Para1=InterfaceState"
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_INTERFACE_STATE_MSG               24 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_INTERFACE_STATE_GRP               10 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_LIST_FULL_TEXT                   "Publish: Publish failed, No Mem in PubSub list. Para1=NumEntries. Para2=Max Num Entries"
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_LIST_FULL_MSG                     25 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_LIST_FULL_GRP                     10 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_TEXT                             "Publish: Publish failed, Para1=ReturnCode from client"
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_MSG                               26 
#define MQCLIINF_LOG_ERROR_PUBLISH_PUB_FAILED_GRP                               10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_ENTRY_NOT_FOUND_TEXT       "Unsubscribe: Unsubscribe failed, Could not find topic in PubSub list by name"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_ENTRY_NOT_FOUND_MSG         27 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_ENTRY_NOT_FOUND_GRP         10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_TEXT                       "Unsubscribe: Unsubscribe failed, Para1=ReturnCode from client"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_MSG                         28 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_GRP                         10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_REQ_FAILED_INPUT_TEXT             "Unsubscribe: Unsubscribe client request failed, incorrect input parameter. Para1 = Appl Msg Id. Para2 = mid"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_REQ_FAILED_INPUT_MSG               29 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_REQ_FAILED_INPUT_GRP               10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_CONN_TEXT                  "Unsubscribe: Unsubscribe client request failed, MQTT Client is not connected to the broker. Para1 = Appl Msg Id. Para2 = mid"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_CONN_MSG                    30 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_CONN_GRP                    10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_NOMEM_TEXT                 "Unsubscribe: Unsubscribe client request failed, No free memory in message buffer. Para1 = Appl Msg Id. Para2 = Mid"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_NOMEM_MSG                   31 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_NOMEM_GRP                   10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_NOT_FOUND_TEXT             "Unsubscribe: Unsubscribe failed, Subscruiption could not be found in the PubSub List. Para1=ApplMsgID, Para2=mid"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_NOT_FOUND_MSG               32 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_NOT_FOUND_GRP               10 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_INPUT_TEXT                 "Unsubscribe: Unsubscribe failed, incorrect input para"
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_INPUT_MSG                   33 
#define MQCLIINF_LOG_ERROR_UNSUBSCRIBE_UNSUB_FAILED_INPUT_GRP                   10 
#define MQCLIINF_LOG_ERROR_CLEANSESSION_PUBSUB_NOT_INITED_TEXT                 "Set Clean Session: Resetting the session failed, PubSub list is not Initialised"
#define MQCLIINF_LOG_ERROR_CLEANSESSION_PUBSUB_NOT_INITED_MSG                   34 
#define MQCLIINF_LOG_ERROR_CLEANSESSION_PUBSUB_NOT_INITED_GRP                   10 
#define MQCLIINF_LOG_ERROR_CLEANSESSION_FAILED_WRONG_STATE_TEXT                "Set Clean Session: Resetting the Session failed, MQTT Interface is not in the correct state. Para1 = InterfaceState"
#define MQCLIINF_LOG_ERROR_CLEANSESSION_FAILED_WRONG_STATE_MSG                  35 
#define MQCLIINF_LOG_ERROR_CLEANSESSION_FAILED_WRONG_STATE_GRP                  10 
#define MQCLIINF_LOG_ERROR_XML_FAILED_ROOT_WRONG_TEXT                          "Process XML: Root element in XML File is invalid. Cannot process"
#define MQCLIINF_LOG_ERROR_XML_FAILED_ROOT_WRONG_MSG                            36 
#define MQCLIINF_LOG_ERROR_XML_FAILED_ROOT_WRONG_GRP                            10 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_CONFIG_NOT_OK_TEXT                       "Process XML Config: Processing Client ID Section of configuration XML file failed - Missing Entries."
#define MQCLIINF_LOG_ERROR_XML_CONFIG_CONFIG_NOT_OK_MSG                         37 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_CONFIG_NOT_OK_GRP                         10 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_CONNECTION_NOT_OK_TEXT                   "Process XML Config: Processing Connection Section of configuration XML file failed - Missing Entries."
#define MQCLIINF_LOG_ERROR_XML_CONFIG_CONNECTION_NOT_OK_MSG                     38 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_CONNECTION_NOT_OK_GRP                     10 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_WILL_NOT_OK_TEXT                         "Process XML Config: Processing Will section of configuration XML file failed - Missing Entries."
#define MQCLIINF_LOG_ERROR_XML_CONFIG_WILL_NOT_OK_MSG                           39 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_WILL_NOT_OK_GRP                           10 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_RECONNECT_NOT_OK_TEXT                    "Process XML Config: Processing reconnection section of configuration XML file failed - Missing Entries."
#define MQCLIINF_LOG_ERROR_XML_CONFIG_RECONNECT_NOT_OK_MSG                      40 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_RECONNECT_NOT_OK_GRP                      10 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_TLS_NOT_OK_TEXT                          "Process XML Config: Processing TLS section of configuratoin XML file failed - Missing Entries"
#define MQCLIINF_LOG_ERROR_XML_CONFIG_TLS_NOT_OK_MSG                            41 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_TLS_NOT_OK_GRP                            10 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_LOGGING_NOT_OK_TEXT                      "Process XML Config: Processing Logging section of configuration XML file failed - Missing Entries"
#define MQCLIINF_LOG_ERROR_XML_CONFIG_LOGGING_NOT_OK_MSG                        42 
#define MQCLIINF_LOG_ERROR_XML_CONFIG_LOGGING_NOT_OK_GRP                        10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_UNEXPECTED_ENTRY_TEXT                   "Process XML DataMap: Unexpected input in DataMap Section"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_UNEXPECTED_ENTRY_MSG                     43 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_UNEXPECTED_ENTRY_GRP                     10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TOPICSECT_NOT_OK_TEXT                   "Process XML DataMap: Failed processing a Topic Section in the DataMap section."
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TOPICSECT_NOT_OK_MSG                     44 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TOPICSECT_NOT_OK_GRP                     10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TOPICENDPT_NOT_OK_TEXT                  "Process XML DataMap: Failed processing a Topic Endpoint in the DataMap section"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TOPICENDPT_NOT_OK_MSG                    45 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TOPICENDPT_NOT_OK_GRP                    10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_TITLE_LEN_TEXT                       "Process XML DataMap Topic Section: Processing Entry Failed - Section title too long."
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_TITLE_LEN_MSG                         46 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_TITLE_LEN_GRP                         10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_TITLE_EMPTY_TEXT                     "Process XML DataMap Topic Section: Failed Processing Entry - Section title is empty"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_TITLE_EMPTY_MSG                       47 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_TITLE_EMPTY_GRP                       10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_MAX_DEPTH_EXCEED_TEXT                "Process XML DataMap, Max topic depth (Nested Topic Sections) exceeded. Para1=Topic depth. Para2 = Max topic depth"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_MAX_DEPTH_EXCEED_MSG                  48 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TS_MAX_DEPTH_EXCEED_GRP                  10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_NAME_LEN_TEXT                        "Process XML DataMap Topic Endpoint: Element name is too long or Zero, Para1 = Len"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_NAME_LEN_MSG                          49 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_NAME_LEN_GRP                          10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_ELEMENT_LEN_TEXT                     "Process XML DataMap Topic Endpoint: Element text is too long"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_ELEMENT_LEN_MSG                       50 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_ELEMENT_LEN_GRP                       10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_UNKNOWN_TYPE_TEXT                    "Process XML DataMap Topic Endpoint: Unknown operation type"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_UNKNOWN_TYPE_MSG                      51 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_UNKNOWN_TYPE_GRP                      10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_INTERVEL_LEN_TEXT                    "Process XML DataMap Topic Endpoint: Interval string too long, Para1 = Len"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_INTERVEL_LEN_MSG                      52 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_INTERVEL_LEN_GRP                      10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_DATATYPE_UNKNOWN_TEXT                "Process XML DataMap Topic Endpoint: Unknown datatype"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_DATATYPE_UNKNOWN_MSG                  53 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_DATATYPE_UNKNOWN_GRP                  10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_QOS_LEN_TEXT                         "Process XML DataMap Topic Endpoint: QoS string too long, Para1 = Len"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_QOS_LEN_MSG                           54 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_QOS_LEN_GRP                           10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_QOS_INVALID_TEXT                     "Process XML DataMap Topic Endpoint: Qos invalid. Para1 = Qos"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_QOS_INVALID_MSG                       55 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_QOS_INVALID_GRP                       10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_RETAIN_LEN_TEXT                      "Process XML DataMap Topic Endpoint: Retain string too long. Para1 = Len"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_RETAIN_LEN_MSG                        56 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_RETAIN_LEN_GRP                        10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_RETAIN_INVALID_TEXT                  "Process XML DataMap Topic Endpoint: Retain value not known. Para1 = Retain value"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_RETAIN_INVALID_MSG                    57 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_RETAIN_INVALID_GRP                    10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_TOPIC_LEN_TEXT                       "Process XML DataMap Topic Endpoint: Topic too long, Para1 = Len"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_TOPIC_LEN_MSG                         58 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_TOPIC_LEN_GRP                         10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_CONCAT_TOPIC_LEN_TEXT                "Process XML DataMap Topic Endpoint: Topic name too long, Para1 = Len"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_CONCAT_TOPIC_LEN_MSG                  59 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_CONCAT_TOPIC_LEN_GRP                  10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_DATAMAP_ADD_FAIL_TEXT                "Process XML DataMap Topic Endpoint: Adding Element to DataMap failed. Para 1 = DataMap RetCode."
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_DATAMAP_ADD_FAIL_MSG                  60 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_DATAMAP_ADD_FAIL_GRP                  10 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_MISSING_ENTRIES_TEXT                 "Process XML DataMap, Failed processing topic endpoint. All required attributes have not been set"
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_MISSING_ENTRIES_MSG                   61 
#define MQCLIINF_LOG_ERROR_XML_DATAMAP_TE_MISSING_ENTRIES_GRP                   10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_INPUT_TEXT                         "DataMap: Adding DataMap entry failed, Invalid input parameters received."
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_INPUT_MSG                           62 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_INPUT_GRP                           10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_TOPIC_LEN_TEXT                     "DataMap: Adding DataMap entry failed, Topic name too long."
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_TOPIC_LEN_MSG                       63 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_TOPIC_LEN_GRP                       10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_ELEMENT_LEN_TEXT                   "DataMap: Adding Element failed - Element name too long. Para 1 = Len"
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_ELEMENT_LEN_MSG                     64 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_ELEMENT_LEN_GRP                     10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_NOT_FOUND_TEXT                     "DataMap: Adding Element failed - Element not found."
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_NOT_FOUND_MSG                       65 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_NOT_FOUND_GRP                       10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_TYPE_MISMATCH_TEXT                 "DataMap: Adding Element Failed - Type Mismatch."
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_TYPE_MISMATCH_MSG                   66 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_FAIL_TYPE_MISMATCH_GRP                   10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_PUB_FAIL_FULL_TEXT                      "DataMap: Adding Publish Element Failed - Too Many Entries, see client DataMapEntries."
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_PUB_FAIL_FULL_MSG                        67 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_PUB_FAIL_FULL_GRP                        10 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_SUB_FAIL_FULL_TEXT                      "DataMap: Adding Subscribe Element Failed - Too Many Entries, see client DataMapEntries."
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_SUB_FAIL_FULL_MSG                        68 
#define MQCLIINF_LOG_ERROR_DATAMAP_ADD_SUB_FAIL_FULL_GRP                        10 
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_STRMALLOC_TEXT                 "DataMap: Failed to allocate memory to send the string for the entry. Para1 = Mid. Para2 = String Object pThis"
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_STRMALLOC_MSG                   69 
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_STRMALLOC_GRP                   10 
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_MQCLI_TEXT                     "DataMap: Publish Request Failed. Para1 = Mid, Para2 = MQTTClient RetCode, Para3 = pData"
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_MQCLI_MSG                       70 
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_MQCLI_GRP                       10 
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_TIMEOUT_TEXT                   "DataMap: Publish Entry timed out whilst waiting for confirmation. Para1 = Mid, Para2 = Timeout, Para3 = mqtt_publish_cancel() retcode"
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_TIMEOUT_MSG                     71 
#define MQCLIINF_LOG_ERROR_DATAMAP_PUBLISH_FAIL_TIMEOUT_GRP                     10 
#define MQCLIINF_LOG_ERROR_DATAMAP_SUBSCRIBE_FAIL_MQCLI_TEXT                   "DataMap: Request to subscribe failed. Para1 = Mid. Para2 = Retcode, Para3 = pData"
#define MQCLIINF_LOG_ERROR_DATAMAP_SUBSCRIBE_FAIL_MQCLI_MSG                     72 
#define MQCLIINF_LOG_ERROR_DATAMAP_SUBSCRIBE_FAIL_MQCLI_GRP                     10 
#define MQCLIINF_LOG_ERROR_DATAMAP_SUBSCRIBE_FAIL_TIMEOUT_TEXT                 "DataMap: Subscribe Entry timed out whilst waiting for confirmation. Para1 = Mid, Para2 = Timeout, Para3 = pData"
#define MQCLIINF_LOG_ERROR_DATAMAP_SUBSCRIBE_FAIL_TIMEOUT_MSG                   73 
#define MQCLIINF_LOG_ERROR_DATAMAP_SUBSCRIBE_FAIL_TIMEOUT_GRP                   10 
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_MQCLI_TEXT                 "DataMap: Request to unsubscribe failed. Para1 = Mid, Para2 = Retcode, Para3 = pData"
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_MQCLI_MSG                   74 
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_MQCLI_GRP                   10 
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_TIMEOUT_TEXT               "DataMap: Unsubscribe Entry timed out whilst waiting for confirmation. Para1 = Mid, Para2 = Timeout, Para3 = pData"
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_TIMEOUT_MSG                 75 
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_TIMEOUT_GRP                 10 
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_RMVE_LIST_TEXT             "DataMap: Failed to remove unsubscribe entry. Para1=Mid, Para2=Index"
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_RMVE_LIST_MSG               76 
#define MQCLIINF_LOG_ERROR_DATAMAP_UNSUBSCRIBE_FAIL_RMVE_LIST_GRP               10 
#define MQCLIINF_LOG_ERROR_DATAMAP_REMOVE_FAILED_INDEX_INV_TEXT                "DataMap: Removing Element Failed, Invalid index supplied. Para1 = Index"
#define MQCLIINF_LOG_ERROR_DATAMAP_REMOVE_FAILED_INDEX_INV_MSG                  77 
#define MQCLIINF_LOG_ERROR_DATAMAP_REMOVE_FAILED_INDEX_INV_GRP                  10 
#define MQCLIINF_LOG_ERROR_DATAMAP_RETURN_NOMEM_ARRAY_TEXT                     "DataMap: Received data, there is not enough memory available to process the message. Para1=iMid. Para2 = Message Mid"
#define MQCLIINF_LOG_ERROR_DATAMAP_RETURN_NOMEM_ARRAY_MSG                       78 
#define MQCLIINF_LOG_ERROR_DATAMAP_RETURN_NOMEM_ARRAY_GRP                       10 
#define MQCLIINF_LOG_ERROR_DATAMAP_SUB_CONF_WRONG_QOS_TEXT                     "DataMap: Subscription confirmes with invalid QoS. Para1=iMid. Para2=Message Mid.Para3=Granted QoS.Para4=Requested Qos"
#define MQCLIINF_LOG_ERROR_DATAMAP_SUB_CONF_WRONG_QOS_MSG                       79 
#define MQCLIINF_LOG_ERROR_DATAMAP_SUB_CONF_WRONG_QOS_GRP                       10 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_VER_TEXT                       "Connection: The connection was refused, the Protocol Versions mismatch. Para1 = CONNACK RetCode"
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_VER_MSG                         80 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_VER_GRP                         10 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_CLIENTID_TEXT                  "Connection: Connection failed. Client ID Rejected. Para1 = retcode"
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_CLIENTID_MSG                    81 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_CLIENTID_GRP                    10 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_SERV_UNAV_TEXT                 "Connection: Connection Rejected. Server Unavailable. Para1 = retcode"
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_SERV_UNAV_MSG                   82 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_SERV_UNAV_GRP                   10 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_USNPWD_TEXT                    "Connection: Connection Rejected. Username and or Password incorrect. Para1 = retcode"
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_USNPWD_MSG                      83 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_USNPWD_GRP                      10 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_NOT_AUTH_TEXT                  "Connection: Connection Rejected. Not Authorized. Para1 = retcode"
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_NOT_AUTH_MSG                    84 
#define MQCLIINF_LOG_ERROR_CONNECTION_CONN_FAIL_NOT_AUTH_GRP                    10 
#define MQCLIINF_LOG_ERROR_CONNECTION_DISCONN_UNEXP_TEXT                       "Connection: Unexpectedly disconnected, KeepAlive Ping timeout or TCP error occurred. Para1 = RetCode"
#define MQCLIINF_LOG_ERROR_CONNECTION_DISCONN_UNEXP_MSG                         85 
#define MQCLIINF_LOG_ERROR_CONNECTION_DISCONN_UNEXP_GRP                         10 
#define MQCLIINF_LOG_ERROR_CONNECTION_DISCONN_UNKNOWN_CODE_TEXT                "Connection: Unexpectedly disconnected, Retcode unknown. Para1 = RetCode"
#define MQCLIINF_LOG_ERROR_CONNECTION_DISCONN_UNKNOWN_CODE_MSG                  86 
#define MQCLIINF_LOG_ERROR_CONNECTION_DISCONN_UNKNOWN_CODE_GRP                  10 
#define MQCLIINF_LOG_ERROR_PUBLISH_UNEXPECTED_PUB_CONF_NOTINIT_TEXT            "Publish: Received unexpected Publish Confirm from the MQTTClient, PubSub List not Inited. Para1 = mid"
#define MQCLIINF_LOG_ERROR_PUBLISH_UNEXPECTED_PUB_CONF_NOTINIT_MSG              87 
#define MQCLIINF_LOG_ERROR_PUBLISH_UNEXPECTED_PUB_CONF_NOTINIT_GRP              10 
#define MQCLIINF_LOG_ERROR_MESSAGE_UNEXPECTED_PUB_CONF_NOTINIT_TEXT            "Publish: Received unexpected Message (PUBLISH) from the MQTTClient, PubSub List not Inited. Para1 = mid"
#define MQCLIINF_LOG_ERROR_MESSAGE_UNEXPECTED_PUB_CONF_NOTINIT_MSG              88 
#define MQCLIINF_LOG_ERROR_MESSAGE_UNEXPECTED_PUB_CONF_NOTINIT_GRP              10 
#define MQCLIINF_LOG_ERROR_LOGGING_NO_TEXT_TEXT                                "Logging: Received a log request with no text. Para1 = Log Level"
#define MQCLIINF_LOG_ERROR_LOGGING_NO_TEXT_MSG                                  89 
#define MQCLIINF_LOG_ERROR_LOGGING_NO_TEXT_GRP                                  10 
#define MQCLIINF_LOG_ERROR_LOGGING_UNKNOWN_LEVEL_TEXT                          "Logging: Received a log request with incorrectly specified level. Para1 = Log Level"
#define MQCLIINF_LOG_ERROR_LOGGING_UNKNOWN_LEVEL_MSG                            90 
#define MQCLIINF_LOG_ERROR_LOGGING_UNKNOWN_LEVEL_GRP                            10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_CLIENTID_STRING_LEN_TEXT                 "Config Object: Setting the specified Client ID Failed, the string is not set or is too long"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_CLIENTID_STRING_LEN_MSG                   91 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_CLIENTID_STRING_LEN_GRP                   10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_HOSTNAME_STR_LEN_TEXT                    "Config Object: Setting the specified Hostname Failed, the string is not set or is too long"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_HOSTNAME_STR_LEN_MSG                      92 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_HOSTNAME_STR_LEN_GRP                      10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_PORT_INVALID_TEXT                        "Config Object: Setting the Port number failed, the specified port is outside of the the valid range. Para1 = Specified Port"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_PORT_INVALID_MSG                          93 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_PORT_INVALID_GRP                          10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_KEEPALIVE_INVALID_TEXT                   "Config Object: Setting the KeepAlive Time failed, the specified value is outside of the the valid range. Para1 = Specified Time"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_KEEPALIVE_INVALID_MSG                     94 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_KEEPALIVE_INVALID_GRP                     10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_MAX_INF_MSGS_LOW_TEXT                    "Config Object: Setting the Max Inflight Messages failed, the specified value is too low. Para1 = Min Value"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_MAX_INF_MSGS_LOW_MSG                      95 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_MAX_INF_MSGS_LOW_GRP                      10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_AUTH_USN_STR_LEN_TEXT                    "Config Object: Setting the specified Username Failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_AUTH_USN_STR_LEN_MSG                      96 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_AUTH_USN_STR_LEN_GRP                      10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_AUTH_PASS_STR_LEN_TEXT                   "Config Object: Setting the specified Password Failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_AUTH_PASS_STR_LEN_MSG                     97 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_AUTH_PASS_STR_LEN_GRP                     10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_TOPIC_STR_LEN_TEXT                  "Config Object: Setting the specified Will Topic Failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_TOPIC_STR_LEN_MSG                    98 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_TOPIC_STR_LEN_GRP                    10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_PAYLOAD_STR_LEN_TEXT                "Config Object: Setting the specified Will Payload Failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_PAYLOAD_STR_LEN_MSG                  99 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_PAYLOAD_STR_LEN_GRP                  10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_QOS_INVALID_TEXT                    "Config Object: Setting the Will QoS failed, the specified value is outside of the the valid range. Para1 = Specified QoS"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_QOS_INVALID_MSG                      100 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_WILL_QOS_INVALID_GRP                      10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_RECONN_MIN_TIME_INVALID_TEXT             "Config Object: Setting the Min Recoonect Time failed, the value is negative or >= Max Reconnect time."
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_RECONN_MIN_TIME_INVALID_MSG               101 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_RECONN_MIN_TIME_INVALID_GRP               10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_RECONN_MAX_TIME_INVALID_TEXT             "Config Object: Setting the Max Recoonect Time failed, the value is negative or <= Min Reconnect time."
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_RECONN_MAX_TIME_INVALID_MSG               102 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_RECONN_MAX_TIME_INVALID_GRP               10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_CAFILE_STR_LEN_TEXT                  "Config Object: Setting the specified TLS CAFile failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_CAFILE_STR_LEN_MSG                    103 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_CAFILE_STR_LEN_GRP                    10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_CERTFILE_STR_LEN_TEXT                "Config Object: Setting the specified TLS Cert File failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_CERTFILE_STR_LEN_MSG                  104 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_CERTFILE_STR_LEN_GRP                  10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_KEYFILE_STR_LEN_TEXT                 "Config Object: Setting the specified TLS Key File failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_KEYFILE_STR_LEN_MSG                   105 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_KEYFILE_STR_LEN_GRP                   10 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_PASS_STR_LEN_TEXT                    "Config Object: Setting the specified TLS Password failed, the string is not set or is too long. Para1 = Max Len"
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_PASS_STR_LEN_MSG                      106 
#define MQCLIINF_LOG_ERROR_CONFIG_OBJ_TLS_PASS_STR_LEN_GRP                      10 

//====================MQTTClient_Interface Log Message Defines - WARNING====================

#define MQCLIINF_LOG_WARNING_CLIENTACTIVE_DISCONNECT_REQUESTED_TEXT            "ClientActive: Disconnect request made although no connection is active"
#define MQCLIINF_LOG_WARNING_CLIENTACTIVE_DISCONNECT_REQUESTED_MSG              1000 
#define MQCLIINF_LOG_WARNING_CLIENTACTIVE_DISCONNECT_REQUESTED_GRP              11 
#define MQCLIINF_LOG_WARNING_CLIENTACTIVE_DISCONNECT_UNEXPECTED_RETCODE_TEXT   "ClientActive: Unexpected retcode received whilst requesting MQTT Client Disconnect."
#define MQCLIINF_LOG_WARNING_CLIENTACTIVE_DISCONNECT_UNEXPECTED_RETCODE_MSG     1001 
#define MQCLIINF_LOG_WARNING_CLIENTACTIVE_DISCONNECT_UNEXPECTED_RETCODE_GRP     11 
#define MQCLIINF_LOG_WARNING_DATAMAP_STRING_TRUNCATED_TEXT                     "DataMap: Max String Len Exceeded, String Truncated. Para1=Max Payload Len, Para2=Received String Len."
#define MQCLIINF_LOG_WARNING_DATAMAP_STRING_TRUNCATED_MSG                       1002 
#define MQCLIINF_LOG_WARNING_DATAMAP_STRING_TRUNCATED_GRP                       11 
#define MQCLIINF_LOG_WARNING_DATAMAP_PUBLISH_TMPPTR_NOTNIL_TEXT                "DataMap: Publish Entry Temp Memory pointer was not NIL, this should however be the case, attempting free again. Para1 = Mid"
#define MQCLIINF_LOG_WARNING_DATAMAP_PUBLISH_TMPPTR_NOTNIL_MSG                  1003 
#define MQCLIINF_LOG_WARNING_DATAMAP_PUBLISH_TMPPTR_NOTNIL_GRP                  11 
#define MQCLIINF_LOG_WARNING_DATAMAP_PUBLISH_TMPPTR_NIL_TEXT                   "DataMap: After publishing a String entry, the Temp Memory Pointer is NIL, this should not be the case, not freed. Para1 = mid, Para2 = String Object pThis"
#define MQCLIINF_LOG_WARNING_DATAMAP_PUBLISH_TMPPTR_NIL_MSG                     1004 
#define MQCLIINF_LOG_WARNING_DATAMAP_PUBLISH_TMPPTR_NIL_GRP                     11 
#define MQCLIINF_LOG_WARNING_DATAMAP_REMOVE_FAILED_NOTINIT_TEXT                "DataMap: Removing Element failed, DataMap not initialized. Para1 = Index"
#define MQCLIINF_LOG_WARNING_DATAMAP_REMOVE_FAILED_NOTINIT_MSG                  1005 
#define MQCLIINF_LOG_WARNING_DATAMAP_REMOVE_FAILED_NOTINIT_GRP                  11 
#define MQCLIINF_LOG_WARNING_DATAMAP_CALLBACK_MAP_NOTINIT_TEXT                 "DataMap: Received callback whilst DataMap is not initialized. Para1=mid. Para2 = Message Mid"
#define MQCLIINF_LOG_WARNING_DATAMAP_CALLBACK_MAP_NOTINIT_MSG                   1006 
#define MQCLIINF_LOG_WARNING_DATAMAP_CALLBACK_MAP_NOTINIT_GRP                   11 
#define MQCLIINF_LOG_WARNING_DATAMAP_CALLBACK_ENTRY_NOTFOUND_TEXT              "DataMap Received Data but did not find corresponding entry. Para1 = iMid. Para2 = Message Mid"
#define MQCLIINF_LOG_WARNING_DATAMAP_CALLBACK_ENTRY_NOTFOUND_MSG                1007 
#define MQCLIINF_LOG_WARNING_DATAMAP_CALLBACK_ENTRY_NOTFOUND_GRP                11 
#define MQCLIINF_LOG_WARNING_DATAMAP_SUB_CONFD_WRONG_STATE_TEXT                "DataMap: Subscription confirmed, however the Entry was in the wrong state. Para1 = mid, Para2 = Message mid, Para3 = Entry internal State"
#define MQCLIINF_LOG_WARNING_DATAMAP_SUB_CONFD_WRONG_STATE_MSG                  1008 
#define MQCLIINF_LOG_WARNING_DATAMAP_SUB_CONFD_WRONG_STATE_GRP                  11 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_UDINT_TEXT                 "DataMap: Received data too long, truncated. (UDINT). Para1 = iMid. Para2 = Message Mid. Para3 = Received Len"
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_UDINT_MSG                   1009 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_UDINT_GRP                   11 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_DINT_TEXT                  "DataMap: Received data too long, truncated. (DINT). Para1 = iMid. Para2 = Message Mid. Para3 = Received Len"
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_DINT_MSG                    1010 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_DINT_GRP                    11 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_REAL_TEXT                  "DataMap: Received data too long, truncated. (REAL). Para1 = iMid. Para2 = Message Mid. Para3 = Received Len"
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_REAL_MSG                    1011 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_TRUNCATED_REAL_GRP                    11 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_EMPTY_TEXT                           "DataMap: Received empty message. Para1 = iMid. Para2 = Message Mid"
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_EMPTY_MSG                             1012 
#define MQCLIINF_LOG_WARNING_DATAMAP_DATA_EMPTY_GRP                             11 
#define MQCLIINF_LOG_WARNING_CONNECTION_CONN_CALLBACK_UNEXP_TEXT               "Connection: Received an unexpected Connect Callback. Para1 = Retcode"
#define MQCLIINF_LOG_WARNING_CONNECTION_CONN_CALLBACK_UNEXP_MSG                 1013 
#define MQCLIINF_LOG_WARNING_CONNECTION_CONN_CALLBACK_UNEXP_GRP                 11 
#define MQCLIINF_LOG_WARNING_CONNECTION_DISCONN_CALLBACK_UNEXP_TEXT            "Connection: Received an unexpected Disconnected Callback. Para1 = Retcode"
#define MQCLIINF_LOG_WARNING_CONNECTION_DISCONN_CALLBACK_UNEXP_MSG              1014 
#define MQCLIINF_LOG_WARNING_CONNECTION_DISCONN_CALLBACK_UNEXP_GRP              11 
#define MQCLIINF_LOG_WARNING_PUBLISH_UNEXP_PUB_CONF_NOT_FOUND_TEXT             "Publish: Received unexpected Publish Confirm from the MQTTClient, item not in the PubSub List. Para1 = mid"
#define MQCLIINF_LOG_WARNING_PUBLISH_UNEXP_PUB_CONF_NOT_FOUND_MSG               1015 
#define MQCLIINF_LOG_WARNING_PUBLISH_UNEXP_PUB_CONF_NOT_FOUND_GRP               11 
#define MQCLIINF_LOG_WARNING_PUBLISH_PUB_CALLBACK_NOTSET_TEXT                  "Publish: Received a Publish Confirm from the MQTTClient that could not be delivered to the application, Callback details incorrect. Para1 = mid"
#define MQCLIINF_LOG_WARNING_PUBLISH_PUB_CALLBACK_NOTSET_MSG                    1016 
#define MQCLIINF_LOG_WARNING_PUBLISH_PUB_CALLBACK_NOTSET_GRP                    11 
#define MQCLIINF_LOG_WARNING_MESSAGE_UNEXP_LIST_EMPTY_TEXT                     "Message: Received a Message from the MQTTClient, the PubSubList is empty. Para1 = mid"
#define MQCLIINF_LOG_WARNING_MESSAGE_UNEXP_LIST_EMPTY_MSG                       1017 
#define MQCLIINF_LOG_WARNING_MESSAGE_UNEXP_LIST_EMPTY_GRP                       11 
#define MQCLIINF_LOG_WARNING_MESSAGE_CALLBACK_NOTSET_TEXT                      "Message: Received a Message from the MQTTClient that could not be delivered to the application, Callback details incorrect. Para1 = mid"
#define MQCLIINF_LOG_WARNING_MESSAGE_CALLBACK_NOTSET_MSG                        1018 
#define MQCLIINF_LOG_WARNING_MESSAGE_CALLBACK_NOTSET_GRP                        11 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_UNEXP_SUB_CONF_TEXT                     "Subscribe: Received an unexpected Subscribe Confirm from the MQTTClient. Para1 = mid"
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_UNEXP_SUB_CONF_MSG                       1019 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_UNEXP_SUB_CONF_GRP                       11 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_SUB_CONF_PUB_ENTRY_TEXT                 "Subscribe: Received an unexpected Subscribe Confirm from the MQTTClient, the entry is a Publish Entry. Para1 = mid"
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_SUB_CONF_PUB_ENTRY_MSG                   1020 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_SUB_CONF_PUB_ENTRY_GRP                   11 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_CALLBACK_NOTSET_TEXT                    "Subscribe: Received a Subscribe confirmation from the MQTTClient that could not be delivered to the application, Callback details incorrect. Para1 = mid"
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_CALLBACK_NOTSET_MSG                      1021 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_CALLBACK_NOTSET_GRP                      11 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_UNEXP_SUB_CONF_NOT_FOUND_TEXT           "Subscribe: Received unexpected Subscribe Confirm from the MQTTClient, item not in the PubSub List. Para1 = mid"
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_UNEXP_SUB_CONF_NOT_FOUND_MSG             1022 
#define MQCLIINF_LOG_WARNING_SUBSCRIBE_UNEXP_SUB_CONF_NOT_FOUND_GRP             11 
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_UNEXP_LIST_EMPTY_TEXT                 "Unsubscribe: Received an Unsubscribe confirmation from the MQTTClient, the PubSubList is empty. Para1 = mid"
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_UNEXP_LIST_EMPTY_MSG                   1023 
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_UNEXP_LIST_EMPTY_GRP                   11 
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_WRONG_ENTRY_TEXT                      "Unsubscribe: Received an unexpected Unsubscribe Confirm from the MQTTClient, the matching entry in the PubSub List is not an Unsubscribe request. Para1 = mid"
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_WRONG_ENTRY_MSG                        1024 
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_WRONG_ENTRY_GRP                        11 
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_CALLBACK_NOTSET_TEXT                  "Unsubscribe: Received an Unsubscribe confirmation from the MQTTClient that could not be delivered to the application, Callback details incorrect. Para1 = mid"
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_CALLBACK_NOTSET_MSG                    1025 
#define MQCLIINF_LOG_WARNING_UNSUBSCRIBE_CALLBACK_NOTSET_GRP                    11 

//====================MQTTClient_Interface Log Message Defines - INFO====================

#define MQCLIINF_LOG_INFO_FSM_CLIENT_ACTIVATED_TEXT                            "FSM: MQTTClient_Interface has been activated"
#define MQCLIINF_LOG_INFO_FSM_CLIENT_ACTIVATED_MSG                              2000 
#define MQCLIINF_LOG_INFO_FSM_CLIENT_ACTIVATED_GRP                              12 
#define MQCLIINF_LOG_INFO_SUBSCRIBE_ENTRY_ADDED_TEXT                           "Subscribe: Element successfully added to subscribe list. Para1= Mid"
#define MQCLIINF_LOG_INFO_SUBSCRIBE_ENTRY_ADDED_MSG                             2001 
#define MQCLIINF_LOG_INFO_SUBSCRIBE_ENTRY_ADDED_GRP                             12 
#define MQCLIINF_LOG_INFO_UNSUBSCRIBE_ENTRY_ADDED_TEXT                         "Unsubscribe: Unsubscribe Request Successfully passed to MQTT Client. Para1 = Appl Msg Id. Para2 = mid"
#define MQCLIINF_LOG_INFO_UNSUBSCRIBE_ENTRY_ADDED_MSG                           2002 
#define MQCLIINF_LOG_INFO_UNSUBSCRIBE_ENTRY_ADDED_GRP                           12 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_PUBLISHED_TEXT                         "DataMap: Requested Publish for an Entry. Para1 = Mid, Para2 = pData"
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_PUBLISHED_MSG                           2003 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_PUBLISHED_GRP                           12 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_PUB_COMP_TEXT                          "DataMap: Publish complete. Para1 = Mid, Para2 = pData"
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_PUB_COMP_MSG                            2004 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_PUB_COMP_GRP                            12 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_SUBD_TEXT                              "DataMap: Requested subscription for an Entry. Para1 = Mid, Para2 = pData"
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_SUBD_MSG                                2005 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_SUBD_GRP                                12 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_UNSUBD_TEXT                            "DataMap: Requested Unsubscribe for DataMap Entry. Para1 = Mid, Para2 = pData"
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_UNSUBD_MSG                              2006 
#define MQCLIINF_LOG_INFO_DATAMAP_ENTRY_UNSUBD_GRP                              12 
#define MQCLIINF_LOG_INFO_DATAMAP_SUB_CONFD_QOS_DIFFERS_TEXT                   "DataMap: Subscription Confirmed, Granted QoS differs from requested. Para1 = mid, Para2 = Message mid, Para3 = Granted QoS, Para4 = Requested QoS"
#define MQCLIINF_LOG_INFO_DATAMAP_SUB_CONFD_QOS_DIFFERS_MSG                     2007 
#define MQCLIINF_LOG_INFO_DATAMAP_SUB_CONFD_QOS_DIFFERS_GRP                     12 
#define MQCLIINF_LOG_INFO_DATAMAP_UNSUB_CONFD_TEXT                             "DataMap: Unsubscribe for Entry Received. Para1 = iMid. Para2 = Message Mid."
#define MQCLIINF_LOG_INFO_DATAMAP_UNSUB_CONFD_MSG                               2008 
#define MQCLIINF_LOG_INFO_DATAMAP_UNSUB_CONFD_GRP                               12 
#define MQCLIINF_LOG_INFO_CONNECTION_CONNECTED_TEXT                            "Connection: Connected. Para1 = Retcode, Para2 = Flags"
#define MQCLIINF_LOG_INFO_CONNECTION_CONNECTED_MSG                              2009 
#define MQCLIINF_LOG_INFO_CONNECTION_CONNECTED_GRP                              12 
#define MQCLIINF_LOG_INFO_CONNECTION_DISCONNECTED_TEXT                         "Connection: Disconnected. Para1 = RetCode"
#define MQCLIINF_LOG_INFO_CONNECTION_DISCONNECTED_MSG                           2010 
#define MQCLIINF_LOG_INFO_CONNECTION_DISCONNECTED_GRP                           12 
#define MQCLIINF_LOG_INFO_PUBLISH_PUBLISHED_TEXT                               "Publish: Received Publish confirmation from the MQTTClient. Para1 = mid"
#define MQCLIINF_LOG_INFO_PUBLISH_PUBLISHED_MSG                                 2011 
#define MQCLIINF_LOG_INFO_PUBLISH_PUBLISHED_GRP                                 12 
#define MQCLIINF_LOG_INFO_UNSUBSCRIBE_UNSUBSCRIBED_TEXT                        "Unsubscribe: Received Unsubscribe confirmation from the MQTTClient. Para1 = mid"
#define MQCLIINF_LOG_INFO_UNSUBSCRIBE_UNSUBSCRIBED_MSG                          2012 
#define MQCLIINF_LOG_INFO_UNSUBSCRIBE_UNSUBSCRIBED_GRP                          12 

#define MQCLIINF_LOG_INFO_SUBSCRIBE_ALREADY_SUBSCRIBED_GRP                      12
#define MQCLIINF_LOG_INFO_SUBSCRIBE_ALREADY_SUBSCRIBED_MSG                      2013
#define MQCLIINF_LOG_INFO_SUBSCRIBE_ALREADY_SUBSCRIBED_TEXT                     "Subscribe: Subscription already existed. Para1= Mid"

//====================MQTTClient_Interface Log Message Defines - DEBUG====================

#define MQCLIINF_LOG_DEBUG_CLIENTACTIVE_DISCONNECT_REQUESTED_TEXT              "ClientActive: Disconnect request Initiated"
#define MQCLIINF_LOG_DEBUG_CLIENTACTIVE_DISCONNECT_REQUESTED_MSG                3000 
#define MQCLIINF_LOG_DEBUG_CLIENTACTIVE_DISCONNECT_REQUESTED_GRP                13 
#define MQCLIINF_LOG_DEBUG_UNSUBSCRIBE_NO_CALLBACK_TEXT                        "Unsubscribe: Unsubscribe requested, however no callback to the Application is set. Para1=udApplMsgID, Para2=mid"
#define MQCLIINF_LOG_DEBUG_UNSUBSCRIBE_NO_CALLBACK_MSG                          3001 
#define MQCLIINF_LOG_DEBUG_UNSUBSCRIBE_NO_CALLBACK_GRP                          13 
#define MQCLIINF_LOG_DEBUG_UNSUBSCRIBE_STILL_SUBSCRIBED_TEXT                   "Unsubscribe: Unsubscribe requested for a topic where atleast one other party in the application is still subscribed, the Unsubscribe request will not be sent. Para1 = Requested Unsub ApplID, Para2 = ApplID of first subscriber that is still active."
#define MQCLIINF_LOG_DEBUG_UNSUBSCRIBE_STILL_SUBSCRIBED_MSG                     3002 
#define MQCLIINF_LOG_DEBUG_UNSUBSCRIBE_STILL_SUBSCRIBED_GRP                     13 

