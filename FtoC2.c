#include <stdio.h>
int main(void)
{	
	int fahr;
	double cel; 
	
	fahr = 100;
	cel = 5.0 / 9.0 * ( fahr - 32);
	
	printf(" fahr : %d ---> cel : %.2f\n", fahr , cel );

	return 0;
}
