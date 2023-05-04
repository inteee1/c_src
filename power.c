#include <stdio.h>

long long power(int base, int exporent)
{
	long long result = 1LL;
	for ( int i = 1; i <= exporent; ++i) {
		result = result * base; //result *= base;
	}
	return result;
}

int main(void)
{
	
	/*int re = power(2,3);
	printf(" 2 power of 3 : %d\n", re);
	*/
	for (int i = 0; i <=32; ++i) {
		long long result = power(2, i);
		printf("2 power of %d : %lld\n", i , result);
		}
	return 0;
}
