#include "main.h"
#include <string.h>
/*************************************************
fail : dl_can.c
data link can
4계층중 data link층에 해당

**************************************************/

uint8_t my_can_id = 0;

/******************************************CMD ASSEMBLE*********************************************/
/**
  * @brief  packet header cmd assemble
  * @param  prtc_header_t *pPh :  header 포인터
  * @retval cmd : cmd1 + cmd2
  */
uint8_t ret_protocol_header_cmd(prtc_header_t *pPh)
{
	/*
	uint8_t cmd = 0;
	cmd = (pPh->cmd1 << 1);
	cmd |= pPh->cmd2;
	return cmd;
	*/
}
/******************************************CMD ASSEMBLE*********************************************/



