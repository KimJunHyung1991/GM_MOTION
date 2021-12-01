#ifndef _GM_APP_PID_EDIT_CMD_H_
#define _GM_APP_PID_EDIT_CMD_H_
void app_rx_edit_sub_pid_action_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_edit_action_t *pData);
void app_rx_edit_sub_pid_action_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_edit_action_t *pData);
void app_rx_edit_sub_pid_action_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_edit_sub_pid_action_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t action);
void app_tx_edit_sub_pid_action_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t action);
void app_tx_edit_sub_pid_action_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
#endif