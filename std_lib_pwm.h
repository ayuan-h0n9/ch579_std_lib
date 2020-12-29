#ifndef __STD_LIB_PWM_H__
#define __STD_LIB_PWM_H__

#include "CH57x_common.h"

/******************  Bit definition for PWM_OUT_EN register  *******************/
#define PWM_B_CH11_OUT_EN               ((uint8_t)0x80)          /*!< PWM11 ���ʹ��λ */
#define PWM_B_CH10_OUT_EN               ((uint8_t)0x40)          /*!< PWM10 ���ʹ��λ */
#define PWM_B_CH9_OUT_EN                ((uint8_t)0x20)          /*!< PWM9 ���ʹ��λ */
#define PWM_B_CH8_OUT_EN                ((uint8_t)0x10)          /*!< PWM8 ���ʹ��λ */
#define PWM_B_CH7_OUT_EN                ((uint8_t)0x08)          /*!< PWM7 ���ʹ��λ */
#define PWM_B_CH6_OUT_EN                ((uint8_t)0x04)          /*!< PWM6 ���ʹ��λ */
#define PWM_B_CH5_OUT_EN                ((uint8_t)0x02)          /*!< PWM5 ���ʹ��λ */
#define PWM_B_CH4_OUT_EN                ((uint8_t)0x01)          /*!< PWM4 ���ʹ��λ */

/******************  Bit definition for PWM_POLAR register  *******************/
#define PWM_B_CH11_POLAR                ((uint8_t)0x80)          /*!< PWM11 ������Կ���λ */
#define PWM_B_CH10_POLAR                ((uint8_t)0x40)          /*!< PWM10 ������Կ���λ */
#define PWM_B_CH9_POLAR                 ((uint8_t)0x20)          /*!< PWM9 ������Կ���λ */
#define PWM_B_CH8_POLAR                 ((uint8_t)0x10)          /*!< PWM8 ������Կ���λ */
#define PWM_B_CH7_POLAR                 ((uint8_t)0x08)          /*!< PWM7 ������Կ���λ */
#define PWM_B_CH6_POLAR                 ((uint8_t)0x04)          /*!< PWM6 ������Կ���λ */
#define PWM_B_CH5_POLAR                 ((uint8_t)0x02)          /*!< PWM5 ������Կ���λ */
#define PWM_B_CH4_POLAR                 ((uint8_t)0x01)          /*!< PWM4 ������Կ���λ */

/******************  Bit definition for PWM_CONFIG register  *******************/
#define PWM_B_CH10_CH11_STAG_EN         ((uint8_t)0x80)          /*!< PWM10/11 �������ʹ��λ */
#define PWM_B_CH8_CH9_STAG_EN           ((uint8_t)0x40)          /*!< PWM8/9 �������ʹ��λ */
#define PWM_B_CH6_CH7_STAG_EN           ((uint8_t)0x20)          /*!< PWM6/7 �������ʹ��λ */
#define PWM_B_CH4_CH5_STAG_EN           ((uint8_t)0x10)          /*!< PWM4/5 �������ʹ��λ */
#define PWM_B_CYC_MOD                   ((uint8_t)0x0C)          /*!< PWM ���ݿ��ѡ�� */
#define PWM_B_STAG_ST                   ((uint8_t)0x02)          /*!< PWM �����־λ */
#define PWM_B_CYCLE_SEL                 ((uint8_t)0x01)          /*!< PWM ����ѡ�� */

typedef struct
{
    __IO uint8_t PWM_R_OUT_EN;                  /*!< PWMx ���ʹ�ܼĴ���,          Address offset: 0x00 */
    __IO uint8_t PWM_R_POLAR;                   /*!< PWMx ����������üĴ���,      Address offset: 0x01 */                                    
    __IO uint8_t PWM_R_CONFIG;                  /*!< PWMx ���ÿ��ƼĴ���,          Address offset: 0x02 */
    __IO uint8_t PWM_R_CLOCK_DIV;               /*!< PWMx ʱ�ӷ�Ƶ�Ĵ���,          Address offset: 0x03 */
    __IO uint8_t PWM_R_CH4_DATA;                /*!< PWM4 ���ݱ��ּĴ���,          Address offset: 0x04 */
    __IO uint8_t PWM_R_CH5_DATA;                /*!< PWM5 ���ݱ��ּĴ���,          Address offset: 0x05 */
    __IO uint8_t PWM_R_CH6_DATA;                /*!< PWM6 ���ݱ��ּĴ���,          Address offset: 0x06 */
    __IO uint8_t PWM_R_CH7_DATA;                /*!< PWM7 ���ݱ��ּĴ���,          Address offset: 0x07 */
    __IO uint8_t PWM_R_CH8_DATA;                /*!< PWM8 ���ݱ��ּĴ���,          Address offset: 0x08 */
    __IO uint8_t PWM_R_CH9_DATA;                /*!< PWM9 ���ݱ��ּĴ���,          Address offset: 0x09 */
    __IO uint8_t PWM_R_CH10_DATA;               /*!< PWM10 ���ݱ��ּĴ���,         Address offset: 0x0A */
    __IO uint8_t PWM_R_CH11_DATA;               /*!< PWM11 ���ݱ��ּĴ���,         Address offset: 0x0B */
} PWM_TypeDef;

#define PWM_BASE            ((uint32_t)0x40005000)
#define PWM                 ((PWM_TypeDef *) PWM_BASE)

#endif
