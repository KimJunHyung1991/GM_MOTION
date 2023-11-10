#include "main.h"
#include "app_pid_lfs_cmd.h"
/*************************************************
fail : net_phd_pid_lfs.c
network packet header disassemble parameter identification large file system
4계층중 network층에 해당
packet의 header영역의 PID(lfs) 분해
**************************************************/


void net_phd_lfs_sub_pid_connect(uint8_t num, prtc_header_t *pPh, uint8_t *pData);

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
		case LFS_SUB_PID_CONNECT:
			net_phd_lfs_sub_pid_connect(num, pPh, pData);
		break;
	}
}
/******************************************LFS PID DISASSEMBLE*********************************************/
/******************************************LFS SUB PID CONNECT DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-lfs의 sub_pid-CENNECT의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_lfs_sub_pid_connect(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_lfs_sub_pid_connect_ctl(num, pPh, (prtc_data_ctl_lfs_connect_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_lfs_sub_pid_connect_rsp(num, pPh, (prtc_data_rsp_lfs_connect_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_lfs_sub_pid_connect_rqt(num, pPh, pData);
		break;
	}
}
/******************************************LFS SUB PID CONNECT DISASSEMBLE*********************************************/
