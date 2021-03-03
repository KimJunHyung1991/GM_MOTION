#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_edit.h"

/******************************************EDIT SUB PID ACTION APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_edit_sub_pid_action_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_edit_sub_pid_action_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_edit_sub_pid_action_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_edit_sub_pid_action_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_edit_action_t), priority, souce_id, target_id, PID_EDIT, EDIT_SUB_PID_ACTION, sub_id), \
			net_pda_edit_sub_pid_action_ctl(action));
}

void app_tx_edit_sub_pid_action_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_edit_action_t), priority, souce_id, target_id, PID_EDIT, EDIT_SUB_PID_ACTION, sub_id), \
			net_pda_edit_sub_pid_rsp(action));
}

void app_tx_edit_sub_pid_action_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_EDIT, EDIT_SUB_PID_ACTION, sub_id), \
			net_pda_edit_sub_pid_rqt());
}
/******************************************EDIT SUB PID ACTION APPLICATION*********************************************/