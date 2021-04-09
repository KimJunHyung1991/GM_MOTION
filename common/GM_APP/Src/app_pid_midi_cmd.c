#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_midi.h"

/******************************************MIDI SUB PID ADC APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_midi_sub_pid_adc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_adc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_adc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_adc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id, uint16_t adc_val)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_adc_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			net_pda_midi_sub_pid_adc_ctl(id, adc_val));
}

void app_tx_midi_sub_pid_adc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id, uint16_t adc_val)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_adc_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			net_pda_midi_sub_pid_adc_rsp(id, adc_val));
}

void app_tx_midi_sub_pid_adc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			net_pda_midi_sub_pid_adc_rqt());
}
/******************************************MIDI SUB PID ADC APPLICATION*********************************************/
/******************************************MIDI SUB PID BUTTON APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_midi_sub_pid_button_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_button_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_button_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_button_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_button_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			net_pda_midi_sub_pid_button_ctl(type, status, id));
}

void app_tx_midi_sub_pid_button_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_button_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			net_pda_midi_sub_pid_button_rsp(type, status, id));
}

void app_tx_midi_sub_pid_button_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			net_pda_midi_sub_pid_button_rqt());
}

/******************************************MIDI SUB PID BUTTON APPLICATION*********************************************/
/******************************************MIDI SUB PID LED APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_midi_sub_pid_led_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_led_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_led_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_led_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_led_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			net_pda_midi_sub_pid_led_ctl(type, val));
}

void app_tx_midi_sub_pid_led_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_led_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			net_pda_midi_sub_pid_led_rsp(type, val));
}

void app_tx_midi_sub_pid_led_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			net_pda_midi_sub_pid_led_rqt(type));
}

/******************************************MIDI SUB PID LED APPLICATION*********************************************/
/******************************************MIDI SUB PID ID APPLICATION*********************************************/
/**
  * @brief  
  * @param  num : CAN 종류
			*pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
__weak void app_rx_midi_sub_pid_id_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_id_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_id_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_id_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_id_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			net_pda_midi_sub_pid_id_ctl(id1, id2, id3, id4, id5, id6, id7, id8));
}

void app_tx_midi_sub_pid_id_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_id_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			net_pda_midi_sub_pid_id_rsp(id1, id2, id3, id4, id5, id6, id7, id8));
}

void app_tx_midi_sub_pid_id_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			net_pda_midi_sub_pid_id_rqt());
}

/******************************************MIDI SUB PID ID APPLICATION*********************************************/
/******************************************MIDI SUB PID NICK_NAME_H APPLICATION*********************************************/
__weak void app_rx_midi_sub_pid_nick_name_h_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_nick_name_h_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_nick_name_h_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_nick_name_h_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_nick_name_h_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_NICK_NAME_H, sub_id), \
			net_pda_midi_sub_pid_nick_name_h_ctl(motor_num, set_page_num, nick_name));
}

void app_tx_midi_sub_pid_nick_name_h_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_nick_name_h_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_NICK_NAME_H, sub_id), \
			net_pda_midi_sub_pid_nick_name_h_rsp(motor_num, set_page_num, nick_name));
}

void app_tx_midi_sub_pid_nick_name_h_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_NICK_NAME_H, sub_id), \
			net_pda_midi_sub_pid_nick_name_h_rqt());
}
/******************************************MIDI SUB PID NICK_NAME_H APPLICATION*********************************************/
/******************************************MIDI SUB PID NICK_NAME_L APPLICATION*********************************************/
__weak void app_rx_midi_sub_pid_nick_name_l_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_nick_name_l_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_nick_name_l_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_nick_name_l_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_nick_name_l_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_NICK_NAME_L, sub_id), \
			net_pda_midi_sub_pid_nick_name_l_ctl(motor_num, set_page_num, nick_name));
}

void app_tx_midi_sub_pid_nick_name_l_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_nick_name_l_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_NICK_NAME_L, sub_id), \
			net_pda_midi_sub_pid_nick_name_l_rsp(motor_num, set_page_num, nick_name));
}

void app_tx_midi_sub_pid_nick_name_l_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_NICK_NAME_L, sub_id), \
			net_pda_midi_sub_pid_nick_name_l_rqt());
}
/******************************************MIDI SUB PID NICK_NAME_L APPLICATION*********************************************/
/******************************************MIDI SUB PID RANGE_DATA APPLICATION*********************************************/
__weak void app_rx_midi_sub_pid_range_data_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_range_data_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_range_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_range_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, uint16_t max, uint16_t min)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_range_data_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_RANGE_DATA, sub_id), \
			net_pda_midi_sub_pid_range_data_ctl(motor_num, set_page_num, max, min));
}

void app_tx_midi_sub_pid_range_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, uint16_t max, uint16_t min)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_range_data_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_RANGE_DATA, sub_id), \
			net_pda_midi_sub_pid_range_data_rsp(motor_num, set_page_num, max, min));
}

void app_tx_midi_sub_pid_range_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_RANGE_DATA, sub_id), \
			net_pda_midi_sub_pid_range_data_rqt());
}
/******************************************MIDI SUB PID RANGE_DATA APPLICATION*********************************************/
/******************************************MIDI SUB PID PAGE APPLICATION*********************************************/
__weak void app_rx_midi_sub_pid_page_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_page_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_page_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_page_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t page, uint8_t motor_num, uint8_t set_page_num)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_page_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_PAGE, sub_id), \
			net_pda_midi_sub_pid_page_ctl(page, motor_num, set_page_num));
}

void app_tx_midi_sub_pid_page_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t page, uint8_t motor_num, uint8_t set_page_num)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_page_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_PAGE, sub_id), \
			net_pda_midi_sub_pid_page_rsp(page, motor_num, set_page_num));
}

void app_tx_midi_sub_pid_page_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_PAGE, sub_id), \
			net_pda_midi_sub_pid_range_data_rqt());
}
/******************************************MIDI SUB PID PAGE APPLICATION*********************************************/
/******************************************MIDI SUB PID PAGE EXIST*********************************************/
__weak void app_rx_midi_sub_pid_exist_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_exist_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_exist_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_exist_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_exist_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_EXIST, sub_id), \
			net_pda_midi_sub_pid_exist_ctl());
}

void app_tx_midi_sub_pid_exist_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_rsp_midi_exist_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_EXIST, sub_id), \
			net_pda_midi_sub_pid_exist_rsp());
}

void app_tx_midi_sub_pid_exist_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_EXIST, sub_id), \
			net_pda_midi_sub_pid_exist_rqt());
}
/******************************************MIDI SUB PID PAGE EXIST*********************************************/
/******************************************MIDI SUB PID LAST PAGE*********************************************/
__weak void app_rx_midi_sub_pid_last_page_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_last_page_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

__weak void app_rx_midi_sub_pid_last_page_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_last_page_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t last_page)
{
	hal_can_protocol_tx(num, net_pha(CMD_CONTROL, sizeof(prtc_data_ctl_midi_last_page_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LAST_PAGE, sub_id), \
			net_pda_midi_sub_pid_last_page_ctl(last_page));
}

void app_tx_midi_sub_pid_last_page_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_RESPONSE, sizeof(prtc_data_ctl_midi_last_page_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LAST_PAGE, sub_id), \
			net_pda_midi_sub_pid_last_page_rsp());
}

void app_tx_midi_sub_pid_last_page_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(num, net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LAST_PAGE, sub_id), \
			net_pda_midi_sub_pid_last_page_rqt());
}
/******************************************MIDI SUB PID LAST PAGE*********************************************/