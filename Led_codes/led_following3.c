/**/


#include "harish.h"
int main()
{
  int i;
  ddrf(0xff);
  ddrk(0xff);
  while(1)
  {
    for(i=0;i<8;i=i+2)
    {
      port_f(3<<i);
      delay_h(0.5);
    }
    port_f(0x00);
    // delay_h(1);
    for(i=0;i<8;i=i+2)
    {
      port_k(3<<i);
      delay_h(0.5);
    }
    port_k(0x00);

    for(i=0;i<8;i=i+2)
    {
      port_k(0xc0>>i);
      delay_h(0.5);
    }
    port_k(0x00);

     for(i=0;i<8;i=i+2)
    {
      port_f(0xc0>>i);
      delay_h(0.5);
    }
    port_f(0x00);
    //delay_h(0x00);
  }
}