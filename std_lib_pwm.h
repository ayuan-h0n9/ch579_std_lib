#ifndef __STD_LIB_PWM_H__
#define __STD_LIB_PWM_H__

#include "CH57x_common.h"

/******************  Bit definition for PWM_OUT_EN register  *******************/
#define PWM_B_CH11_OUT_EN               ((uint8_t)0x80)          /*!< PWM11 输出使能位 */
#define PWM_B_CH10_OUT_EN               ((uint8_t)0x40)          /*!< PWM10 输出使能位 */
#define PWM_B_CH9_OUT_EN                ((uint8_t)0x20)          /*!< PWM9 输出使能位 */
#define PWM_B_CH8_OUT_EN                ((uint8_t)0x10)          /*!< PWM8 输出使能位 */
#define PWM_B_CH7_OUT_EN                ((uint8_t)0x08)          /*!< PWM7 输出使能位 */
#define PWM_B_CH6_OUT_EN                ((uint8_t)0x04)          /*!< PWM6 输出使能位 */
#define PWM_B_CH5_OUT_EN                ((uint8_t)0x02)          /*!< PWM5 输出使能位 */
#define PWM_B_CH4_OUT_EN                ((uint8_t)0x01)          /*!< PWM4 输出使能位 */

/******************  Bit definition for PWM_POLAR register  *******************/
#define PWM_B_CH11_POLAR                ((uint8_t)0x80)          /*!< PWM11 输出极性控制位 */
#define PWM_B_CH10_POLAR                ((uint8_t)0x40)          /*!< PWM10 输出极性控制位 */
#define PWM_B_CH9_POLAR                 ((uint8_t)0x20)          /*!< PWM9 输出极性控制位 */
#define PWM_B_CH8_POLAR                 ((uint8_t)0x10)          /*!< PWM8 输出极性控制位 */
#define PWM_B_CH7_POLAR                 ((uint8_t)0x08)          /*!< PWM7 输出极性控制位 */
#define PWM_B_CH6_POLAR                 ((uint8_t)0x04)          /*!< PWM6 输出极性控制位 */
#define PWM_B_CH5_POLAR                 ((uint8_t)0x02)          /*!< PWM5 输出极性控制位 */
#define PWM_B_CH4_POLAR                 ((uint8_t)0x01)          /*!< PWM4 输出极性控制位 */

/******************  Bit definition for PWM_CONFIG register  *******************/
#define PWM_B_CH10_CH11_STAG_EN         ((uint8_t)0x80)          /*!< PWM10/11 交错输出使能位 */
#define PWM_B_CH8_CH9_STAG_EN           ((uint8_t)0x40)          /*!< PWM8/9 交错输出使能位 */
#define PWM_B_CH6_CH7_STAG_EN           ((uint8_t)0x20)          /*!< PWM6/7 交错输出使能位 */
#define PWM_B_CH4_CH5_STAG_EN           ((uint8_t)0x10)          /*!< PWM4/5 交错输出使能位 */
#define PWM_B_CYC_MOD                   ((uint8_t)0x0C)          /*!< PWM 数据宽度选择 */
#define PWM_B_STAG_ST                   ((uint8_t)0x02)          /*!< PWM 交错标志位 */
#define PWM_B_CYCLE_SEL                 ((uint8_t)0x01)          /*!< PWM 周期选择 */

typedef struct
{
    __IO uint8_t PWM_R_OUT_EN;                  /*!< PWMx 输出使能寄存器,          Address offset: 0x00 */
    __IO uint8_t PWM_R_POLAR;                   /*!< PWMx 输出极性配置寄存器,      Address offset: 0x01 */                                    
    __IO uint8_t PWM_R_CONFIG;                  /*!< PWMx 配置控制寄存器,          Address offset: 0x02 */
    __IO uint8_t PWM_R_CLOCK_DIV;               /*!< PWMx 时钟分频寄存器,          Address offset: 0x03 */
    __IO uint8_t PWM_R_CH4_DATA;                /*!< PWM4 数据保持寄存器,          Address offset: 0x04 */
    __IO uint8_t PWM_R_CH5_DATA;                /*!< PWM5 数据保持寄存器,          Address offset: 0x05 */
    __IO uint8_t PWM_R_CH6_DATA;                /*!< PWM6 数据保持寄存器,          Address offset: 0x06 */
    __IO uint8_t PWM_R_CH7_DATA;                /*!< PWM7 数据保持寄存器,          Address offset: 0x07 */
    __IO uint8_t PWM_R_CH8_DATA;                /*!< PWM8 数据保持寄存器,          Address offset: 0x08 */
    __IO uint8_t PWM_R_CH9_DATA;                /*!< PWM9 数据保持寄存器,          Address offset: 0x09 */
    __IO uint8_t PWM_R_CH10_DATA;               /*!< PWM10 数据保持寄存器,         Address offset: 0x0A */
    __IO uint8_t PWM_R_CH11_DATA;               /*!< PWM11 数据保持寄存器,         Address offset: 0x0B */
} PWM_TypeDef;

#define PWM_BASE            ((uint32_t)0x40005000)
#define PWM                 ((PWM_TypeDef *) PWM_BASE)

#endif
