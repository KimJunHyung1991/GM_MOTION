#ifndef _GM_APP_PID_ERROR_CMD_H_
#define _GM_APP_PID_ERROR_CMD_H_
/**********************************************************************************/
void app_rx_error_sub_pid_rc_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_rc_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_rc_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_ac_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_ac_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_ac_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_error_sub_pid_bldc_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_bldc_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_error_sub_pid_bldc_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/

#endif