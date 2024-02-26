#ifndef _APP_PID_INSPECTION_CMD_H_
#define _APP_PID_INSPECTION_CMD_H_

#ifdef __cplusplus
extern "C" {
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void app_rx_inspection_sub_pid_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_inspection_data_t *pData);
void app_rx_inspection_sub_pid_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_inspection_data_t *pData);
void app_rx_inspection_sub_pid_data_rqt(uint8_t num, prtc_header_t *pPh, prtc_data_rqt_inspection_data_t *pData);
void app_tx_inspection_sub_pid_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index);
void app_tx_inspection_sub_pid_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index);
void app_tx_inspection_sub_pid_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void app_tx_inspection_sub_pid_data_ver_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint32_t ver);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void app_tx_inspection_sub_pid_data_ping_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint16_t count);
void app_tx_inspection_sub_pid_data_ping_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint16_t count);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void app_tx_inspection_sub_pid_data_bool_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t index, uint8_t Bool);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif

#endif
