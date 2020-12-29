#include "std_lib_uart.h"

/**
  * @brief  Deinitializes the USARTx peripheral registers to their default reset values.
  * @param  USARTx: where x can be from 1 to 8 to select the USART peripheral.
  * @note   USART3 and USART4 are available only for STM32F072 and STM32F091 devices.
  * @note   USART5, USART6, USART7 and USART8 are available only for STM32F091 devices.  
  * @note   USART2 is not available for STM32F031 devices.
  * @retval None
  */
void UART_DeInit(UART_TypeDef* UARTx)
{
    /* Check the parameters */
//    assert_param(IS_USART_ALL_PERIPH(USARTx));

    if (UARTx == UART0)
    {
//        RCC_APB2PeriphResetCmd(RCC_APB2Periph_USART1, ENABLE);
//        RCC_APB2PeriphResetCmd(RCC_APB2Periph_USART1, DISABLE);
    }
    else
    {
      
    }

}

/**
  * @brief  Initializes the USARTx peripheral according to the specified
  *         parameters in the USART_InitStruct .
  * @param  USARTx: where x can be from 1 to 8 to select the USART peripheral.
  * @note   USART3 and USART4 are available only for STM32F072 and STM32F091 devices.
  * @note   USART5, USART6, USART7 and USART8 are available only for STM32F091 devices. 
  * @note   USART2 is not available for STM32F031 devices.    
  * @param  USART_InitStruct: pointer to a USART_InitTypeDef structure that contains
  *         the configuration information for the specified USART peripheral.
  * @retval None
  */
//void UART_Init(UART0_TypeDef* USARTx, USART_InitTypeDef* USART_InitStruct)
//{
//    uint32_t divider = 0, apbclock = 0, tmpreg = 0;
//  
//}


/**
  * @brief  Fills each USART_InitStruct member with its default value.
  * @param  USART_InitStruct: pointer to a USART_InitTypeDef structure
  *         which will be initialized.
  * @retval None
  */
void USART_StructInit(UART_InitTypeDef* UART_InitStruct)
{
//    /* USART_InitStruct members default value */
//    UART_InitStruct->UART_BaudRate = 9600;
//    UART_InitStruct->UART_WordLength = USART_WordLength_8b;
//    UART_InitStruct->UART_StopBits = USART_StopBits_1;
//    UART_InitStruct->UART_Parity = USART_Parity_No ;
//    UART_InitStruct->UART_Mode = USART_Mode_Rx | USART_Mode_Tx;
//    UART_InitStruct->UART_HardwareFlowControl = USART_HardwareFlowControl_None;  
}
