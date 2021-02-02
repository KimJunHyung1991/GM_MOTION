#include "main.h"
/*************************************************
fail : net_pda_pid_error.c
network packet data assemble prameter idemtification error
4계층중 network층에 해당
packet pid-error영역의 data 재조립
**************************************************/

/******************************************ERROR SUB PID RC ASSEMBLE*********************************************/
/**
  * @brief  packet error-rc-control data assemble
  * @param  error_code : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_rc_ctl(uint8_t error_code)
{
	prtc_data_ctl_error_rc_t *pCdcer = (prtc_data_ctl_error_rc_t *)make_data_buff;
	pCdcer->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-rc-response data assemble
  * @param  error_code : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_rc_rsp(uint8_t error_code)
{
	prtc_data_rsp_error_rc_t *pCdrer = (prtc_data_rsp_error_rc_t *)make_data_buff;
	pCdrer->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-rc-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_rc_rqt(void)
{
	return make_data_buff;
}
/******************************************ERROR SUB PID RC ASSEMBLE*********************************************/
/******************************************ERROR SUB PID AC ASSEMBLE*********************************************/
/**
  * @brief  packet error-ac-control data assemble
  * @param  error_code : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_ac_ctl(uint8_t error_code)
{
	prtc_data_ctl_error_ac_t *pCdcea = (prtc_data_ctl_error_ac_t *)make_data_buff;
	pCdcea->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-ac-response data assemble
  * @param  error_code : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_ac_rsp(uint8_t error_code)
{
	prtc_data_rsp_error_ac_t *pCdrea = (prtc_data_rsp_error_ac_t *)make_data_buff;
	pCdrea->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-ac-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_ac_rqt(void)
{
	return make_data_buff;
}
/******************************************ERROR SUB PID AC ASSEMBLE*********************************************/
/******************************************ERROR SUB PID BLDC ASSEMBLE*********************************************/
/**
  * @brief  packet error-bldc-control data assemble
  * @param  error_code : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_bldc_ctl(uint8_t error_code)
{
	prtc_data_ctl_error_bldc_t *pCdceb = (prtc_data_ctl_error_bldc_t *)make_data_buff;
	pCdceb->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-bldc-response data assemble
  * @param  error_code : value(0~255)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_bldc_rsp(uint8_t error_code)
{
	prtc_data_rsp_error_bldc_t *pCdreb = (prtc_data_rsp_error_bldc_t *)make_data_buff;
	pCdreb->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-bldc-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_bldc_rqt(void)
{
	return make_data_buff;
}
/******************************************ERROR SUB PID BLDC ASSEMBLE*********************************************/