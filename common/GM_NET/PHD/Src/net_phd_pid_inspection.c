#include "main.h"
#include "app_pid_inspection_cmd.h"

void net_phd_inspection_sub_pid_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData);

void net_phd_inspection_sub_pid(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->sub_pid)
	{
		case INSPECTION_SUB_PID_DATA:
			net_phd_inspection_sub_pid_data(num, pPh, pData);
		break;
	}
}


void net_phd_inspection_sub_pid_data(uint8_t num, prtc_header_t *pPh, uint8_t *pData)
{
	switch(pPh->cmd)
	{
		case CMD_CONTROL:
			app_rx_inspection_sub_pid_data_ctl(num, pPh, (prtc_data_ctl_inspection_data_t *)pData);
		break;
		case CMD_RESPONSE:
			app_rx_inspection_sub_pid_data_rsp(num, pPh, (prtc_data_rsp_inspection_data_t *)pData);
		break;
		case CMD_REQUEST:
			app_rx_inspection_sub_pid_data_rqt(num, pPh, pData);
		break;
	}
}