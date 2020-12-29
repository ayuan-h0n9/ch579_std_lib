#ifndef __STD_LIB_UART_H__
#define __STD_LIB_UART_H__

#include "CH57x_common.h"
#include <stdint.h>


/******************  Bit definition for UART_MCR register  *******************/
#define  UART_MCR_DTR               ((uint8_t)0x01)            /*!< USART Enable */
#define  UART_MCR_RTS               ((uint8_t)0x02)            /*!< USART Enable in STOP Mode */
#define  UART_MCR_OUT1              ((uint8_t)0x04)            /*!< Receiver Enable */
#define  UART_MCR_OUT2              ((uint8_t)0x08)            /*!< Transmitter Enable */
#define  UART_MCR_INT_OE            ((uint8_t)0x08)            /*!< Transmitter Enable */
#define  UART_MCR_LOOP              ((uint8_t)0x10)            /*!< IDLE Interrupt Enable */
#define  UART_MCR_AU_FLOW_EN        ((uint8_t)0x20)            /*!< RXNE Interrupt Enable */
#define  UART_MCR_TNOW              ((uint8_t)0x40)            /*!< Transmission Complete Interrupt Enable */
#define  UART_MCR_HALF              ((uint8_t)0x80)            /*!< TXE Interrupt Enable */

/******************  Bit definition for UART_IER register  *******************/
#define  UART_IER_RECV_RDY          ((uint8_t)0x01)            /*!< USART Enable */
#define  UART_IER_THR_EMPTY         ((uint8_t)0x02)            /*!< USART Enable in STOP Mode */
#define  UART_IER_LINE_STAT         ((uint8_t)0x04)            /*!< Receiver Enable */
#define  UART_IER_MODEM_CHG         ((uint8_t)0x08)            /*!< Transmitter Enable */
#define  UART_IER_DTR_EN            ((uint8_t)0x10)            /*!< IDLE Interrupt Enable */
#define  UART_IER_RTS_EN            ((uint8_t)0x20)            /*!< RXNE Interrupt Enable */
#define  UART_IER_TXD_EN            ((uint8_t)0x40)            /*!< Transmission Complete Interrupt Enable */
#define  UART_IER_RESET             ((uint8_t)0x80)            /*!< TXE Interrupt Enable */

/******************  Bit definition for UART_FCR register  *******************/
#define  UART_FCR_FIFO_EN           ((uint8_t)0x01)            /*!< USART Enable */
#define  UART_FCR_RX_FIFO_CLR       ((uint8_t)0x02)            /*!< USART Enable in STOP Mode */
#define  UART_FCR_TX_FIFO_CLR       ((uint8_t)0x04)            /*!< Receiver Enable */
#define  UART_FCR_RESERVED          ((uint8_t)0x38)            /*!< Receiver Enable */
#define  UART_FCR_FIFO_TRIG         ((uint8_t)0xC0)            /*!< Transmitter Enable */

/******************  Bit definition for UART_LCR register  *******************/
#define  UART_LCR_WORD_SZ           ((uint8_t)0x03)            /*!< USART Enable */
#define  UART_LCR_STOP_BIT          ((uint8_t)0x04)            /*!< USART Enable in STOP Mode */
#define  UART_LCR_PAR_EN            ((uint8_t)0x08)            /*!< Receiver Enable */
#define  UART_LCR_PAR_MOD           ((uint8_t)0x30)            /*!< Transmitter Enable */
#define  UART_LCR_BREAK_EN          ((uint8_t)0x40)            /*!< IDLE Interrupt Enable */
#define  UART_LCR_DLAB              ((uint8_t)0x80)            /*!< RXNE Interrupt Enable */
#define  UART_LCR_GP_BIT            ((uint8_t)0x80)            /*!< RXNE Interrupt Enable */


/******************  Bit definition for UART_IIR register  *******************/
#define  UART_IIR_NO_INT            ((uint8_t)0x01)            /*!< USART Enable */
#define  UART_IIR_INT_MASK          ((uint16_t)0x0F)            /*!< USART Enable in STOP Mode */
#define  UART_IIR_RESERVED          ((uint8_t)0x30)            /*!< USART Enable in STOP Mode */
#define  UART_IIR_FIFO_ID           ((uint8_t)0xC0)            /*!< Receiver Enable */

/******************  Bit definition for UART_LSR register  *******************/
#define  UART_LSR_DATA_RDY          ((uint8_t)0x01)            /*!< USART Enable */
#define  UART_LSR_OVER_ERR          ((uint8_t)0x02)            /*!< USART Enable in STOP Mode */
#define  UART_LSR_PAR_ERR           ((uint8_t)0x04)            /*!< Receiver Enable */
#define  UART_LSR_FRAME_ERR         ((uint8_t)0x08)            /*!< Transmitter Enable */
#define  UART_LSR_BREAK_ERR         ((uint8_t)0x10)            /*!< Transmitter Enable */
#define  UART_LSR_TX_FIFO_EMP       ((uint8_t)0x20)            /*!< IDLE Interrupt Enable */
#define  UART_LSR_TX_ALL_EMP        ((uint8_t)0x40)            /*!< RXNE Interrupt Enable */
#define  UART_LSR_ERR_RX_FIFO       ((uint8_t)0x80)            /*!< RXNE Interrupt Enable */

/******************  Bit definition for UART_MSR register  *******************/
#define  UART_MSR_CTS_CHG           ((uint8_t)0x01)            /*!< USART Enable */
#define  UART_MSR_DSR_CHG           ((uint8_t)0x02)            /*!< USART Enable in STOP Mode */
#define  UART_MSR_RI_CHG            ((uint8_t)0x04)            /*!< Receiver Enable */
#define  UART_MSR_DCD_CHG           ((uint8_t)0x08)            /*!< Transmitter Enable */
#define  UART_MSR_CTS               ((uint8_t)0x10)            /*!< Transmitter Enable */
#define  UART_MSR_DSR               ((uint8_t)0x20)            /*!< IDLE Interrupt Enable */
#define  UART_MSR_RI                ((uint8_t)0x40)            /*!< RXNE Interrupt Enable */
#define  UART_MSR_DCD               ((uint8_t)0x80)            /*!< RXNE Interrupt Enable */

/******************  Bit definition for UART_BR register  *******************/
#define  UART_RBR_BUFFER            ((uint8_t)0xFF)            /*!< USART Enable */
#define  UART_THR_BUFFER            ((uint8_t)0xFF)            /*!< USART Enable */

/******************  Bit definition for UART_RFC register  *******************/
#define  UART_RFC_BUFFER            ((uint8_t)0xFF)            /*!< USART Enable */

/******************  Bit definition for UART_TFC register  *******************/
#define  UART_TFC_BUFFER            ((uint8_t)0xFF)            /*!< USART Enable */

/******************  Bit definition for UART_DL register  *******************/
#define  UART_DL_REG                ((uint16_t)0xFFFF)           /*!< USART Enable */

/******************  Bit definition for UART_DIV register  *******************/
#define  UART_DIV_REG               ((uint8_t)0xFF)            /*!< USART Enable */

/******************  Bit definition for UART_ADR register  *******************/
#define  UART_ADR_REG               ((uint8_t)0xFF)            /*!< USART Enable */


/** 
  * @brief Universal Synchronous Asynchronous Receiver Transmitter
  */

typedef struct
{
    __IO uint8_t TD_UART_MCR;   /*!< 调制解调器 MODEM 控制寄存器,    Address offset: 0x00 */ 
    __IO uint8_t TD_UART_IER;   /*!< 中断使能寄存器,                 Address offset: 0x01 */ 
    __IO uint8_t TD_UART_FCR;   /*!< FIFO 控制寄存器,                Address offset: 0x02 */
    __IO uint8_t TD_UART_LCR;   /*!< 线路控制寄存器,                 Address offset: 0x03 */
    __IO uint8_t TD_UART_IIR;   /*!< 中断识别寄存器,                 Address offset: 0x04 */
    __IO uint8_t TD_UART_LSR;   /*!< 线路状态寄存器,                 Address offset: 0x05 */  
    __IO uint8_t TD_UART_MSR;   /*!< 调制解调器 MODEM 状态寄存器,    Address offset: 0x06 */
    uint8_t RESERVED1;
    __IO uint8_t TD_UART_BR;    /*!< 接收缓冲/发送保持寄存器,        Address offset: 0x08 */
    uint8_t RESERVED2;
    __IO uint8_t TD_UART_RFC;   /*!< 接收 FIFO 计数寄存器,           Address offset: 0x0A */
    __IO uint8_t TD_UART_TFC;   /*!< 发送 FIFO 计数寄存器,           Address offset: 0x0B */
    __IO uint16_t TD_UART_DL;   /*!< 波特率除数锁存器,               Address offset: 0x0C */
    __IO uint8_t TD_UART_DIV;   /*!< 预分频除数寄存器,               Address offset: 0x0E */
    __IO uint8_t TD_UART_ADR;   /*!< 从机地址寄存器,                 Address offset: 0x0F */
} UART_TypeDef;

/** 
  * @brief Universal Synchronous Asynchronous Receiver Transmitter
  */

typedef struct
{
    __IO uint8_t UART0_MCR;     /*!< USART Control register 1,                 Address offset: 0x00 */ 
    __IO uint8_t UART0_IER;     /*!< USART Control register 2,                 Address offset: 0x04 */ 
    __IO uint8_t UART0_FCR;     /*!< USART Control register 3,                 Address offset: 0x08 */
    __IO uint8_t UART0_LCR;     /*!< USART Baud rate register,                 Address offset: 0x0C */
    __IO uint8_t UART0_IIR;     /*!< USART Guard time and prescaler register,  Address offset: 0x10 */
    __IO uint8_t UART0_LSR;     /*!< USART Receiver Time Out register,         Address offset: 0x14 */  
    __IO uint8_t UART0_MSR;     /*!< USART Request register,                   Address offset: 0x18 */
    uint8_t RESERVED1;
    __IO uint8_t UART0_BR;     /*!< USART Interrupt and status register,      Address offset: 0x1C */
    uint8_t RESERVED2;
    __IO uint8_t UART0_RFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART0_TFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint16_t UART0_DL;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART0_DIV;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART0_ADR;     /*!< USART Receive Data register,              Address offset: 0x24 */
} UART0_TypeDef;

/** 
  * @brief Universal Synchronous Asynchronous Receiver Transmitter
  */
  
typedef struct
{
    __IO uint8_t UART1_MCR;     /*!< USART Control register 1,                 Address offset: 0x00 */ 
    __IO uint8_t UART1_IER;     /*!< USART Control register 2,                 Address offset: 0x04 */ 
    __IO uint8_t UART1_FCR;     /*!< USART Control register 3,                 Address offset: 0x08 */
    __IO uint8_t UART1_LCR;     /*!< USART Baud rate register,                 Address offset: 0x0C */
    __IO uint8_t UART1_IIR;     /*!< USART Guard time and prescaler register,  Address offset: 0x10 */
    __IO uint8_t UART1_LSR;     /*!< USART Receiver Time Out register,         Address offset: 0x14 */  
    __IO uint8_t UART1_MSR;     /*!< USART Request register,                   Address offset: 0x18 */
    uint8_t RESERVED1;
    __IO uint8_t UART1_BR;     /*!< USART Interrupt and status register,      Address offset: 0x1C */
    uint8_t RESERVED2;
    __IO uint8_t UART1_RFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART1_TFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint16_t UART1_DL;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART1_DIV;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART1_ADR;     /*!< USART Receive Data register,              Address offset: 0x24 */
} UART1_TypeDef;

/** 
  * @brief Universal Synchronous Asynchronous Receiver Transmitter
  */
  
typedef struct
{
    __IO uint8_t UART2_MCR;     /*!< USART Control register 1,                 Address offset: 0x00 */ 
    __IO uint8_t UART2_IER;     /*!< USART Control register 2,                 Address offset: 0x04 */ 
    __IO uint8_t UART2_FCR;     /*!< USART Control register 3,                 Address offset: 0x08 */
    __IO uint8_t UART2_LCR;     /*!< USART Baud rate register,                 Address offset: 0x0C */
    __IO uint8_t UART2_IIR;     /*!< USART Guard time and prescaler register,  Address offset: 0x10 */
    __IO uint8_t UART2_LSR;     /*!< USART Receiver Time Out register,         Address offset: 0x14 */  
    __IO uint8_t UART2_MSR;     /*!< USART Request register,                   Address offset: 0x18 */
    uint8_t RESERVED1;
    __IO uint8_t UART2_BR;     /*!< USART Interrupt and status register,      Address offset: 0x1C */
    uint8_t RESERVED2;
    __IO uint8_t UART2_RFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART2_TFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint16_t UART2_DL;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART2_DIV;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART2_ADR;     /*!< USART Receive Data register,              Address offset: 0x24 */
} UART2_TypeDef;

/** 
  * @brief Universal Synchronous Asynchronous Receiver Transmitter
  */
  
typedef struct
{
    __IO uint8_t UART3_MCR;     /*!< USART Control register 1,                 Address offset: 0x00 */ 
    __IO uint8_t UART3_IER;     /*!< USART Control register 2,                 Address offset: 0x04 */ 
    __IO uint8_t UART3_FCR;     /*!< USART Control register 3,                 Address offset: 0x08 */
    __IO uint8_t UART3_LCR;     /*!< USART Baud rate register,                 Address offset: 0x0C */
    __IO uint8_t UART3_IIR;     /*!< USART Guard time and prescaler register,  Address offset: 0x10 */
    __IO uint8_t UART3_LSR;     /*!< USART Receiver Time Out register,         Address offset: 0x14 */  
    __IO uint8_t UART3_MSR;     /*!< USART Request register,                   Address offset: 0x18 */
    uint8_t RESERVED1;
    __IO uint8_t UART3_BR;     /*!< USART Interrupt and status register,      Address offset: 0x1C */
    uint8_t RESERVED2;
    __IO uint8_t UART3_RFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART3_TFC;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint16_t UART3_DL;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART3_DIV;     /*!< USART Receive Data register,              Address offset: 0x24 */
    __IO uint8_t UART3_ADR;     /*!< USART Receive Data register,              Address offset: 0x24 */
} UART3_TypeDef;


#define UART_BASE           ((uint32_t)0x40003000)
#define UART0_BASE          (UART_BASE + 0x00000000)
#define UART1_BASE          (UART_BASE + 0x00000400)
#define UART2_BASE          (UART_BASE + 0x00000800)
#define UART3_BASE          (UART_BASE + 0x00000C00)

#define UART0               ((UART_TypeDef *) UART0_BASE)
#define UART1               ((UART_TypeDef *) UART1_BASE)
#define UART2               ((UART_TypeDef *) UART2_BASE)
#define UART3               ((UART_TypeDef *) UART3_BASE)

/**
  * @brief  USART Init Structure definition
  */

typedef struct
{
    uint32_t UART_BaudRate;            /*!< This member configures the USART communication baud rate.
                                           The baud rate is computed using the following formula:
                                            - IntegerDivider = ((PCLKx) / (16 * (USART_InitStruct->USART_BaudRate)))
                                            - FractionalDivider = ((IntegerDivider - ((uint32_t) IntegerDivider)) * 16) + 0.5 */

    uint32_t UART_WordLength;          /*!< Specifies the number of data bits transmitted or received in a frame.
                                           This parameter can be a value of @ref USART_Word_Length */

    uint32_t UART_StopBits;            /*!< Specifies the number of stop bits transmitted.
                                           This parameter can be a value of @ref USART_Stop_Bits */

    uint32_t UART_Parity;              /*!< Specifies the parity mode.
                                           This parameter can be a value of @ref USART_Parity
                                           @note When parity is enabled, the computed parity is inserted
                                                 at the MSB position of the transmitted data (9th bit when
                                                 the word length is set to 9 data bits; 8th bit when the
                                                 word length is set to 8 data bits). */

    uint32_t UART_Mode;                /*!< Specifies wether the Receive or Transmit mode is enabled or disabled.
                                           This parameter can be a value of @ref USART_Mode */

    uint8_t UART_HardwareFlowControl; /*!< Specifies wether the hardware flow control mode is enabled
                                           or disabled.
                                           This parameter can be a value of @ref USART_Hardware_Flow_Control*/
} UART_InitTypeDef;

#endif
