#include <stdio.h>

int main(void)
{
	int fahrenheit;
	int celsius;
	
	fahrenheit = 100;
	
	celsius =  5 * ( fahrenheit - 32 ) / 9;
	
	printf("fahrenheit : %d ---> celsius : %d\n", fahrenheit , celsius);
	 return 0;
}

