/*
 * File: common.h
 * Authors: Hocj2me <lctuyenvn@gmail.com>
 * Create: 00:20 08/04/2023
 *
 * Copyright (c)  2023 - BK Galaxy.
 *
 * Modify this file to quickly configure AirSENSE Project,
 */

#ifndef COMMON_H
#define COMMON_H


//========================== DEFINE FOR LOGGING ========================

//Serial for debuging and logging is 9600 bit/s
#define SERIAL_DEBUG_BAUDRATE   (9600)

//Name of the device
#define NAME_DEVICE "NANO-SLAVE-PICKUP-RING"

//ATMEGA328-PU is a low power CMOS 8 bit microcontroller based on the AVR enhanced RISC architecture.
#define ERROR_CODE byte
// define to return None Error 
#define ERROR_NONE (0x00)

//========================== DEFINE FOR STEPPER ========================

// Motor steps per revolution. Most steppers are 200 steps or 1.8 degrees/step
#define STEPPER_MOTOR_NUMBER_STEPS 200
#define STEPPER_MOTOR_SPEED_RPM 2000

// Since microstepping is set externally, make sure this matches the selected mode
// If it doesn't, the motor will move at a different RPM than chosen
// 1=full step, 2=half step etc.
#define STEPPER_MOTOR_MICROSTEPS 1

// All the wires needed for full functionality
#define STEPPER_MOTOR_DIR_PIN 2
#define STEPPER_MOTOR_STEP_PIN 5
#define STEPPER_MOTOR_EN_PIN 8


// All the wires needed for full functionality
#define DC_MOTOR_DIR_PIN 3
#define DC_MOTOR_PWM_PIN 6
enum status_et
{
    DISCONNECTED,
    CONNECTED,
    CONNECTION_LOST,
    SCANNING,
    SENDING_DATA,
    READING_DATA,
    WRITING_DATA
};

enum direction_et
{
    CLOCKWISE = 0,
    COUNTER_CLOCKWISE = 1
};



#endif // CONFIGS_H