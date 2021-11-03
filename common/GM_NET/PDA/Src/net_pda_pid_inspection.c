#include "main.h"

uint8_t *net_pda_inspection_sub_pid_data_ctl(uint8_t *data)
{
	prtc_data_ctl_inspection_data_t *pCdcid = (prtc_data_ctl_inspection_data_t *)make_data_buff;
	for(int i = 0; i < 8; i++){
		pCdcid->data[i] = data[i];
	}	
	return make_data_buff;
}


uint8_t *net_pda_inspection_sub_pid_data_rsp(uint8_t *data)
{
	prtc_data_rsp_inspection_data_t *pCdrid = (prtc_data_rsp_inspection_data_t *)make_data_buff;
	
	for(int i = 0; i < 8; i++){
		pCdrid->data[i] = data[i];
	}
	
	return make_data_buff;
}


uint8_t *net_pda_inspection_sub_pid_data_rqt(void)
{
	return make_data_buff;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint8_t *net_pda_inspection_sub_pid_data_play_ctl(uint8_t *data)
{
	prtc_data_ctl_inspection_data_t *pCdcid = (prtc_data_ctl_inspection_data_t *)make_data_buff;
	for(int i = 0; i < 8; i++){
		pCdcid->data[i] = data[i];
	}	
	return make_data_buff;
}


uint8_t *net_pda_inspection_sub_pid_data_play_rsp(uint8_t *data)
{
	prtc_data_rsp_inspection_data_t *pCdrid = (prtc_data_rsp_inspection_data_t *)make_data_buff;
	
	for(int i = 0; i < 8; i++){
		pCdrid->data[i] = data[i];
	}
	
	return make_data_buff;
}


uint8_t *net_pda_inspection_sub_pid_data_play_rqt(uint8_t index)
{
	prtc_data_rqt_inspection_data_play_t *pCdridp = (prtc_data_rqt_inspection_data_play_t *)make_data_buff;
	pCdridp->index = index;
	return make_data_buff;
}

