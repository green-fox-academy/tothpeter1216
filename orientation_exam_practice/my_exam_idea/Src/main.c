/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "linked_list.h"
#include <stdio.h>
#include <string.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

RNG_HandleTypeDef hrng;

TIM_HandleTypeDef htim5;

UART_HandleTypeDef huart1;

osThreadId defaultTaskHandle;
osThreadId PrinterHandle;
osThreadId PushBackHandle;
osThreadId CommanderHandle;
osThreadId TimerStarterHandle;
osThreadId PopBackHandle;
osMutexId LinkedListMutexHandle;
/* USER CODE BEGIN PV */

node_t *head;

volatile int prog_state = 0;

volatile int prev_start_time = 0;

char character;
char text[255];
int time_counter = 0;

volatile int print_state = 0;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART1_UART_Init(void);
static void MX_RNG_Init(void);
static void MX_TIM5_Init(void);
void StartDefaultTask(void const * argument);
void StartPrinter(void const * argument);
void StartPushBack(void const * argument);
void StartCommander(void const * argument);
void StartTimerStarter(void const * argument);
void StartPopBack(void const * argument);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */
  init(&head);
  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  MX_RNG_Init();
  MX_TIM5_Init();
  /* USER CODE BEGIN 2 */

  HAL_UART_Receive_IT(&huart1, &character, 1);

  /* USER CODE END 2 */

  /* Create the mutex(es) */
  /* definition and creation of LinkedListMutex */
  osMutexDef(LinkedListMutex);
  LinkedListMutexHandle = osMutexCreate(osMutex(LinkedListMutex));

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of Printer */
  osThreadDef(Printer, StartPrinter, osPriorityNormal, 0, 512);
  PrinterHandle = osThreadCreate(osThread(Printer), NULL);

  /* definition and creation of PushBack */
  osThreadDef(PushBack, StartPushBack, osPriorityNormal, 0, 512);
  PushBackHandle = osThreadCreate(osThread(PushBack), NULL);

  /* definition and creation of Commander */
  osThreadDef(Commander, StartCommander, osPriorityNormal, 0, 512);
  CommanderHandle = osThreadCreate(osThread(Commander), NULL);

  /* definition and creation of TimerStarter */
  osThreadDef(TimerStarter, StartTimerStarter, osPriorityNormal, 0, 512);
  TimerStarterHandle = osThreadCreate(osThread(TimerStarter), NULL);

  /* definition and creation of PopBack */
  osThreadDef(PopBack, StartPopBack, osPriorityNormal, 0, 512);
  PopBackHandle = osThreadCreate(osThread(PopBack), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* Start scheduler */
  osKernelStart();
  
  /* We should never get here as control is now taken by the scheduler */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 50;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 3;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Activate the Over-Drive mode 
  */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_USART1|RCC_PERIPHCLK_CLK48;
  PeriphClkInitStruct.Usart1ClockSelection = RCC_USART1CLKSOURCE_PCLK2;
  PeriphClkInitStruct.Clk48ClockSelection = RCC_CLK48SOURCE_PLL;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief RNG Initialization Function
  * @param None
  * @retval None
  */
static void MX_RNG_Init(void)
{

  /* USER CODE BEGIN RNG_Init 0 */

  /* USER CODE END RNG_Init 0 */

  /* USER CODE BEGIN RNG_Init 1 */

  /* USER CODE END RNG_Init 1 */
  hrng.Instance = RNG;
  if (HAL_RNG_Init(&hrng) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN RNG_Init 2 */

  /* USER CODE END RNG_Init 2 */

}

/**
  * @brief TIM5 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM5_Init(void)
{

  /* USER CODE BEGIN TIM5_Init 0 */

  /* USER CODE END TIM5_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM5_Init 1 */

  /* USER CODE END TIM5_Init 1 */
  htim5.Instance = TIM5;
  htim5.Init.Prescaler = 50000-1;
  htim5.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim5.Init.Period = 1000-1;
  htim5.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim5.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim5) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim5, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim5, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM5_Init 2 */

  /* USER CODE END TIM5_Init 2 */

}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
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

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOI_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();

  /*Configure GPIO pin : BUTTON_BLUE_Pin */
  GPIO_InitStruct.Pin = BUTTON_BLUE_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(BUTTON_BLUE_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 5, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

}

/* USER CODE BEGIN 4 */

int __io_putchar(int ch)
	{
	    HAL_UART_Transmit(&huart1, (uint8_t*)&ch, 1, 0xFFFF);
	    return ch;
	}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

	if (GPIO_Pin == BUTTON_BLUE_Pin) {
		if (HAL_GetTick() - 300 < prev_start_time) {
			return;
		}
		prev_start_time = HAL_GetTick();
		if (HAL_GPIO_ReadPin(BUTTON_BLUE_GPIO_Port, BUTTON_BLUE_Pin) == 1) {
			//printf("push\n");
			prog_state = 1;

		}
		if (HAL_GPIO_ReadPin(BUTTON_BLUE_GPIO_Port, BUTTON_BLUE_Pin) == 0) {
			//printf("release\n");
			prog_state = 0;
		}
	}

}


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
if(huart->Instance == USART1){

	  //HAL_UART_Receive_IT(&huart1, &character, 1);
	  text[time_counter] = character;
	  text[time_counter + 1] = '\r';
	  text[time_counter + 2] = '\0';
	  HAL_UART_Receive_IT(&huart1, &character, 1);
	  time_counter++;
	  if(character == '\n'){
		  if (text[0] == 'O' && text[1] == 'N') {
			print_state = 1;
		}
		  if (text[0] == 'O' && text[1] == 'F' && text[2] == 'F') {
		  			print_state = 0;
		  		}

		  HAL_UART_Transmit_IT(&huart1, (uint16_t*) text, 100);
		  time_counter = 0;

		}

	}

	}


/* USER CODE END 4 */

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
    
    
    
    
    
    
    
    

  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END 5 */ 
}

/* USER CODE BEGIN Header_StartPrinter */
/**
* @brief Function implementing the Printer thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartPrinter */
void StartPrinter(void const * argument)
{
  /* USER CODE BEGIN StartPrinter */
  /* Infinite loop */
  for(;;)
  {

	  switch (print_state) {
		case 0:

			break;
		case 1:
			osMutexWait(LinkedListMutexHandle, osWaitForever);
	  print(head);

	  osMutexRelease(LinkedListMutexHandle);

    osDelay(1000);
			break;
	}


  }
  /* USER CODE END StartPrinter */
}

/* USER CODE BEGIN Header_StartPushBack */
/**
* @brief Function implementing the PushBack thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartPushBack */
void StartPushBack(void const * argument)
{
  /* USER CODE BEGIN StartPushBack */
  /* Infinite loop */
  for(;;)
  {

	  int random_number = HAL_RNG_GetRandomNumber(&hrng);
	  osMutexWait(LinkedListMutexHandle, osWaitForever);
	  push_back(&head, abs(random_number) % 100 + 1);
	  osMutexRelease(LinkedListMutexHandle);

    osDelay(2000);
  }
  /* USER CODE END StartPushBack */
}

/* USER CODE BEGIN Header_StartCommander */
/**
* @brief Function implementing the Commander thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartCommander */
void StartCommander(void const * argument)
{
  /* USER CODE BEGIN StartCommander */
  /* Infinite loop */
  for(;;)
  {





    osDelay(1);
  }
  /* USER CODE END StartCommander */
}

/* USER CODE BEGIN Header_StartTimerStarter */
/**
* @brief Function implementing the TimerStarter thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTimerStarter */
void StartTimerStarter(void const * argument)
{
  /* USER CODE BEGIN StartTimerStarter */
  /* Infinite loop */
  for(;;)
  {
	  osDelay(10);
	  HAL_TIM_Base_Start_IT(&htim5);



    osThreadTerminate(TimerStarterHandle);

  }
  /* USER CODE END StartTimerStarter */
}

/* USER CODE BEGIN Header_StartPopBack */
/**
* @brief Function implementing the PopBack thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartPopBack */
void StartPopBack(void const * argument)
{
  /* USER CODE BEGIN StartPopBack */
  /* Infinite loop */
  for(;;)
  {

	  switch (prog_state) {
		case 0:

			break;
		case 1:
			osMutexWait(LinkedListMutexHandle, osWaitForever);
			pop_back(&head);
			osDelay(500);
			osMutexRelease(LinkedListMutexHandle);
			break;
	}



    osDelay(1);
  }
  /* USER CODE END StartPopBack */
}

/**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM14 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */
	if (htim->Instance == TIM5) {
	    printf("timer");
	  }

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM14) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
