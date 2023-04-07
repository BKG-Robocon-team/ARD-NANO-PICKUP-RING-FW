#include "stepperDriver.h"

ERROR_CODE Stepper_init(float rpm = MOTOR_SPEED_RPM, short microstep = MOTOR_MICROSTEPS)
{
    pinMode(MOTOR_EN_PIN, OUTPUT);
    digitalWrite(MOTOR_EN_PIN, LOW);
    stepper.begin(rpm, microstep);

    return ERROR_NONE;
}


ERROR_CODE Stepper_run(uint8_t runState = true)
{
    stepper.move(5000);
    return ERROR_NONE;
}
