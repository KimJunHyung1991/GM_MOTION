#include "main.h"
#include "app_pid_motion_cmd.h"
/*************************************************
fail : net_phd_pid_motion.c
network packet header disassemble parameter identification motion
4계층중 network층에 해당
packet의 header영역의 PID(motion) 분해
**************************************************/

void net_phd_motion_sub_pid_adc(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_motion_sub_pid_angle(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_motion_sub_pid_direction(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_motion_sub_pid_profile_position(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_motion_sub_pid_raw_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_motion_sub_pid_brake(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
/******************************************MOTION PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case MOTION_SUB_PID_ADC:
			net_phd_motion_sub_pid_adc(num, pPh, pData);
		break;
		case MOTION_SUB_PID_ANGLE:
			net_phd_motion_sub_pid_angle(num, pPh, pData);
		break;
		case MOTION_SUB_PID_DIRECTION:
			net_phd_motion_sub_pid_direction(num, pPh, pData);
		break;
		case MOTION_SUB_PID_PROFILE_POSITION:
			net_phd_motion_sub_pid_profile_position(num, pPh, pData);
		break;
		case MOTION_SUB_PID_RAW_DATA:
			net_phd_motion_sub_pid_raw_data(num, pPh, pData);
		break;
		case MOTION_SUB_PID_BRAKE:
			net_phd_motion_sub_pid_brake(num, pPh, pData);
		break;
	}
}
/******************************************MOTION PID DISASSEMBLE*********************************************/
/******************************************MOTION SUB PID ADC DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid-adc의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid_adc(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_motion_sub_pid_adc_ctl(num, pPh, (prtc_data_ctl_motion_adc_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_adc_rsp(num, pPh, (prtc_data_rsp_motion_adc_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_adc_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MOTION SUB PID ADC DISASSEMBLE*********************************************/
/******************************************MOTION SUB PID ANGLE DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid-angle의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid_angle(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_motion_sub_pid_angle_ctl(num, pPh, (prtc_data_ctl_motion_angle_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_angle_rsp(num, pPh, (prtc_data_rsp_motion_angle_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_angle_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MOTION SUB PID ANGLE DISASSEMBLE*********************************************/
/******************************************MOTION SUB PID DIRECTION DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid-direction의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid_direction(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_motion_sub_pid_direction_ctl(num, pPh, (prtc_data_ctl_motion_direction_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_direction_rsp(num, pPh, (prtc_data_rsp_motion_direction_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_direction_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MOTION SUB PID DIRECTION DISASSEMBLE*********************************************/
/******************************************MOTION SUB PID PROFILE_POSITION DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid-profile_position의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid_profile_position(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_motion_sub_pid_profile_position_ctl(num, pPh, (prtc_data_ctl_motion_profile_position_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_profile_position_rsp(num, pPh, (prtc_data_rsp_motion_profile_position_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_profile_position_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MOTION SUB PID PROFILE_POSITION DISASSEMBLE*********************************************/
/******************************************MOTION SUB PID RAW DATA DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid-raw_data의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid_raw_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_motion_sub_pid_raw_data_ctl(num, pPh, (prtc_data_motion_raw_data_op_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_raw_data_rsp(num, pPh, (prtc_data_motion_raw_data_op_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_raw_data_rqt(num, pPh, (prtc_data_motion_raw_data_op_t *)pData);
		break;
	}
}
/******************************************MOTION SUB PID RAW DATA DISASSEMBLE*********************************************/
/******************************************MOTION SUB PID BRAKE DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-motion의 sub_pid-brake의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_motion_sub_pid_brake(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_motion_sub_pid_brake_ctl(num, pPh, (prtc_data_ctl_brake_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_brake_rsp(num, pPh, (prtc_data_rsp_brake_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_brake_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MOTION SUB PID BRAKE DISASSEMBLE*********************************************/