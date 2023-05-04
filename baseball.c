#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int question[3];
	int i, j;
	srand(time(NULL));
		for(i = 0; i < 3; ++i) {
			question[i] = rand() % 9+1 ;
			for (j = 0 ; j < i; ++j) {
				if (question[i] == question[j]) {
			--i;
				}
			}
		} 
	/*	question[0] = rand() % 9 +1;
		do {
			question[1] = rand() % 9 +1;
			} while (question[0] == question[1]);
		do {
			question[2] = rand() % 9 +1;
			} while (question[0] == question[1] || question[1] == question[2]);
			
				
			printf("%d %d %d", question[0], question[1], question[2]);
			
	
			printf("\n"); */
	// question[i] <---- computer, random number [1,9], unique
	
 int strike, ball;
 int count;
	ball = 0;
	count = 0;
	while (strike != 3) {
		strike = 0;
		ball = 0;
		int answer[3];
		printf("input 3 number(0~9): ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		 for (i = 0; i < 3 ; ++i) {
		 	for (j = 0 ; j < 3; ++j) {
		 		if (question[i] == answer[j]) { 
		 			if (i == j) {
		 		++strike; 
		 		} else {
		 		++ball; 
		 		}
		 	}
		 }
		}
		 	printf("strike : %d\t ball : %d\n", strike, ball); 
		//scanf("%d %d %d", ...);
		
		//cont #strike #ball, compare qusetion array &answer array
		
		// print #strike #ball
		 ++count;
	
	}
	
	printf("victory your count : %d\n", count);
	//end game 
	// print count 
	return 0;

}

