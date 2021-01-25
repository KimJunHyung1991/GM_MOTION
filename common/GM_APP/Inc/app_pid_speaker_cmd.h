#ifndef _GM_APP_PID_SPEAKER_CMD_H_
#define _GM_APP_PID_SPEAKER_CMD_H_
/**********************************************************************************/
void app_rx_speaker_sub_pid_action_ctl(prtc_header_t *pPh, uint8_t *pData);
void app_rx_speaker_sub_pid_action_rsp(prtc_header_t *pPh, uint8_t *pData);
void app_rx_speaker_sub_pid_action_rqt(prtc_header_t *pPh, uint8_t *pData);
/**********************************************************************************/

#endif