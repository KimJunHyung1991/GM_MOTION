#include "main.h"
#include "prtc_data_pid_lfs.h"
#include <string.h>
/*************************************************
fail : net_pda_pid_lfs.c
network packet data assemble prameter idemtification large file system
4계층중 network층에 해당
packet pid-edit영역의 data 재조립
**************************************************/

/******************************************LFS SUB PID MODE ASSEMBLE*********************************************/
/**
  * @brief  packet large file system-mode-control data assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_mode_ctl(uint8_t mode)
{
	prtc_data_ctl_lfs_mode_t *pCdclm = (prtc_data_ctl_lfs_mode_t *)make_data_buff;
	pCdclm->mode = mode;
	return make_data_buff;
}

/**
  * @brief  packet large file system-mode-response data assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_mode_rsp(uint8_t mode)
{
	prtc_data_rsp_lfs_mode_t *pCdrlm = (prtc_data_rsp_lfs_mode_t *)make_data_buff;
	pCdrlm->mode = mode;
	return make_data_buff;
}

/**
  * @brief  packet large file system-mode-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_mode_rqt(void)
{
	return make_data_buff;
}
/******************************************LFS SUB PID MODE ASSEMBLE*********************************************/
/******************************************LFS SUB PID START ASSEMBLE*********************************************/
/**
  * @brief  packet large file system-start-control data assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_start_ctl(uint8_t mode, uint32_t cnt)
{
	prtc_data_ctl_lfs_start_t *pCdcls = (prtc_data_ctl_lfs_start_t *)make_data_buff;
	pCdcls->mode = mode;
	pCdcls->cnt = cnt;
	return make_data_buff;
}

/**
  * @brief  packet large file system-start-response data assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_start_rsp(uint8_t mode, uint32_t cnt)
{
	prtc_data_rsp_lfs_start_t *pCdrls = (prtc_data_rsp_lfs_start_t *)make_data_buff;
	pCdrls->mode = mode;
	pCdrls->cnt = cnt;
	return make_data_buff;
}

/**
  * @brief  packet large file system-start-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_start_rqt(void)
{
	return make_data_buff;
}
/******************************************LFS SUB PID START ASSEMBLE*********************************************/
/******************************************LFS SUB PID DATA ASSEMBLE*********************************************/
/**
  * @brief  packet large file system-data-control data assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_data_ctl(uint8_t *pData)
{
	memcpy(make_data_buff, pData, sizeof(make_data_buff));
	return make_data_buff;
}

/**
  * @brief  packet large file system-data-response data assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_data_rsp(uint8_t *pData)
{
	memcpy(make_data_buff, pData, sizeof(make_data_buff));
	return make_data_buff;
}

/**
  * @brief  packet large file system-data-response data assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_data_rqt(void)
{
	return make_data_buff;
}
/******************************************LFS SUB PID DATA ASSEMBLE*********************************************/
/******************************************LFS SUB PID END ASSEMBLE*********************************************/
/**
  * @brief  packet large file system-data-control end assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_end_ctl(void)
{
	return make_data_buff;
}

/**
  * @brief  packet large file system-data-response end assemble
  * @param  mode_status : {0 - dismode}
							 {1 - mode	}
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_end_rsp(void)
{
	return make_data_buff;
}

/**
  * @brief  packet large file system-data-response end assemble
  * @param  none
  * @retval make_data_buff  : 데이터 버퍼 포인터
  */
uint8_t *net_pda_lfs_sub_pid_end_rqt(void)
{
	return make_data_buff;
}
/******************************************LFS SUB PID END ASSEMBLE*********************************************/