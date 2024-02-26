#ifndef _GM_HAL_PROTOCOL1_5_PID_SPEAKER_H_
#define _GM_HAL_PROTOCOL1_5_PID_SPEAKER_H_
#pragma pack(1)
/***********************************************************SPEAKER_SUB_PID_ACTION**********************************************************/
typedef struct{
	uint8_t 	action;
	uint8_t 	payload[0];
}prtc_data_ctl_speaker_action_t;

typedef struct{
	uint8_t 	num;
}prtc_data_ctl_speaker_action_play_num_t;

typedef struct{
	uint8_t 	action;
}prtc_data_rsp_speaker_action_t;
///////////////////////////action///////////////////////////
#define	SPEAKER_ACTION_SOUND_UP		0
#define	SPEAKER_ACTION_SOUND_DN		1
#define	SPEAKER_ACTION_MUTE			2
#define	SPEAKER_ACTION_UNMUTE		3
#define	SPEAKER_ACTION_STOP			4
#define	SPEAKER_ACTION_NEXT			5
#define	SPEAKER_ACTION_PREVIOS		6
#define	SPEAKER_ACTION_PLAY_PAUSE	7
///////////////////////////action///////////////////////////
/***********************************************************SPEAKER_SUB_PID_ACTION**********************************************************/
#pragma pack()
#endif