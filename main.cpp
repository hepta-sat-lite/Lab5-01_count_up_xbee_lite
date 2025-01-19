#include "mbed.h"
#include "LITE_CDH.h"
#include "LITE_EPS.h"
#include "LITE_COM.h"
LITE_CDH cdh(PB_5, PB_4, PB_3, PA_8, "sd", PA_3);
LITE_EPS eps(PA_0,PA_4);
LITE_COM com(PA_9,PA_10,9600);
RawSerial pc(USBTX,USBRX,9600);
int main()
{
    eps.turn_on_regulator();//turn on 3.3V conveter
    cdh.turn_on_analogSW();//turn on transceiver
    pc.printf("Xbee Count Up Mode\r\n");
    for(int i=0;i<10;i++){
        com.printf("num=%d\r\n",i);
        wait_ms(1000);
    }
}