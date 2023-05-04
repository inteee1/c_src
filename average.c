#include <stdio.h>

int main(void)
{	
	int math, korean, english, sum;
	double average;
	
	printf("input math score: ");
	scanf("%d", &math );
	
	printf("input korean score: ");
	scanf("%d", &korean );
	
	printf("input english score: ");
	scanf("%d", &english );
	
	sum = math + korean + english;
	average = (double)( math + korean + english ) / 3.0;
	
	printf("sum : %d\t average : %.2f\n", sum, average);
	
	return 0;
}
