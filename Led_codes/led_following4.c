/*Connect Eight LEDs to port F bit 0 to bit 7
Connect Eight LEDs to port K bit 0 to bit 7
Blink pair of LEDs on both rows from bit 0 to bit 7.
Ex: bit 0 on both, bit1 on both, etc.*/

#include "harish.h"
int main()
{
  int i;
  ddrf(0xff);
  ddrk(0xff);
  while(1)
  {
    for(i=0;i<8;i++)
    {
      port_f(1<<i);
      port_k(1<<i);
      delay_h(0.5);

    }
  }
}