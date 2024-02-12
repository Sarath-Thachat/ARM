/*      Write an ECP to generate a delay of 1s using timer0 in LPC2129.     */

#include<LPC21XX.H>

int main()
{
    T0PR = 15000000-1; // Assign Pclk value to PR to generate felay in seconds.
    T0TCR = 0x01; // Enable TCR - Start timer0.
    while(T0TC<1);
    T0TCR = 0X03; //Reset and enable pin are made high to reset timer0.
    T0TCR = 0x00; //Stop timer0
}