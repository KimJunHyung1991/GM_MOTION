#ifndef _GM_HAL_PROTOCOL1_5_PID_INIT_H_
#define _GM_HAL_PROTOCOL1_5_PID_INIT_H_
#pragma pack(1)
/***********************************************************INIT_SUB_PID_BOOT**********************************************************/

/***********************************************************INIT_SUB_PID_BOOT**********************************************************/
/***********************************************************INIT_SUB_PID_DRIVER_DATA1**********************************************************/
typedef struct{
	uint8_t 	direction;
	uint16_t 	angle;
	uint16_t	init_position;
	uint16_t	reducer_ratio;
}prtc_data_ctl_init_driver_data1_t;

typedef struct{
	uint8_t 	direction;
	uint16_t 	angle;
	uint16_t	init_position;
	uint16_t	reducer_ratio;
}prtc_data_rsp_init_driver_data1_t;
///////////////////////////direction///////////////////////////
#define CW		0
#define CCW		1
///////////////////////////direction///////////////////////////
/***********************************************************INIT_SUB_PID_DRIVER_DATA1**********************************************************/
/***********************************************************INIT_SUB_PID_DRIVER_DATA2**********************************************************/
typedef struct{
	uint32_t 	count;
	uint16_t 	rpm;
}prtc_data_ctl_init_driver_data2_t;

typedef struct{
	uint32_t 	count;
	uint16_t 	rpm;
}prtc_data_rsp_init_driver_data2_t;
/***********************************************************INIT_SUB_PID_DRIVER_DATA2**********************************************************/
/***********************************************************INIT_SUB_PID_STATUS**********************************************************/
typedef struct{
	uint8_t		step;
	uint8_t		status;
}prtc_data_ctl_init_status_t;

typedef struct{
	uint8_t		step;
	uint8_t		status;
}prtc_data_rsp_init_status_t;

typedef struct{
	uint8_t		step;
}prtc_data_rqt_init_status_t;
///////////////////////////step///////////////////////////
#define ABSOLUTE_BATTERY	0
#define DRIVER_DATA1		1
#define DRIVER_DATA2		2
#define MOVE_SENSOR			3
#define MOVE_INIT_POSITION	4
#define BATTERY_CHECK		5
///////////////////////////step///////////////////////////
///////////////////////////status///////////////////////////
#define STATUS_WAIT			0
#define STATUS_OK			1
#define STATUS_ERROR		2
#define STATUS_TIMEOUT		3
///////////////////////////status///////////////////////////
/***********************************************************INIT_SUB_PID_STATUS**********************************************************/
/***********************************************************INIT_SUB_PID_ABSOLUTE_BATTERY**********************************************************/
typedef struct{
	//uint32_t save_data;
	int64_t save_data;
}prtc_data_ctl_init_absolute_battery_t;

typedef struct{
	//uint32_t save_data;
	int64_t save_data;
}prtc_data_rsp_init_absolute_battery_t;
/***********************************************************INIT_SUB_PID_ABSOLUTE_BATTERY**********************************************************/
/***********************************************************INIT_SUB_PID_MOVE_SENSOR**********************************************************/
#define MOVE_SENSOR_DATA_ABSOLUTE_MODE		0
#define MOVE_SENSOR_DATA_NOMAL_MODE			1

typedef struct{
	uint8_t mode;
}prtc_data_ctl_init_move_sensor_t;

typedef struct{
	uint8_t mode;
}prtc_data_rsp_init_move_sensor_t;
/*
typedef struct{
	uint8_t mode;
}prtc_data_rqt_init_move_sensor_t;
*/
/***********************************************************INIT_SUB_PID_MOVE_SENSOR**********************************************************/
/***********************************************************INIT_SUB_PID_MOVE_INIT_POSITION**********************************************************/

/***********************************************************INIT_SUB_PID_MOVE_INIT_POSITION**********************************************************/
/***********************************************************INIT_SUB_PID_DRIVER_DATA_OP**********************************************************/
typedef struct{
	uint32_t profile_target_speed;
	uint32_t profile_acc_cnt;
}prtc_data_ctl_init_driver_data_op_zero_err_t;

typedef struct{
	uint32_t profile_target_speed;
	uint32_t profile_acc_cnt;
}prtc_data_rsp_init_driver_data_op_zero_err_t;

typedef struct{
	uint32_t home_cnt;
}prtc_data_ctl_init_driver_data_op_dxl_t;

typedef struct{
	uint32_t home_cnt;
}prtc_data_rsp_init_driver_data_op_dxl_t;

typedef struct{
	uint32_t ref_position;
	uint8_t	 board_type;
}prtc_data_ctl_init_driver_data_op_ac2_t;

typedef struct{
	uint32_t ref_position;
	uint8_t	 board_type;
}prtc_data_rsp_init_driver_data_op_ac2_t;
/***********************************************************INIT_SUB_PID_DRIVER_DATA_OP**********************************************************/
#pragma pack()
#endif
