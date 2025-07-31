#ifndef _APP_PID_LFS_CMD_H_
#define _APP_PID_LFS_CMD_H_

void app_rx_lfs_sub_pid_mode_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_lfs_mode_t *pData);
void app_rx_lfs_sub_pid_mode_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_lfs_mode_t *pData);
void app_rx_lfs_sub_pid_mode_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_lfs_sub_pid_mode_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode);
void app_tx_lfs_sub_pid_mode_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode);
void app_tx_lfs_sub_pid_mode_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);

void app_rx_lfs_sub_pid_start_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_lfs_mode_t *pData);
void app_rx_lfs_sub_pid_start_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_lfs_mode_t *pData);
void app_rx_lfs_sub_pid_start_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_lfs_sub_pid_start_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode, uint32_t cnt);
void app_tx_lfs_sub_pid_start_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t mode, uint32_t cnt);
void app_tx_lfs_sub_pid_start_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);

void app_rx_lfs_sub_pid_data_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_lfs_sub_pid_data_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_lfs_sub_pid_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_lfs_sub_pid_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t *data);
void app_tx_lfs_sub_pid_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t *data);
void app_tx_lfs_sub_pid_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);

void app_rx_lfs_sub_pid_end_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_lfs_sub_pid_end_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_lfs_sub_pid_end_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_lfs_sub_pid_end_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
void app_tx_lfs_sub_pid_end_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
void app_tx_lfs_sub_pid_end_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id);
#endif