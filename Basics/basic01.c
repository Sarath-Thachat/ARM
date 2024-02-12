/*      Select P0.0 as GPIO functionality. Set the direction as o/p. Write logic 1 to the pin and then write 0.     */

#include<LPC21XX.H>
int main()
{
    PINSEL0 = 0X00000000; //Selecting GPIO functionality.
    IODIR0 = 0X00000001; //Setting pin P0.0 as output.
    IOSET0 = 0X00000001; //Writing 1 to pin P0.0 (setting the pin) 
    IOCLR0 = 0X00000001; //Writing 0 to pin P0.0 (clearing the pin)
}