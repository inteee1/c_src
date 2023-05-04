#include <stdio.h>
int main(void)
{
	int B; // Base
	int H;  // Height
	printf("input base: " );
	scanf("%d", &B);
	printf("input height: ");
	scanf("%d", &H);
		

	double A; //Area
	A = B * H / 2.0;
	
	printf(" area = %.1f\n", A);



	return 0;
	
}
