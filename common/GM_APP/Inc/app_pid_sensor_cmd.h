#ifndef _GM_APP_PID_SENSOR_CMD_H_
#define _GM_APP_PID_SENSOR_CMD_H_
/**********************************************************************************/
void app_rx_sensor_sub_pid_detect_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_sensor_sub_pid_detect_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_sensor_sub_pid_detect_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/

#endif