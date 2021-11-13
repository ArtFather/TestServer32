#ifndef _PASS_H   
#define _PASS_H 

#include <Arduino.h>

struct Config
{
    const char* ssdpName = "ESPOST";
    const char* ssid = "BELL664";
    const char* password = "D1C23A3C4A7C";
    const char* ssidAP = "TEST";
    const char* passwordAP = "2048230907";
};
Config config;

#endif