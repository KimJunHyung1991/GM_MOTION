#include "main.h"
/*************************************************
fail : dl_can_tx.c
data link can tx
4계층중 data link층에 해당

**************************************************/

can_q_buff_t can_tx_ring_buff;
CAN_TxHeaderTypeDef   TxHeader;
uint8_t TxData[8];

prtc_header_t make_header_buff;
uint8_t make_data_buff[8];

uint32_t TxMailbox;

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
/******************************************PROCESS TX RING BUF HEAD CHECK*********************************************/
/**
  * @brief  can_tx_ring_buff의 head 처리 함수
  * @param  none
  * @retval none
  */
void proc_tx_ring_buff_head_chk(void)
{
	can_tx_ring_buff.head++;
	if(can_tx_ring_buff.head > CAN_Q_BUFF_SIZE-1){
		can_tx_ring_buff.head = 0;
	}
}
/******************************************PROCESS TX RING BUF HEAD CHECK*********************************************/
/******************************************PROCESS TX RING BUF TAIL CHECK*********************************************/
/**
  * @brief  can_tx_ring_buff의 tail 처리 함수
  * @param  none
  * @retval none
  */
void proc_tx_ring_buff_tail_chk(void)
{
	can_tx_ring_buff.tail++;
	if(can_tx_ring_buff.tail >= CAN_Q_BUFF_SIZE){
		can_tx_ring_buff.tail = 0;
	}
}
/******************************************PROCESS TX RING BUF TAIL CHECK*********************************************/
/******************************************PROCESS CAN TX *********************************************/
/**
  * @brief  can tx처리 함수
  * @param  none
  * @retval none
  */
void hal_can_protocol_tx(prtc_header_t *can_header, uint8_t *pData)
{
	memcpy((void *)&can_tx_ring_buff.can_header[can_tx_ring_buff.head], can_header, sizeof(prtc_header_t));
	memcpy((void *)&can_tx_ring_buff.data[can_tx_ring_buff.head][0], pData, can_header->dlc);
	proc_tx_ring_buff_head_chk();
}
/******************************************PROCESS CAN TX *********************************************/
/******************************************HAL CAN TX *********************************************/
/**
  * @brief  hal_can_tx 함수
  * @param  CAN_HandleTypeDef *hcan : can 핸들러
  * @retval none
  */
void proc_can_tx(CAN_HandleTypeDef *canhd)
{
	if(can_tx_ring_buff.head != can_tx_ring_buff.tail){
		if(HAL_CAN_GetTxMailboxesFreeLevel(canhd) == 3){
			TxHeader.IDE = CAN_ID_EXT;
			TxHeader.RTR = can_tx_ring_buff.can_header[can_tx_ring_buff.tail].cmd1;
			TxHeader.DLC = can_tx_ring_buff.can_header[can_tx_ring_buff.tail].dlc;
			TxHeader.ExtId = can_tx_ring_buff.can_header[can_tx_ring_buff.tail].protocol_header_32;
			TxHeader.TransmitGlobalTime = DISABLE;
			if (HAL_CAN_AddTxMessage(canhd, &TxHeader, (uint8_t *)&can_tx_ring_buff.data[can_tx_ring_buff.tail][0], &TxMailbox) != HAL_OK){
				error_handler();
			}
			proc_tx_ring_buff_tail_chk();
		}
	}
}
/******************************************HAL CAN TX *********************************************/