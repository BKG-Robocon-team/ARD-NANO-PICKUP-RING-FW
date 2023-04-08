/**
 * @file stepperDriver.h
 * @author hocj2me (lctuyenvn@gmail.com)
 * @brief Le Chi Tuyen
 * @version 0.1
 * @date 09/04/2023
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef STEPPERDRIVER_H
#define STEPPERDRIVER_H

#include <Arduino.h>
#include "common.h"

/**
 * @brief	Hi216 Driver init
 *
 * @param[in]	Hi216_init
 * @param[in]	_speed: motor speed 
 * @return  ERROR_CODE
 */
ERROR_CODE Hi216_init(uint8_t _speed);

/**
 * @brief	Hi216 run
 *
 * @param[in]	runState:  true is turn on, false is turn back
 * @return  ERROR_CODE
 */
ERROR_CODE Hi216_run(uint8_t runState);

#endif