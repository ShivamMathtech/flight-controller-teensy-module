#ifndef IMU_H
#define IMU_H

#include <MPU9250.h>

class IMU
{
public:
    void begin();
    void update();

    float ax, ay, az;
    float gx, gy, gz;

private:
    MPU9250 mpu;
};

#endif