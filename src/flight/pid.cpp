#include "pid.h"

PID::PID(
    float kp,
    float ki,
    float kd
)
{
    _kp = kp;
    _ki = ki;
    _kd = kd;

    integral = 0;
    previousError = 0;
}

float PID::compute(
    float target,
    float current,
    float dt
)
{
    float error = target - current;

    integral += error * dt;

    float derivative =
        (error - previousError) / dt;

    previousError = error;

    return (
        _kp * error +
        _ki * integral +
        _kd * derivative
    );
}