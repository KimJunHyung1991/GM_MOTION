#include "main.h"
/**************************************************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_ctl(uint8_t index)
{
	prtc_data_ctl_inspection_data_t *pCdcid = (prtc_data_ctl_inspection_data_t *)make_data_buff;
	pCdcid->index = index;
	
	return make_data_buff;
}


uint8_t *net_pda_inspection_sub_pid_data_rsp(uint8_t index)
{
	prtc_data_rsp_inspection_data_t *pCdrid = (prtc_data_rsp_inspection_data_t *)make_data_buff;
	pCdrid->index = index;
	
	return make_data_buff;
}


uint8_t *net_pda_inspection_sub_pid_data_rqt(uint8_t index)
{
	prtc_data_rqt_inspection_data_t *pCdrid = (prtc_data_rqt_inspection_data_t *)make_data_buff;
	pCdrid->index = index;
	
	return make_data_buff;
}
/**************************************************************************************************************/
/**************************************************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_ver_rsp(uint8_t index, uint32_t ver)
{
	prtc_data_rsp_inspection_data_t *pCdrid = (prtc_data_rsp_inspection_data_t *)make_data_buff;
	prtc_data_rsp_inspection_ver_data_t *pCdrivd = (prtc_data_rsp_inspection_ver_data_t *)pCdrid->payload;
	
	pCdrid->index = index;
	pCdrivd->ver = ver;
	
	return make_data_buff;
}
/**************************************************************************************************************/
/**************************************************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_ping_ctl(uint8_t index, uint16_t count)
{
	prtc_data_ctl_inspection_data_t *pCdcid = (prtc_data_ctl_inspection_data_t *)make_data_buff;
	prtc_data_ctl_inspection_ping_data_t *pCdcipd = (prtc_data_ctl_inspection_ping_data_t *)pCdcid->payload;
	
	pCdcid->index = index;
	pCdcipd->count = count;
	
	return make_data_buff;
}

uint8_t *net_pda_inspection_sub_pid_data_ping_rsp(uint8_t index, uint16_t count)
{
	prtc_data_rsp_inspection_data_t *pCdrid = (prtc_data_rsp_inspection_data_t *)make_data_buff;
	prtc_data_rsp_inspection_ping_data_t *pCdripd = (prtc_data_rsp_inspection_ping_data_t *)pCdrid->payload;
	
	pCdrid->index = index;
	pCdripd->count = count;
	
	return make_data_buff;
}
/**************************************************************************************************************/
/**************************************************************************************************************/
uint8_t *net_pda_inspection_sub_pid_data_bool_rsp(uint8_t index, uint8_t Bool)
{
	prtc_data_rsp_inspection_data_t *pCdrid = (prtc_data_rsp_inspection_data_t *)make_data_buff;
	prtc_data_rsp_inspection_bool_data_t *pCdribd = (prtc_data_rsp_inspection_bool_data_t *)pCdrid->payload;
	
	pCdrid->index = index;
	pCdribd->Bool = Bool;
	
	return make_data_buff;
}
/**************************************************************************************************************/