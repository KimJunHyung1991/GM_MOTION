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
#pragma pack()
#endif