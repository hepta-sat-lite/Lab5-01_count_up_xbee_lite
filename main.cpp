#include "mbed.h"
#include "HEPTA_COM.h"
HEPTA_COM com(PA_9,PA_10,9600);
RawSerial pc(USBTX,USBRX,9600);
int main()
{
    pc.printf("Xbee Count Up Mode\r\n");
    for(int i=0;i<10;i++){
        com.printf("num=%d\r\n",i);
        wait_ms(1000);
    }
}