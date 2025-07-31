#ifndef _PRTC_DATA_PID_LFS_H_
#define _PRTC_DATA_PID_LFS_H_
#pragma pack(1)
/***********************************************************LFS_SUB_PID_CONNECT**********************************************************/
#define LFS_MODE_FW					0
#define LFS_MODE_MOTION_DATA		1

typedef struct{
	uint8_t	mode;
}prtc_data_ctl_lfs_mode_t;

typedef struct{
	uint8_t	mode;
}prtc_data_rsp_lfs_mode_t;


	
typedef struct{
	uint8_t	mode;
	uint32_t cnt;
}prtc_data_ctl_lfs_start_t;

typedef struct{
	uint8_t	mode;
	uint32_t cnt;
}prtc_data_rsp_lfs_start_t;



/***********************************************************LFS_SUB_PID_CONNECT**********************************************************/
#pragma pack()
#endif