#ifndef _GM_HAL_PROTOCOL1_5_PID_MIDI_H_
#define _GM_HAL_PROTOCOL1_5_PID_MIDI_H_
#pragma pack(1)
/***********************************************************MIDI_SUB_PID_ADC**********************************************************/
typedef struct{
	uint8_t		motor_id;
	uint8_t		motor_sub_id;
	uint16_t	adc_val;
}prtc_data_ctl_midi_adc_t;

typedef struct{
	uint8_t		motor_id;
	uint8_t		motor_sub_id;
	uint16_t	adc_val;
}prtc_data_rsp_midi_adc_t;

typedef struct{
	uint8_t		motor_id;
	uint8_t		motor_sub_id;
}prtc_data_rqt_midi_adc_t;
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
	uint8_t	type;
	union{
		struct{
			uint8_t status : 1;
			uint8_t id : 7;
		};
		uint8_t val;
	};	
}prtc_data_rsp_midi_button_t;

typedef struct{
	uint8_t		type;
}prtc_data_rqt_midi_button_t;
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
	uint32_t 	val;
}prtc_data_rsp_midi_led_t;

typedef struct{
	uint8_t		type;
}prtc_data_rqt_midi_led_t;
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
/***********************************************************MIDI_SUB_PID_NICK_NAME_H**********************************************************/
typedef struct{
	uint8_t motor_num;
	uint8_t set_page_num;
	char nick_name[6];
}prtc_data_ctl_midi_nick_name_h_t;

typedef struct{
	uint8_t motor_num;
	uint8_t set_page_num;
	char nick_name[6];
}prtc_data_rsp_midi_nick_name_h_t;
/***********************************************************MIDI_SUB_PID_NICK_NAME_H**********************************************************/
/***********************************************************MIDI_SUB_PID_NICK_NAME_L**********************************************************/
typedef struct{
	uint8_t motor_num;
	uint8_t set_page_num;
	char nick_name[4];
}prtc_data_ctl_midi_nick_name_l_t;

typedef struct{
	uint8_t motor_num;
	uint8_t set_page_num;
	char nick_name[4];
}prtc_data_rsp_midi_nick_name_l_t;
/***********************************************************MIDI_SUB_PID_NICK_NAME_L**********************************************************/
/***********************************************************MIDI_SUB_PID_RANG_DATA**********************************************************/
typedef struct{
	uint8_t motor_num;
	uint8_t set_page_num;
	uint16_t range;
	uint16_t max;
	uint16_t min;
}prtc_data_ctl_midi_range_data_t;

typedef struct{
	uint8_t motor_num;
	uint8_t set_page_num;
	uint16_t range;
	uint16_t max;
	uint16_t min;
}prtc_data_rsp_midi_range_data_t;
/***********************************************************MIDI_SUB_PID_RANG_DATA**********************************************************/
/***********************************************************MIDI_SUB_PID_PAGE**********************************************************/
typedef struct{
	uint8_t page;
	uint8_t slot_num;
	uint8_t motor_num;
	uint8_t set_page_num;
}prtc_data_ctl_midi_page_t;

typedef struct{
	uint8_t page;
	uint8_t slot_num;
	uint8_t motor_num;
	uint8_t set_page_num;
}prtc_data_rsp_midi_page_t;
/***********************************************************MIDI_SUB_PID_PAGE**********************************************************/
/***********************************************************MIDI_SUB_PID_EXIST**********************************************************/
#if 1
typedef struct{
	uint8_t device;
}prtc_data_ctl_midi_exist_t;

typedef struct{
	uint8_t device;
}prtc_data_rsp_midi_exist_t;
///////////////////////////device///////////////////////////
#define MIDI_EXIST_DEVICE_MIDI		0
///////////////////////////device///////////////////////////
#endif
/***********************************************************MIDI_SUB_PID_EXIST**********************************************************/
/***********************************************************MIDI_SUB_PID_LAST_PAGE**********************************************************/
typedef struct{
	uint8_t last_page;
}prtc_data_ctl_midi_last_page_t;
/***********************************************************MIDI_SUB_PID_LAST_PAGE**********************************************************/
#pragma pack()
#endif