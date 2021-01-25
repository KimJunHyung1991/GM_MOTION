#ifndef _NET_PDA_PID_SENSOR_H_
#define _NET_PDA_PID_SENSOR_H_

uint8_t *net_pda_sensor_sub_pid_detect_ctl(uint8_t cw, uint8_t ccw);
uint8_t *net_pda_sensor_sub_pid_detect_rsp(uint8_t cw, uint8_t ccw);
uint8_t *net_pda_sensor_sub_pid_detect_rqt(void);

#endif