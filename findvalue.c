#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 20, 90, 80, 40, 60, 70}; //initialization list
	
	int value;
	printf("input value : ");
	scanf("%d", &value);
	
	int i;
	for (i = 0; i < 10; ++i) {
		if (nums[i] == value) {
			break;
			}
	}
	if (i <10) {
		printf("%d is found. index : %d\n", value, i);
	} else {
		printf("%d is not found\n", value);
	
	}  
	
	
	/*for (int i = 0; i < 10; ++i)
		if (num[i]<50){
		sum +=num[i];
		}*/
	return 0;
}
