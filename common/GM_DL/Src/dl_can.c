#include "main.h"
#include <string.h>
/*************************************************
fail : dl_can.c
data link can
4계층중 data link층에 해당

**************************************************/

uint8_t my_can_id = 0;
can_init_t can_init;


void can_init_data_save(CAN_HandleTypeDef *canhandle)
{
	can_init.data[can_init.cnt].canhandle = canhandle;
	can_init.data[can_init.cnt].number = can_init.cnt;
	can_init.cnt++;
}

