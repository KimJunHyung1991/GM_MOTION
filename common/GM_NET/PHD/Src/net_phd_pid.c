#include "main.h"
#include "net_phd_pid.h"
#include "net_phd_pid_init.h"
#include "net_phd_pid_motion.h"
#include "net_phd_pid_midi.h"
#include "net_phd_pid_edit.h"
#include "net_phd_pid_speaker.h"
#include "net_phd_pid_sensor.h"
#include "net_phd_pid_error.h"

/*************************************************
fail : net_phd_pid.c
network packet header disassemble parameter identification
4계층중 network층에 해당
packet의 header영역의 PID 분해
**************************************************/


/******************************************PID DISASSEMBLE*********************************************/
/**
  * @brief  packet header disassemble(PID)
  * @param  *pPh : packet header pointer
			*pData : packet data pointer
  * @retval None
  */
void net_phd_pid(prtc_header_t *pPh, uint8_t *pData)
{	
	switch(pPh->pid)
	{
		case PID_INIT:
			net_phd_init_sub_pid(pPh, pData);
		break;
		case PID_MOTION:
			net_phd_motion_sub_pid(pPh, pData);
		break;
		case PID_MIDI:
			net_phd_midi_sub_pid(pPh, pData);
		break;
		case PID_EDIT:
			net_phd_edit_sub_pid(pPh, pData);
		break;
		case PID_SPEAKER:
			net_phd_speaker_sub_pid(pPh, pData);
		break;
		case PID_SENSOR:
			net_phd_sensor_sub_pid(pPh, pData);
		break;
		case PID_ERROR:
			net_phd_error_sub_pid(pPh, pData);
		break;
	}
}
/******************************************PID DISASSEMBLE*********************************************/

