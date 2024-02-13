/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define EMSTOP_Pin GPIO_PIN_4
#define EMSTOP_GPIO_Port GPIOA
#define EMSTOP_EXTI_IRQn EXTI4_IRQn
#define DIRY_Pin GPIO_PIN_5
#define DIRY_GPIO_Port GPIOA
#define RELAY_ROBOT_Pin GPIO_PIN_6
#define RELAY_ROBOT_GPIO_Port GPIOA
#define DIRX_Pin GPIO_PIN_0
#define DIRX_GPIO_Port GPIOB
#define SIGY_Pin GPIO_PIN_1
#define SIGY_GPIO_Port GPIOB
#define SIGY_EXTI_IRQn EXTI1_IRQn
#define DIRZ_Pin GPIO_PIN_10
#define DIRZ_GPIO_Port GPIOB
#define RELAY_ABSORB_Pin GPIO_PIN_13
#define RELAY_ABSORB_GPIO_Port GPIOB
#define RELAY_CONVEYOR_Pin GPIO_PIN_14
#define RELAY_CONVEYOR_GPIO_Port GPIOB
#define SIGX_Pin GPIO_PIN_6
#define SIGX_GPIO_Port GPIOB
#define SIGX_EXTI_IRQn EXTI9_5_IRQn
#define SIGZ_Pin GPIO_PIN_9
#define SIGZ_GPIO_Port GPIOB
#define SIGZ_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
