#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_sensor.h"

/******************************************SENSOR SUB PID DETECT APPLICATION*********************************************/
__weak void app_rx_sensor_sub_pid_detect_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_sensor_sub_pid_detect_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_sensor_sub_pid_detect_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_sensor_sub_pid_detect_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_set_sensor_detect_t), priority, souce_id, target_id, PID_SENSOR, SENSOR_SUB_PID_DETECT, sub_id), \
			net_pda_sensor_sub_pid_detect_ctl(cw, ccw));
}

void app_tx_sensor_sub_pid_detect_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_set_sensor_detect_t), priority, souce_id, target_id, PID_SENSOR, SENSOR_SUB_PID_DETECT, sub_id), \
			net_pda_sensor_sub_pid_detect_rsp(cw, ccw));
}

void app_tx_sensor_sub_pid_detect_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_SENSOR, SENSOR_SUB_PID_DETECT, sub_id), \
			net_pda_sensor_sub_pid_detect_rqt());
}
/******************************************SENSOR SUB PID DETECT APPLICATION*********************************************/