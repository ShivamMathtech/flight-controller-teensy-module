#include "barometer.h"

void Barometer::begin()
{
    bmp.begin(0x76);
}

void Barometer::update()
{
    temperature = bmp.readTemperature();

    pressure = bmp.readPressure();

    altitude =
        bmp.readAltitude(1013.25);
}