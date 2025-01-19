#include "LiteAnalogSW.h"
#include "mbed.h"

LiteAnalogSW::LiteAnalogSW(PinName analog_sw) : _analog_sw(analog_sw)
{
    _analog_sw = 0; // 
}

void LiteAnalogSW::turn_on_analogSW()
{
    _analog_sw = 1;
}

void LiteAnalogSW::turn_off_analogSW()
{
    _analog_sw = 0;
}