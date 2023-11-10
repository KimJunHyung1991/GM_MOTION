#ifndef _GM_HAL_CAN_RX_H_
#define _GM_HAL_CAN_RX_H_

extern can_q_buff_t can_tx_ring_buff[CAN_CNT];

void gm_motion_TX_LED_init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState ledOnState);//210218 shs
void HAL_CAN_RxFifo0MsgPendingCallback_ByPass(CAN_HandleTypeDef *hcan);//231110 shs

void proc_can_rx(void);
void proc_can_rx_test(void);
#endif
