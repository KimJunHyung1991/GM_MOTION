#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_inspection.h"



__weak void app_rx_inspection_sub_pid_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_inspection_data_t *pData)
{
	
}

__weak void app_rx_inspection_sub_pid_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_inspection_data_t *pData)
{
	
}

__weak void app_rx_inspection_sub_pid_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_inspection_sub_pid_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t *data)
{	
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_inspection_data_t), priority, souce_id, target_id, PID_INSPECTION, 0, sub_id), \
			net_pda_inspection_sub_pid_data_ctl(data));
}

void app_tx_inspection_sub_pid_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t *data)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_inspection_data_t), priority, souce_id, target_id, PID_INSPECTION, 0, sub_id), \
			net_pda_inspection_sub_pid_data_rsp(data));
}

void app_tx_inspection_sub_pid_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INSPECTION, 0, sub_id), \
			net_pda_inspection_sub_pid_data_rqt());
}
