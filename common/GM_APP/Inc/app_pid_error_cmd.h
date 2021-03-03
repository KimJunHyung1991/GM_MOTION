#ifndef _GM_APP_PID_ERROR_CMD_H_
#define _GM_APP_PID_ERROR_CMD_H_
/**********************************************************************************/
void app_rx_error_sub_pid_rc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_rc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_rc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_rc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void app_tx_error_sub_pid_rc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void app_tx_error_sub_pid_rc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_ac_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_ac_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_ac_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_ac_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void app_tx_error_sub_pid_ac_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void app_tx_error_sub_pid_ac_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_bldc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_bldc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_bldc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_bldc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void app_tx_error_sub_pid_bldc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void app_tx_error_sub_pid_bldc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/

#endif