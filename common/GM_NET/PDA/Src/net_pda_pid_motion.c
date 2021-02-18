#include "main.h"
/*************************************************
fail : net_pda_pid_motion.c
network packet data assemble prameter idemtification motion
4계층중 network층에 해당
packet pid-motion영역의 data 재조립
**************************************************/


/******************************************MOTION SUB PID ADC ASSEMBLE*********************************************/
/**
  * @brief  packet motion-adc-control data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_adc_ctl(uint16_t adc_val)
{
	prtc_data_ctl_motion_adc_t *pCdcma = (prtc_data_ctl_motion_adc_t *)make_data_buff;
	pCdcma->adc_val = adc_val;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-adc-respose data assemble
  * @param  adc_val : midi슬라이더 12bit(0~4095) value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_adc_rsp(uint16_t adc_val)
{
	prtc_data_rsp_motion_adc_t *pCdrma = (prtc_data_rsp_motion_adc_t *)make_data_buff;
	pCdrma->adc_val = adc_val;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-adc-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_adc_rqt(void)
{
	return make_data_buff;
}
/******************************************MOTION SUB PID ADC ASSEMBLE*********************************************/
/******************************************MOTION SUB PID ANGLE ASSEMBLE*********************************************/
/**
  * @brief  packet motion-angle-control data assemble
  * @param  angle_val :  value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_angle_ctl(uint32_t angle_val)
{
	prtc_data_ctl_motion_angle_t *pCdcma = (prtc_data_ctl_motion_angle_t *)make_data_buff;
	pCdcma->angle_val = angle_val;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-angle-response data assemble
  * @param  angle_val :  value
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_angle_rsp(uint32_t angle_val)
{
	prtc_data_rsp_motion_angle_t *pCdrma = (prtc_data_rsp_motion_angle_t *)make_data_buff;
	pCdrma->angle_val = angle_val;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-angle-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_angle_rqt(void)
{
	return make_data_buff;
}
/******************************************MOTION SUB PID ANGLE ASSEMBLE*********************************************/