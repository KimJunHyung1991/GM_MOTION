#ifndef _NET_PDA_PID_EDIT_H_
#define _NET_PDA_PID_EDIT_H_

uint8_t *net_pda_edit_sub_pid_action_ctl(uint8_t action, uint32_t op_val);
uint8_t *net_pda_edit_sub_pid_action_rsp(uint8_t action, uint32_t op_val);
uint8_t *net_pda_edit_sub_pid_action_rqt(void);

#endif