#ifndef _NET_PHA_H_
#define _NET_PHA_H_

prtc_header_t *net_pha(uint8_t cmd, uint8_t dlc, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t pid, uint8_t sub_pid, uint8_t souce_sub_id, uint8_t target_sub_id);

#endif