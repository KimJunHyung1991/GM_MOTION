#ifndef _NET_PDA_PID_SPEAKER_H_
#define _NET_PDA_PID_SPEAKER_H_

uint8_t *net_pda_speaker_sub_pid_action_ctl(uint8_t action);
uint8_t *net_pda_speaker_sub_pid_action_rsp(uint8_t action);
uint8_t *net_pda_speaker_sub_pid_action_rqt(void);
uint8_t *net_pda_speaker_sub_pid_action_play_num_ctl(uint8_t action, uint8_t num);
#endif