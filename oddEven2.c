#include <stdio.h>
int main(void)
{
	int num;
	printf("input number : ");
	scanf("%d", &num);
	
	if (num % 2 /*== 1*/) {
	printf("%d is odd number\n", num); 
	} else {
	printf("%d is even number\n", num);
	}
	return 0;
}
