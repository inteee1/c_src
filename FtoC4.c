#include <stdio.h>
int main(void)
{
	int F;
	printf("input temperature : ");
	scanf("%d", &F);

	int C1000;
	C1000 = 1000 * 5 * ( F - 32 ) / 9;
	int Cl;
	Cl = C1000 / 1000;
	int Cr;
	//Cr = ((C1000 - Cl * 1000) + 5) / 10 ;
	Cr = (C1000 % 1000 + 5) / 10;
	
	printf(" fahr = %d ----> cel = %d.%d\n", F , Cl , Cr); 
	return 0;
}
