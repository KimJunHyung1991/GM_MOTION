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
/******************************************MOTION SUB PID DIRECTION ASSEMBLE*********************************************/
/**
  * @brief  packet motion-direction-control data assemble
  * @param  direction :  방향
			val		  :	움직임 속도
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_direction_ctl(uint8_t id, uint8_t direction, uint8_t val)
{
	prtc_data_ctl_motion_direction_t *pCdcmd = (prtc_data_ctl_motion_direction_t *)make_data_buff;
	pCdcmd->id = id;
	pCdcmd->direction = direction;
	pCdcmd->val = val;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-direction-response data assemble
  *  @param  direction :  방향
			val		  :	움직임 속도
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_direction_rsp(uint8_t id, uint8_t direction, uint8_t val)
{
	prtc_data_rsp_motion_direction_t *pCdrmd = (prtc_data_rsp_motion_direction_t *)make_data_buff;
	pCdrmd->id = id;
	pCdrmd->direction = direction;
	pCdrmd->val = val;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-direction-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_direction_rqt(void)
{
	return make_data_buff;
}
/******************************************MOTION SUB PID DIRECTION ASSEMBLE*********************************************/
/******************************************MOTION SUB PID PROFILE_POSITION ASSEMBLE*********************************************/
/**
  * @brief  packet motion-profile_position-control data assemble
  * @param  time :  설정시간
			location : 모터 위치
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_profile_position_ctl(uint32_t time, uint16_t location)
{
	prtc_data_ctl_motion_profile_position_t *pCdcmpp = (prtc_data_ctl_motion_profile_position_t *)make_data_buff;
	pCdcmpp->time = time;
	pCdcmpp->location = location;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-profile_position-response data assemble
  * @param  time :  설정시간
			location : 모터 위치
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_profile_position_rsp(uint32_t time, uint16_t location)
{
	prtc_data_rsp_motion_profile_position_t *pCdrpp = (prtc_data_rsp_motion_profile_position_t *)make_data_buff;
	pCdrpp->time = time;
	pCdrpp->location = location;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-profile_position-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_profile_position_rqt(void)
{
	return make_data_buff;
}
/******************************************MOTION SUB PID PROFILE_POSITION ASSEMBLE*********************************************/
/******************************************MOTION SUB PID RAW DATA ASSEMBLE*********************************************/
/**
  * @brief  packet motion-raw_data-control data assemble
  * @param  raw_data :  원본 데이터
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_raw_data_ctl(uint8_t op, uint16_t multi_turn , uint32_t single_turn)
{
	prtc_data_motion_raw_data_op_t *pCdmrdo = (prtc_data_motion_raw_data_op_t *)make_data_buff;
	prtc_data_ctl_motion_raw_data_t *pCdcmrd = (prtc_data_ctl_motion_raw_data_t *)pCdmrdo->payload;
	
	pCdmrdo->option = op;
	pCdcmrd->multi_turn = multi_turn;
	pCdcmrd->single_turn = single_turn;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-raw_data-response data assemble
  * @param  raw_data :  원본 데이터
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_raw_data_rsp(uint8_t op, uint16_t multi_turn , uint32_t single_turn)
{
	prtc_data_motion_raw_data_op_t *pCdmrdo = (prtc_data_motion_raw_data_op_t *)make_data_buff;
	prtc_data_rsp_motion_raw_data_t *pCdrmrd = (prtc_data_rsp_motion_raw_data_t *)pCdmrdo->payload;
	
	pCdmrdo->option = op;
	pCdrmrd->multi_turn = multi_turn;
	pCdrmrd->single_turn = single_turn;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-raw_data-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_raw_data_rqt(uint8_t op)
{
	prtc_data_motion_raw_data_op_t *pCdmrdo = (prtc_data_motion_raw_data_op_t *)make_data_buff;
	pCdmrdo->option = op;
	
	return make_data_buff;
}
/******************************************MOTION SUB PID RAW DATA ASSEMBLE*********************************************/
/******************************************MOTION SUB PID BRAKE ASSEMBLE*********************************************/
/**
  * @brief  packet motion-brake-control data assemble
  * @param  brake :  brake 상태
			sorvo_on : sorvo on 상태
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_brake_ctl(uint8_t brake, uint8_t servo_on)
{
	prtc_data_ctl_brake_t *pCdcb = (prtc_data_ctl_brake_t *)make_data_buff;
	pCdcb->brake = brake;
	pCdcb->servo_on = servo_on;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-brake-response data assemble
  * @param  brake :  brake 상태
			sorvo_on : sorvo on 상태
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_brake_rsp(uint8_t brake, uint8_t servo_on)
{
	prtc_data_rsp_brake_t *pCdrb = (prtc_data_rsp_brake_t *)make_data_buff;
	pCdrb->brake = brake;
	pCdrb->servo_on = servo_on;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-brake-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_brake_rqt(void)
{
	return make_data_buff;
}
/******************************************MOTION SUB PID BRAKE ASSEMBLE*********************************************/
/******************************************MOTION SUB PID SCALE RAW DATA ASSEMBLE*********************************************/
/**
  * @brief  packet motion-scale_raw_data-control data assemble
  * @param  raw_data :  raw_data 값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_scale_raw_data_ctl(int64_t raw_data)
{
	prtc_data_ctl_scale_motion_raw_data_t *pCdcsmrd = (prtc_data_ctl_scale_motion_raw_data_t *)make_data_buff;
	pCdcsmrd->raw_data = raw_data;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-scale_raw_data-response data assemble
  * @param  raw_data :  raw_data 값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_scale_raw_data_rsp(int64_t raw_data)
{
	prtc_data_rsp_scale_motion_raw_data_t *pCdrsmrd = (prtc_data_rsp_scale_motion_raw_data_t *)make_data_buff;
	pCdrsmrd->raw_data = raw_data;
	
	return make_data_buff;
}

/**
  * @brief  packet motion-scale_raw_data-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_motion_sub_pid_scale_raw_data_rqt(void)
{
	return make_data_buff;
}
/******************************************MOTION SUB PID SCALE RAW DATA ASSEMBLE*********************************************/