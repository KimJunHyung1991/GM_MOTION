#ifndef _GM_HAL_PROTOCOL1_5_PID_ERROR_H_
#define _GM_HAL_PROTOCOL1_5_PID_ERROR_H_
#pragma pack(1)
/***********************************************************ERROR_SUB_PID_RC**********************************************************/
typedef struct{
	uint32_t 	error_code;
}prtc_data_ctl_error_rc_t;

typedef struct{
	uint32_t 	error_code;
}prtc_data_rsp_error_rc_t;
/***********************************************************ERROR_SUB_PID_RC**********************************************************/
/***********************************************************ERROR_SUB_PID_AC**********************************************************/
typedef struct{
	uint32_t 	error_code;
}prtc_data_ctl_error_ac_t;

typedef struct{
	uint32_t 	error_code;
}prtc_data_rsp_error_ac_t;
/***********************************************************ERROR_SUB_PID_AC**********************************************************/
/***********************************************************ERROR_SUB_PID_BLDC**********************************************************/
typedef struct{
	uint32_t 	error_code;
}prtc_data_ctl_error_bldc_t;

typedef struct{
	uint32_t 	error_code;
}prtc_data_rsp_error_bldc_t;
///////////////////////////error_code///////////////////////////
#define ERROR_BL_TEMPERATURE	0
///////////////////////////error_code///////////////////////////
/***********************************************************ERROR_SUB_PID_BLDC**********************************************************/
#pragma pack()
#endif