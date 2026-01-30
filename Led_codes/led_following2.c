// Glow the LEDs in following order 7 then 7,6 then 7,6, 5...... then 7,6,5,4,3,2,1,0 with delay.

#include "harish.h"
int main()
{
  ddrf(0xff);
  int i;
  while(1)
  {
    for( i=8;i>=0;i--)
    {
      pin_f(i,high);
      delay_h(1);
    }
    port_f(0x00);
    delay_h(0.5);
  }
}