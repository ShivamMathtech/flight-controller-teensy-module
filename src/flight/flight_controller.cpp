#include "flight_controller.h"

void FlightController::begin()
{
}

void FlightController::update(
    IMU& imu,
    GPS& gps,
    Barometer& bmp,
    Magnetometer& mag
)
{
    roll = imu.gx;
    pitch = imu.gy;
    yaw = imu.gz;
}