#ifndef _GM_HAL_PROTOCOL1_5_PID_MIDI_H_
#define _GM_HAL_PROTOCOL1_5_PID_MIDI_H_
#pragma pack(1)
/***********************************************************MIDI_SUB_PID_ADC**********************************************************/
typedef struct{
	uint16_t	adc_val;
}prtc_data_ctl_midi_adc_t;

typedef struct{
	uint16_t	adc_val;
}prtc_data_rsp_midi_adc_t;
/***********************************************************MIDI_SUB_PID_ADC**********************************************************/
/***********************************************************MIDI_SUB_PID_BUTTON**********************************************************/
typedef struct{
	uint8_t	type;
	union{
		struct{
			uint8_t status : 1;
			uint8_t id : 7;
		};
		uint8_t val;
	};	
}prtc_data_ctl_midi_button_t;

typedef struct{
	uint8_t		type;
}prtc_data_rqt_midi_button_t;

typedef struct{
	uint8_t	type;
	union{
		struct{
			uint8_t status : 1;
			uint8_t id : 7;
		};
		uint8_t val;
	};	
}prtc_data_rsp_midi_button_t;


///////////////////////////type///////////////////////////
#define MIDI_BTN_TYPE_PUSH		0
#define MIDI_BTN_TYPE_SLOT		1
#define MIDI_BTN_TYPE_DIRECTION		2
///////////////////////////type///////////////////////////
///////////////////////////status///////////////////////////
#define MIDI_BTN_STATUS_OFF		0
#define MIDI_BTN_STATUS_ON		1
///////////////////////////status///////////////////////////
/***********************************************************MIDI_SUB_PID_BUTTON**********************************************************/
/***********************************************************MIDI_SUB_PID_LED**********************************************************/
typedef struct{
	uint8_t		type;
	uint32_t 	val;
}prtc_data_ctl_midi_led_t;

typedef struct{
	uint8_t		type;
}prtc_data_rqt_midi_led_t;

typedef struct{
	uint8_t		type;
	uint32_t 	val;
}prtc_data_rsp_midi_led_t;
///////////////////////////type///////////////////////////
#define MIDI_LED_TYPE_PUSH_BTN		0
#define MIDI_LED_TYPE_COUNT1		1
#define MIDI_LED_TYPE_COUNT2		2
#define MIDI_LED_TYPE_SLOT1		3
#define MIDI_LED_TYPE_SLOT2		4
#define MIDI_LED_TYPE_SLOT3		5
#define MIDI_LED_TYPE_SLOT4		6
#define MIDI_LED_TYPE_RGB		7
///////////////////////////type///////////////////////////
///////////////////////////status///////////////////////////
#define MIDI_LED_STATUS_OFF		0
#define MIDI_LED_STATUS_ON		1
///////////////////////////status///////////////////////////
/***********************************************************MIDI_SUB_PID_LED**********************************************************/
/***********************************************************MIDI_SUB_PID_ID**********************************************************/
typedef struct{
	uint8_t		sub_id1;
	uint8_t		sub_id2;
	uint8_t		sub_id3;
	uint8_t		sub_id4;
	uint8_t		sub_id5;
	uint8_t		sub_id6;
	uint8_t		sub_id7;
	uint8_t		sub_id8;
}prtc_data_ctl_midi_id_t;

typedef struct{
	uint8_t		sub_id1;
	uint8_t		sub_id2;
	uint8_t		sub_id3;
	uint8_t		sub_id4;
	uint8_t		sub_id5;
	uint8_t		sub_id6;
	uint8_t		sub_id7;
	uint8_t		sub_id8;
}prtc_data_rsp_midi_id_t;

/***********************************************************MIDI_SUB_PID_ID**********************************************************/
#pragma pack()
#endif