/*count 0 to 9*/

#include "harish.h"
int main()
{
  ddrf(0xff);

while(1)
{
  for(int i=0;i<=9;i++)
  {
    segment_f(i);
    delay_h(0.5);
  }
}
}