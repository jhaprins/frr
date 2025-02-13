// SPDX-License-Identifier: GPL-2.0-or-later
/* BGP4V2-MIB SNMP support
 *
 * Using: http://www.circitor.fr/Mibs/Html/B/BGP4V2-MIB.php
 *
 * Copyright (C) 2022 Donatas Abraitis <donatas@opensourcerouting.org>
 */

#ifndef _FRR_BGP_SNMP_BGP4V2_H_
#define _FRR_BGP_SNMP_BGP4V2_H_

/* bgp4V2 */
#define BGP4V2MIB 1, 3, 6, 1, 3, 5, 1

/* bgp4V2PeerEntry:
 * offset 1.3.6.1.3.5.1.1.2.1.x.(1|2).(4|16) = 13
 */
#define BGP4V2_PEER_ENTRY_OFFSET 13
#define BGP4V2_PEER_INSTANCE 1
#define BGP4V2_PEER_LOCAL_ADDR_TYPE 2
#define BGP4V2_PEER_LOCAL_ADDR 3
#define BGP4V2_PEER_REMOTE_ADDR_TYPE 4
#define BGP4V2_PEER_REMOTE_ADDR 5
#define BGP4V2_PEER_LOCAL_PORT 6
#define BGP4V2_PEER_LOCAL_AS 7
#define BGP4V2_PEER_LOCAL_IDENTIFIER 8
#define BGP4V2_PEER_REMOTE_PORT 9
#define BGP4V2_PEER_REMOTE_AS 10
#define BGP4V2_PEER_REMOTE_IDENTIFIER 11
#define BGP4V2_PEER_ADMIN_STATUS 12
#define BGP4V2_PEER_STATE 13
#define BGP4V2_PEER_DESCRIPTION 14

/* bgp4V2PeerErrorsEntry */
#define BGP4V2_PEER_LAST_ERROR_CODE_RECEIVED 1
#define BGP4V2_PEER_LAST_ERROR_SUBCODE_RECEIVED 2
#define BGP4V2_PEER_LAST_ERROR_RECEIVED_TIME 3
#define BGP4V2_PEER_LAST_ERROR_RECEIVED_TEXT 4
#define BGP4V2_PEER_LAST_ERROR_RECEIVED_DATA 5
#define BGP4V2_PEER_LAST_ERROR_CODE_SENT 6
#define BGP4V2_PEER_LAST_ERROR_SUBCODE_SENT 7
#define BGP4V2_PEER_LAST_ERROR_SENT_TIME 8
#define BGP4V2_PEER_LAST_ERROR_SENT_TEXT 9
#define BGP4V2_PEER_LAST_ERROR_SENT_DATA 10

/* bgp4V2PeerEventTimesEntry */
#define BGP4V2_PEER_FSM_ESTABLISHED_TIME 1
#define BGP4V2_PEER_PEER_IN_UPDATES_ELAPSED_TIME 2

/* bgp4V2NlriEntry
 * offset 1.3.6.1.3.5.1.1.9.1.x.(1|2).(4|16) = 13
 */
#define BGP4V2_NLRI_ENTRY_OFFSET 13
#define BGP4V2_NLRI_INDEX 1
#define BGP4V2_NLRI_AFI 2
#define BGP4V2_NLRI_SAFI 3
#define BGP4V2_NLRI_PREFIX_TYPE 4
#define BGP4V2_NLRI_PREFIX 5
#define BGP4V2_NLRI_PREFIX_LEN 6
#define BGP4V2_NLRI_BEST 7
#define BGP4V2_NLRI_CALC_LOCAL_PREF 8
#define BGP4V2_NLRI_ORIGIN 9
#define BGP4V2_NLRI_NEXT_HOP_ADDR_TYPE 10
#define BGP4V2_NLRI_NEXT_HOP_ADDR 11
#define BGP4V2_NLRI_LINK_LOCAL_NEXT_HOP_ADDR_TYPE 12
#define BGP4V2_NLRI_LINK_LOCAL_NEXT_HOP_ADDR 13
#define BGP4V2_NLRI_LOCAL_PREF_PRESENT 14
#define BGP4V2_NLRI_LOCAL_PREF 15
#define BGP4V2_NLRI_MED_PRESENT 16
#define BGP4V2_NLRI_MED 17
#define BGP4V2_NLRI_ATOMIC_AGGREGATE 18
#define BGP4V2_NLRI_AGGREGATOR_PRESENT 19
#define BGP4V2_NLRI_AGGREGATOR_AS 20
#define BGP4V2_NLRI_AGGREGATOR_ADDR 21
#define BGP4V2_NLRI_AS_PATH_CALC_LENGTH 22
#define BGP4V2_NLRI_AS_PATH_STRING 23
#define BGP4V2_NLRI_AS_PATH 24
#define BGP4V2_NLRI_PATH_ATTR_UNKNOWN 25

/* bgp4V2Notifications */
#define BGP4V2_ESTABLISHED_NOTIFICATION 1
#define BGP4V2_BACKWARD_TRANSITION_NOTIFICATION 2

extern int bgp_snmp_bgp4v2_init(struct thread_master *tm);

#endif /* _FRR_BGP_SNMP_BGP4V2_H_ */
