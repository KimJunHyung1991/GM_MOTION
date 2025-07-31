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
/***********************************************************ERROR_SUB_PID_CLEAR**********************************************************/
typedef struct{
	uint32_t 	error_code;
}prtc_data_ctl_error_clear_t;

typedef struct{
	uint32_t 	error_code;
}prtc_data_rsp_error_clear_t;

///////////////////////////error_code///////////////////////////
#define ERROR_ALL_CLEAR		0xFFFFFFFF
///////////////////////////error_code///////////////////////////
/***********************************************************ERROR_SUB_PID_CLEAR**********************************************************/
/***********************************************************ERROR_SUB_PID_ERROR_LEVEL**********************************************************/
typedef struct{
	uint8_t motor_type;
	char err_lv_str[7];
}prtc_data_ctl_error_level_t;

typedef struct{
	uint8_t motor_type;
	char err_lv_str[7];
}prtc_data_rsp_error_level_t;

///////////////////////////error_code///////////////////////////
#define EL_MOTOR_NULL		0
#define EL_MOTOR_RC			1
#define EL_MOTOR_AC			2
#define EL_MOTOR_BL			3
#define EL_MOTOR_ZER		4
#define EL_MOTOR_DXL		5
///////////////////////////error_code///////////////////////////
/***********************************************************ERROR_SUB_PID_ERROR_LEVEL**********************************************************/
/***********************************************************ERROR_SUB_PID_ERROR_TRANSMISSION**********************************************************/
typedef struct{
	uint16_t id 	: 4;
	uint16_t sub_id : 5;
	uint16_t err_lv : 7;
	char err_lv_str[6];
}prtc_data_ctl_error_transmission_t;

typedef struct{
	uint16_t id 	: 4;
	uint16_t sub_id : 5;
	uint16_t err_lv : 7;
	char err_lv_str[6];
}prtc_data_rsp_error_transmission_t;
/***********************************************************ERROR_SUB_PID_ERROR_TRANSMISSION**********************************************************/



#pragma pack()
#endif