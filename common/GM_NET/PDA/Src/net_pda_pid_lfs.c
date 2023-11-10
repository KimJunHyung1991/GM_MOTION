#include "main.h"
#include "prtc_data_pid_lfs.h"
/*************************************************
fail : net_pda_pid_lfs.c
network packet data assemble prameter idemtification large file system
4계층중 network층에 해당
packet pid-edit영역의 data 재조립
**************************************************/

/******************************************LFS SUB PID CONNECT ASSEMBLE*********************************************/
/**
  * @brief  packet large file system-connect-control data assemble
  * @param  connect_status : {0 - disconnect}
							 {1 - connect	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_connect_ctl(uint8_t connect_status)
{
	prtc_data_ctl_lfs_connect_t *pCdclc = (prtc_data_ctl_lfs_connect_t *)make_data_buff;
	pCdclc->connect_status = connect_status;
	
	return make_data_buff;
}

/**
  * @brief  packet large file system-connect-response data assemble
  * @param  connect_status : {0 - disconnect}
							 {1 - connect	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_connect_rsp(uint8_t connect_status)
{
	prtc_data_rsp_lfs_connect_t *pCdrlc = (prtc_data_rsp_lfs_connect_t *)make_data_buff;
	pCdrlc->connect_status = connect_status;
	
	return make_data_buff;
}

/**
  * @brief  packet large file system-connect-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_connect_rqt(void)
{
	return make_data_buff;
}
/******************************************LFS SUB PID CONNECT ASSEMBLE*********************************************/