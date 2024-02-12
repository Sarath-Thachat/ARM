/*      Write an ECP to blink an LED(Active-High LED) with 500ms delay.     */

#include<LPC21XX.H>

void delay_millis(int d)
{
    unsigned int i;
    for(;d>0;d++)
        for(i=12000;i>0;i--);
}
int main()
{
    IODIR0 = 1<<17; //P0.17 selected as output pin
    while(1)
    {
        IOSET0 = 1<<17; //Set LED pin - Turn LED ON
        delay_millis(500);
        IOCLR0 = 1<<17; //Clear LED pin - Turn LED OFF
        delay_millis(500);
    }
}