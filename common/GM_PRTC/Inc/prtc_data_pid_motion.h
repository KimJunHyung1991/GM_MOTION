#ifndef _GM_HAL_PROTOCOL1_5_PID_MOTION_H_
#define _GM_HAL_PROTOCOL1_5_PID_MOTION_H_
#pragma pack(1)
/***********************************************************MOTION_SUB_PID_ADC**********************************************************/
typedef struct{
	uint16_t	adc_val;
}prtc_data_ctl_motion_adc_t;

typedef struct{
	uint16_t	adc_val;
}prtc_data_rsp_motion_adc_t;
/***********************************************************MOTION_SUB_PID_ADC**********************************************************/
/***********************************************************MOTION_SUB_PID_ANGLE**********************************************************/
typedef struct{
	uint32_t	angle_val;
}prtc_data_ctl_motion_angle_t;

typedef struct{
	uint32_t	angle_val;
}prtc_data_rsp_motion_angle_t;
/***********************************************************MOTION_SUB_PID_ANGLE**********************************************************/
/***********************************************************MOTION_SUB_PID_DIRECTION**********************************************************/
typedef struct{
	uint8_t id;
	uint8_t sub_id;
	uint8_t direction;
	uint8_t val;
}prtc_data_ctl_motion_direction_t;

typedef struct{
	uint8_t id;
	uint8_t direction;
	uint8_t val;
}prtc_data_rsp_motion_direction_t;
//////////////////////////////////////direction/////////////////////////////////
#define MOTION_DIRECTION_CCW	0
#define MOTION_DIRECTION_CW		1
//////////////////////////////////////direction/////////////////////////////////
/***********************************************************MOTION_SUB_PID_DIRECTION**********************************************************/
/***********************************************************MOTION_SUB_PID_PROFILE_POSITION**********************************************************/
typedef struct{
	uint32_t time;
	uint16_t location;
}prtc_data_ctl_motion_profile_position_t;

typedef struct{
	uint32_t time;
	uint16_t location;
}prtc_data_rsp_motion_profile_position_t;
/***********************************************************MOTION_SUB_PID_PROFILE_POSITION**********************************************************/
#pragma pack()
#endif