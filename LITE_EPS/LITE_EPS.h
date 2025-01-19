#ifndef MBED_LITEEPS_H
#define MBED_LITEEPS_H
#include "HeptaBattery.h"
 
class LITE_EPS : public HeptaBattery{
public:
    //HeptaBattery battery;
    LITE_EPS(
            PinName bat,
            PinName bat_ct
    );
  
private:  
    //HeptaBattery _battery;
};
 
#endif