#include <stdio.h>
int main(void)
{
	int C;
	printf("input temperature: ");
	scanf("%d", &C);
	
	double F = C  * 9.0 / 5.0 + 32 ; 

	printf("celsiuss : %d -----> fahrenheit : %.1f\n", C , F);
	return 0;
}
