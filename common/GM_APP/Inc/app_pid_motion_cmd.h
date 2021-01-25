#ifndef _GM_APP_MOTION_CMD_H_
#define _GM_APP_MOTION_CMD_H_
/**********************************************************************************/
void app_rx_motion_sub_pid_adc_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_adc_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_adc_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_angle_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_angle_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_angle_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/

#endif