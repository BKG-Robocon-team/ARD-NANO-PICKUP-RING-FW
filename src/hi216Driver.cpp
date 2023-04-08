#include "hi216Driver.h"

static byte _motorSpeed = 0;

ERROR_CODE Hi216_init(uint8_t _speed)
{
    pinMode(DC_MOTOR_DIR_PIN, OUTPUT);
    pinMode(DC_MOTOR_PWM_PIN, OUTPUT);
    _motorSpeed = _speed;
    return ERROR_NONE;
}

ERROR_CODE Hi216_run(uint8_t runState)
{
    digitalWrite(DC_MOTOR_DIR_PIN, LOW);
    analogWrite(DC_MOTOR_PWM_PIN, _motorSpeed);
    return ERROR_NONE;
}
