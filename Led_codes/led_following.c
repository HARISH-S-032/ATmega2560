//Glow the LEDs in following order 0,4 delay - 1,5 delay - 2,6 delay - 3,7 delay

#include "harish.h"
int main()
{
  ddrf(0xff);
  int x;
  while(1)
  {
    for(int i=0;i<4;i++)
    {
      port_f(0x11<<i);
      delay_h(1);
    }
    
  }
}