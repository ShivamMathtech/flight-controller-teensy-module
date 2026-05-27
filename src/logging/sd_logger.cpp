#include "sd_logger.h"

#include <SD.h>

void SDLogger::begin()
{
    SD.begin(BUILTIN_SDCARD);
}

void SDLogger::log(
    float roll,
    float pitch,
    float yaw,
    float altitude
)
{
    File file =
        SD.open(
            "flight.csv",
            FILE_WRITE
        );

    if(file)
    {
        file.print(roll);
        file.print(",");

        file.print(pitch);
        file.print(",");

        file.print(yaw);
        file.print(",");

        file.println(altitude);

        file.close();
    }
}