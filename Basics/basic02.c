/*      Select P0.7 as GPIO functionality. Set the direction as o/p. Write logic 1 to the pin and then write 0.     */

#include<LPC21XX.H>
int main()
{
    PINSEL0 = 0X00000000; //Selecting GPIO functionality.
    IODIR0 = 0X00000080; //Setting pin P0.7 as output. - pin P0.7 can also be selected by 1<<7
    IOSET0 = 0X00000080; //Writing 1 to pin P0.7 (setting the pin) 
    IOCLR0 = 0X00000080; //Writing 0 to pin P0.7 (clearing the pin) 
}