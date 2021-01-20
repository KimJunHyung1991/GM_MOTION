#ifndef _GM_HAL_PROTOCOL1_5_PID_SENSOR_H_
#define _GM_HAL_PROTOCOL1_5_PID_SENSOR_H_
/***********************************************************SENSOR_SUB_PID_DETEACT**********************************************************/
__packed typedef struct{
	uint8_t 	cw;
	uint8_t 	ccw;
}prtc_data_set_sensor_action_t;

#define SENSOR_UNDETECTED	0
#define SENSOR_DETECT		1

/***********************************************************SENSOR_SUB_PID_DETEACT**********************************************************/


#endif
