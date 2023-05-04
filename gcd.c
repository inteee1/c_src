#include <stdio.h>
int getGCD(int a, int b)
{
	if (b > a) {
		int tmp = a;
		a = b;
		b = tmp;
		}
	int remain;
	while (b != 0)
	{
	remain = a % b;
	a = b;
	b = remain;
	}
		
	return a;
}

int main(void)
{
	int a, b;
	printf("input 2 number: ");
	scanf("%d %d", &a, &b);
	int result = getGCD(a, b);
	printf("GCD(%d, %d) = %d\n", a, b, re);
	
	return 0;
}
