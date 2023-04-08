#include "stepperDriver.h"

ERROR_CODE Stepper_init(float rpm = STEPPER_MOTOR_SPEED_RPM, short microstep = STEPPER_MOTOR_MICROSTEPS)
{
    pinMode(STEPPER_MOTOR_EN_PIN, OUTPUT);
    digitalWrite(STEPPER_MOTOR_EN_PIN, LOW);
    stepper.begin(rpm, microstep);

    return ERROR_NONE;
}


ERROR_CODE Stepper_run(uint8_t runState = CLOCKWISE)
{
    stepper.move(5000);
    return ERROR_NONE;
}
