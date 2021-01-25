#ifndef _GM_HAL_TX_PROTOCOL_H_
#define _GM_HAL_TX_PROTOCOL_H_


void make_packet_init_sub_pid_boot_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_boot_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_boot_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_init_sub_pid_driver_data1_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio);
void make_packet_init_sub_pid_driver_data1_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio);
void make_packet_init_sub_pid_driver_data1_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_init_sub_pid_driver_data2_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t count, uint16_t rpm);
void make_packet_init_sub_pid_driver_data2_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t count, uint16_t rpm);
void make_packet_init_sub_pid_driver_data2_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_init_sub_pid_status_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_status_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t step, uint8_t status);
void make_packet_init_sub_pid_status_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t step);

void make_packet_init_sub_pid_absolute_battery_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t save_data);
void make_packet_init_sub_pid_absolute_battery_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t save_data);
void make_packet_init_sub_pid_absolute_battery_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_init_sub_pid_move_sensor_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_move_sensor_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_move_sensor_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_init_sub_pid_move_init_position_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_move_init_position_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);
void make_packet_init_sub_pid_move_init_position_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_motion_sub_pid_adc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void make_packet_motion_sub_pid_adc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void make_packet_motion_sub_pid_adc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_motion_sub_pid_angle_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t angle_val);
void make_packet_motion_sub_pid_angle_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t angle_val);
void make_packet_motion_sub_pid_angle_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_midi_sub_pid_adc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void make_packet_midi_sub_pid_adc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val);
void make_packet_midi_sub_pid_adc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_midi_sub_pid_button_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id);
void make_packet_midi_sub_pid_button_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id);
void make_packet_midi_sub_pid_button_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_midi_sub_pid_led_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val);
void make_packet_midi_sub_pid_led_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val);
void make_packet_midi_sub_pid_led_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type);

void make_packet_midi_sub_pid_id_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
void make_packet_midi_sub_pid_id_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8);
void make_packet_midi_sub_pid_id_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_edit_sub_pid_action_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action);
void make_packet_edit_sub_pid_action_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action);
void make_packet_edit_sub_pid_action_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_speaker_sub_pid_action_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action);
void make_packet_speaker_sub_pid_action_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action);
void make_packet_speaker_sub_pid_action_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_sensor_sub_pid_detect_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw);
void make_packet_sensor_sub_pid_detect_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw);
void make_packet_sensor_sub_pid_detect_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_error_sub_pid_rc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void make_packet_error_sub_pid_rc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void make_packet_error_sub_pid_rc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_packet_error_sub_pid_ac_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void make_packet_error_sub_pid_ac_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void make_packet_error_sub_pid_ac_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);

void make_pbldcket_error_sub_pid_bldc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void make_pbldcket_error_sub_pid_bldc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code);
void make_pbldcket_error_sub_pid_bldc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id);



#endif