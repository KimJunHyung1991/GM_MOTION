#ifndef _GM_HAL_CAN_RX_H_
#define _GM_HAL_CAN_RX_H_

extern can_q_buff_t can_rx_ring_buff;

void proc_can_rx(void);
void proc_can_rx_test(void);
#endif