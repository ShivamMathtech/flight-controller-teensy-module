#ifndef FLIGHT_CONTROLLER_H
#define FLIGHT_CONTROLLER_H

#include "../sensors/imu.h"
#include "../sensors/gps.h"
#include "../sensors/barometer.h"
#include "../sensors/magnetometer.h"

class FlightController
{
public:
    void begin();

    void update(
        IMU& imu,
        GPS& gps,
        Barometer& bmp,
        Magnetometer& mag
    );

    float roll;
    float pitch;
    float yaw;
};

#endif