#ifndef __STD_LIB_LED_H__
#define __STD_LIB_LED_H__

#include "CH57x_common.h"

typedef struct
{
    __IO uint8_t LED_R_CTRL_MODE;               /*!< LED Ä£Ê½ÅäÖÃ¼Ä´æÆ÷,           Address offset: 0x00 */
    __IO uint8_t LED_R_CLOCK_DIV;               /*!< LED ´®ÐÐÊ±ÖÓ·ÖÆµ¼Ä´æÆ÷,       Address offset: 0x01 */
    uint16_t RESERVED0;
    __IO uint8_t LED_R_STATUS;                  /*!< LED ×´Ì¬¼Ä´æÆ÷,               Address offset: 0x04 */
    uint16_t RESERVED1;
    uint8_t RESERVED2;
    __IO uint16_t LED_R_FIFO;                   /*!< LED Êý¾Ý FIFO ¼Ä´æÆ÷,         Address offset: 0x08 */
    __IO uint16_t LED_R_DMA_CNT;                /*!< LED DMA Ê£Óà¼ÆÊý¼Ä´æÆ÷,       Address offset: 0x10 */
    __IO uint16_t LED_R_DMA_MAIN;               /*!< LED Ö÷»º³åÇø DMA µØÖ·,        Address offset: 0x14 */
    __IO uint16_t LED_R_DMA_AUX;                /*!< LED ¸¨Öú»º³åÇø DMA µØÖ·,      Address offset: 0x18 */
} LED_TypeDef;

#define LED_BASE            ((uint32_t)0x40006400)
#define LED_SEG             ((LED_TypeDef *) LED_BASE)

#endif
