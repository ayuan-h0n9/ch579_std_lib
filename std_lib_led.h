#ifndef __STD_LIB_LED_H__
#define __STD_LIB_LED_H__

#include "CH57x_common.h"

typedef struct
{
    __IO uint8_t LED_R_CTRL_MODE;               /*!< LED ģʽ���üĴ���,           Address offset: 0x00 */
    __IO uint8_t LED_R_CLOCK_DIV;               /*!< LED ����ʱ�ӷ�Ƶ�Ĵ���,       Address offset: 0x01 */
    uint16_t RESERVED0;
    __IO uint8_t LED_R_STATUS;                  /*!< LED ״̬�Ĵ���,               Address offset: 0x04 */
    uint16_t RESERVED1;
    uint8_t RESERVED2;
    __IO uint16_t LED_R_FIFO;                   /*!< LED ���� FIFO �Ĵ���,         Address offset: 0x08 */
    __IO uint16_t LED_R_DMA_CNT;                /*!< LED DMA ʣ������Ĵ���,       Address offset: 0x10 */
    __IO uint16_t LED_R_DMA_MAIN;               /*!< LED �������� DMA ��ַ,        Address offset: 0x14 */
    __IO uint16_t LED_R_DMA_AUX;                /*!< LED ���������� DMA ��ַ,      Address offset: 0x18 */
} LED_TypeDef;

#define LED_BASE            ((uint32_t)0x40006400)
#define LED_SEG             ((LED_TypeDef *) LED_BASE)

#endif
