#ifndef _GM_HAL_PROTOCOL1_5_H_
#define _GM_HAL_PROTOCOL1_5_H_

#include "gm_hal_protocol1_5_pid_init.h"
#include "gm_hal_protocol1_5_pid_motion.h"
#include "gm_hal_protocol1_5_pid_midi.h"
#include "gm_hal_protocol1_5_pid_edit.h"
#include "gm_hal_protocol1_5_pid_sensor.h"
#include "gm_hal_protocol1_5_pid_speaker.h"
#include "gm_hal_protocol1_5_pid_error.h"

__packed typedef struct{
	uint8_t cmd1;
	uint8_t dlc;
	union{
		struct{
			uint32_t sub_id		:	5;
			uint32_t sub_pid	:	5;
			uint32_t pid		:	5;
			uint32_t cmd2		:	1;
			uint32_t target_id	:	6;
			uint32_t souce_id	:	6;
			uint32_t priority	:	1;
			uint32_t Null		:	3;
		};
		uint32_t protocol_header_32;
	};
}prtc_header_t;


/*******************************************Header영역의 RTR******************************************************************/
#define CMD_CONTROL_1_5			0
#define CMD_RESPONSE_1_5		1
#define CMD_REQUEST_1_5			2
#define CMD_RESERVED_1_5		3
/*******************************************Header영역의 RTR******************************************************************/
/*******************************************Header영역의 PRIORITY******************************************************************/
#define PRIORITY_EMERGENCY		0
#define PRIORITY_NOMAL			1
#define PRIORITY_RESERVED1		2
#define PRIORITY_RESERVED2		3
/*******************************************Header영역의 PRIORITY******************************************************************/
/*******************************************Header영역의 PID******************************************************************/
#define PID_INIT				0
#define PID_MOTION				1
#define PID_MIDI				2
#define PID_EDIT				3
#define PID_SPEAKER				4
#define PID_SENSOR				5
#define PID_ERROR				6
/*******************************************Header영역의 PID******************************************************************/
/*******************************************PID_INIT의 SUB_PID******************************************************************/
#define INIT_SUB_PID_BOOT				0
#define INIT_SUB_PID_DRIVER_DATA1			1
#define INIT_SUB_PID_DRIVER_DATA2			2
#define INIT_SUB_PID_STATUS				3
#define INIT_SUB_PID_ABSOLUTE_BATTERY			4
#define INIT_SUB_PID_MOVE_SENSOR			5
#define INIT_SUB_PID_MOVE_INIT_POSITION			6
/*******************************************PID_INIT의 SUB_PID******************************************************************/
/*******************************************PID_MOTION의 SUB_PID******************************************************************/
#define MOTION_SUB_PID_ADC		0
#define MOTION_SUB_PID_ANGLE		1
/*******************************************PID_MOTION의 SUB_PID******************************************************************/
/*******************************************PID_MIDI의 SUB_PID******************************************************************/
#define MIDI_SUB_PID_ADC		0
#define MIDI_SUB_PID_BUTTON		1
#define MIDI_SUB_PID_LED		2
#define MIDI_SUB_PID_ID			3
/*******************************************PID_MIDI의 SUB_PID******************************************************************/
/*******************************************PID_VIDEO의 SUB_PID******************************************************************/
#define EDIT_SUB_PID_ACTION		0
/*******************************************PID_VIDEO의 SUB_PID******************************************************************/
/*******************************************PID_SPEAKER의 SUB_PID******************************************************************/
#define SPEAKER_SUB_PID_ACTION		0
/*******************************************PID_SPEAKER의 SUB_PID******************************************************************/
/*******************************************PID_SENSOR의 SUB_PID******************************************************************/
#define SENSOR_SUB_PID_ACTION		0
/*******************************************PID_SENSOR의 SUB_PID******************************************************************/
/*******************************************PID_ERROR의 SUB_PID******************************************************************/
#define ERROR_SUB_PID_RC		0
#define ERROR_SUB_PID_AC		1
#define ERROR_SUB_PID_BLDC		2
/*******************************************PID_ERROR의 SUB_PID******************************************************************/


#endif
