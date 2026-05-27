#include "lora.h"

#include <SPI.h>
#include <LoRa.h>

void LoRaTelemetry::begin()
{
    LoRa.setPins(10, 9, 2);

    LoRa.begin(915E6);
}

void LoRaTelemetry::send(
    float roll,
    float pitch,
    float yaw,
    float altitude
)
{
    LoRa.beginPacket();

    LoRa.print(roll);
    LoRa.print(",");

    LoRa.print(pitch);
    LoRa.print(",");

    LoRa.print(yaw);
    LoRa.print(",");

    LoRa.print(altitude);

    LoRa.endPacket();
}