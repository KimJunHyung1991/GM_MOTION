#ifndef _APP_PID_INSPECTION_CMD_H_
#define _APP_PID_INSPECTION_CMD_H_


void app_rx_inspection_sub_pid_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_inspection_data_t *pData);
void app_rx_inspection_sub_pid_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_inspection_data_t *pData);
void app_rx_inspection_sub_pid_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_inspection_sub_pid_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t *data);
void app_tx_inspection_sub_pid_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t *data);
void app_tx_inspection_sub_pid_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);


#endif