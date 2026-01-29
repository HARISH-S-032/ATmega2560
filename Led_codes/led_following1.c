/*Glow the LEDs in following order 0 then 0,1 then 0,1, 2 .... with delay.then 0,1,2,3,4,5,6,7*/


#include "harish.h"
int main()
{
  ddrf(0xff);
  int i;
  while(1)
  {
    for( i=1;i<=8;i++)
    {
      pin_f(i,high);
      delay_h(1);
    }
    port_f(0x00);
    delay_h(0.5);
  }
}