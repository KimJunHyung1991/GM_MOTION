GM_MOTION_PROTOCOL
==================

### protocol 1.5버전으로 기존의 protocol 1.0 버전의 치명적 문제(Source id가 DATA영역에 있어 제어 보드에서 브로드케스트로 명령을 송신했을때 응답을 못받는)해결 하기 위해 protocol header영역과 DATA영역을 새로 작성하였다 


폴더 구조
-------------------
└[GM_APP](https://github.com/KimJunHyung1991/GM_MOTION/tree/main/common/GM_APP) <br>
└[GM_DL](https://github.com/KimJunHyung1991/GM_MOTION/tree/main/common/GM_DL) <br>
└[GM_NET](https://github.com/KimJunHyung1991/GM_MOTION/tree/main/common/GM_NET) <br>

사용법
------
1. 타겟 장치에 적합한 sub_cmd를 정한다.
  	- (edit_, error_, init_, midi_, motion_, sensor_, speaker_)
edit_을 예로 들어 설명함
2. 수신된 명령을 처리할 `예시.c` 파일을 연다.(없다면 생성한다)
3. 프로토콜 라이브러리 GM_MOTION/common/GM_APP/Src/app_pid_edit_cmd.c 을 연다.
4. 수신 명령을 처리할 `예시.c` 파일에서 `#include "net_pda_pid_edit.h"` 를 include 한다.
5. app_pid_edit_cmd.c에 `__weak` 처리된 함수를 재정의 하여, 명령 수신시 동작을 정의한다.

  	- app_pid_edit_cmd.c
  	```c
//전처리 [__weak](http://jake.dothome.co.kr/attr1/)
__weak void app_rx_edit_sub_pid_action_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	//여기에 코드를 절대!! 작성하지 않는다.
}
  	```
	- 예시.c
	```c
//재정의
void app_rx_edit_sub_pid_action_ctl(prtc_header_t *pPh, uint8_t *pData)
{
	//action 명령 수신시 동작코드
}
  
  	```

