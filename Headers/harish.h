#include <stdint.h>

#define port_dirf (*(volatile char*) 0x30)
#define port_dirk (*(volatile char*) 0x107)
#define portf_out (*(volatile char*) 0x31)
#define portk_out (*(volatile char*) 0x108)
#define portf_INPUT (*(volatile char*) 0x2F)
#define portk_INPUT (*(volatile char*) 0x106)
#define high 1
#define low 0


/*---------Delay---------*/
void delay_h(float a)
{
  volatile long i;
  for(i=0;i<(a*100000);i++);
}

/**********--PORTF--**********/

/*----------DDRF---------*/
void ddrf(int x)
{
  port_dirf=x;
}

/*---------PORTF OUTPUT--------*/
void port_f(char x)
{
  portf_out=x;
}

/*---------PINF OUTPUT----------*/
void pin_f(int  x,int y)       
{
  if(y==0)
  {
    portf_out=0;
  }
  if(y==1)
  {
    x=x-1;
    portf_out=(1<<x);
  }
}

/*----------PORTF INPUT----------*/
uint8_t portf_in()
{ 
  return (portf_INPUT);
}

/*-----------SEVEN SEGMENT FOR PORTF------------*/
void segment_f(char x)
{
  int z,k;
  int y[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
  portf_out=y[x];
  if(x=='A'||'1')
  z=0x77;
  if(x=='B'||'2')
  z=0x7f;
  if(x=='C'||'3')
  z=0x39;
  if(x=='D')
  z=0x5e;
  if(x=='E')
  z=0x79;
  if(x=='F')
  z=0x71;
  if(x=='a')
  z=0x5f;
  if(x=='b')
  z=0x7c;
  if(x=='c')
  z=0x58;
  if(x=='d')
  z=0x5e;
  if(x=='e')
  z=0x79;
  if(x=='f')
  z=0x71;
  portf_out=z;
  
}

/*___________________________________________________________________________________________*/

/**********--PORTK--**********/

/*----------DDRK---------*/
void ddrk(int x)
{
  port_dirk=x;
}

/*---------PORTK OUTPUT--------*/
void port_k(char out_data)
{
  portk_out=out_data;
}

/*---------PINK OUTPUT----------*/

void pin_k(int  x,int y)
{
  if(y==0)
  {
    portk_out=0;
  }
  if(y==1)
  {
  x=x-1;
  portk_out|=(1<<x);
  }
}

/*----------PORTK INPUT----------*/
uint8_t portk_in()
{ 
  return (portk_INPUT);
}

/*-----------SEVEN SEGMENT FOR PORTk------------*/
void segment_k(int x)       
{
  int y[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
  portk_out=y[x];
}

/*___________________________________________________________________________________________*/
