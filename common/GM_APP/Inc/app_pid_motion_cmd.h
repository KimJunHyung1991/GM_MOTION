#ifndef _GM_APP_MOTION_CMD_H_
#define _GM_APP_MOTION_CMD_H_

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************/
void app_rx_motion_sub_pid_adc_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_adc_t *pData);
void app_rx_motion_sub_pid_adc_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_adc_t *pData);
void app_rx_motion_sub_pid_adc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_adc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint16_t adc_val);
void app_tx_motion_sub_pid_adc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint16_t adc_val);
void app_tx_motion_sub_pid_adc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_angle_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_angle_t *pData);
void app_rx_motion_sub_pid_angle_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_angle_t *pData);
void app_rx_motion_sub_pid_angle_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_angle_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t angle_val);
void app_tx_motion_sub_pid_angle_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t angle_val);
void app_tx_motion_sub_pid_angle_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id ,uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_direction_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_direction_t *pData);
void app_rx_motion_sub_pid_direction_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_direction_t *pData);
void app_rx_motion_sub_pid_direction_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_direction_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t id, uint8_t direction, uint8_t val);
void app_tx_motion_sub_pid_direction_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t id, uint8_t direction, uint8_t val);
void app_tx_motion_sub_pid_direction_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_profile_position_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_profile_position_t *pData);
void app_rx_motion_sub_pid_profile_position_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_profile_position_t *pData);
void app_rx_motion_sub_pid_profile_position_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_profile_position_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t time, uint16_t location);
void app_tx_motion_sub_pid_profile_position_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t time, uint16_t location);
void app_tx_motion_sub_pid_profile_position_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_raw_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_raw_data_t *pData);
void app_rx_motion_sub_pid_raw_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_raw_data_t *pData);
void app_rx_motion_sub_pid_raw_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_raw_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint64_t raw_data);
void app_tx_motion_sub_pid_raw_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint64_t raw_data);
void app_tx_motion_sub_pid_raw_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_motion_sub_pid_brake_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_brake_t *pData);
void app_rx_motion_sub_pid_brake_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_brake_t *pData);
void app_rx_motion_sub_pid_brake_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_motion_sub_pid_brake_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t brake, uint8_t servo_on);
void app_tx_motion_sub_pid_brake_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t brake, uint8_t servo_on);
void app_tx_motion_sub_pid_brake_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
/**********************************************************************************/
#ifdef __cplusplus
}
#endif

#endif
