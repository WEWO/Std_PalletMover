//====================MQTTClient Log Message Defines - ERROR====================

#define MQCLI_LOG_ERROR_TCP_WATCHDOG_TIMEOUT_TEXT                              "TCP: Receiving MQTT Packet timed out, packet dropped. Para1=Packet ID"
#define MQCLI_LOG_ERROR_TCP_WATCHDOG_TIMEOUT_MSG                                0 
#define MQCLI_LOG_ERROR_TCP_WATCHDOG_TIMEOUT_GRP                                20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBCOMP_RETRY_TEXT                          "Publish: QoS 2 Outgoing Publish, PUBCOMP Max Retries reaced, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBCOMP_RETRY_MSG                            1 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBCOMP_RETRY_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREL_RETRY_TEXT                           "Publish: QoS 2 Outgoing Publish, PUBREL Max Retries reaced, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREL_RETRY_MSG                             2 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREL_RETRY_GRP                             20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREL_INS_Q_TEXT                           "Publish: QoS 2 Outgoing Publish, PUBREL Insert into Packet Queue Failed, Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREL_INS_Q_MSG                             3 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREL_INS_Q_GRP                             20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREC_RETRY_TEXT                           "Publish: QoS 2 Outgoing Publish, PUBREC Max Retries reaced, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREC_RETRY_MSG                             4 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBREC_RETRY_GRP                             20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBLISH_RETRY_TEXT                          "Publish: QoS 2 Outgoing Publish, PUBLISH Max Retries reaced, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBLISH_RETRY_MSG                            5 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBLISH_RETRY_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBLISH_INS_Q_TEXT                          "Publish: QoS 2 Outgoing Publish, PUBLISH Insert into Packet Queue Failed, Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBLISH_INS_Q_MSG                            6 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_PUBLISH_INS_Q_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBACK_RETRY_TEXT                           "Publish: QoS 1 Outgoing Publish, PUBACK Max Retries reached, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBACK_RETRY_MSG                             7 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBACK_RETRY_GRP                             20 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBLISH_RETRY_TEXT                          "Publish: QoS 1 Outgoing Publish, PUBLISH Max Retries Reached, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBLISH_RETRY_MSG                            8 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBLISH_RETRY_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBLISH_INS_Q_TEXT                          "Publish: QoS 1 Outgoing Publish, PUBLISH Insert Packet into Packet Queue failed, Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBLISH_INS_Q_MSG                            9 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_PUBLISH_INS_Q_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q0_PUBLISH_RETRY_TEXT                          "Publish: QoS 0 Outgoing Publish, PUBLISH Max Retries Reached, Packet Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q0_PUBLISH_RETRY_MSG                            10 
#define MQCLI_LOG_ERROR_PUBLISH_Q0_PUBLISH_RETRY_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q0_PUBLISH_INS_Q_TEXT                          "Publish: QoS 0 Outgoing Publish, Message Insert Packet into Packet Queue Failed, Dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q0_PUBLISH_INS_Q_MSG                            11 
#define MQCLI_LOG_ERROR_PUBLISH_Q0_PUBLISH_INS_Q_GRP                            20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBCOMP_RETRY_TEXT                      "Publish: QoS 2 Incoming Publish, sending PUBCOMP max retries reached, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBCOMP_RETRY_MSG                        12 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBCOMP_RETRY_GRP                        20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBCOMP_INS_Q_TEXT                      "Publish: QoS 2 Incoming Publish, inserting PUBCOMP into Packet Queue failed, dropped. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBCOMP_INS_Q_MSG                        13 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBCOMP_INS_Q_GRP                        20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREL_RETRY_TEXT                       "Publish: QoS 2 Incoming Publish, waiting for PUBREL maximum retries reached, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREL_RETRY_MSG                         14 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREL_RETRY_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREC_RETRY_TEXT                       "Publish: QoS 2 Incoming Publish, sending PUBREC maximum retries reached, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREC_RETRY_MSG                         15 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREC_RETRY_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREC_INS_Q_TEXT                       "Publish: QoS 2 Incoming Publish, failed to insert PUBREC response message into Message Queue. Para1=PacketID"
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREC_INS_Q_MSG                         16 
#define MQCLI_LOG_ERROR_PUBLISH_Q2_INC_PUBREC_INS_Q_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_INC_PUBLISH_RETRY_TEXT                      "Publish: QoS 1 Incoming Publish, sending PUBACK max retries reached, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_Q1_INC_PUBLISH_RETRY_MSG                        17 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_INC_PUBLISH_RETRY_GRP                        20 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_INC_PUBACK_INS_Q_TEXT                       "Publish: QoS 1 Incoming Publish, could not insert the PUBACK into the Packet Queue, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_Q1_INC_PUBACK_INS_Q_MSG                         18 
#define MQCLI_LOG_ERROR_PUBLISH_Q1_INC_PUBACK_INS_Q_GRP                         20 
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_UNSUBSCRIBE_RETRY_TEXT                     "Unsubscribe: Outgoing Unsubscribe, sending UNSUBSCRIBE Packet max retries reached, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_UNSUBSCRIBE_RETRY_MSG                       19 
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_UNSUBSCRIBE_RETRY_GRP                       20 
#define MQCLI_LOG_ERROR_SUBSCRIBE_SUBSCRIBE_RETRY_TEXT                         "Subscribe: Outgoing Subscribe, sending SUBSCRIBE Packet max retries reached, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_SUBSCRIBE_SUBSCRIBE_RETRY_MSG                           20 
#define MQCLI_LOG_ERROR_SUBSCRIBE_SUBSCRIBE_RETRY_GRP                           20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_PROCESS_INP_VAL_TEXT                       "Publish: Incoming Publish Message, input values not valid, packet dropped. Para1=QoS."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_PROCESS_INP_VAL_MSG                         21 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_PROCESS_INP_VAL_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_PROCESS_INF_ADD_TEXT                       "Publish: Incoming Publish Message, adding inflight message failed, Packet Dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_PROCESS_INF_ADD_MSG                         22 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_PROCESS_INF_ADD_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_SIZE_TEXT                      "Publish: Incoming PUBCOMP Message, incorrect size message received, message not interpreted, dropped."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_SIZE_MSG                        23 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_SIZE_GRP                        20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_INF_NOTFOUND_TEXT              "Publish: Incoming PUBCOMP Message, corresponding PUBLISH message not found, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_INF_NOTFOUND_MSG                24 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_INF_NOTFOUND_GRP                20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_STATE_TEXT                     "Publish: Incoming PUBCOMP Message, corresponding message state not OK. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_STATE_MSG                       25 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBCOMP_STATE_GRP                       20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_SIZE_TEXT                       "Publish: Incoming PUBREL Message, incorrect size message received, message not interpreted, dropped."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_SIZE_MSG                         26 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_SIZE_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_INF_NOTFOUND_TEXT               "Publish: Incoming PUBREL Message, corresponding PUBLISH not found, PUBCOMP dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_INF_NOTFOUND_MSG                 27 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_INF_NOTFOUND_GRP                 20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_STATE_TEXT                      "Publish: Incoming PUBREL Message, corresponding message state not OK. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_STATE_MSG                        28 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREL_STATE_GRP                        20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_SIZE_TEXT                       "Publish: Incoming PUBREC Message, incorrect size message received, message not interpreted, dropped."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_SIZE_MSG                         29 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_SIZE_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_INF_NOTFOUND_TEXT               "Publish: Incoming PUBREC Message, corresponding PUBLISH not found, PUBCOMP dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_INF_NOTFOUND_MSG                 30 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_INF_NOTFOUND_GRP                 20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_STATE_TEXT                      "Publish: Incoming PUBREC Message, corresponding message state not OK. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_STATE_MSG                        31 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBREC_STATE_GRP                        20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_SIZE_TEXT                       "Publish: Incoming PUBACK Message, incorrect size message received, message not interpreted, dropped."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_SIZE_MSG                         32 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_SIZE_GRP                         20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_INF_NOTFOUND_TEXT               "Publish: Incoming PUBACK Message, corresponding PUBLISH not found, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_INF_NOTFOUND_MSG                 33 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_INF_NOTFOUND_GRP                 20 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_STATE_TEXT                      "Publish: Incoming PUBACK Message, corresponding message state not OK. Para1=PacketID."
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_STATE_MSG                        34 
#define MQCLI_LOG_ERROR_PUBLISH_MQP_INC_PUBACK_STATE_GRP                        20 
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_MQP_INC_UNSUBACK_SIZE_TEXT                 "Unsubscribe: Incoming UNSUBACK Message, incorrect size message received, message not interpreted, dropped."
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_MQP_INC_UNSUBACK_SIZE_MSG                   35 
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_MQP_INC_UNSUBACK_SIZE_GRP                   20 
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_MQP_INC_UNSUBACK_INF_NOTFOUND_TEXT         "Unsubscribe: Incoming PUBACK Message, corresponding PUBLISH not found, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_MQP_INC_UNSUBACK_INF_NOTFOUND_MSG           36 
#define MQCLI_LOG_ERROR_UNSUBSCRIBE_MQP_INC_UNSUBACK_INF_NOTFOUND_GRP           20 
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_SIZE_TEXT                     "Subscribe: Incoming SUBACK Message, incorrect size message received, message not interpreted, dropped."
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_SIZE_MSG                       37 
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_SIZE_GRP                       20 
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_INF_NOTFOUND_TEXT             "Subscribe: Incoming SUBACK Message, corresponding SUBSCRIBE not found, dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_INF_NOTFOUND_MSG               38 
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_INF_NOTFOUND_GRP               20 
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_ZERO_TEXT                     "Subscribe: Incoming SUBACK, 0 granted QoS Pairs received, Dropped. Para1=PacketID."
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_ZERO_MSG                       39 
#define MQCLI_LOG_ERROR_SUBSCRIBE_MQP_INC_SUBACK_ZERO_GRP                       20 
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_INC_PINGREQ_SIZE_TEXT                    "Keepalive: Incoming PINGREQ Message, incorrect data length, message dropped."
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_INC_PINGREQ_SIZE_MSG                      40 
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_INC_PINGREQ_SIZE_GRP                      20 
#define MQCLI_LOG_ERROR_CONNECTION_MQP_INC_CONNACK_STATE_TEXT                  "Connection: Incoming CONNACK Message, Incorrect state - CONNACK Unexpected, message has been dropped. Para1=Retcode"
#define MQCLI_LOG_ERROR_CONNECTION_MQP_INC_CONNACK_STATE_MSG                    41 
#define MQCLI_LOG_ERROR_CONNECTION_MQP_INC_CONNACK_STATE_GRP                    20 
#define MQCLI_LOG_ERROR_CONNECTION_MQP_INC_CONNACK_UNKNOWN_TEXT                "Connection: Incoming CONNACK Message, Unexpected RetCode, Connection Failed. Para1=Retcode."
#define MQCLI_LOG_ERROR_CONNECTION_MQP_INC_CONNACK_UNKNOWN_MSG                  42 
#define MQCLI_LOG_ERROR_CONNECTION_MQP_INC_CONNACK_UNKNOWN_GRP                  20 
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_OUT_PINGRESP_PCKT_TEXT                   "KeepAlive: Outgoing PINGRESP Message, Failed to add to Inflight Messages, Packet Dropped."
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_OUT_PINGRESP_PCKT_MSG                     43 
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_OUT_PINGRESP_PCKT_GRP                     20 
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_OUT_PINGREQ_PCKT_TEXT                    "KeepAlive: Outgoing PINGREQ Message, Failed to add to Inflight Messages, Packet Dropped."
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_OUT_PINGREQ_PCKT_MSG                      44 
#define MQCLI_LOG_ERROR_KEEPALIVE_MQP_OUT_PINGREQ_PCKT_GRP                      20 
#define MQCLI_LOG_ERROR_TCP_COM_ERROR_CBK_TEXT                                 "TCP: TCP Connection Dropped. Para1=TCP ErrorGroup, Para2=TCP ErrorCode. Para3=_FSM_TCP_USER."
#define MQCLI_LOG_ERROR_TCP_COM_ERROR_CBK_MSG                                   45 
#define MQCLI_LOG_ERROR_TCP_COM_ERROR_CBK_GRP                                   20 
#define MQCLI_LOG_ERROR_TCP_APPEND_FAIL_TEXT                                   "TCP: TCP Packet append failed, packet dropped. Para1=Incoming PacketQueueID. Para2=AvailableBytes."
#define MQCLI_LOG_ERROR_TCP_APPEND_FAIL_MSG                                     46 
#define MQCLI_LOG_ERROR_TCP_APPEND_FAIL_GRP                                     20 
#define MQCLI_LOG_ERROR_TCP_SOCKET_ERR_TEXT                                    "TCP: TCP Communication, Socket Error. Para1=PacketQueue Return. Para2=Packet Len."
#define MQCLI_LOG_ERROR_TCP_SOCKET_ERR_MSG                                      47 
#define MQCLI_LOG_ERROR_TCP_SOCKET_ERR_GRP                                      20 
#define MQCLI_LOG_ERROR_MQTT_UNKNOWN_PKT_TEXT                                  "MQTT: MQTT Incoming Packet Queue, client received unknown packet, Protocol Error. Dropped."
#define MQCLI_LOG_ERROR_MQTT_UNKNOWN_PKT_MSG                                    48 
#define MQCLI_LOG_ERROR_MQTT_UNKNOWN_PKT_GRP                                    20 
#define MQCLI_LOG_ERROR_MQTT_DISCONNECT_RX_TEXT                                "MQTT: MQTT Incoming Packet Queue, client received DISCONNECT, Protocol Error. Dropped."
#define MQCLI_LOG_ERROR_MQTT_DISCONNECT_RX_MSG                                  49 
#define MQCLI_LOG_ERROR_MQTT_DISCONNECT_RX_GRP                                  20 
#define MQCLI_LOG_ERROR_MQTT_UNSUBSCRIBE_RX_TEXT                               "MQTT: MQTT Incoming Packet Queue, client received UNSUBSCRIBE, Protocol Error. Dropped."
#define MQCLI_LOG_ERROR_MQTT_UNSUBSCRIBE_RX_MSG                                 50 
#define MQCLI_LOG_ERROR_MQTT_UNSUBSCRIBE_RX_GRP                                 20 
#define MQCLI_LOG_ERROR_MQTT_SUBSCRIBE_RX_TEXT                                 "MQTT: MQTT Incoming Packet Queue, client received SUBSCRIBE, Protocol Error. Dropped."
#define MQCLI_LOG_ERROR_MQTT_SUBSCRIBE_RX_MSG                                   51 
#define MQCLI_LOG_ERROR_MQTT_SUBSCRIBE_RX_GRP                                   20 
#define MQCLI_LOG_ERROR_MQTT_CONNECT_RX_TEXT                                   "MQTT: MQTT Incoming Packet Queue, client received CONNECT, Protocol Error. Dropped."
#define MQCLI_LOG_ERROR_MQTT_CONNECT_RX_MSG                                     52 
#define MQCLI_LOG_ERROR_MQTT_CONNECT_RX_GRP                                     20 
#define MQCLI_LOG_ERROR_MQTT_PCKT_LEN_DECODE_TEXT                              "MQTT: MQTT Incoming Packet Queue, Decoding packet length failed, packet dropped."
#define MQCLI_LOG_ERROR_MQTT_PCKT_LEN_DECODE_MSG                                53 
#define MQCLI_LOG_ERROR_MQTT_PCKT_LEN_DECODE_GRP                                20 
#define MQCLI_LOG_ERROR_TCP_SEND_FAIL_TEXT                                     "TCP: TCP Communication, failed to send packet, data dropped. Para1=MessageID. Para2=TCP SendData Retcode."
#define MQCLI_LOG_ERROR_TCP_SEND_FAIL_MSG                                       54 
#define MQCLI_LOG_ERROR_TCP_SEND_FAIL_GRP                                       20 
#define MQCLI_LOG_ERROR_CONNECTION_DISCONNECT_TIMEOUT_TEXT                     "Connection: Disconnect procedure, sending DISCONNECT timed out, Disconnected."
#define MQCLI_LOG_ERROR_CONNECTION_DISCONNECT_TIMEOUT_MSG                       55 
#define MQCLI_LOG_ERROR_CONNECTION_DISCONNECT_TIMEOUT_GRP                       20 
#define MQCLI_LOG_ERROR_CONNECTION_CONNECT_PCKT_TEXT                           "Connection: Connect procedure, adding CONNECT Packet to Packet Queue Failed, reconnecting."
#define MQCLI_LOG_ERROR_CONNECTION_CONNECT_PCKT_MSG                             56 
#define MQCLI_LOG_ERROR_CONNECTION_CONNECT_PCKT_GRP                             20 
#define MQCLI_LOG_ERROR_TCP_TCP_CONN_TIMEOUT_TEXT                              "TCP: Connecting procedure, creating TCP connection timed out, reconnecting."
#define MQCLI_LOG_ERROR_TCP_TCP_CONN_TIMEOUT_MSG                                57 
#define MQCLI_LOG_ERROR_TCP_TCP_CONN_TIMEOUT_GRP                                20 
#define MQCLI_LOG_ERROR_TCP_ADDCONN_FAIL_TEXT                                  "TCP: Connecting procedure, adding TCP connection failed, reconnecting. Para1=TCP AddConnection Retcode."
#define MQCLI_LOG_ERROR_TCP_ADDCONN_FAIL_MSG                                    58 
#define MQCLI_LOG_ERROR_TCP_ADDCONN_FAIL_GRP                                    20 
#define MQCLI_LOG_ERROR_CONNECTION_HOST_IP_TEXT                                "Connection: Connecting procedure, failed to get IP address for hostname, reconnecting."
#define MQCLI_LOG_ERROR_CONNECTION_HOST_IP_MSG                                  59 
#define MQCLI_LOG_ERROR_CONNECTION_HOST_IP_GRP                                  20 
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_NOTINIT_TEXT                    "Configuration: Setting the amount of Inflight Messages failed not initialized. Para1=max_inflight_messages."
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_NOTINIT_MSG                      60 
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_NOTINIT_GRP                      20 
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_MEM_TEXT                        "Configuration: Setting Inflight Messages failed, No mem. Para1=num_msgs, Para2=Mem Avail, Para3=Mem Req"
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_MEM_MSG                          61 
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_MEM_GRP                          20 
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_REALLOC_FAIL_TEXT               "Configuration: Setting Inflight Messages, ReAlloc Failed. Para1=num_msgs, Para2=Mem Avail, Para3=Mem Req."
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_REALLOC_FAIL_MSG                 62 
#define MQCLI_LOG_ERROR_CONFIGURATION_INF_MSGS_REALLOC_FAIL_GRP                 20 
#define MQCLI_LOG_ERROR_SUBSCRIBE_INP_INVALID_TEXT                             "Subscribe: Subscribe request failed, input not OK."
#define MQCLI_LOG_ERROR_SUBSCRIBE_INP_INVALID_MSG                               63 
#define MQCLI_LOG_ERROR_SUBSCRIBE_INP_INVALID_GRP                               20 
#define MQCLI_LOG_ERROR_PUBLISH_INP_INVALID_TEXT                               "Publish: Could not accept publish request, invalid input values."
#define MQCLI_LOG_ERROR_PUBLISH_INP_INVALID_MSG                                 64 
#define MQCLI_LOG_ERROR_PUBLISH_INP_INVALID_GRP                                 20 
#define MQCLI_LOG_ERROR_CONFIGURATION_THREAD_START_FAIL_TEXT                   "Configuration: Starting the Multitask Thread Failed. Para1=_MultiTask::RESUME() RetCode"
#define MQCLI_LOG_ERROR_CONFIGURATION_THREAD_START_FAIL_MSG                     65 
#define MQCLI_LOG_ERROR_CONFIGURATION_THREAD_START_FAIL_GRP                     20 
#define MQCLI_LOG_ERROR_CONNECTION_INPUT_INVALID_TEXT                          "Connection: Connect Async Call Failed, the Input to the method is invalid."
#define MQCLI_LOG_ERROR_CONNECTION_INPUT_INVALID_MSG                            66 
#define MQCLI_LOG_ERROR_CONNECTION_INPUT_INVALID_GRP                            20 
#define MQCLI_LOG_ERROR_MULTITASK_SUSPEND_FAIL_TEXT                            "MultiTask: The MQTTClient failed to suspend the Multitasking Thread. Para1=_MultiTask::SUSPEND() RetCode"
#define MQCLI_LOG_ERROR_MULTITASK_SUSPEND_FAIL_MSG                              67 
#define MQCLI_LOG_ERROR_MULTITASK_SUSPEND_FAIL_GRP                              20 
#define MQCLI_LOG_ERROR_MULTITASK_CREATE_FAIL_TEXT                             "MultiTask: Creating the Multitask Thread Failed."
#define MQCLI_LOG_ERROR_MULTITASK_CREATE_FAIL_MSG                               68 
#define MQCLI_LOG_ERROR_MULTITASK_CREATE_FAIL_GRP                               20 
#define MQCLI_LOG_ERROR_TCP_OS_INT_PTR_TEXT                                    "TCP: The OS TCP User Interface is not avaliable, the connection cannot be made"
#define MQCLI_LOG_ERROR_TCP_OS_INT_PTR_MSG                                      69 
#define MQCLI_LOG_ERROR_TCP_OS_INT_PTR_GRP                                      20 

//====================MQTTClient Log Message Defines - WARNING====================

#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBREL_TIMEOUT_TEXT                       "Publish: QoS 2 Outgoing Publish, PUBREL wait timed out, Retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBREL_TIMEOUT_MSG                         1000 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBREL_TIMEOUT_GRP                         21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBCOMP_TIMEOUT_TEXT                      "Publish: QoS 2 Outgoing Publish, PUBCOMP wait timed out, Retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBCOMP_TIMEOUT_MSG                        1001 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBCOMP_TIMEOUT_GRP                        21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBREC_TIMEOUT_TEXT                       "Publish: QoS 2 Outgoing Publish, PUBREC wait timed out, Retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBREC_TIMEOUT_MSG                         1002 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBREC_TIMEOUT_GRP                         21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBLISH_TIMEOUT_TEXT                      "Publish: QoS 2 Outgoing Publish, PUBLISH wait timed out, Retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBLISH_TIMEOUT_MSG                        1003 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_PUBLISH_TIMEOUT_GRP                        21 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_PUBACK_TIMEOUT_TEXT                       "Publish: QoS 1 Outgoing Publish, PUBACK wait timed out, Retrying. Para1=PacketID."
#define MQCLI_LOG_WARNING_PUBLISH_Q1_PUBACK_TIMEOUT_MSG                         1004 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_PUBACK_TIMEOUT_GRP                         21 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_PUBLISH_TIMEOUT_TEXT                      "Publish: QoS 1 Outgoing Publish, PUBLISH wait timed out, Retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q1_PUBLISH_TIMEOUT_MSG                        1005 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_PUBLISH_TIMEOUT_GRP                        21 
#define MQCLI_LOG_WARNING_PUBLISH_Q0_PUBLISH_TIMEOUT_TEXT                      "Publish: QoS 0 Outgoing Publish, PUBLISH wait timed out, Retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q0_PUBLISH_TIMEOUT_MSG                        1006 
#define MQCLI_LOG_WARNING_PUBLISH_Q0_PUBLISH_TIMEOUT_GRP                        21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBLISH_CALLBACK_NOTSET_TEXT          "Publish: QoS 2 Incoming Publish, could not deliver to application as the OnMessage Callback is not set."
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBLISH_CALLBACK_NOTSET_MSG            1007 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBLISH_CALLBACK_NOTSET_GRP            21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBCOMP_TIMEOUT_TEXT                  "Publish: QoS 2 Incoming Publish, waiting for PUBCOMP send timed out, retrying. Para1=PacketID."
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBCOMP_TIMEOUT_MSG                    1008 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBCOMP_TIMEOUT_GRP                    21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBREL_TIMEOUT_TEXT                   "Publish: QoS 2 Incoming Publish, waiting for PUBREL message timed out, retry sending PUBREC. Para1=PacketID."
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBREL_TIMEOUT_MSG                     1009 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBREL_TIMEOUT_GRP                     21 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBREC_TIMEOUT_TEXT                   "Publish: QoS 2 Incoming Publish, sending PUBREC response timed out, retrying. Para1=PacketID"
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBREC_TIMEOUT_MSG                     1010 
#define MQCLI_LOG_WARNING_PUBLISH_Q2_INC_PUBREC_TIMEOUT_GRP                     21 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_INC_PUBLISH_CALLBACK_NOTSET_TEXT          "Publish: QoS 1 Incoming Publish, could not deliver to application as the OnMessage Callback is not set."
#define MQCLI_LOG_WARNING_PUBLISH_Q1_INC_PUBLISH_CALLBACK_NOTSET_MSG            1011 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_INC_PUBLISH_CALLBACK_NOTSET_GRP            21 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_INC_PUBLISH_TIMEOUT_TEXT                  "Publish: QoS 1 Incoming Publish, waiting for PUBACK send timed out, retrying. Para1=PacketID."
#define MQCLI_LOG_WARNING_PUBLISH_Q1_INC_PUBLISH_TIMEOUT_MSG                    1012 
#define MQCLI_LOG_WARNING_PUBLISH_Q1_INC_PUBLISH_TIMEOUT_GRP                    21 
#define MQCLI_LOG_WARNING_PUBLISH_Q0_INC_PUBLISH_CALLBACK_NOTSET_TEXT          "Publish: QoS 0 Incoming Publish, could not deliver to application as the OnMessage Callback is not set."
#define MQCLI_LOG_WARNING_PUBLISH_Q0_INC_PUBLISH_CALLBACK_NOTSET_MSG            1013 
#define MQCLI_LOG_WARNING_PUBLISH_Q0_INC_PUBLISH_CALLBACK_NOTSET_GRP            21 
#define MQCLI_LOG_WARNING_UNSUBSCRIBE_UNSUBSCRIBE_TIMEOUT_TEXT                 "Unsubscribe: Outgoing Unsubscribe, waiting for UNSUBSCRIBE Packet send timed out, retrying. Para1=PacketID."
#define MQCLI_LOG_WARNING_UNSUBSCRIBE_UNSUBSCRIBE_TIMEOUT_MSG                   1014 
#define MQCLI_LOG_WARNING_UNSUBSCRIBE_UNSUBSCRIBE_TIMEOUT_GRP                   21 
#define MQCLI_LOG_WARNING_SUBSCRIBE_SUBSCCRIBE_TIMEOUT_TEXT                    "Subscribe: Outgoing Subscribe, waiting for SUBSCRIBE Packet send timed out, retrying. Para1=PacketID."
#define MQCLI_LOG_WARNING_SUBSCRIBE_SUBSCCRIBE_TIMEOUT_MSG                      1015 
#define MQCLI_LOG_WARNING_SUBSCRIBE_SUBSCCRIBE_TIMEOUT_GRP                      21 
#define MQCLI_LOG_WARNING_SUBSCRIBE_MQP_INC_SUBACK_TOO_MANY_TEXT               "Subscribe: Incoming SUBACK, too many granted QoS Pairs, Truncated. Para1=PacketID."
#define MQCLI_LOG_WARNING_SUBSCRIBE_MQP_INC_SUBACK_TOO_MANY_MSG                 1016 
#define MQCLI_LOG_WARNING_SUBSCRIBE_MQP_INC_SUBACK_TOO_MANY_GRP                 21 
#define MQCLI_LOG_WARNING_KEEPALIVE_TIMEOUT_TEXT                               "Keepalive: MQTT Keepalive, PINGREQ <-> PINGRESP timed out, attempting reconnect."
#define MQCLI_LOG_WARNING_KEEPALIVE_TIMEOUT_MSG                                 1017 
#define MQCLI_LOG_WARNING_KEEPALIVE_TIMEOUT_GRP                                 21 
#define MQCLI_LOG_WARNING_CONNECTION_CONNACK_TIMEOUT_TEXT                      "Connection: Connect procedure, awaiting CONNACK timed out, attempting reconnect."
#define MQCLI_LOG_WARNING_CONNECTION_CONNACK_TIMEOUT_MSG                        1018 
#define MQCLI_LOG_WARNING_CONNECTION_CONNACK_TIMEOUT_GRP                        21 
#define MQCLI_LOG_WARNING_CONNECTION_RECONN_TIMEOUT_TEXT                       "Connection: Reconnect procedure, reconnect wait timed out, retrying."
#define MQCLI_LOG_WARNING_CONNECTION_RECONN_TIMEOUT_MSG                         1019 
#define MQCLI_LOG_WARNING_CONNECTION_RECONN_TIMEOUT_GRP                         21 
#define MQCLI_LOG_WARNING_CONFIGURATION_SETINF_TOOLOW_TEXT                     "Configuration: Setting the Inflight Messages failed, supplied value too low, setting ignored. Para1=Min Value, Para2=Set Value"
#define MQCLI_LOG_WARNING_CONFIGURATION_SETINF_TOOLOW_MSG                       1020 
#define MQCLI_LOG_WARNING_CONFIGURATION_SETINF_TOOLOW_GRP                       21 
#define MQCLI_LOG_WARNING_CONFIGURATION_SETINF_STATE_TEXT                      "Configuration: Set Inf Msgs failed, incorrect MQTTClient state. Para1=MQTTClientState"
#define MQCLI_LOG_WARNING_CONFIGURATION_SETINF_STATE_MSG                        1021 
#define MQCLI_LOG_WARNING_CONFIGURATION_SETINF_STATE_GRP                        21 
#define MQCLI_LOG_WARNING_SUBSCRIBE_WRONG_STATE_TEXT                           "Subscribe: Subscription ignored, the MQTTClient is in the incorrect state. Para1=MQTTClientState"
#define MQCLI_LOG_WARNING_SUBSCRIBE_WRONG_STATE_MSG                             1022 
#define MQCLI_LOG_WARNING_SUBSCRIBE_WRONG_STATE_GRP                             21 
#define MQCLI_LOG_WARNING_PUBLISH_WRONG_STATE_TEXT                             "Publish: Publish ignored, the MQTTClient is in the incorrect state. Para1=MQTTClientState"
#define MQCLI_LOG_WARNING_PUBLISH_WRONG_STATE_MSG                               1023 
#define MQCLI_LOG_WARNING_PUBLISH_WRONG_STATE_GRP                               21 
#define MQCLI_LOG_WARNING_CONNECTION_MULTITASK_SUSPEND_IGNORED_TEXT            "Connection: A call to mqtt_loop_stop() was made whilst the connection is still active, the call was ignored."
#define MQCLI_LOG_WARNING_CONNECTION_MULTITASK_SUSPEND_IGNORED_MSG              1024 
#define MQCLI_LOG_WARNING_CONNECTION_MULTITASK_SUSPEND_IGNORED_GRP              21 

//====================MQTTClient Log Message Defines - INFO====================

#define MQCLI_LOG_INFO_PUBLISH_Q1_PUBLISH_DONE_TEXT                            "Publish: QoS 1 Outgoing Publish, Message successfully sent. Para1=PacketID"
#define MQCLI_LOG_INFO_PUBLISH_Q1_PUBLISH_DONE_MSG                              2000 
#define MQCLI_LOG_INFO_PUBLISH_Q1_PUBLISH_DONE_GRP                              22 
#define MQCLI_LOG_INFO_PUBLISH_Q2_PUBLISH_DONE_TEXT                            "Publish: QoS 2 Outgoing Publish, Message successfully sent. Para1=PacketID"
#define MQCLI_LOG_INFO_PUBLISH_Q2_PUBLISH_DONE_MSG                              2001 
#define MQCLI_LOG_INFO_PUBLISH_Q2_PUBLISH_DONE_GRP                              22 
#define MQCLI_LOG_INFO_PUBLISH_Q0_PUBLISH_DONE_TEXT                            "Publish: QoS 0 Outgoing Publish, Message successfully send. Para1=PacketID"
#define MQCLI_LOG_INFO_PUBLISH_Q0_PUBLISH_DONE_MSG                              2002 
#define MQCLI_LOG_INFO_PUBLISH_Q0_PUBLISH_DONE_GRP                              22 
#define MQCLI_LOG_INFO_PUBLISH_Q2_INC_PUBLISH_DONE_TEXT                        "Publish: QoS 2 Incoming Publish Delivered to Application. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_Q2_INC_PUBLISH_DONE_MSG                          2003 
#define MQCLI_LOG_INFO_PUBLISH_Q2_INC_PUBLISH_DONE_GRP                          22 
#define MQCLI_LOG_INFO_PUBLISH_Q1_INC_PUBLISH_DONE_TEXT                        "Publish: QoS 1 Incoming Publish Delivered to Application. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_Q1_INC_PUBLISH_DONE_MSG                          2004 
#define MQCLI_LOG_INFO_PUBLISH_Q1_INC_PUBLISH_DONE_GRP                          22 
#define MQCLI_LOG_INFO_PUBLISH_Q0_INC_PUBLISH_DONE_TEXT                        "Publish: QoS 0 Incoming Publish Delivered to Application. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_Q0_INC_PUBLISH_DONE_MSG                          2005 
#define MQCLI_LOG_INFO_PUBLISH_Q0_INC_PUBLISH_DONE_GRP                          22 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBCOMP_STATE_ADV_TEXT                  "Publish: Incoming PUBCOMP successfully Processed. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBCOMP_STATE_ADV_MSG                    2006 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBCOMP_STATE_ADV_GRP                    22 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBREL_STATE_ADV_TEXT                   "Publish: Incoming PUBREL successfully Processed. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBREL_STATE_ADV_MSG                     2007 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBREL_STATE_ADV_GRP                     22 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBREC_STATE_ADV_TEXT                   "Publish: Incoming PUBREC successfully Processed. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBREC_STATE_ADV_MSG                     2008 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBREC_STATE_ADV_GRP                     22 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBACK_DONE_TEXT                        "Publish: Incoming PUBACK successfully Processed. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBACK_DONE_MSG                          2009 
#define MQCLI_LOG_INFO_PUBLISH_MQP_INC_PUBACK_DONE_GRP                          22 
#define MQCLI_LOG_INFO_UNSUBSCRIBE_MQP_INC_UNSUBACK_DONE_TEXT                  "Unsubscribe: Incoming UNSUBACK successfully Processd. Para1=mid"
#define MQCLI_LOG_INFO_UNSUBSCRIBE_MQP_INC_UNSUBACK_DONE_MSG                    2010 
#define MQCLI_LOG_INFO_UNSUBSCRIBE_MQP_INC_UNSUBACK_DONE_GRP                    22 
#define MQCLI_LOG_INFO_SUBSCRIBE_MQP_INC_SUBACK_DONE_TEXT                      "Subscribe: Incoming SUBACK successfully Processed. Para1=mid"
#define MQCLI_LOG_INFO_SUBSCRIBE_MQP_INC_SUBACK_DONE_MSG                        2011 
#define MQCLI_LOG_INFO_SUBSCRIBE_MQP_INC_SUBACK_DONE_GRP                        22 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_NOTAUTHED_TEXT               "Connection: Incoming CONNACK Message, Connection Rejected, Not Authorized."
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_NOTAUTHED_MSG                 2012 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_NOTAUTHED_GRP                 22 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_USNPWD_TEXT                  "Connection: Incoming CONNACK Message, Connection Rejected, Username/Password Incorrect."
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_USNPWD_MSG                    2013 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_USNPWD_GRP                    22 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_SVR_UNAV_TEXT                "Connection: Incoming CONNACK Message, Connection Rejected, Server Unavailable."
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_SVR_UNAV_MSG                  2014 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_SVR_UNAV_GRP                  22 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_ID_REJ_TEXT                  "Connection: Incoming CONNACK Message, Connection Rejected, ID Rejected."
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_ID_REJ_MSG                    2015 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_ID_REJ_GRP                    22 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_VER_TEXT                     "Connection: Incoming CONNACK Message, Connection Rejected, Protocol Version Mismatch."
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_VER_MSG                       2016 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_VER_GRP                       22 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_OK_TEXT                      "Connection: Incoming CONNACK Message, Connection Accepted."
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_OK_MSG                        2017 
#define MQCLI_LOG_INFO_CONNECTION_MQP_INC_CONNACK_OK_GRP                        22 
#define MQCLI_LOG_INFO_CONFIGURATION_INF_MSGS_SET_TEXT                         "Configuration: Set Inflight Messages success. Para1=num_msgs, Para2=Mem Avail, Para3=Mem Req."
#define MQCLI_LOG_INFO_CONFIGURATION_INF_MSGS_SET_MSG                           2018 
#define MQCLI_LOG_INFO_CONFIGURATION_INF_MSGS_SET_GRP                           22 
#define MQCLI_LOG_INFO_SUBSCRIBE_ADD_SUCCESS_TEXT                              "Subscribe: Successfully added an Inflight Message for a Subscription. Para1=mid, Para2=QoS"
#define MQCLI_LOG_INFO_SUBSCRIBE_ADD_SUCCESS_MSG                                2019 
#define MQCLI_LOG_INFO_SUBSCRIBE_ADD_SUCCESS_GRP                                22 
#define MQCLI_LOG_INFO_PUBLISH_ADD_SUCCESS_TEXT                                "Publish: Successfully added inflight message for publish. Para1=mid"
#define MQCLI_LOG_INFO_PUBLISH_ADD_SUCCESS_MSG                                  2020 
#define MQCLI_LOG_INFO_PUBLISH_ADD_SUCCESS_GRP                                  22 
#define MQCLI_LOG_INFO_MULTITASK_THREAD_STOPPED_TEXT                           "MultiTask: The MultiTask Thread was stopped."
#define MQCLI_LOG_INFO_MULTITASK_THREAD_STOPPED_MSG                             2021 
#define MQCLI_LOG_INFO_MULTITASK_THREAD_STOPPED_GRP                             22 

