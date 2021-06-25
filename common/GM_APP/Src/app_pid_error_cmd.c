#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_error.h"

/******************************************ERROR SUB PID RC APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_error_sub_pid_rc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_rc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_rc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_error_sub_pid_rc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_error_rc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_RC, sub_id), \
			net_pda_error_sub_pid_rc_ctl(error_code));
}

void app_tx_error_sub_pid_rc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_error_rc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_RC, sub_id), \
			net_pda_error_sub_pid_rc_rsp(error_code));
}

void app_tx_error_sub_pid_rc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_RC, sub_id), \
			net_pda_error_sub_pid_rc_rqt());
}

/******************************************ERROR SUB PID RC APPLICATION*********************************************/
/******************************************ERROR SUB PID AC APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_error_sub_pid_ac_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_ac_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{ 
	
}

__weak void app_rx_error_sub_pid_ac_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_error_sub_pid_ac_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_error_ac_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_AC, sub_id), \
			net_pda_error_sub_pid_ac_ctl(error_code));
}

void app_tx_error_sub_pid_ac_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_error_ac_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_AC, sub_id), \
			net_pda_error_sub_pid_ac_rsp(error_code));
}

void app_tx_error_sub_pid_ac_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_AC, sub_id), \
			net_pda_error_sub_pid_ac_rqt());
}
/******************************************ERROR SUB PID AC APPLICATION*********************************************/
/******************************************ERROR SUB PID BLDC APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_error_sub_pid_bldc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_bldc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_bldc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_error_sub_pid_bldc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_error_bldc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			net_pda_error_sub_pid_bldc_ctl(error_code));
}

void app_tx_error_sub_pid_bldc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_error_bldc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			net_pda_error_sub_pid_bldc_rsp(error_code));
}

void app_tx_error_sub_pid_bldc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			net_pda_error_sub_pid_bldc_rqt());
}
/******************************************ERROR SUB PID BLDC APPLICATION*********************************************/
/******************************************ERROR SUB PID CLEAR APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_error_sub_pid_clear_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_clear_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_error_sub_pid_clear_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_error_sub_pid_clear_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_error_clear_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			net_pda_error_sub_pid_clear_ctl(error_code));
}

void app_tx_error_sub_pid_clear_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t error_code)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_error_clear_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			net_pda_error_sub_pid_clear_rsp(error_code));
}

void app_tx_error_sub_pid_clear_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			net_pda_error_sub_pid_clear_rqt());
}
/******************************************ERROR SUB PID CLEAR APPLICATION*********************************************/