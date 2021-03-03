#ifndef _GM_APP_MOTION_CMD_H_
#define _GM_APP_MOTION_CMD_H_
/**********************************************************************************/
void app_rx_motion_sub_pid_adc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_adc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_adc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_adc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void app_tx_motion_sub_pid_adc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void app_tx_motion_sub_pid_adc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_angle_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_angle_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_motion_sub_pid_angle_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_angle_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t angle_val);
void app_tx_motion_sub_pid_angle_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t angle_val);
void app_tx_motion_sub_pid_angle_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/

#endif