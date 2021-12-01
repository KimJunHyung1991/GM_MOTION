#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_motion.h"

/******************************************MOTION SUB PID ADC APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_motion_sub_pid_adc_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_adc_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_adc_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_adc_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_adc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_motion_sub_pid_adc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_motion_adc_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ADC, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_adc_ctl(adc_val));
}

void app_tx_motion_sub_pid_adc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_motion_adc_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ADC, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_adc_rsp(adc_val));
}

void app_tx_motion_sub_pid_adc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ADC, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_adc_rqt());
}
/******************************************MOTION SUB PID ADC APPLICATION*********************************************/
/******************************************MOTION SUB PID ANGLE APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_motion_sub_pid_angle_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_angle_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_angle_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_angle_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_angle_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_motion_sub_pid_angle_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t angle_val)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_motion_angle_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_angle_ctl(angle_val));
}

void app_tx_motion_sub_pid_angle_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t angle_val)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_motion_angle_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_angle_rsp(angle_val));
}

void app_tx_motion_sub_pid_angle_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id ,uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_angle_rqt());
}

/******************************************MOTION SUB PID ANGLE APPLICATION*********************************************/
/******************************************MOTION SUB PID DIRECTION*********************************************/
__weak void app_rx_motion_sub_pid_direction_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_direction_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_direction_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_direction_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_direction_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_motion_sub_pid_direction_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t id, uint8_t direction, uint8_t val)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_motion_direction_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_DIRECTION, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_direction_ctl(id, direction, val));
}

void app_tx_motion_sub_pid_direction_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t id, uint8_t direction, uint8_t val)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_motion_direction_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_DIRECTION, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_direction_rsp(id, direction, val));
}

void app_tx_motion_sub_pid_direction_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_direction_rqt());
}
/******************************************MOTION SUB PID DIRECTION*********************************************/