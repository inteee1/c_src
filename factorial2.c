#include <stdio.h>

long long factorial(int n)
{
	if ( n == 1) {
		return 1LL;
		}else 
		return (long long)n * factorial(n-1); 
}



int main(void)
{
	
	
	for(int i = 1; i <= 100; ++i) {
		long long result = factorial(i);
		printf("%d! : %lld\n", i,  result);
		}
	return 0;
}
