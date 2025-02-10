#ifndef _NET_PDA_PID_LFS_H_
#define _NET_PDA_PID_LFS_H_

uint8_t *net_pda_lfs_sub_pid_mode_ctl(uint8_t mode);
uint8_t *net_pda_lfs_sub_pid_mode_rsp(uint8_t mode);
uint8_t *net_pda_lfs_sub_pid_mode_rqt(void);

uint8_t *net_pda_lfs_sub_pid_start_ctl(uint8_t mode, uint32_t cnt);
uint8_t *net_pda_lfs_sub_pid_start_rsp(uint8_t mode, uint32_t cnt);
uint8_t *net_pda_lfs_sub_pid_start_rqt(void);

uint8_t *net_pda_lfs_sub_pid_data_ctl(uint8_t *pData);
uint8_t *net_pda_lfs_sub_pid_data_rsp(uint8_t *pData);
uint8_t *net_pda_lfs_sub_pid_data_rqt(void);

uint8_t *net_pda_lfs_sub_pid_end_ctl(void);
uint8_t *net_pda_lfs_sub_pid_end_rsp(void);
uint8_t *net_pda_lfs_sub_pid_end_rqt(void);

#endif