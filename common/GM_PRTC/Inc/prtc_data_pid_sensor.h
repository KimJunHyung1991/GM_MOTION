#ifndef _GM_HAL_PROTOCOL1_5_PID_SENSOR_H_
#define _GM_HAL_PROTOCOL1_5_PID_SENSOR_H_
#pragma pack(1)
/***********************************************************SENSOR_SUB_PID_DETEACT**********************************************************/
typedef struct{
	uint8_t 	cw;
	uint8_t 	ccw;
}prtc_data_ctl_sensor_detect_t;

typedef struct{
	uint8_t 	cw;
	uint8_t 	ccw;
}prtc_data_rsp_sensor_detect_t;

#define SENSOR_UNDETECTED	0
#define SENSOR_DETECT		1

/***********************************************************SENSOR_SUB_PID_DETEACT**********************************************************/
#pragma pack()
#endif