#ifndef _GM_HAL_CAN_H_
#define _GM_HAL_CAN_H_

#include "prtc_header.h"


//#define CAN_BROADCAST	0

#pragma pack(1)

/////////////////////////////////////////////////////
typedef struct{
	uint8_t f_init;			//init ok = 1;   non init = 0

	GPIO_TypeDef* GPIO;		//led port
	uint16_t Pin;			//led pin num

	GPIO_PinState ledOnState;	//led on state  // ex. gpio low  ->  led on? off?

	uint32_t t_led_off;
}can_comm_led;	//210218 shs
/////////////////////////////////////////////////////

/////////////////////////////////////////////////////
typedef struct{
	uint16_t tail;
	uint16_t head;
	prtc_header_t can_header[CAN_Q_BUFF_SIZE];
	uint8_t data[CAN_Q_BUFF_SIZE][8];
}can_q_buff_t;
/////////////////////////////////////////////////////

#include "dl_can_rx.h"
#include "dl_can_tx.h"

extern uint8_t my_can_id;
/////////////////////////////////////////////////////

uint8_t ret_protocol_header_cmd(prtc_header_t *pPh);

typedef struct{
	union{
		struct{
			uint32_t sub_cmd	: 7;
			uint32_t payload_en	: 1;
			uint32_t cmd	 	: 2;
			uint32_t tar_id 	: 8;
			uint32_t page_num 	: 8;
			uint32_t type 		: 2;
			uint32_t emergency 	: 1;
			uint32_t Null		: 3;
		};
		uint32_t can_header_32;
	};
}android_can_header_t;
#pragma pack()

void set_canid(void);

#endif
