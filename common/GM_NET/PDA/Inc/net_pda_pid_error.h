#ifndef _NET_PDA_PID_ERROR_H_
#define _NET_PDA_PID_ERROR_H_

uint8_t *net_pda_error_sub_pid_rc_ctl(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_rc_rsp(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_rc_rqt(void);

uint8_t *net_pda_error_sub_pid_ac_ctl(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_ac_rsp(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_ac_rqt(void);

uint8_t *net_pda_error_sub_pid_bldc_ctl(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_bldc_rsp(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_bldc_rqt(void);

uint8_t *net_pda_error_sub_pid_clear_ctl(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_clear_rsp(uint32_t error_code);
uint8_t *net_pda_error_sub_pid_clear_rqt(void);

uint8_t *net_pda_error_sub_pid_error_level_ctl(uint8_t motor_type, char *err_str);
uint8_t *net_pda_error_sub_pid_error_level_rsp(uint8_t motor_type, char *err_str);
uint8_t *net_pda_error_sub_pid_error_level_rqt(void);

uint8_t *net_pda_error_sub_pid_error_transmission_ctl(uint8_t id, uint8_t sub_id, uint8_t err_lv, char *err_str);
uint8_t *net_pda_error_sub_pid_error_transmission_rsp(uint8_t id, uint8_t sub_id, uint8_t err_lv ,char *err_str);
uint8_t *net_pda_error_sub_pid_error_transmission_rqt(void);
#endif