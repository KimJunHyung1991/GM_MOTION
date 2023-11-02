#include "main.h"
/*************************************************
fail : net_pda_pid_edit.c
network packet data assemble prameter idemtification edit
4계층중 network층에 해당
packet pid-edit영역의 data 재조립
**************************************************/

/******************************************EDIT SUB PID ACTION ASSEMBLE*********************************************/
/**
  * @brief  packet eidt-action-control data assemble
  * @param  action : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_edit_sub_pid_action_ctl(uint8_t action, uint32_t op_val)
{
	prtc_data_ctl_edit_action_t *pCdcea = (prtc_data_ctl_edit_action_t *)make_data_buff;
	pCdcea->action = action;
	pCdcea->option_value = op_val;
	
	return make_data_buff;
}

/**
  * @brief  packet eidt-action-response data assemble
  * @param  action : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_edit_sub_pid_action_rsp(uint8_t action, uint32_t op_val)
{
	prtc_data_rsp_edit_action_t *pCdrea = (prtc_data_rsp_edit_action_t *)make_data_buff;
	pCdrea->action = action;
	pCdrea->option_value = op_val;
	
	return make_data_buff;
}

/**
  * @brief  packet eidt-action-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_edit_sub_action_pid_rqt(void)
{
	return make_data_buff;
}
/******************************************EDIT SUB PID ACTION ASSEMBLE*********************************************/