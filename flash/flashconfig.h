#ifndef FLASHCONFIG_H_
#define FLASHCONFIG_H_

/**
 * @brief Page size of flash in kilobytes
 */
#if !defined(FLASH_PAGE_SIZE) || defined(__DOXYGEN__)
#define FLASH_PAGE_SIZE         1024
#endif

/**
 * @brief Number of flash pages
 */
#if !defined(FLASH_PAGE_NUMBER) || defined(__DOXYGEN__)
#define FLASH_PAGE_NUMBER       128
#endif

/**
 * @brief Start address of user application
 */
#if !defined(FLASH_USER_BASE) || defined(__DOXYGEN__)
#define FLASH_USER_BASE         ((uint32_t)0x08010000)
#endif



#endif /* FLASHCONFIG_H_ */
