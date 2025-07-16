#include "main.h"
/*************************************************
fail : net_pda_pid_wifi.c
network packet data assemble prameter idemtification wifi
4계층중 network층에 해당
packet pid-wifi영역의 data 재조립
**************************************************/


/******************************************WIFI SUB PID BRAKE ASSEMBLE*********************************************/
/**
  * @brief  packet wifi-brake-control data assemble
  * @param  all_brake : play 보드가 가지고 있는 모터전부 brake 제어
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_wifi_sub_pid_brake_ctl(uint8_t all_brake)
{
	prtc_data_ctl_wifi_brake_t *pCdcwb = (prtc_data_ctl_wifi_brake_t *)make_data_buff;
	pCdcwb->all_brake = all_brake;
	return make_data_buff;
}

/**
  * @brief  packet wifi-brake-respose data assemble
  * @param  status : play 보드의 brake 상태값
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_wifi_sub_pid_brake_rsp(uint8_t status)
{
	prtc_data_rsp_wifi_brake_t *pCdrwb = (prtc_data_rsp_wifi_brake_t *)make_data_buff;
	pCdrwb->status = status;
	return make_data_buff;
}

/**
  * @brief  packet wifi-brake-request data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_wifi_sub_pid_brake_rqt(void)
{
	return make_data_buff;
}
/******************************************WIFI SUB PID BRAKE ASSEMBLE*********************************************/