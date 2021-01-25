#ifndef _GM_APP_PID_INIT_CMD_H_
#define _GM_APP_PID_INIT_CMD_H_
/**********************************************************************************/
void app_rx_init_sub_pid_boot_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_boot_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_boot_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_driver_data1_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_driver_data1_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_driver_data1_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_driver_data2_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_driver_data2_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_driver_data2_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_status_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_status_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_status_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_absolute_battery_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_absolute_battery_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_absolute_battery_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_move_sensor_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_sensor_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_sensor_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_move_init_position_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_init_position_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_init_position_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/

#endif