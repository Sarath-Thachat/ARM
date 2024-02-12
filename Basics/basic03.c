/*      Select P0.3 & P0.4 as GPIO functionality. Set the direction as o/p. Write logic 1 to the pin and then write 0.     */

#include<LPC21XX.H>
int main()
{
    PINSEL0 = 0; //Selecting GPIO functionality.
    IODIR0 = (1<<3)|(1<<4); //Setting pins P0.3 & P0.4 as output.
    IOSET0 = (1<<3)|(1<<4); //Writing 1 to pins P0.3 & P0.4 (setting the pins) 
    IOCLR0 = (1<<3)|(1<<4); //Writing 0 to pins P0.3 & P0.4 (clearing the pins)
}