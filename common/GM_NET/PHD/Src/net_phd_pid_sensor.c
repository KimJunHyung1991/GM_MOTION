#include "main.h"
#include "app_pid_sensor_cmd.h"
/*************************************************
fail : net_phd_pid_sensor.c
network packet header disassemble parameter identification sensor
4계층중 network층에 해당
packet의 header영역의 PID(sensor) 분해
**************************************************/

void net_phd_sensor_sub_pid_detect(uint8_t num, prtc_header_t *pPh, uint8_t *pData);

/******************************************SENSOR PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-sensor의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_sensor_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case SENSOR_SUB_PID_DETECT:
			net_phd_sensor_sub_pid_detect(num, pPh, pData);
		break;
	}
}
/******************************************SENSOR PID DISASSEMBLE*********************************************/
/******************************************SENSOR SUB PID DETECT DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-sensor의 sub_pid-detect의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_sensor_sub_pid_detect(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_sensor_sub_pid_detect_ctl(num, pPh, (prtc_data_ctl_sensor_detect_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_sensor_sub_pid_detect_rsp(num, pPh, (prtc_data_rsp_sensor_detect_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_sensor_sub_pid_detect_rqt(num, pPh, pData);
		break;
	}
}
/******************************************SENSOR SUB PID DETECT DISASSEMBLE*********************************************/