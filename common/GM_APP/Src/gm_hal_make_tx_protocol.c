#include "main.h"

prtc_header_t can_tx_header_buff;
uint8_t can_tx_data_buff[8];

/***************************************************make header****************************************************/
prtc_header_t *make_packet_header(uint8_t cmd, uint8_t dlc, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t pid, uint8_t sub_pid, uint8_t sub_id)
{
	can_tx_header_buff.cmd1 = ((cmd >> 1) & 0x01);
	can_tx_header_buff.dlc = dlc;
	can_tx_header_buff.priority = priority;
	can_tx_header_buff.souce_id = souce_id;
	can_tx_header_buff.target_id = target_id;
	can_tx_header_buff.cmd2 = (cmd & 0x01);
	can_tx_header_buff.pid = pid;
	can_tx_header_buff.sub_pid = sub_pid;
	can_tx_header_buff.sub_id = sub_id;
	
	return (prtc_header_t *)&can_tx_header_buff;
}
/***************************************************make header****************************************************/
/***************************************************make init sub pid boot****************************************************/
uint8_t *make_init_sub_pid_boot_ctl(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_boot_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_BOOT, sub_id), \
			make_init_sub_pid_boot_ctl());
}

uint8_t *make_init_sub_pid_boot_rsp(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_boot_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_BOOT, sub_id), \
			make_init_sub_pid_boot_rsp());
}

uint8_t *make_init_sub_pid_boot_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_boot_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_BOOT, sub_id), \
			make_init_sub_pid_boot_rqt());
}

/***************************************************make init sub pid boot****************************************************/
/***************************************************make init sub pid driver data1****************************************************/
uint8_t *make_init_sub_pid_driver_data1_ctl(uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	prtc_data_set_init_driver_data1_t *pCdsidd = (prtc_data_set_init_driver_data1_t *)can_tx_data_buff;
	
	pCdsidd->direction = direction;
	pCdsidd->angle = angle;
	pCdsidd->init_position = init_position;
	pCdsidd->reducer_ratio = reducer_ratio;
	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_driver_data1_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_init_driver_data1_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA1, sub_id), \
			make_init_sub_pid_driver_data1_ctl(direction, angle, init_position, reducer_ratio));
}

uint8_t *make_init_sub_pid_driver_data1_rsp(uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	prtc_data_set_init_driver_data1_t *pCdsidd = (prtc_data_set_init_driver_data1_t *)can_tx_data_buff;
	
	pCdsidd->direction = direction;
	pCdsidd->angle = angle;
	pCdsidd->init_position = init_position;
	pCdsidd->reducer_ratio = reducer_ratio;
	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_driver_data1_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_init_driver_data1_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA1, sub_id), \
			make_init_sub_pid_driver_data1_rsp(direction, angle, init_position, reducer_ratio));
}

uint8_t *make_init_sub_pid_driver_data1_rqt(void)
{	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_driver_data1_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA1, sub_id), \
			make_init_sub_pid_driver_data1_rqt());
}
/***************************************************make init sub pid driver data1****************************************************/
/***************************************************make init sub pid driver data2****************************************************/
uint8_t *make_init_sub_pid_driver_data2_ctl(uint16_t count, uint16_t rpm)
{
	prtc_data_set_init_driver_data2_t *pCdsidd = (prtc_data_set_init_driver_data2_t *)can_tx_data_buff;
	
	pCdsidd->count = count;
	pCdsidd->rpm = rpm;
	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_driver_data2_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t count, uint16_t rpm)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_init_driver_data2_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA2, sub_id), \
			make_init_sub_pid_driver_data2_ctl(count, rpm));
}

uint8_t *make_init_sub_pid_driver_data2_rsp(uint16_t count, uint16_t rpm)
{
	prtc_data_set_init_driver_data2_t *pCdsidd = (prtc_data_set_init_driver_data2_t *)can_tx_data_buff;
	
	pCdsidd->count = count;
	pCdsidd->rpm = rpm;
	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_driver_data2_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t count, uint16_t rpm)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_init_driver_data2_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA2, sub_id), \
			make_init_sub_pid_driver_data2_rsp(count, rpm));
}

uint8_t *make_init_sub_pid_driver_data2_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_driver_data2_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_DRIVER_DATA2, sub_id), \
			make_init_sub_pid_driver_data2_rqt());
}
/***************************************************make init sub pid driver data2****************************************************/
/***************************************************make init sub pid status****************************************************/
uint8_t *make_init_sub_pid_status_ctl(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_status_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_STATUS, sub_id), \
			make_init_sub_pid_status_ctl());
}

uint8_t *make_init_sub_pid_status_rsp(uint8_t step, uint8_t status)
{
	prtc_data_set_init_status_t *pCsis = (prtc_data_set_init_status_t *)can_tx_data_buff;
	pCsis->step = step;
	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_status_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t step, uint8_t status)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_init_status_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_STATUS, sub_id), \
			make_init_sub_pid_status_rsp(step, status));
}

uint8_t *make_init_sub_pid_status_rqt(uint8_t step)
{
	prtc_data_get_init_status_t *pCdgis = (prtc_data_get_init_status_t *)can_tx_data_buff;
	pCdgis->step = step;
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_status_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t step)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, sizeof(prtc_data_get_init_status_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_STATUS, sub_id), \
			make_init_sub_pid_status_rqt(step));
}
/***************************************************make init sub pid status****************************************************/
/***************************************************make init sub pid absolute battery****************************************************/
uint8_t *make_init_sub_pid_absolute_battery_ctl(uint32_t save_data)
{
	prtc_data_set_init_absolute_battery_t *pCdsiab = (prtc_data_set_init_absolute_battery_t *)can_tx_data_buff;
	pCdsiab->save_data = save_data;
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_absolute_battery_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t save_data)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_init_absolute_battery_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_ABSOLUTE_BATTERY, sub_id), \
			make_init_sub_pid_absolute_battery_ctl(save_data));
}

uint8_t *make_init_sub_pid_absolute_battery_rsp(uint32_t save_data)
{
	prtc_data_set_init_absolute_battery_t *pCdsiab = (prtc_data_set_init_absolute_battery_t *)can_tx_data_buff;
	pCdsiab->save_data = save_data;
	
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_absolute_battery_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t save_data)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_init_absolute_battery_t), priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_ABSOLUTE_BATTERY, sub_id), \
			make_init_sub_pid_absolute_battery_rsp(save_data));
}

uint8_t *make_init_sub_pid_absolute_battery_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_absolute_battery_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_ABSOLUTE_BATTERY, sub_id), \
			make_init_sub_pid_absolute_battery_rqt());
}
/***************************************************make init sub pid absolute battery****************************************************/
/***************************************************make init sub pid move sensor***************************************************/
uint8_t *make_init_sub_pid_move_sensor_ctl(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_move_sensor_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_SENSOR, sub_id), \
			make_init_sub_pid_move_sensor_ctl());
}

uint8_t *make_init_sub_pid_move_sensor_rsp(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_move_sensor_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_SENSOR, sub_id), \
			make_init_sub_pid_move_sensor_rsp());
}

uint8_t *make_init_sub_pid_move_sensor_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_move_sensor_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_SENSOR, sub_id), \
			make_init_sub_pid_move_sensor_rqt());
}
/***************************************************make init sub pid move sensor***************************************************/
/***************************************************make init sub pid move inti position***************************************************/
uint8_t *make_init_sub_pid_move_init_position_ctl(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_move_init_position_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_INIT_POSITION, sub_id), \
			make_init_sub_pid_move_init_position_ctl());
}

uint8_t *make_init_sub_pid_move_init_position_rsp(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_move_init_position_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_INIT_POSITION, sub_id), \
			make_init_sub_pid_move_init_position_rsp());
}

uint8_t *make_init_sub_pid_move_init_position_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_init_sub_pid_move_init_position_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_INIT, INIT_SUB_PID_MOVE_INIT_POSITION, sub_id), \
			make_init_sub_pid_move_init_position_rqt());
}
/***************************************************make init sub pid move init position***************************************************/
/***************************************************make motion sub pid adc***************************************************/
uint8_t *make_motion_sub_pid_adc_ctl(uint16_t adc_val)
{
	prtc_data_set_motion_adc_t *pCdsma = (prtc_data_set_motion_adc_t *)can_tx_data_buff;
	pCdsma->adc_val = adc_val;
	
	return can_tx_data_buff;
}

void make_packet_motion_sub_pid_adc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_motion_adc_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ADC, sub_id), \
			make_motion_sub_pid_adc_ctl(adc_val));
}

uint8_t *make_motion_sub_pid_adc_rsp(uint16_t adc_val)
{
	prtc_data_set_motion_adc_t *pCdsma = (prtc_data_set_motion_adc_t *)can_tx_data_buff;
	pCdsma->adc_val = adc_val;
	
	return can_tx_data_buff;
}

void make_packet_motion_sub_pid_adc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_motion_adc_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ADC, sub_id), \
			make_motion_sub_pid_adc_rsp(adc_val));
}

uint8_t *make_motion_sub_pid_adc_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_motion_sub_pid_adc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ADC, sub_id), \
			make_motion_sub_pid_adc_rqt());
}
/***************************************************make motion sub pid adc***************************************************/
/***************************************************make motion sub pid angle***************************************************/
uint8_t *make_motion_sub_pid_angle_ctl(uint32_t angle_val)
{
	prtc_data_set_motion_angle_t *pCdsma = (prtc_data_set_motion_angle_t *)can_tx_data_buff;
	pCdsma->angle_val = angle_val;
	
	return can_tx_data_buff;
}

void make_packet_motion_sub_pid_angle_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t angle_val)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_motion_angle_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, sub_id), \
			make_motion_sub_pid_angle_ctl(angle_val));
}

uint8_t *make_motion_sub_pid_angle_rsp(uint32_t angle_val)
{
	prtc_data_set_motion_angle_t *pCdsma = (prtc_data_set_motion_angle_t *)can_tx_data_buff;
	pCdsma->angle_val = angle_val;
	
	return can_tx_data_buff;
}

void make_packet_motion_sub_pid_angle_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint32_t angle_val)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_motion_adc_t), priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, sub_id), \
			make_motion_sub_pid_angle_rsp(angle_val));
}

uint8_t *make_motion_sub_pid_angle_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_motion_sub_pid_angle_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MOTION, MOTION_SUB_PID_ANGLE, sub_id), \
			make_motion_sub_pid_angle_rqt());
}
/***************************************************make motion sub pid angle***************************************************/
/***************************************************make midi sub pid adc***************************************************/
uint8_t *make_midi_sub_pid_adc_ctl(uint16_t adc_val)
{
	prtc_data_set_midi_adc_t *pCdsma = (prtc_data_set_midi_adc_t *)can_tx_data_buff;
	pCdsma->adc_val = adc_val;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_adc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_midi_adc_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			make_midi_sub_pid_adc_ctl(adc_val));
}

uint8_t *make_midi_sub_pid_adc_rsp(uint16_t adc_val)
{
	prtc_data_set_midi_adc_t *pCdsma = (prtc_data_set_midi_adc_t *)can_tx_data_buff;
	pCdsma->adc_val = adc_val;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_adc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint16_t adc_val)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_midi_adc_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			make_midi_sub_pid_adc_rsp(adc_val));
}

uint8_t *make_midi_sub_pid_adc_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_adc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ADC, sub_id), \
			make_midi_sub_pid_adc_rqt());
}
/***************************************************make midi sub pid adc***************************************************/
/***************************************************make midi sub pid button***************************************************/
uint8_t *make_midi_sub_pid_button_ctl(uint8_t type, uint8_t status, uint8_t id)
{
	prtc_data_set_midi_button_t *pCdsma = (prtc_data_set_midi_button_t *)can_tx_data_buff;
	pCdsma->type = type;
	pCdsma->status = status;
	pCdsma->id = id;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_button_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_midi_button_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			make_midi_sub_pid_button_ctl(type, status, id));
}

uint8_t *make_midi_sub_pid_button_rsp(uint8_t type, uint8_t status, uint8_t id)
{
	prtc_data_set_midi_button_t *pCdsma = (prtc_data_set_midi_button_t *)can_tx_data_buff;
	pCdsma->type = type;
	pCdsma->status = status;
	pCdsma->id = id;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_button_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint8_t status, uint8_t id)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_midi_button_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			make_midi_sub_pid_button_rsp(type, status, id));
}

uint8_t *make_midi_sub_pid_button_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_button_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_BUTTON, sub_id), \
			make_midi_sub_pid_button_rqt());
}
/***************************************************make midi sub pid button***************************************************/
/***************************************************make midi sub pid led***************************************************/
uint8_t *make_midi_sub_pid_led_ctl(uint8_t type, uint32_t val)
{
	prtc_data_set_midi_led_t *pCdsml = (prtc_data_set_midi_led_t *)can_tx_data_buff;
	pCdsml->type = type;
	pCdsml->val = val;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_led_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_midi_led_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			make_midi_sub_pid_led_ctl(type, val));
}

uint8_t *make_midi_sub_pid_led_rsp(uint8_t type, uint32_t val)
{
	prtc_data_set_midi_led_t *pCdsml = (prtc_data_set_midi_led_t *)can_tx_data_buff;
	pCdsml->type = type;
	pCdsml->val = val;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_led_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type, uint32_t val)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_midi_led_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			make_midi_sub_pid_led_rsp(type, val));
}

uint8_t *make_midi_sub_pid_led_rqt(uint8_t type)
{
	prtc_data_get_midi_led_t *pCdgml = (prtc_data_get_midi_led_t *)can_tx_data_buff;
	pCdgml->type = type;
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_led_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t type)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_LED, sub_id), \
			make_midi_sub_pid_led_rqt(type));
}
/***************************************************make midi sub pid led***************************************************/
/***************************************************make midi sub pid id***************************************************/
uint8_t *make_midi_sub_pid_id_ctl(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	prtc_data_set_midi_id_t *pCdsmi = (prtc_data_set_midi_id_t *)can_tx_data_buff;
	pCdsmi->sub_id1 = id1;
	pCdsmi->sub_id1 = id2;
	pCdsmi->sub_id1 = id3;
	pCdsmi->sub_id1 = id4;
	pCdsmi->sub_id1 = id5;
	pCdsmi->sub_id1 = id6;
	pCdsmi->sub_id1 = id7;
	pCdsmi->sub_id1 = id8;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_id_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_midi_id_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			make_midi_sub_pid_id_ctl(id1, id2, id3, id4, id5, id6, id7, id8));
}

uint8_t *make_midi_sub_pid_id_rsp(uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	prtc_data_set_midi_id_t *pCdsmi = (prtc_data_set_midi_id_t *)can_tx_data_buff;
	pCdsmi->sub_id1 = id1;
	pCdsmi->sub_id1 = id2;
	pCdsmi->sub_id1 = id3;
	pCdsmi->sub_id1 = id4;
	pCdsmi->sub_id1 = id5;
	pCdsmi->sub_id1 = id6;
	pCdsmi->sub_id1 = id7;
	pCdsmi->sub_id1 = id8;
	
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_id_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t id1, uint8_t id2, uint8_t id3, uint8_t id4, uint8_t id5, uint8_t id6, uint8_t id7, uint8_t id8)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_midi_id_t), priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			make_midi_sub_pid_id_rsp(id1, id2, id3, id4, id5, id6, id7, id8));
}

uint8_t *make_midi_sub_pid_id_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_midi_sub_pid_id_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_MIDI, MIDI_SUB_PID_ID, sub_id), \
			make_midi_sub_pid_id_rqt());
}
/***************************************************make midi sub pid id***************************************************/
/***************************************************make edit sub pid action***************************************************/
uint8_t *make_edit_sub_pid_action_ctl(uint8_t action)
{
	prtc_data_set_edit_action_t *pCdsea = (prtc_data_set_edit_action_t *)can_tx_data_buff;
	pCdsea->action = action;
	
	return can_tx_data_buff;
}

void make_packet_edit_sub_pid_action_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_edit_action_t), priority, souce_id, target_id, PID_EDIT, EDIT_SUB_PID_ACTION, sub_id), \
			make_edit_sub_pid_action_ctl(action));
}

uint8_t *make_edit_sub_pid_action_rsp(uint8_t action)
{
	prtc_data_set_edit_action_t *pCdsea = (prtc_data_set_edit_action_t *)can_tx_data_buff;
	pCdsea->action = action;
	
	return can_tx_data_buff;
}

void make_packet_edit_sub_pid_action_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_edit_action_t), priority, souce_id, target_id, PID_EDIT, EDIT_SUB_PID_ACTION, sub_id), \
			make_edit_sub_pid_action_rsp(action));
}

uint8_t *make_edit_sub_pid_action_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_edit_sub_pid_action_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_EDIT, EDIT_SUB_PID_ACTION, sub_id), \
			make_edit_sub_pid_action_rqt());
}
/***************************************************make edit sub pid action***************************************************/
/***************************************************make speaker sub pid action***************************************************/
uint8_t *make_speaker_sub_pid_action_ctl(uint8_t action)
{
	prtc_data_set_speaker_action_t *pCdsa = (prtc_data_set_speaker_action_t *)can_tx_data_buff;
	pCdsa->action = action;
	
	return can_tx_data_buff;
}

void make_packet_speaker_sub_pid_action_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_speaker_action_t), priority, souce_id, target_id, PID_SPEAKER, SPEAKER_SUB_PID_ACTION, sub_id), \
			make_speaker_sub_pid_action_ctl(action));
}

uint8_t *make_speaker_sub_pid_action_rsp(uint8_t action)
{
	prtc_data_set_speaker_action_t *pCdsa = (prtc_data_set_speaker_action_t *)can_tx_data_buff;
	pCdsa->action = action;
	
	return can_tx_data_buff;
}

void make_packet_speaker_sub_pid_action_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t action)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_speaker_action_t), priority, souce_id, target_id, PID_SPEAKER, SPEAKER_SUB_PID_ACTION, sub_id), \
			make_speaker_sub_pid_action_rsp(action));
}

uint8_t *make_speaker_sub_pid_action_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_speaker_sub_pid_action_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_SPEAKER, SPEAKER_SUB_PID_ACTION, sub_id), \
			make_speaker_sub_pid_action_rqt());
}
/***************************************************make speaker sub pid action***************************************************/
/***************************************************make sensor sub pid detect***************************************************/
uint8_t *make_sensor_sub_pid_detect_ctl(uint8_t cw, uint8_t ccw)
{
	prtc_data_set_sensor_detect_t *pCdssd = (prtc_data_set_sensor_detect_t *)can_tx_data_buff;
	pCdssd->cw = cw;
	pCdssd->ccw = ccw;
	
	return can_tx_data_buff;
}

void make_packet_sensor_sub_pid_detect_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_sensor_detect_t), priority, souce_id, target_id, PID_SENSOR, SENSOR_SUB_PID_DETECT, sub_id), \
			make_sensor_sub_pid_detect_ctl(cw, ccw));
}

uint8_t *make_sensor_sub_pid_detect_rsp(uint8_t cw, uint8_t ccw)
{
	prtc_data_set_sensor_detect_t *pCdssd = (prtc_data_set_sensor_detect_t *)can_tx_data_buff;
	pCdssd->cw = cw;
	pCdssd->ccw = ccw;
	
	return can_tx_data_buff;
}

void make_packet_sensor_sub_pid_detect_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t cw, uint8_t ccw)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_sensor_detect_t), priority, souce_id, target_id, PID_SENSOR, SENSOR_SUB_PID_DETECT, sub_id), \
			make_sensor_sub_pid_detect_rsp(cw, ccw));
}

uint8_t *make_sensor_sub_pid_detect_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_sensor_sub_pid_detect_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_SENSOR, SENSOR_SUB_PID_DETECT, sub_id), \
			make_sensor_sub_pid_detect_rqt());
}
/***************************************************make sensor sub pid detect***************************************************/
/***************************************************make error sub pid rc***************************************************/
uint8_t *make_error_sub_pid_rc_ctl(uint8_t error_code)
{
	prtc_data_set_error_rc_t *pCdser = (prtc_data_set_error_rc_t *)can_tx_data_buff;
	pCdser->error_code = error_code;
	
	return can_tx_data_buff;
}

void make_packet_error_sub_pid_rc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_error_rc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_RC, sub_id), \
			make_error_sub_pid_rc_ctl(error_code));
}

uint8_t *make_error_sub_pid_rc_rsp(uint8_t error_code)
{
	prtc_data_set_error_rc_t *pCdser = (prtc_data_set_error_rc_t *)can_tx_data_buff;
	pCdser->error_code = error_code;
	
	return can_tx_data_buff;
}

void make_packet_error_sub_pid_rc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_error_rc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_RC, sub_id), \
			make_error_sub_pid_rc_rsp(error_code));
}

uint8_t *make_error_sub_pid_rc_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_error_sub_pid_rc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_RC, sub_id), \
			make_error_sub_pid_rc_rqt());
}
/***************************************************make error sub pid rc***************************************************/
/***************************************************make error sub pid ac***************************************************/
uint8_t *make_error_sub_pid_ac_ctl(uint8_t error_code)
{
	prtc_data_set_error_ac_t *pCdsea = (prtc_data_set_error_ac_t *)can_tx_data_buff;
	pCdsea->error_code = error_code;
	
	return can_tx_data_buff;
}

void make_packet_error_sub_pid_ac_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_error_ac_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_AC, sub_id), \
			make_error_sub_pid_ac_ctl(error_code));
}

uint8_t *make_error_sub_pid_ac_rsp(uint8_t error_code)
{
	prtc_data_set_error_ac_t *pCdsea = (prtc_data_set_error_ac_t *)can_tx_data_buff;
	pCdsea->error_code = error_code;
	
	return can_tx_data_buff;
}

void make_packet_error_sub_pid_ac_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_error_ac_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_AC, sub_id), \
			make_error_sub_pid_ac_rsp(error_code));
}

uint8_t *make_error_sub_pid_ac_rqt(void)
{
	return can_tx_data_buff;
}

void make_packet_error_sub_pid_ac_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_AC, sub_id), \
			make_error_sub_pid_ac_rqt());
}
/***************************************************make error sub pid ac***************************************************/
/***************************************************make error sub pid bldc***************************************************/
uint8_t *make_error_sub_pid_bldc_ctl(uint8_t error_code)
{
	prtc_data_set_error_bldc_t *pCdseb = (prtc_data_set_error_bldc_t *)can_tx_data_buff;
	pCdseb->error_code = error_code;
	
	return can_tx_data_buff;
}

void make_pbldcket_error_sub_pid_bldc_ctl(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code)
{
	hal_can_protocol_tx(make_packet_header(CMD_CONTROL, sizeof(prtc_data_set_error_bldc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			make_error_sub_pid_bldc_ctl(error_code));
}

uint8_t *make_error_sub_pid_bldc_rsp(uint8_t error_code)
{
	prtc_data_set_error_bldc_t *pCdseb = (prtc_data_set_error_bldc_t *)can_tx_data_buff;
	pCdseb->error_code = error_code;
	
	return can_tx_data_buff;
}

void make_pbldcket_error_sub_pid_bldc_rsp(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id, uint8_t error_code)
{
	hal_can_protocol_tx(make_packet_header(CMD_RESPONSE, sizeof(prtc_data_set_error_bldc_t), priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			make_error_sub_pid_bldc_rsp(error_code));
}

uint8_t *make_error_sub_pid_bldc_rqt(void)
{
	return can_tx_data_buff;
}

void make_pbldcket_error_sub_pid_bldc_rqt(uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t sub_id)
{
	hal_can_protocol_tx(make_packet_header(CMD_REQUEST, 0, priority, souce_id, target_id, PID_ERROR, ERROR_SUB_PID_BLDC, sub_id), \
			make_error_sub_pid_bldc_rqt());
}
/***************************************************make error sub pid bldc***************************************************/

