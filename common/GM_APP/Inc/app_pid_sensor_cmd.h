#ifndef _GM_APP_PID_SENSOR_CMD_H_
#define _GM_APP_PID_SENSOR_CMD_H_
/**********************************************************************************/
void app_rx_sensor_sub_pid_detect_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_sensor_detect_t *pData);
void app_rx_sensor_sub_pid_detect_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_sensor_detect_t *pData);
void app_rx_sensor_sub_pid_detect_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_sensor_sub_pid_detect_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw);
void app_tx_sensor_sub_pid_detect_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw);
void app_tx_sensor_sub_pid_detect_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/

#endif