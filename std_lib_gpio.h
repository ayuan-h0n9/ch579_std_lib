#ifndef __STD_LIB_GPIO_H__
#define __STD_LIB_GPIO_H__

#include "CH57x_common.h"

/******************  Bit definition for PIN_ALTERNATE register  *******************/
#define GPIO_B_PIN_TMR0             ((uint16_t)0x0001)          /*!< USART Enable */
#define GPIO_B_PIN_TMR1             ((uint16_t)0x0002)          /*!< USART Enable in STOP Mode */
#define GPIO_B_PIN_TMR2             ((uint16_t)0x0004)            /*!< Receiver Enable */
#define GPIO_B_PIN_TMR3             ((uint16_t)0x0008)            /*!< Transmitter Enable */
#define GPIO_B_PIN_UART0            ((uint16_t)0x0010)            /*!< Transmitter Enable */
#define GPIO_B_PIN_UART1            ((uint16_t)0x0020)            /*!< IDLE Interrupt Enable */
#define GPIO_B_PIN_UART2            ((uint16_t)0x0040)            /*!< RXNE Interrupt Enable */
#define GPIO_B_PIN_UART3            ((uint16_t)0x0080)            /*!< Transmission Complete Interrupt Enable */
#define GPIO_B_PIN_SPI0             ((uint16_t)0x0100)            /*!< TXE Interrupt Enable */
#define GPIO_B_RESERVED0            ((uint16_t)0xFE00)

/******************  Bit definition for PIN_ANALOG_IE register  *******************/
#define GPIO_B_PIN_SEG0_3_IE        ((uint16_t)0x0001)          /*!< USART Enable */
#define GPIO_B_PIN_SEG1_7_IE        ((uint16_t)0x0002)          /*!< USART Enable in STOP Mode */
#define GPIO_B_PIN_SEG8_11_IE       ((uint16_t)0x0004)            /*!< Receiver Enable */
#define GPIO_B_PIN_SEG12_15_IE      ((uint16_t)0x0008)            /*!< Transmitter Enable */
#define GPIO_B_PIN_SEG16_19_IE      ((uint16_t)0x0010)            /*!< Transmitter Enable */
#define GPIO_B_PIN_SEG20_23_IE      ((uint16_t)0x0020)            /*!< IDLE Interrupt Enable */
#define GPIO_B_PIN_ETH_IE           ((uint16_t)0x0040)            /*!< RXNE Interrupt Enable */
#define GPIO_B_PIN_USB_IE           ((uint16_t)0x0080)            /*!< Transmission Complete Interrupt Enable */
#define GPIO_B_PIN_ADC8_9_IE        ((uint16_t)0x0100)            /*!< TXE Interrupt Enable */
#define GPIO_B_PIN_ADC6_7_IE        ((uint16_t)0x0200)
#define GPIO_B_PIN_ADC0_1_IE        ((uint16_t)0x0400)
#define GPIO_B_PIN_ADC10_11_IE      ((uint16_t)0x0800)
#define GPIO_B_PIN_ADC12_13_IE      ((uint16_t)0x1000)
#define GPIO_B_PIN_XT32K_IE         ((uint16_t)0x2000)
#define GPIO_B_PIN_ADC2_3_IE        ((uint16_t)0x4000)
#define GPIO_B_PIN_ADC4_5_IE        ((uint16_t)0x8000)



/** @defgroup Configuration_Mode_enumeration
  * @{
  */
typedef enum
{
    GPIO_Mode_IN   = 0x00, /*!< GPIO Input Mode              */
    GPIO_Mode_OUT  = 0x01, /*!< GPIO Output Mode             */
    GPIO_Mode_AF   = 0x02, /*!< GPIO Alternate function Mode */
    GPIO_Mode_AN   = 0x03  /*!< GPIO Analog In/Out Mode      */
} GPIOMode_TypeDef;

/** @defgroup Configuration_Pull-Up_Pull-Down_enumeration
  * @{
  */
typedef enum
{
    GPIO_PuPd_NOPULL = 0x00,
    GPIO_PuPd_UP     = 0x01,
    GPIO_PuPd_DOWN   = 0x02
} GPIOPuPd_TypeDef;

/**
  * @brief General Purpose IO
  */

typedef struct
{
    __IO uint16_t GPIO_R_PIN_ALTERNATE;         /*!< ¹¦ÄÜÒý½ÅÖØÓ³Éä¼Ä´æÆ÷,                Address offset: 0x00 */
    __IO uint16_t GPIO_R_PIN_ANALOG_IE;         /*!< ÍâÉèÄ£Äâ¹Ü½ÅÅäÖÃ¼Ä´æÆ÷,              Address offset: 0x02 */
} GPIO_CFG_TypeDef;

typedef struct
{
    __IO uint16_t GPIO_R_PA_INT_EN;             /*!< PA ¶Ë¿ÚÖÐ¶ÏÊ¹ÄÜ¼Ä´æÆ÷,               Address offset: 0x00 */
    __IO uint16_t GPIO_R_PB_INT_EN;             /*!< PB ¶Ë¿ÚÖÐ¶ÏÊ¹ÄÜ¼Ä´æÆ÷,               Address offset: 0x02 */
    __IO uint16_t GPIO_R_PA_INT_MODE;           /*!< PA ¶Ë¿ÚÖÐ¶ÏÄ£Ê½ÅäÖÃ¼Ä´æÆ÷,           Address offset: 0x04 */
    __IO uint16_t GPIO_R_PB_INT_MODE;           /*!< PB ¶Ë¿ÚÖÐ¶ÏÄ£Ê½ÅäÖÃ¼Ä´æÆ÷,           Address offset: 0x06 */
    uint32_t RESERVED0;                         /*!< ±£Áô,                                Address offset: 0x08 */
    __IO uint16_t GPIO_R_PA_INT_IF;             /*!< PA ¶Ë¿ÚÖÐ¶Ï±êÖ¾¼Ä´æÆ÷,               Address offset: 0x0C */
    __IO uint16_t GPIO_R_PB_INT_IF;             /*!< PB ¶Ë¿ÚÖÐ¶Ï±êÖ¾¼Ä´æÆ÷,               Address offset: 0x0E */
} GPIO_INT_TypeDef;

typedef struct
{
    __IO uint32_t GPIO_R_DIR;                   /*!< ¶Ë¿Ú·½ÏòÅäÖÃ¼Ä´æÆ÷,               Address offset: 0x00 */
    __IO uint32_t GPIO_R_PIN;                   /*!< ¶Ë¿ÚÒý½ÅÊäÈë¼Ä´æÆ÷,               Address offset: 0x04 */                                    
    __IO uint32_t GPIO_R_OUT;                   /*!< ¶Ë¿ÚÊý¾ÝÊä³ö¼Ä´æÆ÷,               Address offset: 0x08 */
    __IO uint32_t GPIO_R_CLR;                   /*!< ¶Ë¿ÚÊý¾Ý¸´Î»¼Ä´æÆ÷,               Address offset: 0x0C */
    __IO uint32_t GPIO_R_PU;                    /*!< ¶Ë¿ÚÉÏÀ­µç×èÅäÖÃ¼Ä´æÆ÷,           Address offset: 0x10 */
    __IO uint32_t GPIO_R_PD_DRV;                /*!< ¶Ë¿ÚÏÂÀ­/Çý¶¯ÅäÖÃ¼Ä´æÆ÷,          Address offset: 0x14 */
} GPIO_TypeDef;

#define GPIO_BASE           ((uint32_t)0x40001000)
#define GPIO_CFG_BASE       (GPIO_BASE + 0x00000018)
#define GPIO_INT_BASE       (GPIO_BASE + 0x00000090)
#define GPIOA_BASE          (GPIO_BASE + 0x000000A0)
#define GPIOB_BASE          (GPIO_BASE + 0x000000C0)

#define GPIO_CFG            ((GPIO_CFG_TypeDef *) GPIO_CFG_BASE)
#define GPIO_INT            ((GPIO_INT_TypeDef *) GPIO_INT_BASE)
#define GPIOA               ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB               ((GPIO_TypeDef *) GPIOB_BASE)


/**
  * @brief  GPIO Init structure definition
  */
typedef struct
{
    uint32_t GPIO_Pin;              /*!< Specifies the GPIO pins to be configured.
                                       This parameter can be any value of @ref GPIO_pins_define */

    GPIOMode_TypeDef GPIO_Mode;     /*!< Specifies the operating mode for the selected pins.
                                       This parameter can be a value of @ref GPIOMode_TypeDef   */

    GPIOPuPd_TypeDef GPIO_PuPd;     /*!< Specifies the operating Pull-up/Pull down for the selected pins.
                                       This parameter can be a value of @ref GPIOPuPd_TypeDef   */
} GPIO_InitTypeDef;

#endif
