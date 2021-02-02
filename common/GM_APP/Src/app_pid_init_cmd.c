#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_init.h"


/******************************************INIT SUB PID BOOT APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_boot_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_boot_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_boot_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_boot_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{	
	hal_can_protocol_tx(net_pha(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_BOOT, sub_id), \
			net_pda_init_sub_pid_boot_ctl());
}

void app_tx_init_sub_pid_boot_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_BOOT, sub_id), \
			net_pda_init_sub_pid_boot_rsp());
}

void app_tx_init_sub_pid_boot_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_BOOT, sub_id), \
			net_pda_init_sub_pid_boot_rqt());
}
/******************************************INIT SUB PID BOOT APPLICATION*********************************************/
/******************************************INIT SUB PID DRIVER DATA1 APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_driver_data1_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_driver_data1_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_driver_data1_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_driver_data1_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_init_driver_data1_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA1, sub_id), \
			net_pda_init_sub_pid_driver_data1_ctl(direction, angle, init_position, reducer_ratio));
}

void app_tx_init_sub_pid_driver_data1_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_init_driver_data1_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA1, sub_id), \
			net_pda_init_sub_pid_driver_data1_rsp(direction, angle, init_position, reducer_ratio));
}

void app_tx_init_sub_pid_driver_data1_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA1, sub_id), \
			net_pda_init_sub_pid_driver_data1_rqt());
}
/******************************************INIT SUB PID DRIVER DATA1 APPLICATION*********************************************/
/******************************************INIT SUB PID DRIVER DATA2 APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_driver_data2_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_driver_data2_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_driver_data2_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_driver_data2_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t count, uint16_t rpm)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_init_driver_data2_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA2, sub_id), \
			net_pda_init_sub_pid_driver_data2_ctl(count, rpm));
}

void app_tx_init_sub_pid_driver_data2_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t count, uint16_t rpm)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_init_driver_data2_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA2, sub_id), \
			net_pda_init_sub_pid_driver_data2_rsp(count, rpm));
}

void app_tx_init_sub_pid_driver_data2_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA2, sub_id), \
			net_pda_init_sub_pid_driver_data2_rqt());
}
/******************************************INIT SUB PID DRIVER DATA2 APPLICATION*********************************************/
/******************************************INIT SUB PID STATUS APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_status_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_status_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_status_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_status_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_STATUS, sub_id), \
			net_pda_init_sub_pid_status_ctl());
}

void app_tx_init_sub_pid_status_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t step, uint8_t status)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_init_status_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_STATUS, sub_id), \
			net_pda_init_sub_pid_status_rsp(step, status));
}

void app_tx_init_sub_pid_status_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t step)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, sizeof(prtc_data_rqt_init_status_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_STATUS, sub_id), \
			net_pda_init_sub_pid_status_rqt(step));
}
/******************************************INIT SUB PID STATUS APPLICATION*********************************************/
/******************************************INIT SUB PID ABSOLUTE BATTERY APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_absolute_battery_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_absolute_battery_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_absolute_battery_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_absolute_battery_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t save_data)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_init_absolute_battery_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_ABSOLUTE_BATTERY, sub_id), \
			net_pda_init_sub_pid_absolute_battery_ctl(save_data));
}

void app_tx_init_sub_pid_absolute_battery_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t save_data)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_init_absolute_battery_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_ABSOLUTE_BATTERY, sub_id), \
			net_pda_init_sub_pid_absolute_battery_rsp(save_data));
}

void app_tx_init_sub_pid_absolute_battery_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_ABSOLUTE_BATTERY, sub_id), \
			net_pda_init_sub_pid_absolute_battery_rqt());
}
/******************************************INIT SUB PID ABSOLUTE BATTERY APPLICATION*********************************************/
/******************************************INIT SUB PID MOVE SENSOR APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_move_sensor_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_move_sensor_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_move_sensor_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_move_sensor_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_SENSOR, sub_id), \
			net_pda_init_sub_pid_move_sensor_ctl());
}

void app_tx_init_sub_pid_move_sensor_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_SENSOR, sub_id), \
			net_pda_init_sub_pid_move_sensor_rsp());
}

void app_tx_init_sub_pid_move_sensor_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_SENSOR, sub_id), \
			net_pda_init_sub_pid_move_sensor_rqt());
}
/******************************************INIT SUB PID MOVE SENSOR APPLICATION*********************************************/
/******************************************INIT SUB PID MOVE INIT POSITION APPLICATION*********************************************/
__weak void app_rx_init_sub_pid_move_init_position_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_move_init_position_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_init_sub_pid_move_init_position_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_init_sub_pid_move_init_position_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_INIT_POSITION, sub_id), \
			net_pda_init_sub_pid_move_init_position_ctl());
}

void app_tx_init_sub_pid_move_init_position_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_INIT_POSITION, sub_id), \
			net_pda_init_sub_pid_move_init_position_rsp());
}

void app_tx_init_sub_pid_move_init_position_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_INIT_POSITION, sub_id), \
			net_pda_init_sub_pid_move_init_position_rqt());
}
/******************************************INIT SUB PID MOVE INIT POSITION APPLICATION*********************************************/