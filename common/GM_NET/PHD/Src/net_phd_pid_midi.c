#include "main.h"
#include "app_pid_midi_cmd.h"
/*************************************************
fail : net_phd_pid_midi.c
network packet header disassemble parameter identification midi
4계층중 network층에 해당
packet의 header영역의 PID(midi) 분해
**************************************************/

void net_phd_midi_sub_pid_adc(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_button(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_led(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_id(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_nick_name_h(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_nick_name_l(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_range_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_page(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_exist(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_last_page(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
/******************************************MIDI PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case MIDI_SUB_PID_ADC:
			net_phd_midi_sub_pid_adc(num, pPh, pData);
		break;
		case MIDI_SUB_PID_BUTTON:
			net_phd_midi_sub_pid_button(num, pPh, pData);
		break;
		case MIDI_SUB_PID_LED:
			net_phd_midi_sub_pid_led(num, pPh, pData);
		break;
		case MIDI_SUB_PID_ID:
			net_phd_midi_sub_pid_id(num, pPh, pData);
		break;
		case MIDI_SUB_PID_NICK_NAME_H:
			net_phd_midi_sub_pid_nick_name_h(num, pPh, pData);
		break;
		case MIDI_SUB_PID_NICK_NAME_L:
			net_phd_midi_sub_pid_nick_name_l(num, pPh, pData);
		break;
		case MIDI_SUB_PID_RANGE_DATA:
			net_phd_midi_sub_pid_range_data(num, pPh, pData);
		break;
		case MIDI_SUB_PID_PAGE:
			net_phd_midi_sub_pid_page(num, pPh, pData);
		break;
		case MIDI_SUB_PID_EXIST:
			net_phd_midi_sub_pid_exist(num, pPh, pData);
		break;
		case MIDI_SUB_PID_LAST_PAGE:
			net_phd_midi_sub_pid_last_page(num, pPh, pData);
		break;
	}
}
/******************************************MIDI PID DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID ADC DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-adc의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_adc(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_adc_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_adc_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_adc_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID ADC DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID BUTTON DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-button의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_button(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_button_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_button_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_button_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID BUTTON DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID LED DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-led의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_led(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_led_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_led_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_led_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID LED DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID ID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_id(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_id_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_id_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_id_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID ID DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID NICK NAME H DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_nick_name_h(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_nick_name_h_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_nick_name_h_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_nick_name_h_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID NICK NAME H DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID NICK NAME L DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_nick_name_l(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_nick_name_l_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_nick_name_l_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_nick_name_l_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID NICK NAME L DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID RANGE DATA DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_range_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_range_data_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_range_data_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_range_data_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID RANGE DATA DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID PAGE DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_page(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_page_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_page_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_page_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID PAGE DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID EXSIT DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_exist(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_exist_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_exist_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_exist_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID EXSIT DISASSEMBLE*********************************************/
/******************************************MIDI SUB PID LAST PAGE DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid-id의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid_last_page(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_last_page_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_last_page_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_last_page_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID LAST PAGE DISASSEMBLE*********************************************/