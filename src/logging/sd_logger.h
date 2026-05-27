#ifndef SD_LOGGER_H
#define SD_LOGGER_H

class SDLogger
{
public:
    void begin();

    void log(
        float roll,
        float pitch,
        float yaw,
        float altitude
    );
};

#endif