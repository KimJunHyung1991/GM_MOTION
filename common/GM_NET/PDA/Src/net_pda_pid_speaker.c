#include "main.h"
/*************************************************
fail : net_pda_pid_speaker.c
network packet data assemble prameter idemtification speaker
4계층중 network층에 해당
packet pid-speaker영역의 data 재조립
**************************************************/


/******************************************SPEAKER SUB PID ACTION ASSEMBLE*********************************************/
/**
  * @brief  packet speaker-action-control data assemble
  * @param  action : value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_speaker_sub_pid_action_ctl(uint8_t action)
{
	prtc_data_set_speaker_action_t *pCdsa = (prtc_data_set_speaker_action_t *)make_data_buff;
	pCdsa->action = action;
	
	return make_data_buff;
}

/**
  * @brief  packet speaker-action-response data assemble
  * @param  action : value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_speaker_sub_pid_action_rsp(uint8_t action)
{
	prtc_data_set_speaker_action_t *pCdsa = (prtc_data_set_speaker_action_t *)make_data_buff;
	pCdsa->action = action;
	
	return make_data_buff;
}

/**
  * @brief  packet speaker-action-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_speaker_sub_pid_action_rqt(void)
{
	return make_data_buff;
}
/******************************************SPEAKER SUB PID ACTION ASSEMBLE*********************************************/