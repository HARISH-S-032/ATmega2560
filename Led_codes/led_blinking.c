#include "harish.h"
int main() {
	ddrf(0xff);
	while(1)
	{
		port_f(0xff);
		delay_h(1);
		port_f(0x00);
		delay_h(1);
	}
}

