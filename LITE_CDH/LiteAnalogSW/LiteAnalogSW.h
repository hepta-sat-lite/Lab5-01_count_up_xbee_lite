#ifndef MBED_LITEANALOGSW_H
#define MBED_LITEANALOGSW_H
#include "mbed.h"



class LiteAnalogSW{
public:
    LiteAnalogSW(PinName analog_sw);
    void turn_on_analogSW();    //turn on  analog switch (turn on Xbee)
    void turn_off_analogSW();   //turn off analog switch (turn on Camera or GPS)
  
private:  
    DigitalOut _analog_sw;
};
 
#endif
