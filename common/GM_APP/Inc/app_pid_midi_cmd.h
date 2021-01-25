#ifndef _GM_APP_PID_MIDI_CMD_H_
#define _GM_APP_PID_MIDI_CMD_H_

/**********************************************************************************/
void app_rx_midi_sub_pid_adc_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_adc_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_adc_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_button_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_button_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_button_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_led_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_led_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_led_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_id_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_id_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_id_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/
#endif