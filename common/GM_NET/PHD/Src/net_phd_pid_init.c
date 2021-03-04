#include "main.h"
#include "app_pid_init_cmd.h"
/*************************************************
fail : net_phd_pid_init.c
network packet header disassemble parameter identification init
4계층중 network층에 해당
packet의 header영역의 PID(init) 분해
**************************************************/

void net_phd_init_sub_pid_boot(prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_driver_data1(prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_driver_data2(prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_status(prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_absolute_battery(prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_move_sensor(prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_move_init_position(prtc_header_t *pPh, uint8_t *pData);

/******************************************INIT PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case INIT_SUB_PID_BOOT:
			net_phd_init_sub_pid_boot(pPh, pData);
		break;
		case INIT_SUB_PID_DRIVER_DATA1:
			net_phd_init_sub_pid_driver_data1(pPh, pData);
		break;
		case INIT_SUB_PID_DRIVER_DATA2:
			net_phd_init_sub_pid_driver_data2(pPh, pData);
		break;
		case INIT_SUB_PID_STATUS:
			net_phd_init_sub_pid_status(pPh, pData);
		break;
		case INIT_SUB_PID_ABSOLUTE_BATTERY:
			net_phd_init_sub_pid_absolute_battery(pPh, pData);
		break;
		case INIT_SUB_PID_MOVE_SENSOR:
			net_phd_init_sub_pid_move_sensor(pPh, pData);
		break;
		case INIT_SUB_PID_MOVE_INIT_POSITION:
			net_phd_init_sub_pid_move_init_position(pPh, pData);
		break;
	}
}
/******************************************INIT PID DISASSEMBLE*********************************************/
/******************************************INIT SUB PID BOOT DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-boot의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_boot(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_boot_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_boot_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_boot_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID BOOT DISASSEMBLE*********************************************/
/******************************************INIT SUB PID DRIVER DATA1 DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-driver_data1의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_driver_data1(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_driver_data1_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_driver_data1_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_driver_data1_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID DRIVER DATA1 DISASSEMBLE*********************************************/
/******************************************INIT SUB PID DRIVER DATA2 DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-driver_data2의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_driver_data2(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_driver_data2_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_driver_data2_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_driver_data2_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID DRIVER DATA2 DISASSEMBLE*********************************************/
/******************************************INIT SUB PID STATUS DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-status의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_status(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_status_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_status_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_status_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID STATUS DISASSEMBLE*********************************************/
/******************************************INIT SUB PID ABSOLUTE BATTERY DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-absolute_battery의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_absolute_battery(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_absolute_battery_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_absolute_battery_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_absolute_battery_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID ABSOLUTE BATTERY DISASSEMBLE*********************************************/
/******************************************INIT SUB PID MOVE SENSOR DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-move_sensor의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_move_sensor(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_move_sensor_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_move_sensor_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_move_sensor_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID MOVE SENSOR DISASSEMBLE*********************************************/
/******************************************INIT SUB PID MOVE INIT POSITION DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-move_init_position의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_move_init_position(prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_move_init_position_ctl(pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_move_init_position_rsp(pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_move_init_position_rqt(pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID MOVE INIT POSITION DISASSEMBLE*********************************************/