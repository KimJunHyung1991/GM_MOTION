#include "main.h"
#include "app_pid_error_cmd.h"
/*************************************************
fail : net_phd_pid_error.c
network packet header disassemble parameter identification error
4계층중 network층에 해당
packet의 header영역의 PID(error) 분해
**************************************************/

void net_phd_error_sub_pid_rc(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_error_sub_pid_ac(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_error_sub_pid_bldc(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_error_sub_pid_clear(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_error_sub_pid_error_level(uint8_t num, prtc_header_t *pPh, uint8_t *pData);

/******************************************ERROR PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case ERROR_SUB_PID_RC:
			net_phd_error_sub_pid_rc(num, pPh, pData);
		break;
		case ERROR_SUB_PID_AC:
			net_phd_error_sub_pid_ac(num, pPh, pData);
		break;
		case ERROR_SUB_PID_BLDC:
			net_phd_error_sub_pid_bldc(num, pPh, pData);
		break;
		case ERROR_SUB_PID_CLEAR:
			net_phd_error_sub_pid_clear(num, pPh, pData);
		break;
		case ERROR_SUB_PID_ERROR_LEVEL:
			net_phd_error_sub_pid_error_level(num, pPh, pData);
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
void net_phd_error_sub_pid_rc(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_rc_ctl(num, pPh, (prtc_data_ctl_error_rc_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_rc_rsp(num, pPh, (prtc_data_rsp_error_rc_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_rc_rqt(num, pPh, pData);
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
void net_phd_error_sub_pid_ac(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_ac_ctl(num, pPh, (prtc_data_ctl_error_ac_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_ac_rsp(num, pPh, (prtc_data_rsp_error_ac_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_ac_rqt(num, pPh, pData);
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
void net_phd_error_sub_pid_bldc(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_bldc_ctl(num, pPh, (prtc_data_ctl_error_bldc_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_bldc_rsp(num, pPh, (prtc_data_rsp_error_bldc_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_bldc_rqt(num, pPh, pData);
		break;
	}
}
/******************************************ERROR SUB PID BLDC DISASSEMBLE*********************************************/
/******************************************ERROR SUB PID CLEAR DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid-clear의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid_clear(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_clear_ctl(num, pPh, (prtc_data_ctl_error_clear_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_clear_rsp(num, pPh, (prtc_data_rsp_error_clear_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_clear_rqt(num, pPh, pData);
		break;
	}
}
/******************************************ERROR SUB PID CLEAR DISASSEMBLE*********************************************/
/******************************************ERROR SUB PID ERROR LEVEL DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-error의 sub_pid_error_level의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_error_sub_pid_error_level(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_error_sub_pid_error_level_ctl(num, pPh, (prtc_data_ctl_error_level_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_error_sub_pid_error_level_rsp(num, pPh, (prtc_data_rsp_error_level_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_error_sub_pid_error_level_rqt(num, pPh, pData);
		break;
	}
}
/******************************************ERROR SUB PID ERROR LEVEL DISASSEMBLE*********************************************/