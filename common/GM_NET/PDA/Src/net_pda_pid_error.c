#include "main.h"
#include <string.h>
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
uint8_t *net_pda_error_sub_pid_rc_ctl(uint32_t error_code)
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
uint8_t *net_pda_error_sub_pid_rc_rsp(uint32_t error_code)
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
uint8_t *net_pda_error_sub_pid_ac_ctl(uint32_t error_code)
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
uint8_t *net_pda_error_sub_pid_ac_rsp(uint32_t error_code)
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
uint8_t *net_pda_error_sub_pid_bldc_ctl(uint32_t error_code)
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
uint8_t *net_pda_error_sub_pid_bldc_rsp(uint32_t error_code)
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
/******************************************ERROR SUB PID CLEAR ASSEMBLE*********************************************/
/**
  * @brief  packet error-clear-control data assemble
  * @param  error_code : value(0~0xFFFFFFFF)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_clear_ctl(uint32_t error_code)
{
	prtc_data_ctl_error_clear_t *pCdcec = (prtc_data_ctl_error_clear_t *)make_data_buff;
	pCdcec->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-clear-response data assemble
  * @param  error_code : value(0~0xFFFFFFFF)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_clear_rsp(uint32_t error_code)
{
	prtc_data_rsp_error_clear_t *pCdrec = (prtc_data_rsp_error_clear_t *)make_data_buff;
	pCdrec->error_code = error_code;
	
	return make_data_buff;
}

/**
  * @brief  packet error-clear-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_clear_rqt(void)
{
	return make_data_buff;
}
/******************************************ERROR SUB PID CLEAR ASSEMBLE*********************************************/
/******************************************ERROR SUB PID ERROR LEVEL ASSEMBLE*********************************************/
/**
  * @brief  packet error-level-control data assemble
  * @param  motor_type : 0 - NULL
						 1 - RC
						 2 - AC
						 3 - BLDC
						 4 - ZER
						 5 - DXL
			err_str : 에러 코드 문자열
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_error_level_ctl(uint8_t motor_type, char *err_str)
{
	prtc_data_ctl_error_level_t *pCdcel = (prtc_data_ctl_error_level_t *)make_data_buff;
	pCdcel->motor_type = motor_type;
	memcpy(pCdcel->err_lv_str, err_str, 7);
	//memcpy(pCdcel->err_lv_str, err_str, sizeof(pCdcel->err_lv_str));
	
	return make_data_buff;
}

/**
  * @brief  packet error-level-response data assemble
  * @param  motor_type : 0 - NULL
						 1 - RC
						 2 - AC
						 3 - BLDC
						 4 - ZER
						 5 - DXL
			err_str : 에러 코드 문자열
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_error_level_rsp(uint8_t motor_type, char *err_str)
{
	prtc_data_rsp_error_level_t *pCdrel = (prtc_data_rsp_error_level_t *)make_data_buff;
	pCdrel->motor_type = motor_type;
	memcpy(pCdrel->err_lv_str, err_str, 7);
	//memcpy(pCdrel->err_lv_str, err_str, sizeof(pCdrel->err_lv_str));
	
	return make_data_buff;
}

/**
  * @brief  packet error-level-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_error_sub_pid_error_level_rqt(void)
{
	return make_data_buff;
}
/******************************************ERROR SUB PID ERROR LEVEL ASSEMBLE*********************************************/