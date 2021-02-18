#include "main.h"
/*************************************************
fail : net_pda_pid_error.c
network packet data assemble prameter idemtification error
4계층중 network층에 해당
packet pid-error영역의 data 재조립
**************************************************/

/******************************************INIT SUB PID BOOT ASSEMBLE*********************************************/
/**
  * @brief  packet init-boot-control data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_boot_ctl(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-boot-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_boot_rsp(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-boot-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_boot_rqt(void)
{
	return make_data_buff;
}
/******************************************INIT SUB PID BOOT ASSEMBLE*********************************************/
/******************************************INIT SUB PID DRIVER DATA1 ASSEMBLE*********************************************/
/**
  * @brief  packet init-driver_data1-control data assemble
  * @param  direction : 초기화 과정중 센서 감지 방향(0 : CW, 1 : CCW)
			angle : 모터의 동작 범위
			position : 초기화 과정이 끝난 후 위치
			reducer_ratio :	감속기 비율
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_driver_data1_ctl(uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	prtc_data_ctl_init_driver_data1_t *pCdcidd = (prtc_data_ctl_init_driver_data1_t *)make_data_buff;
	
	pCdcidd->direction = direction;
	pCdcidd->angle = angle;
	pCdcidd->init_position = init_position;
	pCdcidd->reducer_ratio = reducer_ratio;
	
	return make_data_buff;
}

/**
  * @brief  packet init-driver_data1-response data assemble
  * @param  direction : 초기화 과정중 센서 감지 방향(0 : CW, 1 : CCW)
			angle : 모터의 동작 범위
			position : 초기화 과정이 끝난 후 위치
			reducer_ratio :	감속기 비율
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_driver_data1_rsp(uint8_t direction, uint16_t angle, uint16_t init_position, uint8_t reducer_ratio)
{
	prtc_data_rsp_init_driver_data1_t *pCdridd = (prtc_data_rsp_init_driver_data1_t *)make_data_buff;
	
	pCdridd->direction = direction;
	pCdridd->angle = angle;
	pCdridd->init_position = init_position;
	pCdridd->reducer_ratio = reducer_ratio;
	
	return make_data_buff;
}

/**
  * @brief  packet init-driver_data1-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_driver_data1_rqt(void)
{	
	return make_data_buff;
}
/******************************************INIT SUB PID DRIVER DATA1 ASSEMBLE*********************************************/
/******************************************INIT SUB PID DRIVER DATA2 ASSEMBLE*********************************************/
/**
  * @brief  packet init-driver_data2-control data assemble
  * @param  count : 모터의 한바퀴 카운트(극수 x 3 x 감속기) 
			rpm : 설정 RPM
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_driver_data2_ctl(uint32_t count, uint16_t rpm)
{
	prtc_data_ctl_init_driver_data2_t *pCdcidd = (prtc_data_ctl_init_driver_data2_t *)make_data_buff;
	
	pCdcidd->count = count;
	pCdcidd->rpm = rpm;
	
	return make_data_buff;
}

/**
  * @brief  packet init-driver_data2-response data assemble
  * @param  count : 모터의 한바퀴 카운트(극수 x 3 x 감속기) 
			rpm : 설정 RPM
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_driver_data2_rsp(uint32_t count, uint16_t rpm)
{
	prtc_data_rsp_init_driver_data2_t *pCdridd = (prtc_data_rsp_init_driver_data2_t *)make_data_buff;
	
	pCdridd->count = count;
	pCdridd->rpm = rpm;
	
	return make_data_buff;
}

/**
  * @brief  packet init-driver_data2-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_driver_data2_rqt(void)
{
	return make_data_buff;
}
/******************************************INIT SUB PID DRIVER DATA2 ASSEMBLE*********************************************/
/******************************************INIT SUB PID STATUS ASSEMBLE*********************************************/
/**
  * @brief  packet init-status-control data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_status_ctl(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-status-response data assemble
  * @param  step : 초기화 단계
			status : 상태값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_status_rsp(uint8_t step, uint8_t status)
{
	prtc_data_rsp_init_status_t *pCris = (prtc_data_rsp_init_status_t *)make_data_buff;
	pCris->step = step;
	pCris->status = status;
	
	return make_data_buff;
}

/**
  * @brief  packet init-status-request data assemble
  * @param  step : 초기화 단계
			status : 상태값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_status_rqt(uint8_t step)
{
	prtc_data_rqt_init_status_t *pCdris = (prtc_data_rqt_init_status_t *)make_data_buff;
	pCdris->step = step;
	return make_data_buff;
}
/******************************************INIT SUB PID STATUS ASSEMBLE*********************************************/
/******************************************INIT SUB PID ABSOLUTE BATTERY ASSEMBLE*********************************************/
/**
  * @brief  packet init-absolute_battery-control data assemble
  * @param  save_data : 모터 드라이버 저장 카운트
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_absolute_battery_ctl(uint32_t save_data)
{
	prtc_data_ctl_init_absolute_battery_t *pCdciab = (prtc_data_ctl_init_absolute_battery_t *)make_data_buff;
	pCdciab->save_data = save_data;
	return make_data_buff;
}

/**
  * @brief  packet init-absolute_battery-response data assemble
  * @param  save_data : 모터 드라이버 저장 카운트
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_absolute_battery_rsp(uint32_t save_data)
{
	prtc_data_rsp_init_absolute_battery_t *pCdriab = (prtc_data_rsp_init_absolute_battery_t *)make_data_buff;
	pCdriab->save_data = save_data;
	
	return make_data_buff;
}

/**
  * @brief  packet init-absolute_battery-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_absolute_battery_rqt(void)
{
	return make_data_buff;
}
/******************************************INIT SUB PID ABSOLUTE BATTERY ASSEMBLE*********************************************/
/******************************************INIT SUB PID MOVE SENSOR ASSEMBLE*********************************************/
/**
  * @brief  packet init-move_sensor-control data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_move_sensor_ctl(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-move_sensor-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_move_sensor_rsp(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-move_sensor-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_move_sensor_rqt(void)
{
	return make_data_buff;
}
/******************************************INIT SUB PID MOVE SENSOR ASSEMBLE*********************************************/
/******************************************INIT SUB PID MOVE INIT POSITION ASSEMBLE*********************************************/
/**
  * @brief  packet init-move_init_position-control data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_move_init_position_ctl(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-move_init_position-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_move_init_position_rsp(void)
{
	return make_data_buff;
}

/**
  * @brief  packet init-move_init_position-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_init_sub_pid_move_init_position_rqt(void)
{
	return make_data_buff;
}
/******************************************INIT SUB PID MOVE INIT POSITION ASSEMBLE*********************************************/