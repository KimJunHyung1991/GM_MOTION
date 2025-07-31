#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_lfs.h"

/******************************************LFS SUB PID MODE APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 번호
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_lfs_sub_pid_mode_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_lfs_mode_t *pData)
{
	
}

__weak void app_rx_lfs_sub_pid_mode_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_lfs_mode_t *pData)
{
	
}

__weak void app_rx_lfs_sub_pid_mode_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_lfs_sub_pid_mode_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_lfs_mode_t), priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_MODE, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_mode_ctl(mode));
}

void app_tx_lfs_sub_pid_mode_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_lfs_mode_t), priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_MODE, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_mode_rsp(mode));
}

void app_tx_lfs_sub_pid_mode_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_MODE, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_mode_rqt());
}
/******************************************LFS SUB PID MODE APPLICATION*********************************************/
/******************************************LFS SUB PID START APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 번호
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_lfs_sub_pid_start_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_lfs_start_t *pData)
{
	
}

__weak void app_rx_lfs_sub_pid_start_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_lfs_start_t *pData)
{
	
}

__weak void app_rx_lfs_sub_pid_start_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_lfs_sub_pid_start_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode, uint32_t cnt)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_lfs_start_t), priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_MODE, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_start_ctl(mode, cnt));
}

void app_tx_lfs_sub_pid_start_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode, uint32_t cnt)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_lfs_start_t), priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_MODE, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_start_rsp(mode, cnt));
}

void app_tx_lfs_sub_pid_start_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_MODE, souce_sub_id, target_sub_id), \
			net_pda_lfs_sub_pid_start_rqt());
}
/******************************************LFS SUB PID START APPLICATION*********************************************/
/******************************************LFS SUB PID DATA APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 번호
            *pPh : packet header pointer
            *pData : packet data pointer
  * @retval None
  */
__weak void app_rx_lfs_sub_pid_data_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
    
}

__weak void app_rx_lfs_sub_pid_data_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
    
}

__weak void app_rx_lfs_sub_pid_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
    
}

void app_tx_lfs_sub_pid_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t *data)
{
    hal_can_protocol_tx(num, net_pha(CMD_CONTROL, 8, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_DATA, souce_sub_id, target_sub_id), \
            net_pda_lfs_sub_pid_data_ctl(data));
}

void app_tx_lfs_sub_pid_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t *data)
{
    hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, 8, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_DATA, souce_sub_id, target_sub_id), \
            net_pda_lfs_sub_pid_data_rsp(data));
}

void app_tx_lfs_sub_pid_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
    hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_DATA, souce_sub_id, target_sub_id), \
            net_pda_lfs_sub_pid_data_rqt());
}
/******************************************LFS SUB PID DATA APPLICATION*********************************************/
/******************************************LFS SUB PID END APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 번호
            *pPh : packet header pointer
            *pData : packet data pointer
  * @retval None
  */
__weak void app_rx_lfs_sub_pid_end_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
    
}

__weak void app_rx_lfs_sub_pid_end_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
    
}

__weak void app_rx_lfs_sub_pid_end_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
    
}

void app_tx_lfs_sub_pid_end_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
    hal_can_protocol_tx(num, net_pha(CMD_CONTROL, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_DATA, souce_sub_id, target_sub_id), \
            net_pda_lfs_sub_pid_end_ctl());
}

void app_tx_lfs_sub_pid_end_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
    hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_DATA, souce_sub_id, target_sub_id), \
            net_pda_lfs_sub_pid_end_rsp());
}

void app_tx_lfs_sub_pid_end_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
    hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_LFS, LFS_SUB_PID_DATA, souce_sub_id, target_sub_id), \
            net_pda_lfs_sub_pid_end_rqt());
}
/******************************************LFS SUB PID END APPLICATION*********************************************/