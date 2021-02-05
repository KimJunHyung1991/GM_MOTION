#include "main.h"
/*************************************************
fail : dl_can_rx.c
data link can rx
4계층중 data link층에 해당

**************************************************/

can_q_buff_t can_rx_ring_buff;
CAN_RxHeaderTypeDef RxHeader;
uint8_t	RxData[8];

/******************************************ERROR HANDLER*********************************************/
/**
  * @brief  error 처리 함수
  * @param  none
  * @retval none
  */
static void error_handler(void)
{
	while(1)
	{
	}
}
/******************************************ERROR HANDLER*********************************************/
/******************************************PROCESS RX RING BUF HEAD CHECK*********************************************/
/**
  * @brief  can_rx_ring_buff의 head 처리 함수
  * @param  none
  * @retval none
  */
void proc_rx_ring_buff_head_chk(void)
{
	can_rx_ring_buff.head++;
	if(can_rx_ring_buff.head >= CAN_Q_BUFF_SIZE){
		can_rx_ring_buff.head = 0;
	}
}
/******************************************PROCESS RX RING BUF HEAD CHECK*********************************************/
/******************************************PROCESS RX RING BUF TAIL CHECK*********************************************/
/**
  * @brief  can_rx_ring_buff의 tail 처리 함수
  * @param  none
  * @retval none
  */
void proc_rx_ring_buff_tail_chk(void)
{
	can_rx_ring_buff.tail++;
	if(can_rx_ring_buff.tail >= CAN_Q_BUFF_SIZE){
		can_rx_ring_buff.tail = 0;
	}
}
/******************************************PROCESS RX RING BUF TAIL CHECK*********************************************/
/******************************************HAL CAN RX CALL BACK*********************************************/
/**
  * @brief  hal_can_rx callback 함수
  * @param  CAN_HandleTypeDef *hcan : can 핸들러
  * @retval none
  */
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
	if (HAL_CAN_GetRxMessage(hcan, CAN_RX_FIFO0, &RxHeader, (uint8_t *)&can_rx_ring_buff.data[can_rx_ring_buff.head][0]) != HAL_OK)
	{
		error_handler();
	}
	can_rx_ring_buff.can_header[can_rx_ring_buff.head].dlc = RxHeader.DLC;
	can_rx_ring_buff.can_header[can_rx_ring_buff.head].protocol_header_32 = RxHeader.ExtId;
	proc_rx_ring_buff_head_chk();
}
/******************************************HAL CAN RX CALL BACK*********************************************/
/******************************************PROCESS CAN RX*********************************************/
/**
  * @brief  can rx처리 함수
  * @param  none
  * @retval none
  */
void proc_can_rx(void)
{
	if(can_rx_ring_buff.head != can_rx_ring_buff.tail){
		prtc_header_t *pPh = (prtc_header_t *)&can_rx_ring_buff.can_header[can_rx_ring_buff.tail];
		if(pPh->target_id == my_can_id || pPh->target_id == CAN_BROADCAST){
			net_phd_pid(&can_rx_ring_buff.can_header[can_rx_ring_buff.tail], (uint8_t *)&can_rx_ring_buff.data[can_rx_ring_buff.tail]);
		}
		proc_rx_ring_buff_tail_chk();
	}
}
/******************************************PROCESS CAN RX*********************************************/

#if 0
void can_to_uart(prtc_header_t *pPh, uint8_t *pData)
{
	uint8_t pBuf[32];
	packet_header_t2 *pCh = (packet_header_t2 *)pBuf;
	
	
	pCh->stx = 		PACKET_START_CODE;
	pCh->dlc = 		pPh->dlc;
	pCh->src_id = 	pPh->souce_id;
	pCh->tar_id = 	pPh->target_id;
	pCh->cmd = 		pPh->cmd;
	pCh->pid = 		pPh->pid;
	pCh->sub_pid = 	pPh->sub_pid;
	pCh->sub_id = 	pPh->sub_id;
	
	for(int i = 0; i < pCh->dlc; i++){
		pCh->payload[i] = *pData++;
	}
	
	uart_tx_put_buff(0, (uint8_t *)pBuf, pCh->dlc + sizeof(packet_header_t2));
	
	
	
	flag_uart[0] = SET;
}

void proc_can_rx_test(void)
{
	if(can_rx_ring_buff.head != can_rx_ring_buff.tail){
		prtc_header_t *pPh = (prtc_header_t *)&can_rx_ring_buff.can_header[can_rx_ring_buff.tail];
		if(pPh->target_id == my_can_id || pPh->target_id == CAN_BROADCAST){
			can_to_uart(&can_rx_ring_buff.can_header[can_rx_ring_buff.tail], (uint8_t *)&can_rx_ring_buff.data[can_rx_ring_buff.tail]);
		}
		proc_rx_ring_buff_tail_chk();
	}
}
#endif