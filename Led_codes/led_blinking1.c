/*Connect Eight LEDs to port F bit 0 to bit 7
Connect Eight LEDs to port K bit 0 to bit 7
Blink First row and Second row Alternatively on every second*/

#include "harish.h"
int main()
{
  ddrf(0xff);
  ddrk(0xff);
  int i;
  while(1)
  {
    port_f(0xff);
    delay_h(0.5);
    port_f(0x00);
    delay_h(0.5);
    port_k(0xff);
    delay_h(0.5);
    port_k(0x00);
    delay_h(0.5);
  }
}