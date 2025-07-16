#ifndef _APP_PID_WIFI_CMD_H_
#define _APP_PID_WIFI_CMD_H_

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************/
void app_rx_wifi_sub_pid_brake_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_wifi_brake_t *pData);
void app_rx_wifi_sub_pid_brake_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_wifi_brake_t *pData);
void app_rx_wifi_sub_pid_brake_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_wifi_sub_pid_brake_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t brake);
void app_tx_wifi_sub_pid_brake_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t status);
void app_tx_wifi_sub_pid_brake_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/

#ifdef __cplusplus
}
#endif

#endif
