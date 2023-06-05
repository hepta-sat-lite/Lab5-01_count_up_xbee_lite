#ifndef MBED_HEPTACOM_H
#define MBED_HEPTACOM_H
#include "HeptaXbee.h"

class HEPTA_COM : public HeptaXbee{
public:
    HEPTA_COM(
            PinName tx,
            PinName rx,
            int brate
    );
private:  
};

#endif