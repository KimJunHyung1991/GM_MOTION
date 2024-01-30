#ifndef _PRTC_DATA_PID_INSPECTION_H_
#define _PRTC_DATA_PID_INSPECTION_H_
#pragma pack(1)
typedef struct{
	uint8_t 	data[8];
}prtc_data_ctl_inspection_data_t;

typedef struct{
	uint8_t 	data[8];
}prtc_data_rsp_inspection_data_t;


#define INSPECTION_PING 	0
#define INSPECTION_VER 		1
#define INSPECTION_SDCARD 	2
#define INSPECTION_SDRAM 	3

typedef struct{
	uint8_t		index;
	uint8_t 	data[7];
}prtc_data_ctl_inspection_data_play_t;

typedef struct{
	uint8_t		index;
	uint8_t 	data[7];
}prtc_data_rsp_inspection_data_play_t;

typedef struct{
	uint8_t 	index;
}prtc_data_rqt_inspection_data_play_t;





#pragma pack()
#endif