#include "main.h"
/*************************************************
fail : net_pha.c
network packet header assemble
4계층중 network층에 해당
packet의 header 재조립
**************************************************/


/**
  * @brief  packet header assemble
  * @param  cmd : 커맨드 (0 : 제어/세팅, 1 : 응답, 2 : 요청)
			dlc : 데이터 영역의 길이
			priority : 패킷의 중요도(0 :긴급 , 1 : 보통)
			souce_id : 송신자 CAN ID
			targer_id : 수신자 CAN ID
			pid : prameter idemtification
			sub_pid : sub prameter idemtification
			sub_id : CAN ID의 SUB ID
  * @retval prtc_header_t * : 해더 구조체 포인터
  */
prtc_header_t *net_pha(uint8_t cmd, uint8_t dlc, uint8_t priority, uint8_t souce_id, uint8_t target_id, uint8_t pid, uint8_t sub_pid, uint8_t sub_id)
{
	make_header_buff.dlc = dlc;
	make_header_buff.priority = priority;
	make_header_buff.souce_id = souce_id;
	make_header_buff.target_id = target_id;
	make_header_buff.cmd = cmd;
	make_header_buff.pid = pid;
	make_header_buff.sub_pid = sub_pid;
	make_header_buff.sub_id = sub_id;
	
	return (prtc_header_t *)&make_header_buff;
}