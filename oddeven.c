#include <stdio.h>
int main(void)
{
	int num;
	printf("input number : ");
	scanf("%d", &num);
	

	int isOdd;
	isOdd = num % 2 == 1;
	
	printf("num : %d -----> isOdd : %d\n", num, isOdd);
	
	return 0;
}
