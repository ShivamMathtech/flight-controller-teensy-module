#ifndef MAGNETOMETER_H
#define MAGNETOMETER_H

class Magnetometer
{
public:
    void begin();
    void update();

    float mx, my, mz;
};

#endif