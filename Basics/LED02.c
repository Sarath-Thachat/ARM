/*      Write an ECP to blink two active-low LEDs infinitely with 500ms delay using LPC2129.        */

#include<LPC21XX.H>

#define LED1 1<<17
#define LED2 1<<18

void delay_millis(int d)
{
    unsigned int i;
    for(;d>0;d++)
        for(i=12000;i>0;i--);
}
int main()
{
    PINSEL1 = 0; 
    IODIR0 = LED1|LED2; //P0.17 & P0.18 selected as output pin.
    while(1)
    {
        IOCLR0 = LED1|LED2; //P0.17 & P0.18 turned ON.
        delay_millis(500);
        IOSET0 = LED1|LED2; //P0.17 & P0.18 turned OFF.
        delay_millis(500);
    }
}