#include "main.h"
#include <string.h>
/*************************************************
fail : dl_can_tx.c
data link can tx
4계층중 data link층에 해당

**************************************************/

can_q_buff_t can_tx_ring_buff[CAN_CNT];
prtc_header_t make_header_buff;
uint8_t make_data_buff[8];

can_comm_led tx_led = {0,};	//210218 shs//210430kjh

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

/******************************************LED Driver*********************************************/
//210218 shs//210430kjh
//init
void gm_motion_TX_LED_init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState ledOnState)
{
	if(tx_led.cnt >= CAN_CNT) return;
	tx_led.data[tx_led.cnt].f_init = SET;
	tx_led.data[tx_led.cnt].GPIO = GPIOx;
	tx_led.data[tx_led.cnt].Pin = GPIO_Pin;
	tx_led.data[tx_led.cnt++].ledOnState = ledOnState;
}
//led on
static void gm_motion_TX_LED_ON(uint8_t num)
{
	if(num >= CAN_CNT) return;
	if(tx_led.data[num].f_init)
	{
		if(tx_led.data[num].ledOnState == GPIO_PIN_RESET)	//gpio low -> led on
			tx_led.data[num].GPIO->ODR &= ~tx_led.data[num].Pin;
		else
			tx_led.data[num].GPIO->ODR |= tx_led.data[num].Pin;		//gpio high ->led on

		tx_led.data[num].t_led_off = HAL_GetTick();
	}
}
//led off
static void gm_motion_TX_LED_OFF(void)
{
	for(int i = 0; i < tx_led.cnt; i++){
		if(tx_led.data[i].f_init)
		{
			if(tx_led.data[i].t_led_off != HAL_GetTick())
			{
				if (tx_led.data[i].ledOnState == GPIO_PIN_RESET)	//gpio high -> led off
					tx_led.data[i].GPIO->ODR |= tx_led.data[i].Pin;
				else
					tx_led.data[i].GPIO->ODR &= ~tx_led.data[i].Pin;		//gpio low ->led off
			}
		}
	}
}
//210218 shs
/******************************************LED Driver*********************************************/

/******************************************PROCESS TX RING BUF HEAD CHECK*********************************************/
/**
  * @brief  can_tx_ring_buff의 head 처리 함수
  * @param  none
  * @retval none
  */
void proc_tx_ring_buff_head_chk(uint8_t num)
{
	can_tx_ring_buff[num].head++;
	if(can_tx_ring_buff[num].head > CAN_Q_BUFF_SIZE-1){
		can_tx_ring_buff[num].head = 0;
	}
}
/******************************************PROCESS TX RING BUF HEAD CHECK*********************************************/
/******************************************PROCESS TX RING BUF TAIL CHECK*********************************************/
/**
  * @brief  can_tx_ring_buff의 tail 처리 함수
  * @param  none
  * @retval none
  */
void proc_tx_ring_buff_tail_chk(uint8_t num)
{
	can_tx_ring_buff[num].tail++;
	if(can_tx_ring_buff[num].tail >= CAN_Q_BUFF_SIZE){
		can_tx_ring_buff[num].tail = 0;
	}
}
/******************************************PROCESS TX RING BUF TAIL CHECK*********************************************/
/******************************************PROCESS CAN TX *********************************************/
/**
  * @brief  can tx처리 함수
  * @param  none
  * @retval none
  */
void hal_can_protocol_tx(uint8_t num, prtc_header_t *can_header, uint8_t *pData)
{
	memcpy((void *)&can_tx_ring_buff[num].can_header[can_tx_ring_buff[num].head], can_header, sizeof(prtc_header_t));
	memcpy((void *)&can_tx_ring_buff[num].data[can_tx_ring_buff[num].head][0], pData, can_header->dlc);
	proc_tx_ring_buff_head_chk(num);
}
/******************************************PROCESS CAN TX *********************************************/
/******************************************HAL CAN TX *********************************************/
/**
  * @brief  hal_can_tx 함수
  * @param  CAN_HandleTypeDef *hcan : can 핸들러
  * @retval none
  */
void proc_can_tx(void)
{
	for(int i = 0; i < can_init.cnt; i++){
		if(can_tx_ring_buff[i].head != can_tx_ring_buff[i].tail){
			if(HAL_CAN_GetTxMailboxesFreeLevel(can_init.data[i].canhandle) == 3){
				can_init.data[i].txheader.IDE = CAN_ID_EXT;
				can_init.data[i].txheader.DLC = can_tx_ring_buff[i].can_header[can_tx_ring_buff[i].tail].dlc;
				can_init.data[i].txheader.ExtId = can_tx_ring_buff[i].can_header[can_tx_ring_buff[i].tail].protocol_header_32;
				can_init.data[i].txheader.TransmitGlobalTime = DISABLE;
				if (HAL_CAN_AddTxMessage(can_init.data[i].canhandle, &can_init.data[i].txheader, (uint8_t *)&can_tx_ring_buff[i].data[can_tx_ring_buff[i].tail][0], (uint32_t *)&can_init.data[i].txmailbox) != HAL_OK){
					error_handler();
				}
				proc_tx_ring_buff_tail_chk(i);
				gm_motion_TX_LED_ON(i);//210218 shs//210430kjh
			}
		}
	}
	gm_motion_TX_LED_OFF();//210218 shs
}
/******************************************HAL CAN TX *********************************************/
