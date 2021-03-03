#ifndef _GM_HAL_CAN_TX_H_
#define _GM_HAL_CAN_TX_H_

extern can_q_buff_t can_tx_ring_buff[CAN_CNT];

extern prtc_header_t make_header_buff;
extern uint8_t make_data_buff[8];

void gm_motion_RX_LED_init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState ledOnState);//210218 shs

void hal_can_protocol_tx(uint8_t num, prtc_header_t *can_header, uint8_t *pData);
void proc_can_tx(void);

#endif
