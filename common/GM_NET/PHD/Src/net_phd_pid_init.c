#include "main.h"
#include "app_pid_init_cmd.h"
/*************************************************
fail : net_phd_pid_init.c
network packet header disassemble parameter identification init
4계층중 network층에 해당
packet의 header영역의 PID(init) 분해
**************************************************/

void net_phd_init_sub_pid_boot(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_driver_data1(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_driver_data2(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_status(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_absolute_battery(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_move_sensor(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_move_init_position(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_driver_data_op(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void net_phd_init_sub_pid_driver_type(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
/******************************************INIT PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case INIT_SUB_PID_BOOT:
			net_phd_init_sub_pid_boot(num, pPh, pData);
		break;
		case INIT_SUB_PID_DRIVER_DATA1:
			net_phd_init_sub_pid_driver_data1(num, pPh, pData);
		break;
		case INIT_SUB_PID_DRIVER_DATA2:
			net_phd_init_sub_pid_driver_data2(num, pPh, pData);
		break;
		case INIT_SUB_PID_STATUS:
			net_phd_init_sub_pid_status(num, pPh, pData);
		break;
		case INIT_SUB_PID_ABSOLUTE_BATTERY:
			net_phd_init_sub_pid_absolute_battery(num, pPh, pData);
		break;
		case INIT_SUB_PID_MOVE_SENSOR:
			net_phd_init_sub_pid_move_sensor(num, pPh, pData);
		break;
		case INIT_SUB_PID_MOVE_INIT_POSITION:
			net_phd_init_sub_pid_move_init_position(num, pPh, pData);
		break;
		case INIT_SUB_PID_DRIVER_DATA_OP:
			net_phd_init_sub_pid_driver_data_op(num, pPh, pData);
		break;
		case INIT_SUB_PID_DRIVER_TYPE:
			net_phd_init_sub_pid_driver_type(num, pPh, pData);
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
void net_phd_init_sub_pid_boot(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_boot_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_boot_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_boot_rqt(num, pPh, pData);
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
void net_phd_init_sub_pid_driver_data1(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_driver_data1_ctl(num, pPh, (prtc_data_ctl_init_driver_data1_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_driver_data1_rsp(num, pPh, (prtc_data_rsp_init_driver_data1_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_driver_data1_rqt(num, pPh, pData);
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
void net_phd_init_sub_pid_driver_data2(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_driver_data2_ctl(num, pPh, (prtc_data_ctl_init_driver_data2_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_driver_data2_rsp(num, pPh, (prtc_data_rsp_init_driver_data2_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_driver_data2_rqt(num, pPh, pData);
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
void net_phd_init_sub_pid_status(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_status_ctl(num, pPh, (prtc_data_ctl_init_status_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_status_rsp(num, pPh, (prtc_data_rsp_init_status_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_status_rqt(num, pPh, (prtc_data_rqt_init_status_t *)pData);
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
void net_phd_init_sub_pid_absolute_battery(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_absolute_battery_ctl(num, pPh, (prtc_data_ctl_init_absolute_battery_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_absolute_battery_rsp(num, pPh, (prtc_data_rsp_init_absolute_battery_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_absolute_battery_rqt(num, pPh, pData);
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
void net_phd_init_sub_pid_move_sensor(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_move_sensor_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_move_sensor_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_move_sensor_rqt(num, pPh, pData);
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
void net_phd_init_sub_pid_move_init_position(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_move_init_position_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_move_init_position_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_move_init_position_rqt(num, pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID MOVE INIT POSITION DISASSEMBLE*********************************************/
/******************************************INIT SUB PID DRIVER DATA OP DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-river data op의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_driver_data_op(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_driver_data_op_ctl(num, pPh, pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_driver_data_op_rsp(num, pPh, pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_driver_data_op_rqt(num, pPh, pData);
		break;
	}
}
/******************************************INIT SUB PID DRIVER DATA OP DISASSEMBLE*********************************************/
/******************************************INIT SUB PID DRIVER TYPE DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID-init의 sub_pid-river data op의 cmd)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_init_sub_pid_driver_type(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_init_sub_pid_driver_type_ctl(num, pPh, (prtc_data_ctl_init_driver_type_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_init_sub_pid_driver_type_rsp(num, pPh, (prtc_data_rsp_init_driver_type_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_init_sub_pid_driver_type_rqt(num, pPh, (prtc_data_rqt_init_driver_type_t *)pData);
		break;
	}
}
/******************************************INIT SUB PID DRIVER TYPE DISASSEMBLE*********************************************/