#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int balls[45];
	srand(time(NULL));
	
	for (int i = 0; i < 45; ) {
		balls[i] = rand() % 45 +1;
		
		int j;
		for (j = 0; j < i ; ++j) {
			if(balls[i] == balls[j]) {
				break;
			}
		}
		if (j==i) {
			++i;
		} 
	}	
		
	// ball[] <-- ball
	
		int N = 10000000;
		for (int m = 0; m < N; ++m) {
			int a = rand() % 45 ;
			int b = rand() % 45 ;
			int temp = balls[a];
			balls[a] = balls[b];
			balls[b] = temp;
				
			}
	//surffle. 1000000
	for (int k  = 0; k < 6; ++k) {
	printf("[%d] ", balls[k]); }
	printf("\n");
	//print index 0 ~ 6
	
	
	return 0;
}
