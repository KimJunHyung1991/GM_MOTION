#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_lfs.h"

/******************************************EDIT SUB PID ACTION APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN Á¾·ù
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_lfs_sub_pid_connect_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_lfs_connect_t *pData)
{
	
}

__weak void app_rx_lfs_sub_pid_connect_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_edit_action_t *pData)
{
	
}

__weak void app_rx_lfs_sub_pid_connect_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_lfs_sub_pid_connect_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t connect_status)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_lfs_connect_t), priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_CONNECT, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_connect_ctl(connect_status));
}

void app_tx_lfs_sub_pid_connet_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t connect_status)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_edit_action_t), priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_CONNECT, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_connect_rsp(connect_status));
}

void app_tx_lfs_sub_pid_connect_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_CONNECT, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_connect_rqt());
}
/******************************************EDIT SUB PID ACTION APPLICATION*********************************************/