//Glow the LEDs in following order 4,5 delay - 2,3, delay - 6,7, delay - 0,1, delay

#include "harish.h"
int main()
{
  ddrf(0xff);
  int x[4]={0x30,0x0c,0xc0,0x03};
  while(1)
  {
    for(int i=0;i<4;i++)
    {
      port_f(x[i]);
      delay_h(1);
    }
    
  }
}