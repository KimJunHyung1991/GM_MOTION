#include "main.h"
#include "app_pid_midi_cmd.h"
/*************************************************
fail : net_phd_pid_midi.c
network packet header disassemble parameter identification midi
4계층중 network층에 해당
packet의 header영역의 PID(midi) 분해
**************************************************/

void net_phd_midi_sub_pid_adc(prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_button(prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_led(prtc_header_t *pPh, uint8_t *pData);
void net_phd_midi_sub_pid_id(prtc_header_t *pPh, uint8_t *pData);

/******************************************MIDI PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-midi의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_midi_sub_pid(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case MIDI_SUB_PID_ADC:
			net_phd_midi_sub_pid_adc(pPh, pData);
		break;
		case MIDI_SUB_PID_BUTTON:
			net_phd_midi_sub_pid_button(pPh, pData);
		break;
		case MIDI_SUB_PID_LED:
			net_phd_midi_sub_pid_led(pPh, pData);
		break;
		case MIDI_SUB_PID_ID:
			net_phd_midi_sub_pid_id(pPh, pData);
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
void net_phd_midi_sub_pid_adc(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_adc_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_adc_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_adc_rqt(pPh, pData);
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
void net_phd_midi_sub_pid_button(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_button_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_button_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_button_rqt(pPh, pData);
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
void net_phd_midi_sub_pid_led(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_led_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_led_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_led_rqt(pPh, pData);
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
void net_phd_midi_sub_pid_id(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_midi_sub_pid_id_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_midi_sub_pid_id_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_midi_sub_pid_id_rqt(pPh, pData);
		break;
	}
}
/******************************************MIDI SUB PID ID DISASSEMBLE*********************************************/