/**
 * @file stepperDriver.h
 * @author hocj2me (lctuyenvn@gmail.com)
 * @brief Le Chi Tuyen
 * @version 0.1
 * @date 08/04/2023
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef STEPPERDRIVER_H
#define STEPPERDRIVER_H

#include <Arduino.h>
#include <BasicStepperDriver.h>
#include "common.h"

// 2-wire basic config, microstepping is hardwired on the driver
static BasicStepperDriver stepper(MOTOR_NUMBER_STEPS, MOTOR_DIR_PIN, MOTOR_STEP_PIN);

/**
 * @brief	Stepper Driver init
 *
 * @param[in]	Stepper_init
 * @param[in]	rpm: motor rmp 
 * @param[in]	microstep: motor microstep
 * @return  ERROR_CODE
 */
ERROR_CODE Stepper_init(float rpm = MOTOR_SPEED_RPM, short microstep = MOTOR_MICROSTEPS);

/**
 * @brief	Stepper run
 *
 * @param[in]	runState:  true is turn on, false is turn back
 * @return  ERROR_CODE
 */
ERROR_CODE Stepper_run(uint8_t runState = true);

#endif
