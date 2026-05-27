#ifndef BAROMETER_H
#define BAROMETER_H

#include <Adafruit_BMP280.h>

class Barometer
{
public:
    void begin();
    void update();

    float altitude;
    float pressure;
    float temperature;

private:
    Adafruit_BMP280 bmp;
};

#endif