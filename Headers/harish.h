// void in_portf();
// void output();
// void output1();
// void delay_h();

#define port_dir (*(volatile char*) 0x30)
#define port_dirk (*(volatile char*) 0x107)
#define port_data (*(volatile char*) 0x31)
#define port_data1 (*(volatile char*) 0x108)
#define port_out (*(volatile char*) 0x31)
#define port_out1 (*(volatile char*) 0x108)
#define portf (*(volatile char*) 0x31)
#define high 1
#define low 0
void ddrf(int x)
{
	// char*port_dir;
	// port_dir=0x30;
	port_dir=x;
	// char*port_dirk;
	// port_dirk=0x107;
	//port_dirk=0xff;
}
void ddrk(int x)
{
port_dirk=x;}

void output(char out_data)
{
	// volatile char*port_data;
	// port_data=0x31;
	port_data=out_data;
	// volatile char*port_data;
	// port_data=0x108;
	// *port_data=out_data_2;

}
// void output1(char out_data_2)
// {
//   // volatile char*port_data;
//   // port_data=0x108;
//   port_data1=out_data_2;

// }

void delay_h(int a)
{
	volatile long i;
	for(i=0;i<(a*10000);i++);
}

void port_f(char x)
{
	portf=x;
}
void pin_k(int  x,int y)
{
	if(y==0)
	{
		port_data1=0;
	}
	if(y==1)
	{
		x=x-1;
		port_data1|=(1<<x);
	}

}
void pin_f(int  x,int y)
{

	if(y==0)
	{
		port_data=0;
	}
	if(y==1)
	{
		x=x-1;
		port_data|=(1<<x);
	}
	

}
void segment_f(int x)      //seven segment for port_f
{
	int y[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	port_out=y[x];
	
}
void segment_k(int x)       //seven segment for port_k
{
	int y[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	port_out1=y[x];
	
}