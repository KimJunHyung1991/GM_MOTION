#ifndef _GM_HAL_PROTOCOL1_5_PID_EDIT_H_
#define _GM_HAL_PROTOCOL1_5_PID_EDIT_H_
/***********************************************************EDIT_SUB_PID_ACTION**********************************************************/
__packed typedef struct{
	uint8_t 	action;
}prtc_data_set_edit_action_t;

///////////////////////////action///////////////////////////
#define	EDIT_ACTION_REC_START							0
#define	EDIT_ACTION_REC_END								1
#define	EDIT_ACTION_PLAY_START							2
#define	EDIT_ACTION_PLAY_END							3
#define	EDIT_ACTION_REPEAT_PLAY_START					4
#define	EDIT_ACTION_REPEAT_PLAY_END						5
#define	EDIT_ACTION_MOTION1_REC_START					6
#define	EDIT_ACTION_MOTION1_REC_END						7
#define	EDIT_ACTION_MOTION2_REC_START					8
#define	EDIT_ACTION_MOTION2_REC_END						9
#define	EDIT_ACTION_MOTION3_REC_START					10
#define	EDIT_ACTION_MOTION3_REC_END						11
#define	EDIT_ACTION_MOTION4_REC_START					12
#define	EDIT_ACTION_MOTION4_REC_END						13
#define	EDIT_ACTION_MOTION5_REC_START					14
#define	EDIT_ACTION_MOTION5_REC_END						15
#define	EDIT_ACTION_MOTION6_REC_START					16
#define	EDIT_ACTION_MOTION6_REC_END						17
#define	EDIT_ACTION_MOTION7_REC_START					18
#define	EDIT_ACTION_MOTION7_REC_END						19
#define	EDIT_ACTION_MOTION8_REC_START					20
#define	EDIT_ACTION_MOTION8_REC_END						21
#define	EDIT_ACTION_MOTION1_PLAY_START					22
#define	EDIT_ACTION_MOTION1_PLAY_END					23
#define	EDIT_ACTION_MOTION2_PLAY_START					24
#define	EDIT_ACTION_MOTION2_PLAY_END					25
#define	EDIT_ACTION_MOTION3_PLAY_START					26
#define	EDIT_ACTION_MOTION3_PLAY_END					27
#define	EDIT_ACTION_MOTION4_PLAY_START					28
#define	EDIT_ACTION_MOTION4_PLAY_END					29
#define	EDIT_ACTION_MOTION5_PLAY_START					30
#define	EDIT_ACTION_MOTION5_PLAY_END					31
#define	EDIT_ACTION_MOTION6_PLAY_START					32
#define	EDIT_ACTION_MOTION6_PLAY_END					33
#define	EDIT_ACTION_MOTION7_PLAY_START					34
#define	EDIT_ACTION_MOTION7_PLAY_END					35
#define	EDIT_ACTION_MOTION8_PLAY_START					36
#define	EDIT_ACTION_MOTION8_PLAY_END					37
#define	EDIT_ACTION_PLAY_AND_REC_START					38
#define	EDIT_ACTION_PLAY_AND_REC_END					39
#define	EDIT_ACTION_PLAY_AND_REC_FILE_PLAY_START		40
#define	EDIT_ACTION_PLAY_AND_REC_FILE_PLAY_END			41
#define	EDIT_ACTION_PLAY_AND_REC_FILE_OVERWRITE			42
///////////////////////////action///////////////////////////

/***********************************************************EDIT_SUB_PID_ACTION**********************************************************/

#endif
