#include "main.h"
#include <string.h>
/*************************************************
fail : net_pda_pid_midi.c
network packet data assemble prameter idemtification midi
4계층중 network층에 해당
packet pid-midi영역의 data 재조립
**************************************************/


/******************************************MIDI SUB PID ADC ASSEMBLE*********************************************/
/**
  * @brief  packet midi-adc-control data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_adc_ctl(uint8_t motor_id, uint8_t motor_sub_id, uint16_t adc_val)
{
	prtc_data_ctl_midi_adc_t *pCdcma = (prtc_data_ctl_midi_adc_t *)make_data_buff;
	pCdcma->motor_id = motor_id;
	pCdcma->motor_sub_id = motor_sub_id;
	pCdcma->adc_val = adc_val;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-adc-response data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_adc_rsp(uint8_t motor_id, uint8_t motor_sub_id, uint16_t adc_val)
{
	prtc_data_rsp_midi_adc_t *pCdrma = (prtc_data_rsp_midi_adc_t *)make_data_buff;
	pCdrma->motor_id = motor_id;
	pCdrma->motor_sub_id = motor_sub_id;
	pCdrma->adc_val = adc_val;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-adc-request data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_adc_rqt(uint8_t motor_id, uint8_t motor_sub_id)
{
	prtc_data_rqt_midi_adc_t *pCdrma = (prtc_data_rqt_midi_adc_t *)make_data_buff;
	pCdrma->motor_id = motor_id;
	pCdrma->motor_sub_id = motor_sub_id;
	return make_data_buff;
}
/******************************************MIDI SUB PID ADC ASSEMBLE*********************************************/
/******************************************MIDI SUB PID BUTTON ASSEMBLE*********************************************/
/**
  * @brief  packet midi-button-control data assemble
  * @param  type : midi button 종류
			status : 버튼의 상태값
			id : 버튼의 id
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_button_ctl(uint8_t type, uint8_t status, uint8_t id)
{
	prtc_data_ctl_midi_button_t *pCdcma = (prtc_data_ctl_midi_button_t *)make_data_buff;
	pCdcma->type = type;
	pCdcma->status = status;
	pCdcma->id = id;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-button-response data assemble
  * @param  type : midi button 종류
			status : 버튼의 상태값
			id : 버튼의 id
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_button_rsp(uint8_t type, uint8_t status, uint8_t id)
{
	prtc_data_rsp_midi_button_t *pCdrma = (prtc_data_rsp_midi_button_t *)make_data_buff;
	pCdrma->type = type;
	pCdrma->status = status;
	pCdrma->id = id;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-button-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_button_rqt(void)
{
	return make_data_buff;
}
/******************************************MIDI SUB PID BUTTON ASSEMBLE*********************************************/
/******************************************MIDI SUB PID LED ASSEMBLE*********************************************/
/**
  * @brief  packet midi-led-control data assemble
  * @param  type : midi led 종류
			val : id이며 상태값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_led_ctl(uint8_t type, uint32_t val)
{
	prtc_data_ctl_midi_led_t *pCdcml = (prtc_data_ctl_midi_led_t *)make_data_buff;
	pCdcml->type = type;
	pCdcml->val = val;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-led-response data assemble
  * @param  type : midi led 종류
			val : id이며 상태값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_led_rsp(uint8_t type, uint32_t val)
{
	prtc_data_rsp_midi_led_t *pCdrml = (prtc_data_rsp_midi_led_t *)make_data_buff;
	pCdrml->type = type;
	pCdrml->val = val;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-led-request data assemble
  * @param  type : midi led 종류
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_led_rqt(uint8_t type)
{
	prtc_data_rqt_midi_led_t *pCdrml = (prtc_data_rqt_midi_led_t *)make_data_buff;
	pCdrml->type = type;
	return make_data_buff;
}
/******************************************MIDI SUB PID LED ASSEMBLE*********************************************/
/******************************************MIDI SUB PID ID ASSEMBLE*********************************************/
/**
  * @brief  packet midi-id-control data assemble
  * @param  id1 : midi 1번축 ID
			id2 : midi 2번축 ID
			id3 : midi 3번축 ID
			id4 : midi 4번축 ID
			id5 : midi 5번축 ID
			id6 : midi 6번축 ID
			id7 : midi 7번축 ID
			id8 : midi 8번축 ID
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_id_ctl(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	prtc_data_ctl_midi_id_t *pCdcmi = (prtc_data_ctl_midi_id_t *)make_data_buff;
	pCdcmi->sub_id1 = id1;
	pCdcmi->sub_id1 = id2;
	pCdcmi->sub_id1 = id3;
	pCdcmi->sub_id1 = id4;
	pCdcmi->sub_id1 = id5;
	pCdcmi->sub_id1 = id6;
	pCdcmi->sub_id1 = id7;
	pCdcmi->sub_id1 = id8;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-id-response data assemble
  * @param  id1 : midi 1번축 ID
			id2 : midi 2번축 ID
			id3 : midi 3번축 ID
			id4 : midi 4번축 ID
			id5 : midi 5번축 ID
			id6 : midi 6번축 ID
			id7 : midi 7번축 ID
			id8 : midi 8번축 ID
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_id_rsp(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	prtc_data_rsp_midi_id_t *pCdrmi = (prtc_data_rsp_midi_id_t *)make_data_buff;
	pCdrmi->sub_id1 = id1;
	pCdrmi->sub_id1 = id2;
	pCdrmi->sub_id1 = id3;
	pCdrmi->sub_id1 = id4;
	pCdrmi->sub_id1 = id5;
	pCdrmi->sub_id1 = id6;
	pCdrmi->sub_id1 = id7;
	pCdrmi->sub_id1 = id8;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-id-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_id_rqt(void)
{
	return make_data_buff;
}
/******************************************MIDI SUB PID ID ASSEMBLE*********************************************/
/******************************************MIDI SUB PID NICK_NAME_H ASSEMBLE*********************************************/
/**
  * @brief  packet midi-nick name h-control data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_nick_name_h_ctl(uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	prtc_data_ctl_midi_nick_name_h_t *pCdcmnnh = (prtc_data_ctl_midi_nick_name_h_t *)make_data_buff;
	pCdcmnnh->motor_num = motor_num;
	pCdcmnnh->set_page_num = set_page_num;
	
	strncpy(pCdcmnnh->nick_name, nick_name, sizeof(pCdcmnnh->nick_name));
	
	return make_data_buff;
}

/**
  * @brief  packet midi-nick name h-response data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_nick_name_h_rsp(uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	prtc_data_rsp_midi_nick_name_h_t *pCdrmnnh = (prtc_data_rsp_midi_nick_name_h_t *)make_data_buff;
	pCdrmnnh->motor_num = motor_num;
	pCdrmnnh->set_page_num = set_page_num;
	
	strncpy(pCdrmnnh->nick_name, nick_name, sizeof(pCdrmnnh->nick_name));
	
	return make_data_buff;
}

/**
  * @brief  packet midi-nick name h-request data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_nick_name_h_rqt(void)
{	
	return make_data_buff;
}
/******************************************MIDI SUB PID NICK_NAME_H ASSEMBLE*********************************************/
/******************************************MIDI SUB PID NICK_NAME_L ASSEMBLE*********************************************/
/**
  * @brief  packet midi-nick name l-control data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_nick_name_l_ctl(uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	prtc_data_ctl_midi_nick_name_l_t *pCdcmnnl = (prtc_data_ctl_midi_nick_name_l_t *)make_data_buff;
	pCdcmnnl->motor_num = motor_num;
	pCdcmnnl->set_page_num = set_page_num;
	
	strncpy(pCdcmnnl->nick_name, nick_name, sizeof(pCdcmnnl->nick_name));
	
	return make_data_buff;
}

/**
  * @brief  packet midi-nick name l-response data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_nick_name_l_rsp(uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	prtc_data_rsp_midi_nick_name_l_t *pCdrmnnl = (prtc_data_rsp_midi_nick_name_l_t *)make_data_buff;
	pCdrmnnl->motor_num = motor_num;
	pCdrmnnl->set_page_num = set_page_num;
	
	strncpy(pCdrmnnl->nick_name, nick_name, sizeof(pCdrmnnl->nick_name));
	
	return make_data_buff;
}

/**
  * @brief  packet midi-nick name l-request data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_nick_name_l_rqt(void)
{	
	return make_data_buff;
}
/******************************************MIDI SUB PID NICK_NAME_L ASSEMBLE*********************************************/
/******************************************MIDI SUB PID RANGE_DATA ASSEMBLE*********************************************/
/**
  * @brief  packet midi-range data-control data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_range_data_ctl(uint8_t motor_num, uint8_t set_page_num, uint16_t range, uint16_t max, uint16_t min)
{
	prtc_data_ctl_midi_range_data_t *pCdcmrd = (prtc_data_ctl_midi_range_data_t *)make_data_buff;
	pCdcmrd->motor_num = motor_num;
	pCdcmrd->set_page_num = set_page_num;
	pCdcmrd->range = range;
	pCdcmrd->max = max;
	pCdcmrd->min = min;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-response data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_range_data_rsp(uint8_t motor_num, uint8_t set_page_num, uint16_t range, uint16_t max, uint16_t min)
{
	prtc_data_rsp_midi_range_data_t *pCdrmrd = (prtc_data_rsp_midi_range_data_t *)make_data_buff;
	pCdrmrd->motor_num = motor_num;
	pCdrmrd->set_page_num = set_page_num;
	pCdrmrd->range = range;
	pCdrmrd->max = max;
	pCdrmrd->min = min;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-request data assemble
  * @param  
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_range_data_rqt(void)
{
	return make_data_buff;
}
/******************************************MIDI SUB PID RANGE_DATA ASSEMBLE*********************************************/
/******************************************MIDI SUB PID PAGE ASSEMBLE*********************************************/
uint8_t *net_pda_midi_sub_pid_page_ctl(uint8_t page, uint8_t slot_num, uint8_t motor_num, uint8_t set_page_num)
{
	prtc_data_ctl_midi_page_t *pCdcmip = (prtc_data_ctl_midi_page_t *)make_data_buff;
	pCdcmip->page = page;
	pCdcmip->slot_num = slot_num;
	pCdcmip->motor_num = motor_num;
	pCdcmip->set_page_num = set_page_num;
	
	
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-response data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_page_rsp(uint8_t page, uint8_t slot_num, uint8_t motor_num, uint8_t set_page_num)
{
	prtc_data_rsp_midi_page_t *pCdrmp = (prtc_data_rsp_midi_page_t *)make_data_buff;
	pCdrmp->page = page;
	pCdrmp->slot_num = slot_num;
	pCdrmp->motor_num = motor_num;
	pCdrmp->set_page_num = set_page_num;
	
	
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-request data assemble
  * @param  
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_page_rqt(void)
{
	return make_data_buff;
}
/******************************************MIDI SUB PID PAGE ASSEMBLE*********************************************/
/******************************************MIDI SUB PID EXIST ASSEMBLE*********************************************/
uint8_t *net_pda_midi_sub_pid_exist_ctl(void)
{	
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-response data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_exist_rsp(void)
{
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-request data assemble
  * @param  
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_exist_rqt(void)
{
	return make_data_buff;
}
/******************************************MIDI SUB PID EXIST ASSEMBLE*********************************************/
/******************************************MIDI SUB PID LAST PAGE ASSEMBLE*********************************************/
uint8_t *net_pda_midi_sub_pid_last_page_ctl(uint8_t last_page)
{	
	prtc_data_ctl_midi_last_page_t *pCdcmlp = (prtc_data_ctl_midi_last_page_t *)make_data_buff;
	pCdcmlp->last_page = last_page;
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-response data assemble
  * @param  motor_num : 대표 ID
			set_page_num : 
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_last_page_rsp(void)
{
	return make_data_buff;
}

/**
  * @brief  packet midi-range data-request data assemble
  * @param  
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_last_page_rqt(void)
{
	return make_data_buff;
}
/******************************************MIDI SUB PID LAST PAGE ASSEMBLE*********************************************/