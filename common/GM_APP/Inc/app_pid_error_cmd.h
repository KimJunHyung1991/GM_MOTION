#ifndef _GM_APP_PID_ERROR_CMD_H_
#define _GM_APP_PID_ERROR_CMD_H_

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************/
void app_rx_error_sub_pid_rc_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_error_rc_t *pData);
void app_rx_error_sub_pid_rc_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_error_rc_t *pData);
void app_rx_error_sub_pid_rc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_rc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_rc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_rc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_ac_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_error_ac_t *pData);
void app_rx_error_sub_pid_ac_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_error_ac_t *pData);
void app_rx_error_sub_pid_ac_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_ac_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_ac_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_ac_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_bldc_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_error_bldc_t *pData);
void app_rx_error_sub_pid_bldc_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_error_bldc_t *pData);
void app_rx_error_sub_pid_bldc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_bldc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_bldc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_bldc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_clear_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_error_clear_t *pData);
void app_rx_error_sub_pid_clear_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_error_clear_t *pData);
void app_rx_error_sub_pid_clear_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_error_sub_pid_clear_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_clear_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t error_code);
void app_tx_error_sub_pid_clear_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);

/**********************************************************************************/

#ifdef __cplusplus
}
#endif

#endif
