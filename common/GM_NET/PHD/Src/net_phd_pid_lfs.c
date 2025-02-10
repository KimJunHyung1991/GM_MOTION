#include "main.h"
#include "app_pid_lfs_cmd.h"
/*************************************************
fail : net_phd_pid_lfs.c
network packet header disassemble parameter identification large file system
4계층중 network층에 해당
packet의 header영역의 PID(lfs) 분해
**************************************************/


void net_phd_lfs_sub_pid_mode(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_lfs_sub_pid_start(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_lfs_sub_pid_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_lfs_sub_pid_end(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
/******************************************LFS PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-lfs의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_lfs_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case LFS_SUB_PID_MODE:
			net_phd_lfs_sub_pid_mode(num, pPh, pData);
		break;
		case LFS_SUB_PID_START:
			net_phd_lfs_sub_pid_start(num, pPh, pData);
		break;
		case LFS_SUB_PID_DATA:
			net_phd_lfs_sub_pid_data(num, pPh, pData);
		break;
		case LFS_SUB_PID_END:
			net_phd_lfs_sub_pid_end(num, pPh, pData);
		break;
	}
}
/******************************************LFS PID DISASSEMBLE*********************************************/
/******************************************LFS SUB PID MODE DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-lfs의 sub_pid-MODE의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_lfs_sub_pid_mode(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_lfs_sub_pid_mode_ctl(num, pPh, (prtc_data_ctl_lfs_mode_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_lfs_sub_pid_mode_rsp(num, pPh, (prtc_data_rsp_lfs_mode_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_lfs_sub_pid_mode_rqt(num, pPh, pData);
		break;
	}
}
/******************************************LFS SUB PID MODE DISASSEMBLE*********************************************/
/******************************************LFS SUB PID START DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-lfs의 sub_pid-START의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_lfs_sub_pid_start(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			
		break;
		case CMD_RESPONSE:
			
		break;
		case CMD_REQUEST:
		
		break;
	}
}
/******************************************LFS SUB PID START DISASSEMBLE*********************************************/
/******************************************LFS SUB PID DATA DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-lfs의 sub_pid-DATA의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_lfs_sub_pid_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			
		break;
		case CMD_RESPONSE:
			
		break;
		case CMD_REQUEST:
		
		break;
	}
}
/******************************************LFS SUB PID DATA DISASSEMBLE*********************************************/
/******************************************LFS SUB PID END DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-lfs의 sub_pid-END의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_lfs_sub_pid_end(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			
		break;
		case CMD_RESPONSE:
			
		break;
		case CMD_REQUEST:
		
		break;
	}
}
/******************************************LFS SUB PID END DISASSEMBLE*********************************************/