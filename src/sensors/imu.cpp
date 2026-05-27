#include "imu.h"
#include <Wire.h>

void IMU::begin()
{
    Wire.begin();

    mpu.setup(0x68);
}

void IMU::update()
{
    mpu.update();

    ax = mpu.getAccX();
    ay = mpu.getAccY();
    az = mpu.getAccZ();

    gx = mpu.getGyroX();
    gy = mpu.getGyroY();
    gz = mpu.getGyroZ();
}