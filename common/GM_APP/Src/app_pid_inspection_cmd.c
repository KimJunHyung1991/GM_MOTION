#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_inspection.h"


/************************************************************************************************************************************/
__weak void app_rx_inspection_sub_pid_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_inspection_data_t *pData)
{
	
}

__weak void app_rx_inspection_sub_pid_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_inspection_data_t *pData)
{
	
}

__weak void app_rx_inspection_sub_pid_data_rqt(uint8_t num, prtc_header_t *pPh, prtc_data_rqt_inspection_data_t *pData)
{
	
}

void app_tx_inspection_sub_pid_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index)
{	
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_inspection_data_t), priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_ctl(index));
}

void app_tx_inspection_sub_pid_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_inspection_data_t), priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_rsp(index));
}

void app_tx_inspection_sub_pid_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_rqt(index));
}
/************************************************************************************************************************************/
/************************************************************************************************************************************/
void app_tx_inspection_sub_pid_data_ver_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint32_t ver)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_inspection_data_t) + sizeof(prtc_data_rsp_inspection_ver_data_t), priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_ver_rsp(index, ver));
}
/************************************************************************************************************************************/
/************************************************************************************************************************************/
void app_tx_inspection_sub_pid_data_ping_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint16_t count)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_inspection_data_t) + sizeof(prtc_data_ctl_inspection_ping_data_t), priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_ping_ctl(index, count));
}

void app_tx_inspection_sub_pid_data_ping_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint16_t count)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_inspection_data_t) + sizeof(prtc_data_rsp_inspection_ping_data_t), priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_ping_rsp(index, count));
}
/************************************************************************************************************************************/
/************************************************************************************************************************************/
void app_tx_inspection_sub_pid_data_bool_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint8_t Bool)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_inspection_data_t) + sizeof(prtc_data_rsp_inspection_bool_data_t), priority, souce_id, target_id, PID_INSPECTION, INSPECTION_SUB_PID_DATA, souce_sub_id, target_sub_id), \
			net_pda_inspection_sub_pid_data_bool_rsp(index, Bool));
}
/************************************************************************************************************************************/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////