#ifndef _NET_PDA_INSPECTION_H_
#define _NET_PDA_INSPECTION_H_


uint8_t *net_pda_inspection_sub_pid_data_ctl(uint8_t *data);
uint8_t *net_pda_inspection_sub_pid_data_rsp(uint8_t *data);
uint8_t *net_pda_inspection_sub_pid_data_rqt(void);


uint8_t *net_pda_inspection_sub_pid_data_play_ctl(uint8_t index, uint8_t *data);
uint8_t *net_pda_inspection_sub_pid_data_play_rsp(uint8_t index, uint8_t *data);
uint8_t *net_pda_inspection_sub_pid_data_play_rqt(uint8_t index);
#endif