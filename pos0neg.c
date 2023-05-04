#include <stdio.h>
int main(void)
{
	int num;
	printf("input number : ");
	scanf("%d", &num);
	
	
	if (num > 0) {
		printf("%d is a positive number\n", num);
	//positive
	} else if (num == 0) {
		printf("%d is a zero number\n", num);
	// 0 
	} else {
	printf("%d is a negative number\n", num);
	}
	//negative
		
//	printf("%d is a %s number\n", num, (num > 0) ? "positive" : (num == 0) ? "zero" : "negative");
	 
	return 0;
}
