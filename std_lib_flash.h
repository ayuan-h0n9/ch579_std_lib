#ifndef __STD_LIB_FLASH__
#define __STD_LIB_FLASH__

#include "CH57x_common.h"

/******************  Bit definition for FLASH_CFG register  *******************/
#define  FLASH_CFG_FLASH_X          ((uint8_t)0x0F)
#define  FLASH_CFG_RESERVED         ((uint8_t)0x70)
#define  FLASH_CFG_FLASH_BUSY_EN    ((uint8_t)0x80)

/******************  Bit definition for FLASH_DATA register  *******************/
#define  FLASH_DATA_REG             ((uint32_t)0xFFFFFFFF)

/******************  Bit definition for FLASH_ADDR register  *******************/
#define  FLASH_ADDR_REG             ((uint32_t)0xFFFFFFFF)

/******************  Bit definition for FLASH_COMMAND register  *******************/
#define  FLASH_COMMAND_REG          ((uint8_t)0xFF)

/******************  Bit definition for FLASH_PROTECT register  *******************/
#define  FLASH_PROTECT_RESERVED1    ((uint8_t)0x03)
#define  FLASH_PROTECT_DATA_WE      ((uint8_t)0x04)
#define  FLASH_PROTECT_CODE_WE      ((uint8_t)0x08)
#define  FLASH_PROTECT_RESERVED2    ((uint8_t)0x30)
#define  FLASH_PROTECT_WE_MUST_10   ((uint8_t)0xC0)

/******************  Bit definition for FLASH_STATUS register  *******************/
#define  FLASH_STATUS_CMD_TOUT      ((uint16_t)0x0001)
#define  FLASH_STATUS_CMD_ERR       ((uint16_t)0x0002)
#define  FLASH_STATUS_RESERVED1     ((uint16_t)0x003C)
#define  FLASH_STATUS_ADDR_OK       ((uint16_t)0x0040)
#define  FLASH_STATUS_RESERVED2     ((uint16_t)0x0080)
#define  FLASH_STATUS_READ_FREE     ((uint16_t)0x0100)
#define  FLASH_STATUS_RESERVED3     ((uint16_t)0x0600)
#define  FLASH_STATUS_RESERVED4     ((uint16_t)0xF800)

/** 
  * @brief FLASH Config Registers
  */
typedef struct
{
    __IO uint8_t FLASH_CFG;         /*!< FlashROM Êý¾Ý¼Ä´æÆ÷,        Address offset: 0x00 */
} FLASH_CFG_TypeDef;

#define FLASH_CFG_R_BASE    ((uint32_t)0x4000104A)
#define FLASH_CFG           ((FLASH_CFG_TypeDef *) FLASH_CFG_R_BASE)
/** 
  * @brief FLASH Registers
  */
typedef struct
{
  __IO uint32_t FLASH_DATA;         /*!< FlashROM Êý¾Ý¼Ä´æÆ÷,        Address offset: 0x00 */
  __IO uint32_t FLASH_ADDR;         /*!< FlashROM µØÖ·¼Ä´æÆ÷,        Address offset: 0x04 */
  __IO uint8_t FLASH_COMMAND;       /*!< FlashROM ÃüÁî¼Ä´æÆ÷,        Address offset: 0x08 */
  __IO uint8_t FLASH_PROTECT;       /*!< FlashROM ±£»¤¿ØÖÆ¼Ä´æÆ÷,    Address offset: 0x09 */
  __IO uint16_t FLASH_STATUS;       /*!< FlashROM ×´Ì¬¼Ä´æÆ÷,        Address offset: 0x0A */
} FLASH_TypeDef;

#define FLASH_R_BASE        ((uint32_t)0x40001800)
#define FLASH               ((FLASH_TypeDef *) FLASH_R_BASE)

/** 
  * @brief  FLASH Status
  */ 
typedef enum
{
    FLASH_BUSY = 1,
    FLASH_ERROR_WRP,
    FLASH_ERROR_PROGRAM,
    FLASH_COMPLETE,
    FLASH_TIMEOUT
}FLASH_Status;

#endif
