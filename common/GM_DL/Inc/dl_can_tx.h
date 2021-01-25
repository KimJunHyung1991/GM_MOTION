#ifndef _GM_HAL_CAN_TX_H_
#define _GM_HAL_CAN_TX_H_

extern can_q_buff_t can_tx_ring_buff;
extern CAN_TxHeaderTypeDef   TxHeader;

extern prtc_header_t make_header_buff;
extern uint8_t make_data_buff[8];

void hal_can_protocol_tx(prtc_header_t *can_header, uint8_t *pData);
void proc_can_tx(CAN_HandleTypeDef *canhd);

#endif