#include <stdio.h>

int main(void)
{
	int a, b;
	a = 100;
	b = 200;
	
	printf("a : %d\tb: %d\n", a, b);
	
	int temp = a;
	a = b;
	b = temp;
	
	printf("a : %d\tb: %d\n", a, b);
	return 0;
}
