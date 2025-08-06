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
/***********************************************************MOTION_SUB_PID_RAW_DATA**********************************************************/
#define MOTION_RAW_DATA_OPTION_DATA		0
#define MOTION_RAW_DATA_OPTION_CLEAR	1
	
typedef struct{
	uint8_t option;
	uint8_t payload[0];
}prtc_data_motion_raw_data_op_t;

typedef struct{
	uint16_t multi_turn;
	uint32_t single_turn;
}prtc_data_ctl_motion_raw_data_t;
typedef struct{
	uint16_t multi_turn;
	uint32_t single_turn;
}prtc_data_rsp_motion_raw_data_t;
/***********************************************************MOTION_SUB_PID_RAW_DATA**********************************************************/
/***********************************************************MOTION_SUB_PID_BRAKE**********************************************************/
#define MOTOR_BRAKE_UNLOCK	0
#define MOTOR_BRAKE_LOCK	1

#define MOTOR_SERVO_OFF		0
#define MOTOR_SERVO_ON		1

typedef struct{
	uint8_t brake;
	uint8_t servo_on;
}prtc_data_ctl_brake_t;

typedef struct{
	uint8_t brake;
	uint8_t servo_on;
}prtc_data_rsp_brake_t;
/***********************************************************MOTION_SUB_PID_BRAKE**********************************************************/
/***********************************************************MOTION_SUB_PID_SCALE_RAW_DATA**********************************************************/
typedef struct{
	int64_t raw_data;
}prtc_data_ctl_scale_motion_raw_data_t;

typedef struct{
	int64_t raw_data;
}prtc_data_rsp_scale_motion_raw_data_t;
/***********************************************************MOTION_SUB_PID_SCALE_RAW_DATA**********************************************************/
#pragma pack()
#endif