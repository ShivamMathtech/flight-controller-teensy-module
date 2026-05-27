#include <Arduino.h>
#include "config.h"

#include "sensors/imu.h"
#include "sensors/gps.h"
#include "sensors/barometer.h"
#include "sensors/magnetometer.h"

#include "flight/flight_controller.h"

#include "telemetry/lora.h"
#include "logging/sd_logger.h"

IMU imu;
GPS gps;
Barometer bmp;
Magnetometer mag;

FlightController fc;

LoRaTelemetry telemetry;
SDLogger logger;

void setup()
{
    Serial.begin(115200);

    pinMode(STATUS_LED, OUTPUT);

    imu.begin();
    gps.begin();
    bmp.begin();
    mag.begin();

    telemetry.begin();
    logger.begin();

    fc.begin();

    digitalWrite(STATUS_LED, HIGH);
}

void loop()
{
    imu.update();
    gps.update();
    bmp.update();
    mag.update();

    fc.update(
        imu,
        gps,
        bmp,
        mag
    );

    telemetry.send(
        fc.roll,
        fc.pitch,
        fc.yaw,
        bmp.altitude
    );

    logger.log(
        fc.roll,
        fc.pitch,
        fc.yaw,
        bmp.altitude
    );

    delay(10);
}