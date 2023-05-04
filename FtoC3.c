#include <stdio.h>
int main(void)
{
	int fahr;
	int left; 		// cellleft
	int right; 	//cellright
	
	
	fahr = 100;
	left = 5 * ( fahr - 32 ) / 9;
	right = ((5000 * ( fahr - 32 ) / 9 - left * 1000) + 5) / 10 * 10;
	
	
	printf(" fahr = %d -----> cel = %d.%d\n", fahr, left, right);
		return 0;
}
