#ifndef _NET_PDA_PID_MIDI_H_
#define _NET_PDA_PID_MIDI_H_

uint8_t *net_pda_midi_sub_pid_adc_ctl(uint8_t motor_id, uint8_t motor_sub_id, uint16_t adc_val);
uint8_t *net_pda_midi_sub_pid_adc_rsp(uint8_t motor_id, uint8_t motor_sub_id, uint16_t adc_val);
uint8_t *net_pda_midi_sub_pid_adc_rqt(uint8_t motor_id, uint8_t motor_sub_id);

uint8_t *net_pda_midi_sub_pid_button_ctl(uint8_t type, uint8_t status, uint8_t id);
uint8_t *net_pda_midi_sub_pid_button_rsp(uint8_t type, uint8_t status, uint8_t id);
uint8_t *net_pda_midi_sub_pid_button_rqt(void);

uint8_t *net_pda_midi_sub_pid_led_ctl(uint8_t type, uint32_t val);
uint8_t *net_pda_midi_sub_pid_led_rsp(uint8_t type, uint32_t val);
uint8_t *net_pda_midi_sub_pid_led_rqt(uint8_t type);

uint8_t *net_pda_midi_sub_pid_id_ctl(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
uint8_t *net_pda_midi_sub_pid_id_rsp(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
uint8_t *net_pda_midi_sub_pid_id_rqt(void);

uint8_t *net_pda_midi_sub_pid_nick_name_h_ctl(uint8_t motor_id, uint8_t motor_sub_id, char *nick_name);
uint8_t *net_pda_midi_sub_pid_nick_name_h_rsp(uint8_t motor_id, uint8_t motor_sub_id, char *nick_name);
uint8_t *net_pda_midi_sub_pid_nick_name_h_rqt(void);

uint8_t *net_pda_midi_sub_pid_nick_name_l_ctl(uint8_t motor_id, uint8_t motor_sub_id, char *nick_name);
uint8_t *net_pda_midi_sub_pid_nick_name_l_rsp(uint8_t motor_id, uint8_t motor_sub_id, char *nick_name);
uint8_t *net_pda_midi_sub_pid_nick_name_l_rqt(void);

uint8_t *net_pda_midi_sub_pid_range_data_ctl(uint8_t motor_id, uint8_t motor_sub_id, uint16_t range, uint16_t max, uint16_t min);
uint8_t *net_pda_midi_sub_pid_range_data_rsp(uint8_t motor_id, uint8_t motor_sub_id, uint16_t range, uint16_t max, uint16_t min);
uint8_t *net_pda_midi_sub_pid_range_data_rqt(void);

uint8_t *net_pda_midi_sub_pid_page_ctl(uint8_t page, uint8_t slot_num, uint8_t motor_id, uint8_t motor_sub_id);
uint8_t *net_pda_midi_sub_pid_page_rsp(uint8_t page, uint8_t slot_num, uint8_t motor_id, uint8_t motor_sub_id);
uint8_t *net_pda_midi_sub_pid_page_rqt(void);

uint8_t *net_pda_midi_sub_pid_exist_ctl(void);
uint8_t *net_pda_midi_sub_pid_exist_rsp(void);
uint8_t *net_pda_midi_sub_pid_exist_rqt(void);

uint8_t *net_pda_midi_sub_pid_last_page_ctl(uint8_t last_page);
uint8_t *net_pda_midi_sub_pid_last_page_rsp(void);
uint8_t *net_pda_midi_sub_pid_last_page_rqt(void);

#endif