/* \section COPYRIGHT
 *
 * Copyright 2013-2017 Software Radio Systems Limited
 *
 * \section LICENSE
 *
 * This file is part of srsLTE.
 *
 * srsUE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsUE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */
#ifndef GTPC_V2_H
#define GTPC_V2_H

#include <stdint.h>


namespace srslte{

/*GTP-C Version*/
const uint8_t GTPC_V2 = 2;

/****************************************************************
 *
 * GTP-C Message Types
 * Ref: TS 29.274 v10.14.0 Table 6.1-1 
 *
 ****************************************************************/
const uint8_t GTPC_MSG_TYPE_RESERVED = 0;
const uint8_t GTPC_MSG_TYPE_ECHO_REQUEST = 1;
const uint8_t GTPC_MSG_TYPE_ECHO_RESPONSE = 2;
const uint8_t GTPC_MSG_TYPE_VERSION_SUPPORT = 3;
//4-24 Reserved for S101
//25-31 Reserved for Sv interface
//SGSN/MME/ePDG to PGW (S4/S11, S5/S8, S2b)
const uint8_t GTPC_MSG_TYPE_CREATE_SESSION_REQUEST = 32;
const uint8_t GTPC_MSG_TYPE_CREATE_SESSION_RESPONSE = 33;
const uint8_t GTPC_MSG_TYPE_DELETE_SESSION_REQUEST = 36;
const uint8_t GTPC_MSG_TYPE_DELETE_SESSION_RESPONSE = 37;
//SGSN/MME to PGW (S4/S11, S5/S8)
const uint8_t GTPC_MSG_TYPE_MODIFY_BEARER_REQUEST = 34;
const uint8_t GTPC_MSG_TYPE_MODIFY_BEARER_RESPONSE = 35;
const uint8_t GTPC_MSG_TYPE_CHANGE_NOTIFICATION_REQUEST = 38;
const uint8_t GTPC_MSG_TYPE_CHANGE_NOTIFICATION_RESPONSE = 39;
//40 - 63 for future use
const uint8_t GTPC_MSG_TYPE_RESUME_NOTIFICATION = 164;
const uint8_t GTPC_MSG_TYPE_RESUME_ACKNOWLEDGE = 165;
//Messages without explicit response
const uint8_t GTPC_MSG_TYPE_MODIFY_BEARER_COMMAND = 64;				//(MME/SGSN/ePDG to PGW – S11/S4, S5/S8, S2b)
const uint8_t GTPC_MSG_TYPE_MODIFY_BEARER_FAILURE_INDICATION = 65;		//(PGW to MME/SGSN/ePDG – S5/S8, S11/S4, S2b)
const uint8_t GTPC_MSG_TYPE_DELETE_BEARER_COMMAND = 66;				//(MME/SGSN to PGW – S11/S4, S5/S8)
const uint8_t GTPC_MSG_TYPE_DELETE_BEARER_FAILURE_INDICATION = 67; 		//(PGW to MME/SGSN – S5/S8, S11/S4))
const uint8_t GTPC_MSG_TYPE_BEARER_RESOURCE_COMMAND = 68;  			//(MME/SGSN to PGW – S11/S4, S5/S8)
const uint8_t GTPC_MSG_TYPE_BEARER_RESOURCE_FAILURE_INDICATION = 69; 		//(PGW to MME/SGSN – S5/S8, S11/S4)
const uint8_t GTPC_MSG_TYPE_DOWNLINK_DATA_NOTIFICATION_FAILURE_INDICATION = 70;	//(SGSN/MME to SGW – S4/S11)
const uint8_t GTPC_MSG_TYPE_TRACE_SESSION_ACTIVATION = 71; 			//(MME/SGSN/ePDG to PGW – S11/S4, S5/S8, S2b)
const uint8_t GTPC_MSG_TYPE_TRACE_SESSION_DEACTIVATION = 72;			//(MME/SGSN/ePDG to PGW – S11/S4, S5/S8, S2b)
const uint8_t GTPC_MSG_TYPE_STOP_PAGING_INDICATION = 73;			//(SGW to MME/SGSN – S11/S4)
//74-94 For future use
//P-GW to SGSN/MME/ePDG
const uint8_t GTPC_MSG_TYPE_CREATE_BEARER_REQUEST = 95;
const uint8_t GTPC_MSG_TYPE_CREATE_BEARER_RESPONSE = 96;
const uint8_t GTPC_MSG_TYPE_UPDATE_BEARER_REQUEST = 97;
const uint8_t GTPC_MSG_TYPE_UPDATE_BEARER_RESPONSE = 98;
const uint8_t GTPC_MSG_TYPE_DELETE_BEARER_REQUEST = 99;
const uint8_t GTPC_MSG_TYPE_DELETE_BEARER_RESPONSE = 100;
//PGW to MME, MME to PGW, SGW to PGW, SGW to MME, PGW to ePDG, ePDG to PGW (S5/S8, S11, S2b)
const uint8_t GTPC_MSG_TYPE_DELETE_PDN_CONNECTION_SET_REQUEST = 101;
const uint8_t GTPC_MSG_TYPE_DELETE_PDN_CONNECTION_SET_RESPONSE = 102;
//103-127 For future use
//MME to MME, SGSN to MME, MME to SGSN, SGSN to SGSN (S3/S10/S16)
const uint8_t GTPC_MSG_TYPE_IDENTIFICATION_REQUEST = 128;
const uint8_t GTPC_MSG_TYPE_IDENTIFICATION_RESPONSE = 129;
const uint8_t GTPC_MSG_TYPE_CONTEXT_REQUEST = 130;
const uint8_t GTPC_MSG_TYPE_CONTEXT_RESPONSE = 131;
const uint8_t GTPC_MSG_TYPE_CONTEXT_ACKNOWLEDGE = 132;
const uint8_t GTPC_MSG_TYPE_FORWARD_RELOCATION_REQUEST = 133;
const uint8_t GTPC_MSG_TYPE_FORWARD_RELOCATION_RESPONSE = 134;
const uint8_t GTPC_MSG_TYPE_FORWARD_RELOCATION_COMPLETE_NOTIFICATION = 135;
const uint8_t GTPC_MSG_TYPE_FORWARD_RELOCATION_COMPLETE_ACKNOWLEDGE = 136;
const uint8_t GTPC_MSG_TYPE_FORWARD_ACCESS_CONTEXT_NOTIFICATION = 137;
const uint8_t GTPC_MSG_TYPE_FORWARD_ACCESS_CONTEXT_ACKNOWLEDGE = 138;
const uint8_t GTPC_MSG_TYPE_RELOCATION_CANCEL_REQUEST = 139;
const uint8_t GTPC_MSG_TYPE_RELOCATION_CANCEL_RESPONSE = 140;
const uint8_t GTPC_MSG_TYPE_CONFIGURATION_TRANSFER_TUNNEL = 141;
//142 - 148 For future use
const uint8_t GTPC_MSG_TYPE_RAN_INFORMATION_RELAY = 152;
//SGSN to MME, MME to SGSN (S3)
const uint8_t GTPC_MSG_TYPE_DETACH_NOTIFICATION = 149;
const uint8_t GTPC_MSG_TYPE_DETACH_ACKNOWLEDGE = 150;
const uint8_t GTPC_MSG_TYPE_CS_PAGING_INDICATION = 151;
const uint8_t GTPC_MSG_TYPE_ALERT_MME_NOTIFICATION = 153;
const uint8_t GTPC_MSG_TYPE_ALERT_MME_ACKNOWLEDGE = 154;
const uint8_t GTPC_MSG_TYPE_UE_ACTIVITY_NOTIFICATION = 155;
const uint8_t GTPC_MSG_TYPE_UE_ACTIVITY_ACKNOWLEDGE = 156;
//157 - 159 For future use
//GSN/MME to SGW, SGSN to MME (S4/S11/S3) SGSN to SGSN (S16), SGW to PGW (S5/S8)
const uint8_t GTPC_MSG_TYPE_SUSPEND_NOTIFICATION = 162;
const uint8_t GTPC_MSG_TYPE_SUSPEND_ACKNOWLEDGE = 163;
//SGSN/MME to SGW (S4/S11) const uint8_t GTPC_IE_TYPE_
const uint8_t GTPC_MSG_TYPE_CREATE_FORWARDING_TUNNEL_REQUEST = 160;
const uint8_t GTPC_MSG_TYPE_CREATE_FORWARDING_TUNNEL_RESPONSE = 161;
const uint8_t GTPC_MSG_TYPE_CREATE_INDIRECT_DATA_FORWARDING_TUNNEL_REQUEST = 166;
const uint8_t GTPC_MSG_TYPE_CREATE_INDIRECT_DATA_FORWARDING_TUNNEL_RESPONSE = 167;
const uint8_t GTPC_MSG_TYPE_DELETE_INDIRECT_DATA_FORWARDING_TUNNEL_REQUEST = 168;
const uint8_t GTPC_MSG_TYPE_DELETE_INDIRECT_DATA_FORWARDING_TUNNEL_RESPONSE = 169;
const uint8_t GTPC_MSG_TYPE_RELEASE_ACCESS_BEARERS_REQUEST = 170;
const uint8_t GTPC_MSG_TYPE_RELEASE_ACCESS_BEARERS_RESPONSE = 171;
//172 - 175 For future use
//SGW to SGSN/MME (S4/S11)
const uint8_t GTPC_MSG_TYPE_DOWNLINK_DATA_NOTIFICATION = 176;
const uint8_t GTPC_MSG_TYPE_DOWNLINK_DATA_NOTIFICATION_ACKNOWLEDGE = 177;
const uint8_t GTPC_MSG_TYPE_PGW_RESTART_NOTIFICATION = 179;
const uint8_t GTPC_MSG_TYPE_PGW_RESTART_NOTIFICATION_ACKNOWLEDGE = 180;
//SGW to SGSN (S4)
//178 Reserved. Allocated in earlier version of the specification.
//181 -189 For future use
//SGW to PGW, PGW to SGW (S5/S8)
const uint8_t GTPC_MSG_TYPE_UPDATE_PDN_CONNECTION_SET_REQUEST = 200;
const uint8_t GTPC_MSG_TYPE_UPDATE_PDN_CONNECTION_SET_RESPONSE = 201;
//For future use
//MME to SGW (S11)
const uint8_t GTPC_MSG_TYPE_MODIFY_ACCESS_BEARERS_REQUEST = 211;
const uint8_t GTPC_MSG_TYPE_MODIFY_ACCESS_BEARERS_RESPONSE = 212;
//For future use
//MBMS GW to MME/SGSN (Sm/Sn)
const uint8_t GTPC_MSG_TYPE_MBMS_SESSION_START_REQUEST = 231;
const uint8_t GTPC_MSG_TYPE_MBMS_SESSION_START_RESPONSE = 232;
const uint8_t GTPC_MSG_TYPE_MBMS_SESSION_UPDATE_REQUEST = 233;
const uint8_t GTPC_MSG_TYPE_MBMS_SESSION_UPDATE_RESPONSE = 234;
const uint8_t GTPC_MSG_TYPE_MBMS_SESSION_STOP_REQUEST = 235;
const uint8_t GTPC_MSG_TYPE_MBMS_SESSION_STOP_RESPONSE = 236;
//For future use
//Other
//240 - 255 For future use

/****************************************************************************
 *
 * GTP-C v2 Create Session Request
 * Ref: 3GPP TS 29.274 v10.14.0 Table 7.2.1-1
 *
 ***************************************************************************/

typedef struct gtpc_create_session_request
{
  bool imsi_present;
  uint64_t imsi;   						// C
  bool msidn_present;
  uint64_t msisdn;        					// C
  bool mei_present;
  uint64_t mei;							// C/CO
  /*
  bool user_location_info_present;
  struct user_location_info_ uli;				// C/CO
  bool serving_network_present;
  struct serving_network_ serving_network;			// C/CO

  enum rat_type_ rat_type;					// M
  bool indication_flags_present;
  struct indication_flags_ indication_flags;			// C

  struct fteid_ sender_f_teid;					// M
  bool pgw_addr_present;
  struct fteid_ pgw_addr;					// C

  uint64_t apn;							// M
  bool selection_mode_present;
  enum selection_mode_ selection_mode;				// C/CO
  bool pdn_type_present;
  enum pdn_type_ pdn_type;					// C
  bool pdn_addr_alloc_present;
  struct pdn_addr_alloc_ pdn_addr_alloc;			// C/CO
  bool max_apn_restriction_present;
  enum apn_restriction_ max_apn_restriction;			// C
  bool apn_ambr_present; 
  struct ambr_ apn_ambr;					// C
  bool linked_eps_bearer_id_present;
  uint8_t linked_eps_bearer_id;					// C
  bool pco_present;
  uint8_t pco;							// C

  struct bearer_context_ bearer_context_created;		// M
  bool bearer_context_deleted_present;
  struct bearer_context_ bearer_context_deleted;		// C
  bool trace_information_present;
  struct trace_infromation_ trace_information;			// C
  bool recovery_present
  uint8_t recovery;						// C
  bool mme_fq_csid_present;
  struct fq_csid_ mme_fq_csid;					// C
  bool sgw_fq_csid_present;
  struct fq_csid_ sgw_fq_csid; 					// C
  bool epdg_fq_csid_present;
  struct fq_csid_ epdg_fq_csid;					// C
  bool ue_time_zone_present;
  struct ue_time_zone_ ue_time_zone;				// CO
  bool uci_present;
  struct uci_ uci;						// CO
  bool charging_caracteristics_present;
  enum charging_characteristics_ charging_caracteristics;	// O
  bool mme_ldn_present;
  uint8_t mme_ldn[LDN_MAX_SIZE];				// O
  bool sgw_ldn_present;
  uint8_t sgw_ldn[LDN_MAX_SIZE];				// O
  bool epgd_ldn_present;
  uint8_t epdg_ldn[LDN_MAX_SIZE];				// O
  bool signaling_priority_indication;
  enum signalling_priority_indication_ spi;			// CO
  bool acpo_present;
  uint8_t apco;							// CO
  bool ext;							// O
  */
} gtpc_create_session_request_t;


/****************************************************************************
 * GTP-C v2 Header
 * Ref: 3GPP TS 29.274 v10.14.0 Section 5
 *
 *        | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 |
 *
 * 1      |  Version  | P | T | S | S | S |
 * 2      |           Message Type        |
 * 3      |         Length (1st Octet)    |
 * 4      |         Length (2nd Octet)    |
 * m      |   If T=1, TEID (1st Octet)    |
 * m+1    |   If T=1, TEID (2nd Octet)    |
 * m+2    |   If T=1, TEID (3st Octet)    |
 * m+3    |   If T=1, TEID (4st Octet)    |
 * n      |           Sequence            |
 * n+1    |           Sequence            |
 * n+2    |           Sequence            |
 * n+3    |            Spare              |
 ***************************************************************************/

  typedef struct gtpc_header
  {
    uint8_t version;
    bool piggyback;
    bool teid_present;
    uint8_t type;
    uint64_t teid;
    uint64_t sequence;
  } gtpc_header_t;

/****************************************************************************
 * GTP-C v2 Payload
 * Ref: 3GPP TS 29.274 v10.14.0 Section 5
 *
 * Union that hold the different structures for the possible message types.
 ***************************************************************************/

typedef union gtpc_msg_choice
{
  struct gtpc_create_session_request create_session_request;
} gtpc_msg_choice_t;

/****************************************************************************
 * GTP-C v2 Message
 * Ref: 3GPP TS 29.274 v10.14.0
 *
 * This is the main structure to represent a GTP-C message. It is composed
 * of one GTP-C header and one union of structures, which can hold
 * all the possible GTP-C messages
 ***************************************************************************/

typedef struct gtpc_pdu
{
  struct gtpc_header header;
  union gtpc_msg_choice choice;
} gtpc_pdu_t;



};

#endif
