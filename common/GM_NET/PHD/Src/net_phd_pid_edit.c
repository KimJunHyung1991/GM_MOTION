#include "main.h"
#include "app_pid_edit_cmd.h"
/*************************************************
fail : net_phd_pid_edit.c
network packet header disassemble parameter identification edit
4계층중 network층에 해당
packet의 header영역의 PID(edit) 분해
**************************************************/


void net_phd_edit_sub_pid_action(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_edit_sub_pid_status(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
/******************************************EDIT PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-edit의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_edit_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case EDIT_SUB_PID_ACTION:
			net_phd_edit_sub_pid_action(num, pPh, pData);
		break;
		case EDIT_SUB_PID_PLAY_CNT:
		break;
		case EDIT_SUB_PID_STATUS:
			net_phd_edit_sub_pid_status(num, pPh, pData);
		break;
	}
}
/******************************************EDIT PID DISASSEMBLE*********************************************/
/******************************************EDIT SUB PID ACTION DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-edit의 sub_pid-action의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_edit_sub_pid_action(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_edit_sub_pid_action_ctl(num, pPh, (prtc_data_ctl_edit_action_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_edit_sub_pid_action_rsp(num, pPh, (prtc_data_rsp_edit_action_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_edit_sub_pid_action_rqt(num, pPh, pData);
		break;
	}
}
/******************************************EDIT SUB PID ACTION DISASSEMBLE*********************************************/
/******************************************EDIT SUB PID STATUS DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-edit의 sub_pid-action의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_edit_sub_pid_status(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_edit_sub_pid_status_ctl(num, pPh, (prtc_data_ctl_edit_status_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_edit_sub_pid_status_rsp(num, pPh, (prtc_data_rsp_edit_status_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_edit_sub_pid_status_rqt(num, pPh, pData);
		break;
	}
}
/******************************************EDIT SUB PID STATUS DISASSEMBLE*********************************************/