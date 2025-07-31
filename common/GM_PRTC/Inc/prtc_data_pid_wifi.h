#ifndef _PRTC_DATA_PID_WIFI_H_
#define _PRTC_DATA_PID_WIFI_H_
#pragma pack(1)
/***********************************************************WIFI_SUB_PID_BRAKE**********************************************************/
typedef struct{
	uint8_t 	all_brake;
}prtc_data_ctl_wifi_brake_t;

typedef struct{
	uint8_t 	status;
}prtc_data_rsp_wifi_brake_t;

/*
typedef struct{
	uint8_t 	all_brake;
}prtc_data_rqt_wifi_brake_t;
*/

#define PLAY_B_BRAKE_UNLOCK	0
#define PLAY_B_BRAKE_LOCK	1


#define PLAY_B_BRAKE_STATUS_ING		0
#define PLAY_B_BRAKE_STATUS_OK		1
#define PLAY_B_BRAKE_STATUS_ERR		2
#define PLAY_B_BRAKE_STATUS_TIMEOUT	3

/***********************************************************WIFI_SUB_PID_BRAKE**********************************************************/
#pragma pack()
#endif