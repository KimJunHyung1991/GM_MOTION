#ifndef _GM_APP_PID_INIT_CMD_H_
#define _GM_APP_PID_INIT_CMD_H_
/**********************************************************************************/
void app_rx_init_sub_pid_boot_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_boot_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_boot_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_init_sub_pid_boot_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
void app_tx_init_sub_pid_boot_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
void app_tx_init_sub_pid_boot_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_driver_data1_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_init_driver_data1_t *pData);
void app_rx_init_sub_pid_driver_data1_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_init_driver_data1_t *pData);
void app_rx_init_sub_pid_driver_data1_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_init_sub_pid_driver_data1_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint16_t reducer_ratio);
void app_tx_init_sub_pid_driver_data1_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint16_t reducer_ratio);
void app_tx_init_sub_pid_driver_data1_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id ,uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_driver_data2_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_init_driver_data2_t *pData);
void app_rx_init_sub_pid_driver_data2_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_init_driver_data2_t *pData);
void app_rx_init_sub_pid_driver_data2_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_init_sub_pid_driver_data2_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t count, uint16_t rpm);
void app_tx_init_sub_pid_driver_data2_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t count, uint16_t rpm);
void app_tx_init_sub_pid_driver_data2_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_status_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_init_status_t *pData);
void app_rx_init_sub_pid_status_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_init_status_t *pData);
void app_rx_init_sub_pid_status_rqt(uint8_t num, prtc_header_t *pPh, prtc_data_rqt_init_status_t *pData);
void app_tx_init_sub_pid_status_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t step, uint8_t status);
void app_tx_init_sub_pid_status_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t step, uint8_t status);
void app_tx_init_sub_pid_status_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t step);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_absolute_battery_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_init_absolute_battery_t *pData);
void app_rx_init_sub_pid_absolute_battery_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_init_absolute_battery_t *pData);
void app_rx_init_sub_pid_absolute_battery_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_init_sub_pid_absolute_battery_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t save_data);
void app_tx_init_sub_pid_absolute_battery_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t save_data);
void app_tx_init_sub_pid_absolute_battery_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_move_sensor_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_sensor_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_sensor_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_init_sub_pid_move_sensor_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode);
void app_tx_init_sub_pid_move_sensor_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode);
void app_tx_init_sub_pid_move_sensor_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_init_sub_pid_move_init_position_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_init_position_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_init_sub_pid_move_init_position_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_init_sub_pid_move_init_position_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
void app_tx_init_sub_pid_move_init_position_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
void app_tx_init_sub_pid_move_init_position_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
#endif