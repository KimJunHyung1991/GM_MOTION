#include "main.h"
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
uint8_t *net_pda_midi_sub_pid_adc_ctl(uint16_t adc_val)
{
	prtc_data_ctl_midi_adc_t *pCdcma = (prtc_data_ctl_midi_adc_t *)make_data_buff;
	pCdcma->adc_val = adc_val;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-adc-response data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_adc_rsp(uint16_t adc_val)
{
	prtc_data_rsp_midi_adc_t *pCdrma = (prtc_data_rsp_midi_adc_t *)make_data_buff;
	pCdrma->adc_val = adc_val;
	
	return make_data_buff;
}

/**
  * @brief  packet midi-adc-request data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_midi_sub_pid_adc_rqt(void)
{
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