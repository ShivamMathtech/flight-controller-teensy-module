#include "gps.h"
#include <Arduino.h>

void GPS::begin()
{
    Serial1.begin(9600);
}

void GPS::update()
{
    while (Serial1.available())
    {
        gps.encode(Serial1.read());
    }

    latitude = gps.location.lat();
    longitude = gps.location.lng();
    altitude = gps.altitude.meters();
}