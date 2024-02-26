#ifndef _NET_PDA_INSPECTION_H_
#define _NET_PDA_INSPECTION_H_

/***********************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_ctl(uint8_t index);
uint8_t *net_pda_inspection_sub_pid_data_rsp(uint8_t index);
uint8_t *net_pda_inspection_sub_pid_data_rqt(uint8_t index);
/***********************************************************************************/
/***********************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_ver_rsp(uint8_t index, uint32_t ver);
/***********************************************************************************/
/***********************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_ping_ctl(uint8_t index, uint16_t count);
uint8_t *net_pda_inspection_sub_pid_data_ping_rsp(uint8_t index, uint16_t count);
/***********************************************************************************/
/***********************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_bool_rsp(uint8_t index, uint8_t Bool);
/***********************************************************************************/
#endif