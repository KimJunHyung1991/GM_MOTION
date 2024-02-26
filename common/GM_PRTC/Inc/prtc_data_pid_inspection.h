#ifndef _PRTC_DATA_PID_INSPECTION_H_
#define _PRTC_DATA_PID_INSPECTION_H_
#pragma pack(1)

#define INSPECTION_PING 	0
#define INSPECTION_VER 		1
#define INSPECTION_SDCARD 	2
#define INSPECTION_SDRAM 	3
/**********************************************************************/
typedef struct{
	uint8_t 	index;
	uint8_t 	payload[0];
}prtc_data_ctl_inspection_data_t;

typedef struct{
	uint8_t 	index;
	uint8_t 	payload[0];
}prtc_data_rsp_inspection_data_t;

typedef struct{
	uint8_t 	index;
}prtc_data_rqt_inspection_data_t;
/**********************************************************************/
/**********************************************************************/
typedef struct{
	union{
		struct{
			uint32_t ver1 : 8;
			uint32_t ver2 : 8;
			uint32_t ver3 : 8;
			uint32_t ver_reserved : 8;
		};
		uint32_t 	ver;
	};
}prtc_data_rsp_inspection_ver_data_t;
/**********************************************************************/
/**********************************************************************/
typedef struct{
	uint16_t 	count;
}prtc_data_ctl_inspection_ping_data_t;
typedef struct{
	uint16_t 	count;
}prtc_data_rsp_inspection_ping_data_t;
/**********************************************************************/
/**********************************************************************/
typedef struct{
	uint8_t Bool;
}prtc_data_rsp_inspection_bool_data_t;
/**********************************************************************/

#pragma pack()
#endif