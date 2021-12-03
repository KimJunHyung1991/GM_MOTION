#include "main.h"
#include <string.h>
/*************************************************
fail : dl_can.c
data link can
4계층중 data link층에 해당

**************************************************/



my_can_id_data_t my_can_id_data;
can_init_t can_init;


void can_init_data_save(CAN_HandleTypeDef *canhandle)
{
	can_init.data[can_init.cnt].canhandle = canhandle;
	can_init.data[can_init.cnt].number = can_init.cnt;
	can_init.cnt++;
}

void set_my_can_id(uint8_t id)
{
	my_can_id_data.id = id;
}

void add_my_can_sub_id(uint8_t start_sub_id, uint8_t cnt)
{
	for(int i = 0; i < cnt; i++){
		my_can_id_data.sub_id[my_can_id_data.sub_id_cnt++] = start_sub_id + i;
	}
}
