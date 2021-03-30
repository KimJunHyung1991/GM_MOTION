#ifndef _GM_APP_PID_MIDI_CMD_H_
#define _GM_APP_PID_MIDI_CMD_H_

/**********************************************************************************/
void app_rx_midi_sub_pid_adc_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_adc_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_adc_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_adc_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void app_tx_midi_sub_pid_adc_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void app_tx_midi_sub_pid_adc_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_button_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_button_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_button_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_button_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id);
void app_tx_midi_sub_pid_button_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id);
void app_tx_midi_sub_pid_button_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_led_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_led_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_led_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_led_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val);
void app_tx_midi_sub_pid_led_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val);
void app_tx_midi_sub_pid_led_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_id_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_id_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_id_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_id_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
void app_tx_midi_sub_pid_id_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
void app_tx_midi_sub_pid_id_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_nick_name_h_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_nick_name_h_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_nick_name_h_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_nick_name_h_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name);
void app_tx_midi_sub_pid_nick_name_h_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name);
void app_tx_midi_sub_pid_nick_name_h_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_nick_name_l_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_nick_name_l_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_nick_name_l_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_nick_name_l_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name);
void app_tx_midi_sub_pid_nick_name_l_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, char *nick_name);
void app_tx_midi_sub_pid_nick_name_l_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_range_data_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_range_data_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_range_data_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_range_data_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, uint16_t max, uint16_t min);
void app_tx_midi_sub_pid_range_data_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t motor_num, uint8_t set_page_num, uint16_t max, uint16_t min);
void app_tx_midi_sub_pid_range_data_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_page_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_page_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_page_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_page_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t page, uint8_t motor_num, uint8_t set_page_num);
void app_tx_midi_sub_pid_page_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t page, uint8_t motor_num, uint8_t set_page_num);
void app_tx_midi_sub_pid_page_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_exist_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_exist_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_exist_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_exist_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void app_tx_midi_sub_pid_exist_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void app_tx_midi_sub_pid_exist_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
/**********************************************************************************/
void app_rx_midi_sub_pid_last_page_ctl(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_last_page_rsp(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_rx_midi_sub_pid_last_page_rqt(uint8_t num, prtc_header_t *pPh, uint8_t *pData);
void app_tx_midi_sub_pid_last_page_ctl(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t last_page);
void app_tx_midi_sub_pid_last_page_rsp(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void app_tx_midi_sub_pid_last_page_rqt(uint8_t num, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
/**********************************************************************************/
#endif