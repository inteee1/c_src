#include <stdio.h>

int main(void)
{	
	for (int i = 1; i <= 5 ; ++i) {
		for (int j = 1; i+j<=5 ; ++j) {
		printf(" "); 
			}
		for(int k = 1; k <= 2*i-1 ; k = ++k) {
		printf("*");
		}
		
			
	 printf("\n");
	
 }
	return 0;
}
