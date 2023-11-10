#ifndef _APP_PID_LFS_CMD_H_
#define _APP_PID_LFS_CMD_H_

void app_rx_lfs_sub_pid_connect_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_lfs_connect_t *pData);
void app_rx_lfs_sub_pid_connect_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_lfs_connect_t *pData);
void app_rx_lfs_sub_pid_connect_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_lfs_sub_pid_connect_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t connect_status);
void app_tx_lfs_sub_pid_connect_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t connect_status);
void app_tx_lfs_sub_pid_connect_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);

#endif