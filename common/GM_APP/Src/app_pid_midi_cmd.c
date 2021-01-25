#include "main.h"
#include "net_pha.h"
#include "net_pda_pid_midi.h"

/******************************************MIDI SUB PID ADC APPLICATION*********************************************/
void app_rx_midi_sub_pid_adc_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_adc_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_adc_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_adc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_set_midi_adc_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			net_pda_midi_sub_pid_adc_ctl(adc_val));
}

void app_tx_midi_sub_pid_adc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_set_midi_adc_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			net_pda_midi_sub_pid_adc_rsp(adc_val));
}

void app_tx_midi_sub_pid_adc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			net_pda_midi_sub_pid_adc_rqt());
}
/******************************************MIDI SUB PID ADC APPLICATION*********************************************/
/******************************************MIDI SUB PID BUTTON APPLICATION*********************************************/
void app_rx_midi_sub_pid_button_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_button_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_button_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_button_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_set_midi_button_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			net_pda_midi_sub_pid_button_ctl(type, status, id));
}

void app_tx_midi_sub_pid_button_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_set_midi_button_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			net_pda_midi_sub_pid_button_rsp(type, status, id));
}

void app_tx_midi_sub_pid_button_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			net_pda_midi_sub_pid_button_rqt());
}

/******************************************MIDI SUB PID BUTTON APPLICATION*********************************************/
/******************************************MIDI SUB PID LED APPLICATION*********************************************/
void app_rx_midi_sub_pid_led_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_led_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_led_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_led_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_set_midi_led_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			net_pda_midi_sub_pid_led_ctl(type, val));
}

void app_tx_midi_sub_pid_led_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_set_midi_led_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			net_pda_midi_sub_pid_led_rsp(type, val));
}

void app_tx_midi_sub_pid_led_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			net_pda_midi_sub_pid_led_rqt(type));
}

/******************************************MIDI SUB PID LED APPLICATION*********************************************/
/******************************************MIDI SUB PID ID APPLICATION*********************************************/
void app_rx_midi_sub_pid_id_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_id_rsp(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_rx_midi_sub_pid_id_rqt(prtc_header_t *pPh, uint8_t *pData)
{
	
}

void app_tx_midi_sub_pid_id_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	hal_can_protocol_tx(net_pha(CMD_CONTROL, sizeof(prtc_data_set_midi_id_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			net_pda_midi_sub_pid_id_ctl(id1, id2, id3, id4, id5, id6, id7, id8));
}

void app_tx_midi_sub_pid_id_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	hal_can_protocol_tx(net_pha(CMD_RESPONSE, sizeof(prtc_data_set_midi_id_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			net_pda_midi_sub_pid_id_rsp(id1, id2, id3, id4, id5, id6, id7, id8));
}

void app_tx_midi_sub_pid_id_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(net_pha(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			net_pda_midi_sub_pid_id_rqt());
}

/******************************************MIDI SUB PID ID APPLICATION*********************************************/