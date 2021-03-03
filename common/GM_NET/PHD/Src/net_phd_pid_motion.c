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
			app_rx_motion_sub_pid_adc_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_adc_rsp(num, pPh, pData);
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
			app_rx_motion_sub_pid_angle_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_motion_sub_pid_angle_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_motion_sub_pid_angle_rqt(num, pPh, pData);
		break;
	}
}
/******************************************MOTION SUB PID ANGLE DISASSEMBLE*********************************************/