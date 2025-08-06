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
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_DIRECTION, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_direction_rqt());
}
/******************************************MOTION SUB PID DIRECTION*********************************************/
/******************************************MOTION SUB PID PROFILE_POSITION*********************************************/
__weak void app_rx_motion_sub_pid_profile_position_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_motion_profile_position_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_profile_position_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_motion_profile_position_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_profile_position_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_motion_sub_pid_profile_position_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t time, uint16_t location)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_motion_profile_position_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_PROFILE_POSITION, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_profile_position_ctl(time, location));
}

void app_tx_motion_sub_pid_profile_position_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint32_t time, uint16_t location)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_motion_profile_position_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_PROFILE_POSITION, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_profile_position_rsp(time, location));
}

void app_tx_motion_sub_pid_profile_position_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_PROFILE_POSITION, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_profile_position_rqt());
}
/******************************************MOTION SUB PID PROFILE_POSITION*********************************************/
/******************************************MOTION SUB PID RAW DATA*********************************************/
__weak void app_rx_motion_sub_pid_raw_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_motion_raw_data_op_t *pData)
{
	//prtc_data_motion_raw_data_op_t *pCdmrdo = (prtc_data_motion_raw_data_op_t *)pData;
	//prtc_data_ctl_motion_raw_data_t *pCdcmrd = (prtc_data_ctl_motion_raw_data_t *)pCdmrdo->payload;
	
}

__weak void app_rx_motion_sub_pid_raw_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_motion_raw_data_op_t *pData)
{
	//prtc_data_motion_raw_data_op_t *pCdmrdo = (prtc_data_motion_raw_data_op_t *)pData;
	//prtc_data_rsp_motion_raw_data_t *pCdrmrd = (prtc_data_rsp_motion_raw_data_t *)pCdmrdo->payload;
}

__weak void app_rx_motion_sub_pid_raw_data_rqt(uint8_t num, prtc_header_t *pPh, prtc_data_motion_raw_data_op_t *pData)
{
	
}

void app_tx_motion_sub_pid_raw_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t op ,uint16_t multi_turn, uint32_t single_turn)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_motion_raw_data_op_t)+sizeof(prtc_data_ctl_motion_raw_data_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_RAW_DATA, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_raw_data_ctl(op, multi_turn, single_turn));
}

void app_tx_motion_sub_pid_raw_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t op, uint16_t multi_turn, uint32_t single_turn)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_motion_raw_data_op_t)+sizeof(prtc_data_rsp_motion_raw_data_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_RAW_DATA, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_raw_data_rsp(op, multi_turn, single_turn));
}

void app_tx_motion_sub_pid_raw_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t op)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, sizeof(prtc_data_motion_raw_data_op_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_RAW_DATA, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_raw_data_rqt(op));
}
/******************************************MOTION SUB PID RAW DATA*********************************************/
/******************************************MOTION SUB PID BRAKE*********************************************/
__weak void app_rx_motion_sub_pid_brake_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_brake_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_brake_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_brake_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_brake_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_motion_sub_pid_brake_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t brake, uint8_t servo_on)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_brake_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_BRAKE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_brake_ctl(brake, servo_on));
}

void app_tx_motion_sub_pid_brake_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, uint8_t brake, uint8_t servo_on)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_brake_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_BRAKE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_brake_rsp(brake, servo_on));
}

void app_tx_motion_sub_pid_brake_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_BRAKE, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_brake_rqt());
}
/******************************************MOTION SUB PID BRAKE*********************************************/
/******************************************MOTION SUB PID SCALE RAW DATA*********************************************/
__weak void app_rx_motion_sub_pid_scale_raw_data_ctl(uint8_t num, prtc_header_t *pPh, prtc_data_ctl_scale_motion_raw_data_t *pData)
{
	
	
}

__weak void app_rx_motion_sub_pid_scale_raw_data_rsp(uint8_t num, prtc_header_t *pPh, prtc_data_rsp_scale_motion_raw_data_t *pData)
{
	
}

__weak void app_rx_motion_sub_pid_scale_raw_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_motion_sub_pid_scale_raw_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, int64_t raw_data)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_scale_motion_raw_data_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_SCALE_RAW_DATA, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_scale_raw_data_ctl(raw_data));
}

void app_tx_motion_sub_pid_scale_raw_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id, int64_t raw_data)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_scale_motion_raw_data_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_SCALE_RAW_DATA, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_scale_raw_data_rsp(raw_data));
}

void app_tx_motion_sub_pid_scale_raw_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t souce_sub_id, uint8_t target_sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, sizeof(prtc_data_motion_raw_data_op_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_SCALE_RAW_DATA, souce_sub_id, target_sub_id), \
			net_pda_motion_sub_pid_scale_raw_data_rqt());
}
/******************************************MOTION SUB PID SCALE RAW DATA*********************************************/