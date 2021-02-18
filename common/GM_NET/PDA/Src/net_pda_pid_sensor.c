#include "main.h"
/*************************************************
fail : net_pda_pid_sensor.c
network packet data assemble prameter idemtification sensor
4계층중 network층에 해당
packet pid-sensor영역의 data 재조립
**************************************************/


/******************************************SENSOR SUB PID DETECT ASSEMBLE*********************************************/
/**
  * @brief  packet sensor-detect-control data assemble
  * @param  cw : 시계 방향 센서 감지 상태값(0 : 미감지, 1 : 감지)
			ccw : 반시계 방향 센서 감지 상태값(0 : 미감지, 1 : 감지)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_sensor_sub_pid_detect_ctl(uint8_t cw, uint8_t ccw)
{
	prtc_data_ctl_sensor_detect_t *pCdcsd = (prtc_data_ctl_sensor_detect_t *)make_data_buff;
	pCdcsd->cw = cw;
	pCdcsd->ccw = ccw;
	
	return make_data_buff;
}

/**
  * @brief  packet sensor-detect-response data assemble
  * @param  cw : 시계 방향 센서 감지 상태값(0 : 미감지, 1 : 감지)
			ccw : 반시계 방향 센서 감지 상태값(0 : 미감지, 1 : 감지)
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_sensor_sub_pid_detect_rsp(uint8_t cw, uint8_t ccw)
{
	prtc_data_rsp_sensor_detect_t *pCdrsd = (prtc_data_rsp_sensor_detect_t *)make_data_buff;
	pCdrsd->cw = cw;
	pCdrsd->ccw = ccw;
	
	return make_data_buff;
}

/**
  * @brief  packet sensor-detect-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_sensor_sub_pid_detect_rqt(void)
{
	return make_data_buff;
}
/******************************************SENSOR SUB PID DETECT ASSEMBLE*********************************************/