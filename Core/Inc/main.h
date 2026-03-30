/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32h5xx_hal.h"

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
void MX_ETH_Init(void);

/* USER CODE BEGIN EFP */
void MX_ETH_Init(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LEDPWR_Pin GPIO_PIN_3
#define LEDPWR_GPIO_Port GPIOA
#define LEDCON_Pin GPIO_PIN_4
#define LEDCON_GPIO_Port GPIOA
#define A2_PLS_Pin GPIO_PIN_7
#define A2_PLS_GPIO_Port GPIOC
#define A2_DIR_Pin GPIO_PIN_8
#define A2_DIR_GPIO_Port GPIOC
#define A1_PLS_Pin GPIO_PIN_8
#define A1_PLS_GPIO_Port GPIOA
#define A1_DIR_Pin GPIO_PIN_10
#define A1_DIR_GPIO_Port GPIOC

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
