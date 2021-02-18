#include "main.h"
#include <string.h>
/*************************************************
fail : dl_can_tx.c
data link can tx
4������ data link���� �ش�

**************************************************/

can_q_buff_t can_tx_ring_buff;
CAN_TxHeaderTypeDef   TxHeader;
uint8_t TxData[8];

prtc_header_t make_header_buff;
uint8_t make_data_buff[8];

uint32_t TxMailbox;

can_comm_led tx_led = {0,};	//210218 shs
/******************************************ERROR HANDLER*********************************************/
/**
  * @brief  error ó�� �Լ�
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

/******************************************LED Driver*********************************************/
//210218 shs
//init
void gm_motion_TX_LED_init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState ledOnState)
{
	tx_led.f_init = SET;
	tx_led.GPIO = GPIOx;
	tx_led.Pin = GPIO_Pin;
	tx_led.ledOnState = ledOnState;
}
//led on
static void gm_motion_TX_LED_ON(void)
{
	if(tx_led.f_init)
	{
		if(tx_led.ledOnState == GPIO_PIN_RESET)	//gpio low -> led on
			tx_led.GPIO->ODR &= ~tx_led.Pin;
		else
			tx_led.GPIO->ODR |= tx_led.Pin;		//gpio high ->led on

		tx_led.t_led_off = HAL_GetTick();
	}
}
//led off
static void gm_motion_TX_LED_OFF(void)
{
	if(tx_led.f_init)
	{
		if(tx_led.t_led_off != HAL_GetTick())
		{
			if (tx_led.ledOnState == GPIO_PIN_RESET)	//gpio high -> led off
				tx_led.GPIO->ODR |= tx_led.Pin;
			else
				tx_led.GPIO->ODR &= ~tx_led.Pin;		//gpio low ->led off
		}
	}
}
//210218 shs
/******************************************LED Driver*********************************************/

/******************************************PROCESS TX RING BUF HEAD CHECK*********************************************/
/**
  * @brief  can_tx_ring_buff�� head ó�� �Լ�
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
  * @brief  can_tx_ring_buff�� tail ó�� �Լ�
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
  * @brief  can txó�� �Լ�
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
  * @brief  hal_can_tx �Լ�
  * @param  CAN_HandleTypeDef *hcan : can �ڵ鷯
  * @retval none
  */
void proc_can_tx(CAN_HandleTypeDef *canhd)
{
	if(can_tx_ring_buff.head != can_tx_ring_buff.tail){
		if(HAL_CAN_GetTxMailboxesFreeLevel(canhd) == 3){
			TxHeader.IDE = CAN_ID_EXT;
			TxHeader.DLC = can_tx_ring_buff.can_header[can_tx_ring_buff.tail].dlc;
			TxHeader.ExtId = can_tx_ring_buff.can_header[can_tx_ring_buff.tail].protocol_header_32;
			TxHeader.TransmitGlobalTime = DISABLE;
			if (HAL_CAN_AddTxMessage(canhd, &TxHeader, (uint8_t *)&can_tx_ring_buff.data[can_tx_ring_buff.tail][0], &TxMailbox) != HAL_OK){
				error_handler();
			}
			proc_tx_ring_buff_tail_chk();
			gm_motion_TX_LED_ON();//210218 shs
		}
	}
	gm_motion_TX_LED_OFF();//210218 shs
}
/******************************************HAL CAN TX *********************************************/
