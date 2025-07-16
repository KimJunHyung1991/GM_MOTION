#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_wifi.h"

/******************************************WIFI SUB PID BRAKE APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN Á¾·ù
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_wifi_sub_pid_brake_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_wifi_brake_t *pData)
{
	
}

__weak void app_rx_wifi_sub_pid_brake_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_wifi_brake_t *pData)
{
	
}

__weak void app_rx_wifi_sub_pid_brake_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_wifi_sub_pid_brake_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t brake)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_wifi_brake_t), priority, souce_id, target_id, PID_WIFI, WIFI_SUB_PID_BRAKE, souce_sub_id, target_sub_id), \
			net_pda_wifi_sub_pid_brake_ctl(brake));
}

void app_tx_wifi_sub_pid_brake_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t status)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_wifi_brake_t), priority, souce_id, target_id, PID_WIFI, WIFI_SUB_PID_BRAKE, souce_sub_id, target_sub_id), \
			net_pda_wifi_sub_pid_brake_rsp(status));
}

void app_tx_wifi_sub_pid_brake_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_WIFI, WIFI_SUB_PID_BRAKE, souce_sub_id, target_sub_id), \
			net_pda_wifi_sub_pid_brake_rqt());
}
/******************************************WIFI SUB PID BRAKE APPLICATION*********************************************/