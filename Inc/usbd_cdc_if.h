/**
  ******************************************************************************
  * @file           : usbd_cdc_if.h
  * @brief          : Header for usbd_cdc_if file.
  ******************************************************************************
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  * 1. Redistributions of source code must retain the above copyright notice,
  * this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  * this list of conditions and the following disclaimer in the documentation
  * and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of its contributors
  * may be used to endorse or promote products derived from this software
  * without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_CDC_IF_H
#define __USBD_CDC_IF_H

#ifdef __cplusplus
 extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "usbd_cdc.h"
/* USER CODE BEGIN INCLUDE */
/* USER CODE END INCLUDE */

/** @addtogroup STM32_USB_OTG_DEVICE_LIBRARY
  * @{
  */
  
/** @defgroup USBD_CDC_IF
  * @brief header 
  * @{
  */ 

/** @defgroup USBD_CDC_IF_Exported_Defines
  * @{
  */ 
/* USER CODE BEGIN EXPORTED_DEFINES */
/* USER CODE END EXPORTED_DEFINES */

/**
  * @}
  */ 

/** @defgroup USBD_CDC_IF_Exported_Types
  * @{
  */  
/* USER CODE BEGIN EXPORTED_TYPES */
/**
 * @brief VCP Result Enumerations
 */
typedef enum {
    MS_USB_VCP_OK,                  /*!< Everything ok */
    MS_USB_VCP_ERROR,               /*!< An error occurred */
    MS_USB_VCP_RECEIVE_BUFFER_FULL, /*!< Receive buffer is full */
    MS_USB_VCP_DATA_OK,             /*!< Data OK */
    MS_USB_VCP_DATA_EMPTY,          /*!< Data empty */
    MS_USB_VCP_NOT_CONNECTED,       /*!< Not connected to PC */
    MS_USB_VCP_CONNECTED,           /*!< Connected to PC */
    MS_USB_VCP_DEVICE_SUSPENDED,    /*!< Device is suspended */
    MS_USB_VCP_DEVICE_RESUMED       /*!< Device is resumed */
} MS_USB_VCP_Result;

/**
 * @brief  Structure for USART if you are working USB/UART converter with STM32F4xx
 */
typedef struct {
    uint32_t Baudrate; /*!< Baudrate, which is set by user on terminal. 
                            Value is number of bits per second, for example: 115200 */
    uint8_t Stopbits;  /*!< Stop bits, which is set by user on terminal.
                            Possible values:
                               - 0: 1 stop bit
                               - 1: 1.5 stop bits
                               - 2: 2 stop bits */
    uint8_t DataBits;  /*!< Data bits, which is set by user on terminal.
                            Possible values:
                               - 5: 5 data bits
                               - 6: 6 data bits
                               - 7: 7 data bits
                               - 8: 8 data bits
                               - 9: 9 data bits */
    uint8_t Parity;    /*!< Parity, which is set by user on terminal.
                            Possible values:
                               - 0: No parity
                               - 1: Odd parity
                               - 2: Even parity
                               - 3: Mark parity
                               - 4: Space parity */
    uint8_t Changed;   /*!< When you check for settings in my function, 
                            this will be set to 1 if user has changed parameters,
                            so you can reinitialize USART peripheral if you need to. */
} MS_USB_VCP_Settings_t;

/* USER CODE END EXPORTED_TYPES */

/**
  * @}
  */ 

/** @defgroup USBD_CDC_IF_Exported_Macros
  * @{
  */ 
/* USER CODE BEGIN EXPORTED_MACRO */
/* USER CODE END EXPORTED_MACRO */

/**
  * @}
  */ 

/** @defgroup USBD_AUDIO_IF_Exported_Variables
  * @{
  */ 
extern USBD_CDC_ItfTypeDef  USBD_Interface_fops_FS;

/* USER CODE BEGIN EXPORTED_VARIABLES */
/* USER CODE END EXPORTED_VARIABLES */

/**
  * @}
  */ 

/** @defgroup USBD_CDC_IF_Exported_FunctionsPrototype
  * @{
  */ 
uint8_t CDC_Transmit_FS(uint8_t* Buf, uint16_t Len);

/* USER CODE BEGIN EXPORTED_FUNCTIONS */
/* USER CODE END EXPORTED_FUNCTIONS */
/**
  * @}
  */ 

/**
  * @}
  */ 

/**
  * @}
  */ 
  
#ifdef __cplusplus
}
#endif
  
#endif /* __USBD_CDC_IF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
