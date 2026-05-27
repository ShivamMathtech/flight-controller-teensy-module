#ifndef GPS_H
#define GPS_H

#include <TinyGPS++.h>

class GPS
{
public:
    void begin();
    void update();

    double latitude;
    double longitude;
    double altitude;

private:
    TinyGPSPlus gps;
};

#endif