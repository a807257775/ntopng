/*
 *
 * (C) 2013-15 - ntop.org
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

/*
  NOTE

  This is the companion file of nProbe/template.h
*/

#ifndef _NTOP_FLOW_H_
#define _NTOP_FLOW_H_


#define NTOP_BASE_ID 57472

/* 1024 custom ntop elements for v9 should be enough */
#define NTOP_BASE_NETFLOW_ID  NTOP_BASE_ID+1024

#define IN_BYTES   1
#define SYSTEM_ID   1
#define IN_PKTS   2
#define INTERFACE_ID   2
#define FLOWS   3
#define LINE_CARD   3
#define PROTOCOL   4
#define PROTOCOL_MAP   NTOP_BASE_NETFLOW_ID+4
#define NETFLOW_CACHE   4
#define SRC_TOS   5
#define TEMPLATE_ID   5
#define TCP_FLAGS   6
#define L4_SRC_PORT   7
#define L4_SRC_PORT_MAP   NTOP_BASE_NETFLOW_ID+7
#define IPV4_SRC_ADDR   8
#define IPV4_SRC_MASK   9
#define INPUT_SNMP   10
#define L4_DST_PORT   11
#define L4_DST_PORT_MAP   NTOP_BASE_NETFLOW_ID+11
#define L4_SRV_PORT   NTOP_BASE_NETFLOW_ID+12
#define L4_SRV_PORT_MAP   NTOP_BASE_NETFLOW_ID+13
#define IPV4_DST_ADDR   12
#define IPV4_DST_MASK   13
#define OUTPUT_SNMP   14
#define IPV4_NEXT_HOP   15
#define SRC_AS   16
#define DST_AS   17
#define BGP_IPV4_NEXT_HOP   18
#define MUL_DST_PKTS   19
#define MUL_DST_BYTES   20
#define LAST_SWITCHED   21
#define FIRST_SWITCHED   22
#define OUT_BYTES   23
#define OUT_PKTS   24
#define IPV6_SRC_ADDR   27
#define IPV6_DST_ADDR   28
#define IPV6_SRC_MASK   29
#define IPV6_DST_MASK   30
#define IPV6_FLOW_LABEL   31
#define ICMP_TYPE   32
#define MUL_IGMP_TYPE           33
#define SAMPLING_INTERVAL       34
#define SAMPLING_ALGORITHM      35
#define FLOW_ACTIVE_TIMEOUT     36
#define FLOW_INACTIVE_TIMEOUT   37
#define ENGINE_TYPE   38
#define ENGINE_ID   39
#define TOTAL_BYTES_EXP   40
#define TOTAL_PKTS_EXP   41
#define TOTAL_FLOWS_EXP   42
#define MIN_TTL   52
#define MAX_TTL   53
#define IN_SRC_MAC   56
#define SRC_VLAN   58
#define DST_VLAN   59
#define IP_PROTOCOL_VERSION   60
#define DIRECTION   61
#define IPV6_NEXT_HOP   62
#define BPG_IPV6_NEXT_HOP   63
#define IPV6_OPTION_HEADERS   64
#define MPLS_LABEL_1   70
#define MPLS_LABEL_2   71
#define MPLS_LABEL_3   72
#define MPLS_LABEL_4   73
#define MPLS_LABEL_5   74
#define MPLS_LABEL_6   75
#define MPLS_LABEL_7   76
#define MPLS_LABEL_8   77
#define MPLS_LABEL_9   78
#define MPLS_LABEL_10   79
#define OUT_DST_MAC   80
#define APPLICATION_ID   95
#define PACKET_SECTION_OFFSET   102
#define SAMPLED_PACKET_SIZE   103
#define SAMPLED_PACKET_ID   104
#define EXPORTER_IPV4_ADDRESS   130
#define EXPORTER_IPV6_ADDRESS   131
#define FLOW_ID   148
#define FLOW_START_SEC   150
#define FLOW_END_SEC   151
#define FLOW_START_MILLISECONDS   152
#define FLOW_END_MILLISECONDS   153
#define BIFLOW_DIRECTION   239
#define OBSERVATION_POINT_TYPE   277
#define OBSERVATION_POINT_ID   300
#define SELECTOR_ID   302
#define IPFIX_SAMPLING_ALGORITHM   304
#define SAMPLING_SIZE   309
#define SAMPLING_POPULATION   310
#define FRAME_LENGTH   312
#define PACKETS_OBSERVED   318
#define PACKETS_SELECTED   319
#define SELECTOR_NAME   335
#define FRAGMENTS   NTOP_BASE_ID+80
#define CLIENT_NW_DELAY_SEC   NTOP_BASE_ID+82
#define CLIENT_NW_DELAY_USEC   NTOP_BASE_ID+83
#define SERVER_NW_DELAY_SEC   NTOP_BASE_ID+84
#define SERVER_NW_DELAY_USEC   NTOP_BASE_ID+85
#define APPL_LATENCY_SEC   NTOP_BASE_ID+86
#define APPL_LATENCY_USEC   NTOP_BASE_ID+87
#define NUM_PKTS_UP_TO_128_BYTES   NTOP_BASE_ID+88
#define NUM_PKTS_128_TO_256_BYTES   NTOP_BASE_ID+89
#define NUM_PKTS_256_TO_512_BYTES   NTOP_BASE_ID+90
#define NUM_PKTS_512_TO_1024_BYTES   NTOP_BASE_ID+91
#define NUM_PKTS_1024_TO_1514_BYTES   NTOP_BASE_ID+92
#define NUM_PKTS_OVER_1514_BYTES   NTOP_BASE_ID+93
#define CUMULATIVE_ICMP_TYPE NTOP_BASE_ID+98
#define SRC_IP_COUNTRY   NTOP_BASE_ID+101
#define SRC_IP_CITY   NTOP_BASE_ID+102
#define DST_IP_COUNTRY   NTOP_BASE_ID+103
#define DST_IP_CITY   NTOP_BASE_ID+104
#define FLOW_PROTO_PORT   NTOP_BASE_ID+105
#define UPSTREAM_TUNNEL_ID   NTOP_BASE_ID+106
#define LONGEST_FLOW_PKT   NTOP_BASE_ID+107
#define SHORTEST_FLOW_PKT   NTOP_BASE_ID+108
#define RETRANSMITTED_IN_PKTS   NTOP_BASE_ID+109
#define RETRANSMITTED_OUT_PKTS   NTOP_BASE_ID+110
#define OOORDER_IN_PKTS   NTOP_BASE_ID+111
#define OOORDER_OUT_PKTS   NTOP_BASE_ID+112
#define UNTUNNELED_PROTOCOL   NTOP_BASE_ID+113
#define UNTUNNELED_IPV4_SRC_ADDR   NTOP_BASE_ID+114
#define UNTUNNELED_L4_SRC_PORT   NTOP_BASE_ID+115
#define UNTUNNELED_IPV4_DST_ADDR   NTOP_BASE_ID+116
#define UNTUNNELED_L4_DST_PORT   NTOP_BASE_ID+117
#define L7_PROTO   NTOP_BASE_ID+118
#define L7_PROTO_NAME   NTOP_BASE_ID+119
#define DOWNSTREAM_TUNNEL_ID   NTOP_BASE_ID+120
#define FLOW_USER_NAME   NTOP_BASE_ID+121
#define FLOW_SERVER_NAME   NTOP_BASE_ID+122
#define CLIENT_NW_DELAY_MS  NTOP_BASE_ID+123
#define SERVER_NW_DELAY_MS  NTOP_BASE_ID+124
#define APPL_LATENCY_MS     NTOP_BASE_ID+125
#define PLUGIN_NAME         NTOP_BASE_ID+126
#define NUM_PKTS_TTL_EQ_1     NTOP_BASE_ID+347
#define NUM_PKTS_TTL_2_5      NTOP_BASE_ID+346
#define NUM_PKTS_TTL_5_32     NTOP_BASE_ID+334
#define NUM_PKTS_TTL_32_64    NTOP_BASE_ID+335
#define NUM_PKTS_TTL_64_96    NTOP_BASE_ID+336
#define NUM_PKTS_TTL_96_128   NTOP_BASE_ID+337
#define NUM_PKTS_TTL_128_160  NTOP_BASE_ID+338
#define NUM_PKTS_TTL_160_192  NTOP_BASE_ID+339
#define NUM_PKTS_TTL_192_224  NTOP_BASE_ID+340
#define NUM_PKTS_TTL_224_255  NTOP_BASE_ID+341
#define IN_SRC_OSI_SAP        NTOP_BASE_ID+349
#define OUT_DST_OSI_SAP       NTOP_BASE_ID+350

/* SIP */
#define SIP_CALL_ID NTOP_BASE_ID+130
#define SIP_CALLING_PARTY NTOP_BASE_ID+131
#define SIP_CALLED_PARTY NTOP_BASE_ID+132
#define SIP_RTP_CODECS NTOP_BASE_ID+133
#define SIP_INVITE_TIME NTOP_BASE_ID+134
#define SIP_TRYING_TIME NTOP_BASE_ID+135
#define SIP_RINGING_TIME NTOP_BASE_ID+136
#define SIP_INVITE_OK_TIME NTOP_BASE_ID+137
#define SIP_INVITE_FAILURE_TIME NTOP_BASE_ID+138
#define SIP_BYE_TIME NTOP_BASE_ID+139
#define SIP_BYE_OK_TIME NTOP_BASE_ID+140
#define SIP_CANCEL_TIME NTOP_BASE_ID+141
#define SIP_CANCEL_OK_TIME NTOP_BASE_ID+142
#define SIP_RTP_IPV4_SRC_ADDR NTOP_BASE_ID+143
#define SIP_RTP_L4_SRC_PORT NTOP_BASE_ID+144
#define SIP_RTP_IPV4_DST_ADDR NTOP_BASE_ID+145
#define SIP_RTP_L4_DST_PORT NTOP_BASE_ID+146
#define SIP_FAILURE_CODE NTOP_BASE_ID+147
#define SIP_REASON_CAUSE NTOP_BASE_ID+148
#define SIP_C_IP NTOP_BASE_ID+362
#define SIP_CALL_STATE NTOP_BASE_ID+363

/* EPP - Identifiers reserved but not used by any plugin */
#define EPP_REGISTRAR_NAME   NTOP_BASE_ID+364
#define EPP_CMD              NTOP_BASE_ID+365
#define EPP_CMD_ARGS         NTOP_BASE_ID+366
#define EPP_RSP_CODE         NTOP_BASE_ID+367
#define EPP_REASON_STR       NTOP_BASE_ID+368
#define EPP_SERVER_NAME      NTOP_BASE_ID+369

/* RTP */
#define RTP_FIRST_SSRC NTOP_BASE_ID+150
#define RTP_FIRST_TS NTOP_BASE_ID+151
#define RTP_LAST_SSRC NTOP_BASE_ID+152
#define RTP_LAST_TS NTOP_BASE_ID+153
#define RTP_IN_JITTER NTOP_BASE_ID+154
#define RTP_OUT_JITTER NTOP_BASE_ID+155
#define RTP_IN_PKT_LOST NTOP_BASE_ID+156
#define RTP_OUT_PKT_LOST NTOP_BASE_ID+157
#define RTP_OUT_PAYLOAD_TYPE NTOP_BASE_ID+158
#define RTP_IN_MAX_DELTA NTOP_BASE_ID+159
#define RTP_OUT_MAX_DELTA NTOP_BASE_ID+160
#define RTP_IN_PAYLOAD_TYPE NTOP_BASE_ID+161
#define RTP_SIP_CALL_ID NTOP_BASE_ID+348

/* Process */
#define PROC_ID NTOP_BASE_ID+168
#define PROC_NAME NTOP_BASE_ID+169
#define PROC_FATHER_ID NTOP_BASE_ID+372
#define PROC_FATHER_NAME NTOP_BASE_ID+373
#define PROC_USER_NAME NTOP_BASE_ID+374
#define PROC_CPU_ID NTOP_BASE_ID+375
#define PROC_ACTUAL_MEMORY NTOP_BASE_ID+376
#define PROC_PEAK_MEMORY NTOP_BASE_ID+377
#define PROC_AVERAGE_CPU_LOAD NTOP_BASE_ID+378
#define PROC_NUM_PAGE_FAULTS  NTOP_BASE_ID+379

/* HTTP */
#define HTTP_URL NTOP_BASE_ID+180
#define HTTP_METHOD NTOP_BASE_ID+360
#define HTTP_RET_CODE NTOP_BASE_ID+181
#define HTTP_REFERER NTOP_BASE_ID+182
#define HTTP_UA NTOP_BASE_ID+183
#define HTTP_MIME NTOP_BASE_ID+184
#define HTTP_HOST NTOP_BASE_ID+187
#define HTTP_FBOOK_CHAT NTOP_BASE_ID+188
#define HTTP_SITE      NTOP_BASE_ID+361

/* SMTP */
#define SMTP_MAIL_FROM NTOP_BASE_ID+185
#define SMTP_RCPT_TO   NTOP_BASE_ID+186

/* MySQL */
#define MYSQL_SRV_VERSION NTOP_BASE_ID+195
#define MYSQL_USERNAME NTOP_BASE_ID+196
#define MYSQL_DB NTOP_BASE_ID+197
#define MYSQL_QUERY NTOP_BASE_ID+198
#define MYSQL_RESPONSE NTOP_BASE_ID+199
#define MYSQL_APPL_LATENCY_USEC NTOP_BASE_ID+320

/* Oracle */
#define ORACLE_USERNAME NTOP_BASE_ID+200
#define ORACLE_QUERY NTOP_BASE_ID+201
#define ORACLE_RSP_CODE NTOP_BASE_ID+202
#define ORACLE_RSP_STRING NTOP_BASE_ID+203
#define ORACLE_QUERY_DURATION NTOP_BASE_ID+204

/* DNS */
#define DNS_QUERY NTOP_BASE_ID+205
#define DNS_QUERY_ID NTOP_BASE_ID+206
#define DNS_QUERY_TYPE NTOP_BASE_ID+207
#define DNS_RET_CODE NTOP_BASE_ID+208
#define DNS_NUM_ANSWERS NTOP_BASE_ID+209
#define DNS_TTL_ANSWER  NTOP_BASE_ID+352

/* POP */
#define POP_USER NTOP_BASE_ID+210

/* GTPv1 */
#define GTPV1_REQ_MSG_TYPE NTOP_BASE_ID+220
#define GTPV1_RSP_MSG_TYPE NTOP_BASE_ID+221
#define GTPV1_C2S_TEID_DATA NTOP_BASE_ID+222
#define GTPV1_C2S_TEID_CTRL NTOP_BASE_ID+223
#define GTPV1_S2C_TEID_DATA NTOP_BASE_ID+224
#define GTPV1_S2C_TEID_CTRL NTOP_BASE_ID+225
#define GTPV1_END_USER_IP NTOP_BASE_ID+226
#define GTPV1_END_USER_IMSI NTOP_BASE_ID+227
#define GTPV1_END_USER_MSISDN NTOP_BASE_ID+228
#define GTPV1_END_USER_IMEI NTOP_BASE_ID+229
#define GTPV1_APN_NAME NTOP_BASE_ID+230
#define GTPV1_RAI_MCC NTOP_BASE_ID+231
#define GTPV1_RAI_MNC NTOP_BASE_ID+232
#define GTPV1_RAI_LAC NTOP_BASE_ID+342
#define GTPV1_RAI_RAC NTOP_BASE_ID+343
#define GTPV1_ULI_MCC NTOP_BASE_ID+344
#define GTPV1_ULI_MNC NTOP_BASE_ID+345
#define GTPV1_ULI_CELL_LAC NTOP_BASE_ID+233
#define GTPV1_ULI_CELL_CI NTOP_BASE_ID+234
#define GTPV1_ULI_SAC NTOP_BASE_ID+235
#define GTPV1_RESPONSE_CAUSE  NTOP_BASE_ID+332

/* Radius */
#define RADIUS_REQ_MSG_TYPE NTOP_BASE_ID+240
#define RADIUS_RSP_MSG_TYPE NTOP_BASE_ID+241
#define RADIUS_USER_NAME NTOP_BASE_ID+242
#define RADIUS_CALLING_STATION_ID NTOP_BASE_ID+243
#define RADIUS_CALLED_STATION_ID NTOP_BASE_ID+244
#define RADIUS_NAS_IP_ADDR NTOP_BASE_ID+245
#define RADIUS_NAS_IDENTIFIER NTOP_BASE_ID+246
#define RADIUS_USER_IMSI NTOP_BASE_ID+247
#define RADIUS_USER_IMEI NTOP_BASE_ID+248
#define RADIUS_FRAMED_IP_ADDR NTOP_BASE_ID+249
#define RADIUS_ACCT_SESSION_ID NTOP_BASE_ID+250
#define RADIUS_ACCT_STATUS_TYPE NTOP_BASE_ID+251
#define RADIUS_ACCT_IN_OCTETS NTOP_BASE_ID+252
#define RADIUS_ACCT_OUT_OCTETS NTOP_BASE_ID+253
#define RADIUS_ACCT_IN_PKTS NTOP_BASE_ID+254
#define RADIUS_ACCT_OUT_PKTS NTOP_BASE_ID+255

/* IMAP */
#define IMAP_LOGIN NTOP_BASE_ID+260

/* GTPv2 */
#define GTPV2_REQ_MSG_TYPE NTOP_BASE_ID+270
#define GTPV2_RSP_MSG_TYPE NTOP_BASE_ID+271
#define GTPV2_C2S_S1U_GTPU_TEID NTOP_BASE_ID+272
#define GTPV2_C2S_S1U_GTPU_IP NTOP_BASE_ID+273
#define GTPV2_S2C_S1U_GTPU_TEID NTOP_BASE_ID+274
#define GTPV2_S2C_S1U_GTPU_IP NTOP_BASE_ID+275
#define GTPV2_END_USER_IMSI NTOP_BASE_ID+276
#define GTPV2_END_USER_MSISDN NTOP_BASE_ID+277
#define GTPV2_APN_NAME NTOP_BASE_ID+278
#define GTPV2_ULI_MCC NTOP_BASE_ID+279
#define GTPV2_ULI_MNC NTOP_BASE_ID+280
#define GTPV2_ULI_CELL_TAC NTOP_BASE_ID+281
#define GTPV2_ULI_CELL_ID NTOP_BASE_ID+282
#define GTPV2_RESPONSE_CAUSE  NTOP_BASE_ID+333

/* BGP */
#define SRC_AS_PATH_1 NTOP_BASE_ID+290
#define SRC_AS_PATH_2 NTOP_BASE_ID+291
#define SRC_AS_PATH_3 NTOP_BASE_ID+292
#define SRC_AS_PATH_4 NTOP_BASE_ID+293
#define SRC_AS_PATH_5 NTOP_BASE_ID+294
#define SRC_AS_PATH_6 NTOP_BASE_ID+295
#define SRC_AS_PATH_7 NTOP_BASE_ID+296
#define SRC_AS_PATH_8 NTOP_BASE_ID+297
#define SRC_AS_PATH_9 NTOP_BASE_ID+298
#define SRC_AS_PATH_10 NTOP_BASE_ID+299
#define DST_AS_PATH_1 NTOP_BASE_ID+300
#define DST_AS_PATH_2 NTOP_BASE_ID+301
#define DST_AS_PATH_3 NTOP_BASE_ID+302
#define DST_AS_PATH_4 NTOP_BASE_ID+303
#define DST_AS_PATH_5 NTOP_BASE_ID+304
#define DST_AS_PATH_6 NTOP_BASE_ID+305
#define DST_AS_PATH_7 NTOP_BASE_ID+306
#define DST_AS_PATH_8 NTOP_BASE_ID+307
#define DST_AS_PATH_9 NTOP_BASE_ID+308
#define DST_AS_PATH_10 NTOP_BASE_ID+309

/* GTPv0 */
/* Note NTOP_BASE_ID+320 is used by MySQL */
#define GTPV0_REQ_MSG_TYPE    NTOP_BASE_ID+321
#define GTPV0_RSP_MSG_TYPE    NTOP_BASE_ID+322
#define GTPV0_TID             NTOP_BASE_ID+323
#define GTPV0_END_USER_IP     NTOP_BASE_ID+324
#define GTPV0_END_USER_MSISDN NTOP_BASE_ID+325
#define GTPV0_APN_NAME        NTOP_BASE_ID+326
#define GTPV0_RAI_MCC         NTOP_BASE_ID+327
#define GTPV0_RAI_MNC         NTOP_BASE_ID+328
#define GTPV0_RAI_CELL_LAC    NTOP_BASE_ID+329
#define GTPV0_RAI_CELL_RAC    NTOP_BASE_ID+330
#define GTPV0_RESPONSE_CAUSE  NTOP_BASE_ID+331

#define WHOIS_DAS_DOMAIN      NTOP_BASE_ID+351

#define DHCP_CLIENT_MAC       NTOP_BASE_ID+353
#define DHCP_CLIENT_IP        NTOP_BASE_ID+354
#define DHCP_CLIENT_NAME      NTOP_BASE_ID+355

#define FTP_LOGIN             NTOP_BASE_ID+356
#define FTP_PASSWORD          NTOP_BASE_ID+357
#define FTP_COMMAND           NTOP_BASE_ID+358
#define FTP_COMMAND_RET_CODE  NTOP_BASE_ID+359

/* Last used identifier is NTOP_BASE_ID+379 (PROC_NUM_PAGE_FAULTS) */

#endif /* _NTOP_FLOW_H_ */
