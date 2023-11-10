#ifndef _NET_PDA_PID_MOTION_H_
#define _NET_PDA_PID_MOTION_H_

uint8_t *net_pda_motion_sub_pid_adc_ctl(uint16_t adc_val);
uint8_t *net_pda_motion_sub_pid_adc_rsp(uint16_t adc_val);
uint8_t *net_pda_motion_sub_pid_adc_rqt(void);

uint8_t *net_pda_motion_sub_pid_angle_ctl(uint32_t angle_val);
uint8_t *net_pda_motion_sub_pid_angle_rsp(uint32_t angle_val);
uint8_t *net_pda_motion_sub_pid_angle_rqt(void);

uint8_t *net_pda_motion_sub_pid_direction_ctl(uint8_t id, uint8_t direction, uint8_t val);
uint8_t *net_pda_motion_sub_pid_direction_rsp(uint8_t id, uint8_t direction, uint8_t val);
uint8_t *net_pda_motion_sub_pid_direction_rqt(void);

uint8_t *net_pda_motion_sub_pid_profile_position_ctl(uint32_t time, uint16_t location);
uint8_t *net_pda_motion_sub_pid_profile_position_rsp(uint32_t time, uint16_t location);
uint8_t *net_pda_motion_sub_pid_profile_position_rqt(void);
#endif