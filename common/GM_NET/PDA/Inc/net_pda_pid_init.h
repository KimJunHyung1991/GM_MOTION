#ifndef _NET_PDA_PID_INIT_H_
#define _NET_PDA_PID_INIT_H_

uint8_t *net_pda_init_sub_pid_boot_ctl(void);
uint8_t *net_pda_init_sub_pid_boot_rsp(void);
uint8_t *net_pda_init_sub_pid_boot_rqt(void);

uint8_t *net_pda_init_sub_pid_driver_data1_ctl(uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio);
uint8_t *net_pda_init_sub_pid_driver_data1_rsp(uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio);
uint8_t *net_pda_init_sub_pid_driver_data1_rqt(void);

uint8_t *net_pda_init_sub_pid_driver_data2_ctl(uint32_t count, uint16_t rpm);
uint8_t *net_pda_init_sub_pid_driver_data2_rsp(uint32_t count, uint16_t rpm);
uint8_t *net_pda_init_sub_pid_driver_data2_rqt(void);

uint8_t *net_pda_init_sub_pid_status_ctl(void);
uint8_t *net_pda_init_sub_pid_status_rsp(uint8_t step, uint8_t status);
uint8_t *net_pda_init_sub_pid_status_rqt(uint8_t step);

uint8_t *net_pda_init_sub_pid_absolute_battery_ctl(uint32_t save_data);
uint8_t *net_pda_init_sub_pid_absolute_battery_rsp(uint32_t save_data);
uint8_t *net_pda_init_sub_pid_absolute_battery_rqt(void);

uint8_t *net_pda_init_sub_pid_move_sensor_ctl(void);
uint8_t *net_pda_init_sub_pid_move_sensor_rsp(void);
uint8_t *net_pda_init_sub_pid_move_sensor_rqt(void);

uint8_t *net_pda_init_sub_pid_move_init_position_ctl(void);
uint8_t *net_pda_init_sub_pid_move_init_position_rsp(void);
uint8_t *net_pda_init_sub_pid_move_init_position_rqt(void);


#endif