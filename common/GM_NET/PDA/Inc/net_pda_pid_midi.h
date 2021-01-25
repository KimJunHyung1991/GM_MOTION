#ifndef _NET_PDA_PID_MIDI_H_
#define _NET_PDA_PID_MIDI_H_

uint8_t *net_pda_midi_sub_pid_adc_ctl(uint16_t adc_val);
uint8_t *net_pda_midi_sub_pid_adc_rsp(uint16_t adc_val);
uint8_t *net_pda_midi_sub_pid_adc_rqt(void);

uint8_t *net_pda_midi_sub_pid_button_ctl(uint8_t type, uint8_t status, uint8_t id);
uint8_t *net_pda_midi_sub_pid_button_rsp(uint8_t type, uint8_t status, uint8_t id);
uint8_t *net_pda_midi_sub_pid_button_rqt(void);

uint8_t *net_pda_midi_sub_pid_led_ctl(uint8_t type, uint32_t val);
uint8_t *net_pda_midi_sub_pid_led_rsp(uint8_t type, uint32_t val);
uint8_t *net_pda_midi_sub_pid_led_rqt(uint8_t type);

uint8_t *net_pda_midi_sub_pid_id_ctl(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
uint8_t *net_pda_midi_sub_pid_id_rsp(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
uint8_t *net_pda_midi_sub_pid_id_rqt(void);

#endif