#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("rotto number maker \n");
	
	int num[7];
	int i, j;
	srand(time(NULL));
		for(i = 0; i < 7; ++i) {
			num[i] = rand() % 45+1 ;
			for (j = 0 ; j < i; ++j) {
				if (num[i] == num[j]) {
			--i;
				}
			}
		} 
		for (i = 0; i < 7 - 1; ++i) {
			for (j = i+1; j < 7; ++j) {
				if (num[i] > num[j]) {
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
					}
				}
			}
	printf("rotto number : ");
	for (int k  = 0; k < 7; ++k) {
	printf("[%d] ", num[k]); }
	printf("\n");
	
	return 0;

}

