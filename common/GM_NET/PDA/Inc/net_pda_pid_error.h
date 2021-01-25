#ifndef _NET_PDA_PID_ERROR_H_
#define _NET_PDA_PID_ERROR_H_

uint8_t *net_pda_error_sub_pid_rc_ctl(uint8_t error_code);
uint8_t *net_pda_error_sub_pid_rc_rsp(uint8_t error_code);
uint8_t *net_pda_error_sub_pid_rc_rqt(void);

uint8_t *net_pda_error_sub_pid_ac_ctl(uint8_t error_code);
uint8_t *net_pda_error_sub_pid_ac_rsp(uint8_t error_code);
uint8_t *net_pda_error_sub_pid_ac_rqt(void);

uint8_t *net_pda_error_sub_pid_bldc_ctl(uint8_t error_code);
uint8_t *net_pda_error_sub_pid_bldc_rsp(uint8_t error_code);
uint8_t *net_pda_error_sub_pid_bldc_rqt(void);

#endif