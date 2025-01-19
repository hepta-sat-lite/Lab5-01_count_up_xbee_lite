#include "LITE_CDH.h"
// LITE_CDH::LITE_CDH(PinName mosi, PinName miso, PinName sclk, PinName cs, const char* name, PinName analog_sw):SDFileSystem( mosi, miso, sclk, cs, name), LiteAnalogSW(analog_sw){
// }

LITE_CDH::LITE_CDH(PinName mosi, PinName miso, PinName sclk, PinName cs, const char* name, PinName analog_sw):SDFileSystem( mosi, miso, sclk, cs, name), _analog_sw(analog_sw){
    _analog_sw = 0;
}

void LITE_CDH::turn_on_analogSW()
{
    _analog_sw = 1;
}

void LITE_CDH::turn_off_analogSW()
{
    _analog_sw = 0;
}