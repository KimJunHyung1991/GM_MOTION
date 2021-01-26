/**
******************************************************************************
* @file    Display/LTDC_PicturesFromSDCard/Src/main.c
* @author  MCD Application Team
* @brief   This file provides main program functions
******************************************************************************
* @attention
*
* <h2><center>&copy; Copyright (c) 2016 STMicroelectronics International N.V. 
* All rights reserved.</center></h2>
*
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted, provided that the following conditions are met:
*
* 1. Redistribution of source code must retain the above copyright notice, 
*    this list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
* 3. Neither the name of STMicroelectronics nor the names of other 
*    contributors to this software may be used to endorse or promote products 
*    derived from this software without specific written permission.
* 4. This software, including modifications and/or derivative works of this 
*    software, must execute solely and exclusively on microcontroller or
*    microprocessor devices manufactured by or for STMicroelectronics.
* 5. Redistribution and use of this software other than as permitted under 
*    this license is void and will automatically terminate your rights under 
*    this license. 
*
* THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
* AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
* PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
* RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
* SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup STM32F7xx_HAL_Applications
* @{
*/

/** @addtogroup LTDC_PicturesFromSDCard
* @{
*/ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
FATFS SD_FatFs;  /* File system object for SD card logical drive */
char SD_Path[4]; /* SD card logical drive path */
char* pDirectoryFiles[MAX_BMP_FILES];
uint8_t  ubNumberOfFiles = 0;
uint32_t uwBmplen = 0;

UART_HandleTypeDef huart7;
DMA_HandleTypeDef hdma_uart7_tx;

UART_HandleTypeDef huart1;
DMA_HandleTypeDef hdma_usart1_tx;

UART_HandleTypeDef huart6;

CAN_HandleTypeDef     CanHandle;
/* Internal Buffer defined in SDRAM memory */
uint8_t *uwInternelBuffer;


extern CAN_TxHeaderTypeDef   TxHeader;
extern uint32_t              TxMailbox;

/* Private function prototypes -----------------------------------------------*/
static void LCD_Config(void);
static void SystemClock_Config(void);
static void Error_Handler(void);
static void CPU_CACHE_Enable(void);
static void MX_USART1_UART_Init(void);
static void MX_USART6_UART_Init(void);
static void MX_UART7_Init(void);
static void MX_DMA_Init(void);
static void MX_GPIO_Init(void);
static void MX_CAN_Init(void);

/* Private functions ---------------------------------------------------------*/

/**
* @brief  Main program
* @param  None
* @retval None4
*/

uint32_t *mt_all_addr = (uint32_t *)MOTION_SDRAM_SECTOR1_START_ADDRESS;
uint32_t *mt_rep_addr = (uint32_t *)MOTION_SDRAM_SECTOR3_START_ADDRESS;


extern char SDPath[4]; /* SD card logical drive path */

int main(void)
{
	p_data_save_motion = (p_data_save_motion_t *)MOTION_SDRAM_START_ADDRESS;
	
	
	/* Enable the CPU Cache */
	CPU_CACHE_Enable();
	
	/* STM32F7xx HAL library initialization:
	- Configure the Flash ART accelerator on ITCM interface
	- Configure the Systick to generate an interrupt each 1 msec
	- Set NVIC Group Priority to 4
	- Global MSP (MCU Support Package) initialization
	*/
	HAL_Init();
	
	/* Configure the system clock to 200 MHz */
	SystemClock_Config();
	
	MX_DMA_Init();
	/* Configure LED1 */
	BSP_LED_Init(LED1);
	MX_GPIO_Init();
	/*##-1- Configure LCD ######################################################*/
	LCD_Config();
	
	BSP_SDRAM_Init();
	/* Configure TAMPER Button */
	BSP_PB_Init(BUTTON_TAMPER, BUTTON_MODE_EXTI);
	
	BSP_SD_Init();
	
	MX_USART1_UART_Init();
	MX_USART6_UART_Init();
	MX_UART7_Init();
	MX_CAN_Init();
	
	CAN_Config(&CanHandle);
	
	save_uart_init(&huart1, UART_PC, INTERRUT_TYPE, DMA_TYPE);
	save_uart_init(&huart6, UART_485, INTERRUT_TYPE, INTERRUT_TYPE);
	save_uart_init(&huart7, UART_HCPU, INTERRUT_TYPE, DMA_TYPE);
	
	BSP_LCD_SetTransparency(1,255);
	LCD_LOG_SetHeader((uint8_t *)" INIT STATUS");
	
	
	LCD_UsrLog("START.\n");
	//proc_sdcard_booting();
	
	uint32_t tick_led_run = 0;
	uint32_t reset_timer = GetTickCount();
	while(1)
	{
		if(Elapsed(tick_led_run) > 500){
			tick_led_run = GetTickCount();
			BSP_LED_Toggle(LED1);
		}
		
		if(init_setting_packet_reset_time.flag == 1){
			if(Elapsed(reset_timer) > (init_setting_packet_reset_time.time * 1000)){
				__NVIC_SystemReset();
			}
		}
		
		
		proc_motion_play();
		
		//proc_can_reiceve();
		
		proc_can_rx();
		
		proc_can_tx(&CanHandle);
		//proc_can_tx_start(&CanHandle);
		
		proc_uart_reiceve();
		
		proc_uart_tx_start();
		
		flag_set_485_receive();
		
		if(sdcard_error != 0){
			reboot_sdcard(sdcard_error);
		}
	}
}

/**
* @brief  LCD configuration
* @param  None
* @retval None  
*/


static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  
  __HAL_RCC_GPIOF_CLK_ENABLE();
  

  
  HAL_GPIO_WritePin(RS485_DE_PORT, RS485_DE_PIN, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED1_Pin LED2_Pin SLADER_RESERVE4_Pin SLADER_RESERVE3_Pin 
                           SLADER_RESERVE1_Pin */
  GPIO_InitStruct.Pin = RS485_DE_PIN;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(RS485_DE_PORT, &GPIO_InitStruct);

}


static void LCD_Config(void)
{
	/* LCD Initialization */ 
	BSP_LCD_Init();
	
	/* LCD Initialization */ 
	BSP_LCD_LayerDefaultInit(0, LCD_FB_START_ADDRESS);
	BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS+(BSP_LCD_GetXSize()*BSP_LCD_GetYSize()*4));
	
	/* Enable the LCD */ 
	BSP_LCD_DisplayOn(); 
	
	/* Select the LCD Background Layer  */
	BSP_LCD_SelectLayer(0);
	
	/* Clear the Background Layer */ 
	BSP_LCD_Clear(LCD_COLOR_BLACK);  
	
	/* Select the LCD Foreground Layer  */
	BSP_LCD_SelectLayer(1);
	
	/* Clear the Foreground Layer */ 
	BSP_LCD_Clear(LCD_COLOR_BLACK);
	
	/* Configure the transparency for foreground and background :
	Increase the transparency */
	BSP_LCD_SetTransparency(0, 0);
	BSP_LCD_SetTransparency(1, 100);
	LCD_LOG_Init();
}

/**
* @brief  This function is executed in case of error occurrence.
* @param  None
* @retval None
*/
static void Error_Handler(void)
{
	/* Turn LED1 on */
	BSP_LED_On(LED1);
	while(1)
	{
	}
}

/**
* @brief  System Clock Configuration
*         The system Clock is configured as follow : 
*            System Clock source            = PLL (HSE)
*            SYSCLK(Hz)                     = 200000000
*            HCLK(Hz)                       = 200000000
*            AHB Prescaler                  = 1
*            APB1 Prescaler                 = 4
*            APB2 Prescaler                 = 2
*            HSE Frequency(Hz)              = 25000000
*            PLL_M                          = 25
*            PLL_N                          = 400
*            PLL_P                          = 2
*            PLL_Q                          = 8
*            VDD(V)                         = 3.3
*            Main regulator output voltage  = Scale1 mode
*            Flash Latency(WS)              = 6
* @param  None
* @retval None
*/
void SystemClock_Config(void)
{
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;
	HAL_StatusTypeDef ret = HAL_OK;
	
	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 400;  
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 8;
	
	ret = HAL_RCC_OscConfig(&RCC_OscInitStruct);
	if(ret != HAL_OK)
	{
		while(1) { ; }
	}
	
	/* Activate the OverDrive to reach the 200 MHz Frequency */
	ret = HAL_PWREx_EnableOverDrive();
	if(ret != HAL_OK)
	{
		while(1) { ; }
	}
	
	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;  
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
	
	ret = HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_6);
	if(ret != HAL_OK)
	{
		while(1) { ; }
	}
}

/**
* @brief  CPU L1-Cache enable.
* @param  None
* @retval None
*/
static void CPU_CACHE_Enable(void)
{
	/* Enable I-Cache */
	SCB_EnableICache();
	
	/* Enable D-Cache */
	SCB_EnableDCache();
}





static void MX_USART1_UART_Init(void)
{
	
	/* USER CODE BEGIN USART1_Init 0 */
	
	/* USER CODE END USART1_Init 0 */
	
	/* USER CODE BEGIN USART1_Init 1 */
	
	/* USER CODE END USART1_Init 1 */
	huart1.Instance = USART1;
	//huart1.Init.BaudRate = 921600;
	huart1.Init.BaudRate = 115200;
	huart1.Init.WordLength = UART_WORDLENGTH_8B;
	huart1.Init.StopBits = UART_STOPBITS_1;
	huart1.Init.Parity = UART_PARITY_NONE;
	huart1.Init.Mode = UART_MODE_TX_RX;
	huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart1.Init.OverSampling = UART_OVERSAMPLING_16;
	huart1.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	huart1.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	if (HAL_UART_Init(&huart1) != HAL_OK)
	{
		Error_Handler();
	}
	/* USER CODE BEGIN USART1_Init 2 */
	
	/* USER CODE END USART1_Init 2 */
	
}


static void MX_USART6_UART_Init(void)
{
	
	/* USER CODE BEGIN USART6_Init 0 */
	
	/* USER CODE END USART6_Init 0 */
	
	/* USER CODE BEGIN USART6_Init 1 */
	
	/* USER CODE END USART6_Init 1 */
	huart6.Instance = USART6;
	huart6.Init.BaudRate = 9600;
	huart6.Init.WordLength = UART_WORDLENGTH_8B;
	huart6.Init.StopBits = UART_STOPBITS_1;
	huart6.Init.Parity = UART_PARITY_NONE;
	huart6.Init.Mode = UART_MODE_TX_RX;
	huart6.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart6.Init.OverSampling = UART_OVERSAMPLING_16;
	huart6.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	//huart6.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_SWAP_INIT;
	//huart6.AdvancedInit.Swap = UART_ADVFEATURE_SWAP_ENABLE;
	huart6.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	
	if (HAL_UART_Init(&huart6) != HAL_OK)
	{
		Error_Handler();
	}
	/* USER CODE BEGIN USART6_Init 2 */
	
	/* USER CODE END USART6_Init 2 */
	
}

static void MX_UART7_Init(void)
{
	
	/* USER CODE BEGIN UART7_Init 0 */
	
	/* USER CODE END UART7_Init 0 */
	
	/* USER CODE BEGIN UART7_Init 1 */
	
	/* USER CODE END UART7_Init 1 */
	huart7.Instance = UART7;
	huart7.Init.BaudRate = 921600;
	huart7.Init.WordLength = UART_WORDLENGTH_8B;
	huart7.Init.StopBits = UART_STOPBITS_1;
	huart7.Init.Parity = UART_PARITY_NONE;
	huart7.Init.Mode = UART_MODE_TX_RX;
	huart7.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	huart7.Init.OverSampling = UART_OVERSAMPLING_16;
	huart7.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	//huart7.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_SWAP_INIT;
	//huart7.AdvancedInit.Swap = UART_ADVFEATURE_SWAP_ENABLE;
	huart7.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	if (HAL_UART_Init(&huart7) != HAL_OK)
	{
		Error_Handler();
	}
	/* USER CODE BEGIN UART7_Init 2 */
	
	/* USER CODE END UART7_Init 2 */
	
}

static void MX_CAN_Init(void)
{
	
	/* USER CODE BEGIN CAN_Init 0 */
	
	/* USER CODE END CAN_Init 0 */
	
	/* USER CODE BEGIN CAN_Init 1 */
	
	/* USER CODE END CAN_Init 1 */
	CanHandle.Instance = CAN1;
	
	CanHandle.Init.TimeTriggeredMode = DISABLE;
	CanHandle.Init.AutoBusOff = ENABLE;
	CanHandle.Init.AutoWakeUp = DISABLE;
	CanHandle.Init.AutoRetransmission = ENABLE;
	CanHandle.Init.ReceiveFifoLocked = DISABLE;
	CanHandle.Init.TransmitFifoPriority = DISABLE;
	CanHandle.Init.Mode = CAN_MODE_NORMAL;
	CanHandle.Init.SyncJumpWidth = CAN_SJW_1TQ;
	CanHandle.Init.TimeSeg1 = CAN_BS1_6TQ;
	CanHandle.Init.TimeSeg2 = CAN_BS2_3TQ;
	CanHandle.Init.Prescaler = 5;
	
	if (HAL_CAN_Init(&CanHandle) != HAL_OK)
	{
		/* Initialization Error */
		Error_Handler();
	}
	/* USER CODE BEGIN CAN_Init 2 */
	
	/* USER CODE END CAN_Init 2 */
	
}


static void MX_DMA_Init(void) 
{
	/* DMA controller clock enable */
	__HAL_RCC_DMA2_CLK_ENABLE();
	__HAL_RCC_DMA1_CLK_ENABLE();
	
	/* DMA interrupt init */
	/* DMA1_Stream1_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA1_Stream1_IRQn, 2, 0);
	HAL_NVIC_EnableIRQ(DMA1_Stream1_IRQn);
	/* DMA2_Stream6_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA2_Stream6_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(DMA2_Stream6_IRQn);
	/* DMA2_Stream7_IRQn interrupt configuration */
	HAL_NVIC_SetPriority(DMA2_Stream7_IRQn, 0, 0);
	HAL_NVIC_EnableIRQ(DMA2_Stream7_IRQn);
}

#ifdef  USE_FULL_ASSERT
/**
* @brief  Reports the name of the source file and the source line number
*         where the assert_param error has occurred.
* @param  file: pointer to the source file name
* @param  line: assert_param error line source number
* @retval None
*/
void assert_failed(uint8_t* file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
	
	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
* @}
*/

/**
* @}
*/ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
