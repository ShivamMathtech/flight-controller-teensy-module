#ifndef LORA_H
#define LORA_H

class LoRaTelemetry
{
public:
    void begin();

    void send(
        float roll,
        float pitch,
        float yaw,
        float altitude
    );
};

#endif