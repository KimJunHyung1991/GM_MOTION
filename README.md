GM_MOTION_PROTOCOL   
==================

##### protocol 1.5버전으로 기존의 protocol 1.0 버전의 치명적 문제(Source id가 DATA영역에 있어 제어 보드에서 브로드케스트로 명령을 송신했을때 응답을 못받는)해결 하기 위해 protocol header영역과 DATA영역을 새로 작성하였다 


폴더 구조
-------------------
└[GM_APP](https://github.com/KimJunHyung1991/GM_MOTION/tree/main/common/GM_APP) : 수신 데이터 해석, PID 반환  <br>
└[GM_DL](https://github.com/KimJunHyung1991/GM_MOTION/tree/main/common/GM_DL) <br>
└[GM_NET](https://github.com/KimJunHyung1991/GM_MOTION/tree/main/common/GM_NET) <br>

자원할당
--------
##### 이 라이브러리는 CAN, RAM, CPU(main loop) 자원이 필요하다.
##### CAN -
##### RAM - `main.h` 의 `CAN_Q_BUFF_SIZE` 에 설정한다.
##### RAM사용량 = ((헤더 4 Byte + 데이터 8 Byte) x CAN_Q_BUFF_SIZE) x 2(rx,tx)

`main.h`

```cpp
#ifndef __MAIN_H
#define __MAIN_H

/*************자신에 RAM버퍼에 따라 수정******************/
#define CAN_Q_BUFF_SIZE 	512   //  ((헤더 4 Byte + 데이터 8 Byte) x 512(CAN_Q_BUFF_SIZE)) x 2(rx,tx) = 12,288 Byte
// CAN 1개일 경우
#define CAN_1	0 // 네이밍 알아서 define
#define CAN_CNT 1
/*
// CAN 2개일 경우
#define CAN_1	0 // 네이밍 알아서 define
#define CAN_2	1
#define CAN_CNT 2
*/

/*************자신에 RAM버퍼에 따라 수정******************/
	  
#include "dl_can.h"
#include "net_phd_pid.h"

#endif /* __MAIN_H */
```


`main.c`
```cpp
#include "main.h"

int main(void)
{
	/*CAN RX, TX  LED 매핑*/
	gm_motion_RX_LED_init(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
	gm_motion_TX_LED_init(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);

	/*HAL 설정 영역*/
	while(1)
	{
		proc_can_rx();
		proc_can_tx(&CanHandle);
	}
}
```


통신 LED mapping
------
1. 사용하지 않는다면 init 함수를 호출하지 않는다.
2. RX TX LED에 같은 핀을 할당해도 된다.
```cpp
//GPIOx : LED가 연결된 포트  		e.g. GPIOA
//GPIO_Pin : LED가 연결된 포트의 핀번호 	e.g. GPIO_PIN_10
/////포트를 다른이름으로 define했다면 define 이름으로 사용해도 무관하다.
//ledOnState : LED가 켜지기 위한 GPIO 상태  	e.g. GPIO_PIN_RESET
void gm_motion_RX_LED_init(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState ledOnState);

//-----------------------------------------------------
#define LED_2_Pin GPIO_PIN_10
#define LED_2_GPIO_Port GPIOC
gm_motion_RX_LED_init(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
//GPIOC 의 10번 핀에 CAN RX LED가 연결되었으며, GPIO LOW 일때 LED가 켜진다.

```

통신 함수 사용법
------
1. 타겟 장치에 적합한 sub_cmd를 정한다.
  	- (edit_, error_, init_, midi_, motion_, sensor_, speaker_)
	- edit_을 예로 들어 설명함

2. 수신된 명령을 처리할 `예시.c` 파일을 연다.(없다면 생성한다, GM_MOTION 경로에 생성하지말것.)

3. 프로토콜 라이브러리 GM_MOTION/common/GM_APP/Src/app_pid_edit_cmd.c 을 연다.

4. 수신 명령을 처리할 `예시.c` 파일에서 `#include "net_pda_pid_edit.h"` 를 include 한다.

5. app_pid_edit_cmd.c에 `__weak` 처리된 함수를 `예시.c`에 재정의 하여, 명령 수신시 동작코드를 작성.

- app_pid_edit_cmd.c   [__weak 설명](https://en.wikipedia.org/wiki/Weak_symbol)

```cpp
__weak void app_rx_edit_sub_pid_action_ctl(prtc_header_t *pPh, uint8_t *pData)  //전처리 __weak
{
	//여기에 코드를 절대!! 작성하지 않는다.
}
```

- 예시.c
```cpp
void app_rx_edit_sub_pid_action_ctl(prtc_header_t *pPh, uint8_t *pData)//재정의
{
	//action 명령 수신시 동작코드 .
}  
```

