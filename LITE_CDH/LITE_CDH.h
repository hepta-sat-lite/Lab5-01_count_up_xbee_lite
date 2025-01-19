#ifndef MBED_LITECDH_H
#define MBED_LITECDH_H
#include "SDFileSystem.h"
// #include "LiteAnalogSW.h"
#include "mbed.h"

// class LITE_CDH : public SDFileSystem, public LiteAnalogSW{
// public:
    
//     LITE_CDH(PinName mosi, PinName miso, PinName sclk, PinName cs, const char* name, PinName analog_sw);
  
// private:  
// };

// need to fix
class LITE_CDH : public SDFileSystem{
public:
    DigitalOut _analog_sw;
    LITE_CDH(PinName mosi, PinName miso, PinName sclk, PinName cs, const char* name, PinName analog_sw);
    void turn_on_analogSW();    //turn on  analog switch (turn on Xbee)
    void turn_off_analogSW();   //turn off analog switch (turn on Camera or GPS)
private:  
};

#endif