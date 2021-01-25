#include "main.h"
#include "app_pid_error_cmd.h"
/*************************************************
fail : net_phd_pid_error.c
network packet header disassemble prameter idemtification error
4계층중 network층에 해당
packet의 header영역의 PID(error) 분해
**************************************************/

void net_phd_error_sub_pid_rc(prtc_header_t *pPh, uint8_t *pData);
void net_phd_error_sub_pid_ac(prtc_header_t *pPh, uint8_t *pData);
void net_phd_error_sub_pid_bldc(prtc_header_t *pPh, uint8_t *pData);

/******************************************ERROR PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case ERROR_SUB_PID_RC:
			net_phd_error_sub_pid_rc(pPh, pData);
		break;
		case ERROR_SUB_PID_AC:
			net_phd_error_sub_pid_ac(pPh, pData);
		break;
		case ERROR_SUB_PID_BLDC:
			net_phd_error_sub_pid_bldc(pPh, pData);
		break;
	}
}
/******************************************ERROR PID DISASSEMBLE*********************************************/
/******************************************ERROR SUB PID RC DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid-rc의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid_rc(prtc_header_t *pPh, uint8_t *pData)
{
	uint8_t cmd = ret_protocol_header_cmd(pPh);
	switch(cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_rc_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_rc_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_rc_rqt(pPh, pData);
		break;
	}
}
/******************************************ERROR SUB PID RC DISASSEMBLE*********************************************/
/******************************************ERROR SUB PID AC DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid-ac의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid_ac(prtc_header_t *pPh, uint8_t *pData)
{
	uint8_t cmd = ret_protocol_header_cmd(pPh);
	switch(cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_ac_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_ac_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_ac_rqt(pPh, pData);
		break;
	}
}
/******************************************ERROR SUB PID AC DISASSEMBLE*********************************************/
/******************************************ERROR SUB PID BLDC DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid-bldc의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid_bldc(prtc_header_t *pPh, uint8_t *pData)
{
	uint8_t cmd = ret_protocol_header_cmd(pPh);
	switch(cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_bldc_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_bldc_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_bldc_rqt(pPh, pData);
		break;
	}
}
/******************************************ERROR SUB PID BLDC DISASSEMBLE*********************************************/